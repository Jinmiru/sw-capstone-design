// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/ModelingObjectsCreationAPI.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelingObjectsCreationAPI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNaniteSettings();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingObjectsCreationAPI();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingObjectsCreationAPI_NoRegister();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint();
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCreateActorParams();
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCreateActorResult();
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCreateMaterialObjectParams();
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCreateMaterialObjectResult();
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCreateMeshObjectParams();
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCreateMeshObjectResult();
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCreateTextureObjectParams();
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCreateTextureObjectResult();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Enum ECreateModelingObjectResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECreateModelingObjectResult;
static UEnum* ECreateModelingObjectResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECreateModelingObjectResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECreateModelingObjectResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("ECreateModelingObjectResult"));
	}
	return Z_Registration_Info_UEnum_ECreateModelingObjectResult.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<ECreateModelingObjectResult>()
{
	return ECreateModelingObjectResult_StaticEnum();
}
struct Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "ECreateModelingObjectResult::Cancelled" },
		{ "Comment", "/**\n * Result code returned by UModelingObjectsCreationAPI functions\n */" },
		{ "Failed_ActorCreationFailed.Name", "ECreateModelingObjectResult::Failed_ActorCreationFailed" },
		{ "Failed_AssetCreationFailed.Name", "ECreateModelingObjectResult::Failed_AssetCreationFailed" },
		{ "Failed_InvalidMaterial.Name", "ECreateModelingObjectResult::Failed_InvalidMaterial" },
		{ "Failed_InvalidMesh.Name", "ECreateModelingObjectResult::Failed_InvalidMesh" },
		{ "Failed_InvalidTexture.Name", "ECreateModelingObjectResult::Failed_InvalidTexture" },
		{ "Failed_InvalidWorld.Name", "ECreateModelingObjectResult::Failed_InvalidWorld" },
		{ "Failed_NoAPIFound.Name", "ECreateModelingObjectResult::Failed_NoAPIFound" },
		{ "Failed_Unknown.Name", "ECreateModelingObjectResult::Failed_Unknown" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "Ok.Name", "ECreateModelingObjectResult::Ok" },
		{ "ToolTip", "Result code returned by UModelingObjectsCreationAPI functions" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECreateModelingObjectResult::Ok", (int64)ECreateModelingObjectResult::Ok },
		{ "ECreateModelingObjectResult::Cancelled", (int64)ECreateModelingObjectResult::Cancelled },
		{ "ECreateModelingObjectResult::Failed_Unknown", (int64)ECreateModelingObjectResult::Failed_Unknown },
		{ "ECreateModelingObjectResult::Failed_NoAPIFound", (int64)ECreateModelingObjectResult::Failed_NoAPIFound },
		{ "ECreateModelingObjectResult::Failed_InvalidWorld", (int64)ECreateModelingObjectResult::Failed_InvalidWorld },
		{ "ECreateModelingObjectResult::Failed_InvalidMesh", (int64)ECreateModelingObjectResult::Failed_InvalidMesh },
		{ "ECreateModelingObjectResult::Failed_InvalidTexture", (int64)ECreateModelingObjectResult::Failed_InvalidTexture },
		{ "ECreateModelingObjectResult::Failed_AssetCreationFailed", (int64)ECreateModelingObjectResult::Failed_AssetCreationFailed },
		{ "ECreateModelingObjectResult::Failed_ActorCreationFailed", (int64)ECreateModelingObjectResult::Failed_ActorCreationFailed },
		{ "ECreateModelingObjectResult::Failed_InvalidMaterial", (int64)ECreateModelingObjectResult::Failed_InvalidMaterial },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	"ECreateModelingObjectResult",
	"ECreateModelingObjectResult",
	Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult()
{
	if (!Z_Registration_Info_UEnum_ECreateModelingObjectResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECreateModelingObjectResult.InnerSingleton, Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECreateModelingObjectResult.InnerSingleton;
}
// End Enum ECreateModelingObjectResult

// Begin Enum ECreateMeshObjectSourceMeshType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType;
static UEnum* ECreateMeshObjectSourceMeshType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("ECreateMeshObjectSourceMeshType"));
	}
	return Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<ECreateMeshObjectSourceMeshType>()
{
	return ECreateMeshObjectSourceMeshType_StaticEnum();
}
struct Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Types of possible source meshes stored in FCreateMeshObjectParams\n */" },
		{ "DynamicMesh.Name", "ECreateMeshObjectSourceMeshType::DynamicMesh" },
		{ "MeshDescription.Name", "ECreateMeshObjectSourceMeshType::MeshDescription" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Types of possible source meshes stored in FCreateMeshObjectParams" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECreateMeshObjectSourceMeshType::MeshDescription", (int64)ECreateMeshObjectSourceMeshType::MeshDescription },
		{ "ECreateMeshObjectSourceMeshType::DynamicMesh", (int64)ECreateMeshObjectSourceMeshType::DynamicMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	"ECreateMeshObjectSourceMeshType",
	"ECreateMeshObjectSourceMeshType",
	Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType()
{
	if (!Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType.InnerSingleton, Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType.InnerSingleton;
}
// End Enum ECreateMeshObjectSourceMeshType

// Begin Enum ECreateObjectTypeHint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECreateObjectTypeHint;
static UEnum* ECreateObjectTypeHint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECreateObjectTypeHint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECreateObjectTypeHint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("ECreateObjectTypeHint"));
	}
	return Z_Registration_Info_UEnum_ECreateObjectTypeHint.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<ECreateObjectTypeHint>()
{
	return ECreateObjectTypeHint_StaticEnum();
}
struct Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Hint for the type of mesh object a UModelingObjectsCreationAPI might create based\n * on FCreateMeshObjectParams data. This can be used by clients to try to specify\n * the type of object to emit, however there is no guarantee that an API implementation\n * supports creating all types.\n */" },
		{ "DynamicMeshActor.Name", "ECreateObjectTypeHint::DynamicMeshActor" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "StaticMesh.Name", "ECreateObjectTypeHint::StaticMesh" },
		{ "ToolTip", "Hint for the type of mesh object a UModelingObjectsCreationAPI might create based\non FCreateMeshObjectParams data. This can be used by clients to try to specify\nthe type of object to emit, however there is no guarantee that an API implementation\nsupports creating all types." },
		{ "Undefined.Name", "ECreateObjectTypeHint::Undefined" },
		{ "Volume.Name", "ECreateObjectTypeHint::Volume" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECreateObjectTypeHint::Undefined", (int64)ECreateObjectTypeHint::Undefined },
		{ "ECreateObjectTypeHint::StaticMesh", (int64)ECreateObjectTypeHint::StaticMesh },
		{ "ECreateObjectTypeHint::Volume", (int64)ECreateObjectTypeHint::Volume },
		{ "ECreateObjectTypeHint::DynamicMeshActor", (int64)ECreateObjectTypeHint::DynamicMeshActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	"ECreateObjectTypeHint",
	"ECreateObjectTypeHint",
	Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint()
{
	if (!Z_Registration_Info_UEnum_ECreateObjectTypeHint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECreateObjectTypeHint.InnerSingleton, Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECreateObjectTypeHint.InnerSingleton;
}
// End Enum ECreateObjectTypeHint

// Begin ScriptStruct FCreateMeshObjectParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateMeshObjectParams;
class UScriptStruct* FCreateMeshObjectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateMeshObjectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateMeshObjectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateMeshObjectParams, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("CreateMeshObjectParams"));
	}
	return Z_Registration_Info_UScriptStruct_CreateMeshObjectParams.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FCreateMeshObjectParams>()
{
	return FCreateMeshObjectParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCreateMeshObjectParams is a collection of input data intended to be passed to\n * UModelingObjectsCreationAPI::CreateMeshObject(). Not all data necessarily needs\n * to be specified, this will depend on the particular implementation. The comments\n * below are representative of how this data structure is used in the Tools and\n * API implementation(s) provided with Unreal Engine, but end-user implementors\n * could abuse these fields as necessary.\n * \n * The definition of a \"mesh object\" is implementation-specific.\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "FCreateMeshObjectParams is a collection of input data intended to be passed to\nUModelingObjectsCreationAPI::CreateMeshObject(). Not all data necessarily needs\nto be specified, this will depend on the particular implementation. The comments\nbelow are representative of how this data structure is used in the Tools and\nAPI implementation(s) provided with Unreal Engine, but end-user implementors\ncould abuse these fields as necessary.\n\nThe definition of a \"mesh object\" is implementation-specific." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** A Source Component the new mesh is based on, if such a Component exists */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A Source Component the new mesh is based on, if such a Component exists" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeHint_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** A suggested type for the newly-created Mesh (possibly ignored) */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A suggested type for the newly-created Mesh (possibly ignored)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeHintClass_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** A suggested UClass type for the newly-created Object (possibly ignored) */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A suggested UClass type for the newly-created Object (possibly ignored)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeHintExtended_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** An arbitrary integer that can be used to pass data to an API implementation */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "An arbitrary integer that can be used to pass data to an API implementation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** The World/Level the new mesh object should be created in (if known) */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The World/Level the new mesh object should be created in (if known)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** The 3D local-to-world transform for the new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The 3D local-to-world transform for the new mesh object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** The base name of the new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The base name of the new mesh object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Materials for the new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Materials for the new mesh object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetMaterials_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Optional Materials for a newly-created Mesh Asset, if this is applicable for the created mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Optional Materials for a newly-created Mesh Asset, if this is applicable for the created mesh object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify whether the new mesh object should have collision support/data */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify whether the new mesh object should have collision support/data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Which Collision mode to enable on the new mesh object, if supported */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Which Collision mode to enable on the new mesh object, if supported" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRaytracingSupport_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify whether normals should be automatically recomputed for this new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify whether normals should be automatically recomputed for this new mesh object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify whether to auto-generate Lightmap UVs (if applicable for the output mesh type) */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify whether to auto-generate Lightmap UVs (if applicable for the output mesh type)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRecomputeNormals_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify whether normals should be automatically recomputed for this new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify whether normals should be automatically recomputed for this new mesh object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRecomputeTangents_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify whether tangents should be automatically recomputed for this new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify whether tangents should be automatically recomputed for this new mesh object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNanite_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify whether Nanite should be enabled on this new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify whether Nanite should be enabled on this new mesh object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteProxyTrianglePercent_MetaData[] = {
		{ "Comment", "/** Specify the Nanite proxy triangle percentage for this new mesh object */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Replaced NaniteProxyTrianglePercent with usage of Engine FMeshNaniteSettings" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify the Nanite proxy triangle percentage for this new mesh object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteSettings_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify the Nanite Settings for this new mesh object, only used if bEnableNanite=true */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify the Nanite Settings for this new mesh object, only used if bEnableNanite=true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeHint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeHint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TypeHintClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TypeHintExtended;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetMaterials;
	static void NewProp_bEnableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionMode;
	static void NewProp_bEnableRaytracingSupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRaytracingSupport;
	static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
	static void NewProp_bEnableRecomputeNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRecomputeNormals;
	static void NewProp_bEnableRecomputeTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRecomputeTangents;
	static void NewProp_bEnableNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNanite;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteProxyTrianglePercent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateMeshObjectParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectParams, SourceComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponent_MetaData), NewProp_SourceComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHint = { "TypeHint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectParams, TypeHint), Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeHint_MetaData), NewProp_TypeHint_MetaData) }; // 2458025360
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintClass = { "TypeHintClass", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectParams, TypeHintClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeHintClass_MetaData), NewProp_TypeHintClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintExtended = { "TypeHintExtended", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectParams, TypeHintExtended), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeHintExtended_MetaData), NewProp_TypeHintExtended_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectParams, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorld_MetaData), NewProp_TargetWorld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectParams, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectParams, BaseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseName_MetaData), NewProp_BaseName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectParams, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_AssetMaterials_Inner = { "AssetMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_AssetMaterials = { "AssetMaterials", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectParams, AssetMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetMaterials_MetaData), NewProp_AssetMaterials_MetaData) };
void Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
{
	((FCreateMeshObjectParams*)Obj)->bEnableCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateMeshObjectParams), &Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCollision_MetaData), NewProp_bEnableCollision_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_CollisionMode = { "CollisionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectParams, CollisionMode), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMode_MetaData), NewProp_CollisionMode_MetaData) }; // 4042370968
void Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRaytracingSupport_SetBit(void* Obj)
{
	((FCreateMeshObjectParams*)Obj)->bEnableRaytracingSupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRaytracingSupport = { "bEnableRaytracingSupport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateMeshObjectParams), &Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRaytracingSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRaytracingSupport_MetaData), NewProp_bEnableRaytracingSupport_MetaData) };
void Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
{
	((FCreateMeshObjectParams*)Obj)->bGenerateLightmapUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateMeshObjectParams), &Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateLightmapUVs_MetaData), NewProp_bGenerateLightmapUVs_MetaData) };
void Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeNormals_SetBit(void* Obj)
{
	((FCreateMeshObjectParams*)Obj)->bEnableRecomputeNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeNormals = { "bEnableRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateMeshObjectParams), &Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRecomputeNormals_MetaData), NewProp_bEnableRecomputeNormals_MetaData) };
void Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeTangents_SetBit(void* Obj)
{
	((FCreateMeshObjectParams*)Obj)->bEnableRecomputeTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeTangents = { "bEnableRecomputeTangents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateMeshObjectParams), &Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRecomputeTangents_MetaData), NewProp_bEnableRecomputeTangents_MetaData) };
void Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableNanite_SetBit(void* Obj)
{
	((FCreateMeshObjectParams*)Obj)->bEnableNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableNanite = { "bEnableNanite", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateMeshObjectParams), &Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableNanite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableNanite_MetaData), NewProp_bEnableNanite_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteProxyTrianglePercent = { "NaniteProxyTrianglePercent", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectParams, NaniteProxyTrianglePercent_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteProxyTrianglePercent_MetaData), NewProp_NaniteProxyTrianglePercent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteSettings = { "NaniteSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectParams, NaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteSettings_MetaData), NewProp_NaniteSettings_MetaData) }; // 3223060170
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_SourceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintExtended,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TargetWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_BaseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_AssetMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_AssetMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_CollisionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRaytracingSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bGenerateLightmapUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteProxyTrianglePercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"CreateMeshObjectParams",
	Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::PropPointers),
	sizeof(FCreateMeshObjectParams),
	alignof(FCreateMeshObjectParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateMeshObjectParams()
{
	if (!Z_Registration_Info_UScriptStruct_CreateMeshObjectParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateMeshObjectParams.InnerSingleton, Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateMeshObjectParams.InnerSingleton;
}
// End ScriptStruct FCreateMeshObjectParams

// Begin ScriptStruct FCreateMeshObjectResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateMeshObjectResult;
class UScriptStruct* FCreateMeshObjectResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateMeshObjectResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateMeshObjectResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateMeshObjectResult, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("CreateMeshObjectResult"));
	}
	return Z_Registration_Info_UScriptStruct_CreateMeshObjectResult.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FCreateMeshObjectResult>()
{
	return FCreateMeshObjectResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCreateMeshObjectResult is returned by UModelingObjectsCreationAPI::CreateMeshObject()\n * to indicate success/failure and provide information about created mesh objects\n */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "FCreateMeshObjectResult is returned by UModelingObjectsCreationAPI::CreateMeshObject()\nto indicate success/failure and provide information about created mesh objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "Category", "CreateMeshObjectResult" },
		{ "Comment", "/** Success/Failure status for the requested operation */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Success/Failure status for the requested operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewActor_MetaData[] = {
		{ "Category", "CreateMeshObjectResult" },
		{ "Comment", "/** A pointer to a newly-created Actor for the mesh object, if applicable (eg StaticMeshActor) */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A pointer to a newly-created Actor for the mesh object, if applicable (eg StaticMeshActor)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewComponent_MetaData[] = {
		{ "Category", "CreateMeshObjectResult" },
		{ "Comment", "/** A pointer to a newly-created PrimitiveComponent for the mesh object, if applicable (eg StaticMeshComponent) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A pointer to a newly-created PrimitiveComponent for the mesh object, if applicable (eg StaticMeshComponent)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAsset_MetaData[] = {
		{ "Category", "CreateMeshObjectResult" },
		{ "Comment", "/** A pointer to a newly-created Asset for the mesh object, if applicable (eg StaticMeshAsset) */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A pointer to a newly-created Asset for the mesh object, if applicable (eg StaticMeshAsset)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateMeshObjectResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectResult, ResultCode), Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3306225246
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewActor = { "NewActor", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectResult, NewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewActor_MetaData), NewProp_NewActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewComponent = { "NewComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectResult, NewComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewComponent_MetaData), NewProp_NewComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMeshObjectResult, NewAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAsset_MetaData), NewProp_NewAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_ResultCode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"CreateMeshObjectResult",
	Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::PropPointers),
	sizeof(FCreateMeshObjectResult),
	alignof(FCreateMeshObjectResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateMeshObjectResult()
{
	if (!Z_Registration_Info_UScriptStruct_CreateMeshObjectResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateMeshObjectResult.InnerSingleton, Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateMeshObjectResult.InnerSingleton;
}
// End ScriptStruct FCreateMeshObjectResult

// Begin ScriptStruct FCreateTextureObjectParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateTextureObjectParams;
class UScriptStruct* FCreateTextureObjectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateTextureObjectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateTextureObjectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateTextureObjectParams, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("CreateTextureObjectParams"));
	}
	return Z_Registration_Info_UScriptStruct_CreateTextureObjectParams.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FCreateTextureObjectParams>()
{
	return FCreateTextureObjectParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCreateTextureObjectParams is a collection of input data intended to be passed to\n * UModelingObjectsCreationAPI::CreateTextureObject(). Not all data necessarily needs\n * to be specified, this will depend on the particular implementation. The comments\n * below are representative of how this data structure is used in the Tools and\n * API implementation(s) provided with Unreal Engine, but end-user implementors\n * could abuse these fields as necessary.\n *\n * The definition of a \"texture object\" is implementation-specific. \n * In the UE Editor this is generally a UTexture2D\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "FCreateTextureObjectParams is a collection of input data intended to be passed to\nUModelingObjectsCreationAPI::CreateTextureObject(). Not all data necessarily needs\nto be specified, this will depend on the particular implementation. The comments\nbelow are representative of how this data structure is used in the Tools and\nAPI implementation(s) provided with Unreal Engine, but end-user implementors\ncould abuse these fields as necessary.\n\nThe definition of a \"texture object\" is implementation-specific.\nIn the UE Editor this is generally a UTexture2D" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeHintExtended_MetaData[] = {
		{ "Category", "CreateTextureObjectParams" },
		{ "Comment", "/** An arbitrary integer that can be used to pass data to an API implementation */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "An arbitrary integer that can be used to pass data to an API implementation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[] = {
		{ "Category", "CreateTextureObjectParams" },
		{ "Comment", "/** \n\x09 * The World/Level the new texture object should be created in (if known).\n\x09 * Note that Textures generally do not exist as objects in a Level. \n\x09 * However, it may be necessary to store the texture in a path relative to the\n\x09 * level (for example if the level is in a Plugin, this would be necessary in-Editor)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The World/Level the new texture object should be created in (if known).\nNote that Textures generally do not exist as objects in a Level.\nHowever, it may be necessary to store the texture in a path relative to the\nlevel (for example if the level is in a Plugin, this would be necessary in-Editor)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoreRelativeToObject_MetaData[] = {
		{ "Category", "CreateTextureObjectParams" },
		{ "Comment", "/** An object to store the Texture relative to. For example the texture could be stored at the same path. */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "An object to store the Texture relative to. For example the texture could be stored at the same path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[] = {
		{ "Category", "CreateTextureObjectParams" },
		{ "Comment", "/** The base name of the new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The base name of the new mesh object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTransientTexture_MetaData[] = {
		{ "Category", "CreateTextureObjectParams" },
		{ "Comment", "/** \n\x09 * Texture source data. Generally assumed that this is a Texture created in the Transient package\n\x09 * that is intended to be saved in a permanent package.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Texture source data. Generally assumed that this is a Texture created in the Transient package\nthat is intended to be saved in a permanent package." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TypeHintExtended;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoreRelativeToObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedTransientTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateTextureObjectParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TypeHintExtended = { "TypeHintExtended", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateTextureObjectParams, TypeHintExtended), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeHintExtended_MetaData), NewProp_TypeHintExtended_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateTextureObjectParams, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorld_MetaData), NewProp_TargetWorld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_StoreRelativeToObject = { "StoreRelativeToObject", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateTextureObjectParams, StoreRelativeToObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoreRelativeToObject_MetaData), NewProp_StoreRelativeToObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateTextureObjectParams, BaseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseName_MetaData), NewProp_BaseName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_GeneratedTransientTexture = { "GeneratedTransientTexture", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateTextureObjectParams, GeneratedTransientTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedTransientTexture_MetaData), NewProp_GeneratedTransientTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TypeHintExtended,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TargetWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_StoreRelativeToObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_BaseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_GeneratedTransientTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"CreateTextureObjectParams",
	Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::PropPointers),
	sizeof(FCreateTextureObjectParams),
	alignof(FCreateTextureObjectParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateTextureObjectParams()
{
	if (!Z_Registration_Info_UScriptStruct_CreateTextureObjectParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateTextureObjectParams.InnerSingleton, Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateTextureObjectParams.InnerSingleton;
}
// End ScriptStruct FCreateTextureObjectParams

// Begin ScriptStruct FCreateTextureObjectResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateTextureObjectResult;
class UScriptStruct* FCreateTextureObjectResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateTextureObjectResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateTextureObjectResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateTextureObjectResult, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("CreateTextureObjectResult"));
	}
	return Z_Registration_Info_UScriptStruct_CreateTextureObjectResult.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FCreateTextureObjectResult>()
{
	return FCreateTextureObjectResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCreateTextureObjectResult is returned by UModelingObjectsCreationAPI::CreateTextureObject()\n * to indicate success/failure and provide information about created texture objects\n */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "FCreateTextureObjectResult is returned by UModelingObjectsCreationAPI::CreateTextureObject()\nto indicate success/failure and provide information about created texture objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "Category", "CreateTextureObjectResult" },
		{ "Comment", "/** Success/Failure status for the requested operation */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Success/Failure status for the requested operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAsset_MetaData[] = {
		{ "Category", "CreateTextureObjectResult" },
		{ "Comment", "/** A pointer to a newly-created Asset for the texture object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A pointer to a newly-created Asset for the texture object" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateTextureObjectResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateTextureObjectResult, ResultCode), Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3306225246
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateTextureObjectResult, NewAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAsset_MetaData), NewProp_NewAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_ResultCode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_NewAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"CreateTextureObjectResult",
	Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::PropPointers),
	sizeof(FCreateTextureObjectResult),
	alignof(FCreateTextureObjectResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateTextureObjectResult()
{
	if (!Z_Registration_Info_UScriptStruct_CreateTextureObjectResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateTextureObjectResult.InnerSingleton, Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateTextureObjectResult.InnerSingleton;
}
// End ScriptStruct FCreateTextureObjectResult

// Begin ScriptStruct FCreateMaterialObjectParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateMaterialObjectParams;
class UScriptStruct* FCreateMaterialObjectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateMaterialObjectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateMaterialObjectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateMaterialObjectParams, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("CreateMaterialObjectParams"));
	}
	return Z_Registration_Info_UScriptStruct_CreateMaterialObjectParams.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FCreateMaterialObjectParams>()
{
	return FCreateMaterialObjectParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCreateMaterialObjectParams is a collection of input data intended to be passed to\n * UModelingObjectsCreationAPI::CreateMaterialObject().\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "FCreateMaterialObjectParams is a collection of input data intended to be passed to\nUModelingObjectsCreationAPI::CreateMaterialObject()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[] = {
		{ "Category", "CreateMaterialObjectParams" },
		{ "Comment", "/** \n\x09 * The World/Level the new Material object should be created in (if known).\n\x09 * Note that Material generally do not exist as objects in a Level. \n\x09 * However, it may be necessary to store the texture in a path relative to the\n\x09 * level (for example if the level is in a Plugin, this would be necessary in-Editor)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The World/Level the new Material object should be created in (if known).\nNote that Material generally do not exist as objects in a Level.\nHowever, it may be necessary to store the texture in a path relative to the\nlevel (for example if the level is in a Plugin, this would be necessary in-Editor)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoreRelativeToObject_MetaData[] = {
		{ "Category", "CreateMaterialObjectParams" },
		{ "Comment", "/** An object to store the Material relative to. */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "An object to store the Material relative to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[] = {
		{ "Category", "CreateMaterialObjectParams" },
		{ "Comment", "/** The base name of the new Material object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The base name of the new Material object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialToDuplicate_MetaData[] = {
		{ "Category", "CreateMaterialObjectParams" },
		{ "Comment", "/** \n\x09 * The parent UMaterial of this material will be duplicated to create the new UMaterial Asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The parent UMaterial of this material will be duplicated to create the new UMaterial Asset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoreRelativeToObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialToDuplicate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateMaterialObjectParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMaterialObjectParams, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorld_MetaData), NewProp_TargetWorld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::NewProp_StoreRelativeToObject = { "StoreRelativeToObject", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMaterialObjectParams, StoreRelativeToObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoreRelativeToObject_MetaData), NewProp_StoreRelativeToObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMaterialObjectParams, BaseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseName_MetaData), NewProp_BaseName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::NewProp_MaterialToDuplicate = { "MaterialToDuplicate", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMaterialObjectParams, MaterialToDuplicate), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialToDuplicate_MetaData), NewProp_MaterialToDuplicate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::NewProp_TargetWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::NewProp_StoreRelativeToObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::NewProp_BaseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::NewProp_MaterialToDuplicate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"CreateMaterialObjectParams",
	Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::PropPointers),
	sizeof(FCreateMaterialObjectParams),
	alignof(FCreateMaterialObjectParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateMaterialObjectParams()
{
	if (!Z_Registration_Info_UScriptStruct_CreateMaterialObjectParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateMaterialObjectParams.InnerSingleton, Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateMaterialObjectParams.InnerSingleton;
}
// End ScriptStruct FCreateMaterialObjectParams

// Begin ScriptStruct FCreateMaterialObjectResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateMaterialObjectResult;
class UScriptStruct* FCreateMaterialObjectResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateMaterialObjectResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateMaterialObjectResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateMaterialObjectResult, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("CreateMaterialObjectResult"));
	}
	return Z_Registration_Info_UScriptStruct_CreateMaterialObjectResult.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FCreateMaterialObjectResult>()
{
	return FCreateMaterialObjectResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCreateMaterialObjectResult is returned by UModelingObjectsCreationAPI::CreateMaterialObject()\n * to indicate success/failure and provide information about created texture objects\n */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "FCreateMaterialObjectResult is returned by UModelingObjectsCreationAPI::CreateMaterialObject()\nto indicate success/failure and provide information about created texture objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "Category", "CreateMaterialObjectResult" },
		{ "Comment", "/** Success/Failure status for the requested operation */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Success/Failure status for the requested operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAsset_MetaData[] = {
		{ "Category", "CreateTextureObjectResult" },
		{ "Comment", "/** A pointer to a newly-created Asset for the material object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A pointer to a newly-created Asset for the material object" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateMaterialObjectResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMaterialObjectResult, ResultCode), Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3306225246
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateMaterialObjectResult, NewAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAsset_MetaData), NewProp_NewAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::NewProp_ResultCode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::NewProp_NewAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"CreateMaterialObjectResult",
	Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::PropPointers),
	sizeof(FCreateMaterialObjectResult),
	alignof(FCreateMaterialObjectResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateMaterialObjectResult()
{
	if (!Z_Registration_Info_UScriptStruct_CreateMaterialObjectResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateMaterialObjectResult.InnerSingleton, Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateMaterialObjectResult.InnerSingleton;
}
// End ScriptStruct FCreateMaterialObjectResult

// Begin ScriptStruct FCreateActorParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateActorParams;
class UScriptStruct* FCreateActorParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateActorParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateActorParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateActorParams, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("CreateActorParams"));
	}
	return Z_Registration_Info_UScriptStruct_CreateActorParams.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FCreateActorParams>()
{
	return FCreateActorParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateActorParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCreateActorParams is a collection of input data intended to be passed to\n * UModelingObjectsCreationAPI::CreateNewActor().\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "FCreateActorParams is a collection of input data intended to be passed to\nUModelingObjectsCreationAPI::CreateNewActor()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[] = {
		{ "Category", "CreateActorParams" },
		{ "Comment", "/** \n\x09 * The World/Level the new Actor should be created in (if known).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The World/Level the new Actor should be created in (if known)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[] = {
		{ "Category", "CreateActorParams" },
		{ "Comment", "/** The base name of the new Actor */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The base name of the new Actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "CreateActorParams" },
		{ "Comment", "/** The 3D local-to-world transform for the new actor */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The 3D local-to-world transform for the new actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateActor_MetaData[] = {
		{ "Comment", "//\n// input data\n//\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "TemplateActor is being deprecated. Please use TemplateAsset instead." },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "input data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateAsset_MetaData[] = {
		{ "Category", "CreateActorParams" },
		{ "Comment", "/** A template Asset used to determine the type of Actor to spawn. */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A template Asset used to determine the type of Actor to spawn." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetWorld;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TemplateActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TemplateAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateActorParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateActorParams_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateActorParams, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorld_MetaData), NewProp_TargetWorld_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateActorParams_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateActorParams, BaseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseName_MetaData), NewProp_BaseName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateActorParams_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateActorParams, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateActorParams_Statics::NewProp_TemplateActor = { "TemplateActor", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateActorParams, TemplateActor_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateActor_MetaData), NewProp_TemplateActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateActorParams_Statics::NewProp_TemplateAsset = { "TemplateAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateActorParams, TemplateAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateAsset_MetaData), NewProp_TemplateAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateActorParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateActorParams_Statics::NewProp_TargetWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateActorParams_Statics::NewProp_BaseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateActorParams_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateActorParams_Statics::NewProp_TemplateActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateActorParams_Statics::NewProp_TemplateAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateActorParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateActorParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"CreateActorParams",
	Z_Construct_UScriptStruct_FCreateActorParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateActorParams_Statics::PropPointers),
	sizeof(FCreateActorParams),
	alignof(FCreateActorParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateActorParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateActorParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateActorParams()
{
	if (!Z_Registration_Info_UScriptStruct_CreateActorParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateActorParams.InnerSingleton, Z_Construct_UScriptStruct_FCreateActorParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateActorParams.InnerSingleton;
}
// End ScriptStruct FCreateActorParams

// Begin ScriptStruct FCreateActorResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateActorResult;
class UScriptStruct* FCreateActorResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateActorResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateActorResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateActorResult, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("CreateActorResult"));
	}
	return Z_Registration_Info_UScriptStruct_CreateActorResult.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FCreateActorResult>()
{
	return FCreateActorResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateActorResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCreateActorResult is returned by UModelingObjectsCreationAPI::FCreateActorParams()\n * to indicate success/failure and provide information about created actors\n */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "FCreateActorResult is returned by UModelingObjectsCreationAPI::FCreateActorParams()\nto indicate success/failure and provide information about created actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[] = {
		{ "Category", "CreateMaterialObjectResult" },
		{ "Comment", "/** Success/Failure status for the requested operation */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Success/Failure status for the requested operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewActor_MetaData[] = {
		{ "Category", "CreateMeshObjectResult" },
		{ "Comment", "/** A pointer to a newly-created Actor */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A pointer to a newly-created Actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateActorResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateActorResult_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateActorResult_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateActorResult, ResultCode), Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultCode_MetaData), NewProp_ResultCode_MetaData) }; // 3306225246
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCreateActorResult_Statics::NewProp_NewActor = { "NewActor", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateActorResult, NewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewActor_MetaData), NewProp_NewActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateActorResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateActorResult_Statics::NewProp_ResultCode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateActorResult_Statics::NewProp_ResultCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateActorResult_Statics::NewProp_NewActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateActorResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateActorResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"CreateActorResult",
	Z_Construct_UScriptStruct_FCreateActorResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateActorResult_Statics::PropPointers),
	sizeof(FCreateActorResult),
	alignof(FCreateActorResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateActorResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateActorResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateActorResult()
{
	if (!Z_Registration_Info_UScriptStruct_CreateActorResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateActorResult.InnerSingleton, Z_Construct_UScriptStruct_FCreateActorResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateActorResult.InnerSingleton;
}
// End ScriptStruct FCreateActorResult

// Begin Class UModelingObjectsCreationAPI Function CreateMaterialObject
struct Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics
{
	struct ModelingObjectsCreationAPI_eventCreateMaterialObject_Parms
	{
		FCreateMaterialObjectParams CreateMaterialParams;
		FCreateMaterialObjectResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modeling Objects" },
		{ "Comment", "/**\n\x09 * Create a new material object based on the data in CreateMaterialParams\n\x09 * @return a results data structure, containing a result code and information about any new objects created\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Create a new material object based on the data in CreateMaterialParams\n@return a results data structure, containing a result code and information about any new objects created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateMaterialParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateMaterialParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::NewProp_CreateMaterialParams = { "CreateMaterialParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelingObjectsCreationAPI_eventCreateMaterialObject_Parms, CreateMaterialParams), Z_Construct_UScriptStruct_FCreateMaterialObjectParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateMaterialParams_MetaData), NewProp_CreateMaterialParams_MetaData) }; // 4187032796
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelingObjectsCreationAPI_eventCreateMaterialObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FCreateMaterialObjectResult, METADATA_PARAMS(0, nullptr) }; // 132001503
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::NewProp_CreateMaterialParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModelingObjectsCreationAPI, nullptr, "CreateMaterialObject", nullptr, nullptr, Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::ModelingObjectsCreationAPI_eventCreateMaterialObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::ModelingObjectsCreationAPI_eventCreateMaterialObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModelingObjectsCreationAPI::execCreateMaterialObject)
{
	P_GET_STRUCT_REF(FCreateMaterialObjectParams,Z_Param_Out_CreateMaterialParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCreateMaterialObjectResult*)Z_Param__Result=P_THIS->CreateMaterialObject(Z_Param_Out_CreateMaterialParams);
	P_NATIVE_END;
}
// End Class UModelingObjectsCreationAPI Function CreateMaterialObject

// Begin Class UModelingObjectsCreationAPI Function CreateMeshObject
struct Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics
{
	struct ModelingObjectsCreationAPI_eventCreateMeshObject_Parms
	{
		FCreateMeshObjectParams CreateMeshParams;
		FCreateMeshObjectResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modeling Objects" },
		{ "Comment", "/**\n\x09 * Create a new mesh object based on the data in CreateMeshParams\n\x09 * @return a results data structure, containing a result code and information about any new objects created\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Create a new mesh object based on the data in CreateMeshParams\n@return a results data structure, containing a result code and information about any new objects created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateMeshParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateMeshParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::NewProp_CreateMeshParams = { "CreateMeshParams", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelingObjectsCreationAPI_eventCreateMeshObject_Parms, CreateMeshParams), Z_Construct_UScriptStruct_FCreateMeshObjectParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateMeshParams_MetaData), NewProp_CreateMeshParams_MetaData) }; // 2005315696
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelingObjectsCreationAPI_eventCreateMeshObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FCreateMeshObjectResult, METADATA_PARAMS(0, nullptr) }; // 462911427
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::NewProp_CreateMeshParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModelingObjectsCreationAPI, nullptr, "CreateMeshObject", nullptr, nullptr, Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::ModelingObjectsCreationAPI_eventCreateMeshObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::ModelingObjectsCreationAPI_eventCreateMeshObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModelingObjectsCreationAPI::execCreateMeshObject)
{
	P_GET_STRUCT_REF(FCreateMeshObjectParams,Z_Param_Out_CreateMeshParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCreateMeshObjectResult*)Z_Param__Result=P_THIS->CreateMeshObject(Z_Param_Out_CreateMeshParams);
	P_NATIVE_END;
}
// End Class UModelingObjectsCreationAPI Function CreateMeshObject

// Begin Class UModelingObjectsCreationAPI Function CreateNewActor
struct Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics
{
	struct ModelingObjectsCreationAPI_eventCreateNewActor_Parms
	{
		FCreateActorParams CreateActorParams;
		FCreateActorResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modeling Objects" },
		{ "Comment", "/**\n\x09 * Create a new material object based on the data in CreateMaterialParams\n\x09 * @return a results data structure, containing a result code and information about any new objects created\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Create a new material object based on the data in CreateMaterialParams\n@return a results data structure, containing a result code and information about any new objects created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateActorParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateActorParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::NewProp_CreateActorParams = { "CreateActorParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelingObjectsCreationAPI_eventCreateNewActor_Parms, CreateActorParams), Z_Construct_UScriptStruct_FCreateActorParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateActorParams_MetaData), NewProp_CreateActorParams_MetaData) }; // 2749323415
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelingObjectsCreationAPI_eventCreateNewActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FCreateActorResult, METADATA_PARAMS(0, nullptr) }; // 2975950074
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::NewProp_CreateActorParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModelingObjectsCreationAPI, nullptr, "CreateNewActor", nullptr, nullptr, Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::ModelingObjectsCreationAPI_eventCreateNewActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::ModelingObjectsCreationAPI_eventCreateNewActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModelingObjectsCreationAPI::execCreateNewActor)
{
	P_GET_STRUCT_REF(FCreateActorParams,Z_Param_Out_CreateActorParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCreateActorResult*)Z_Param__Result=P_THIS->CreateNewActor(Z_Param_Out_CreateActorParams);
	P_NATIVE_END;
}
// End Class UModelingObjectsCreationAPI Function CreateNewActor

// Begin Class UModelingObjectsCreationAPI Function CreateTextureObject
struct Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics
{
	struct ModelingObjectsCreationAPI_eventCreateTextureObject_Parms
	{
		FCreateTextureObjectParams CreateTexParams;
		FCreateTextureObjectResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modeling Objects" },
		{ "Comment", "/**\n\x09 * Create a new texture object based on the data in CreateTexParams\n\x09 * @return a results data structure, containing a result code and information about any new objects created\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Create a new texture object based on the data in CreateTexParams\n@return a results data structure, containing a result code and information about any new objects created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateTexParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateTexParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::NewProp_CreateTexParams = { "CreateTexParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelingObjectsCreationAPI_eventCreateTextureObject_Parms, CreateTexParams), Z_Construct_UScriptStruct_FCreateTextureObjectParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateTexParams_MetaData), NewProp_CreateTexParams_MetaData) }; // 42848905
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelingObjectsCreationAPI_eventCreateTextureObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FCreateTextureObjectResult, METADATA_PARAMS(0, nullptr) }; // 612153220
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::NewProp_CreateTexParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModelingObjectsCreationAPI, nullptr, "CreateTextureObject", nullptr, nullptr, Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::ModelingObjectsCreationAPI_eventCreateTextureObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::ModelingObjectsCreationAPI_eventCreateTextureObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModelingObjectsCreationAPI::execCreateTextureObject)
{
	P_GET_STRUCT_REF(FCreateTextureObjectParams,Z_Param_Out_CreateTexParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCreateTextureObjectResult*)Z_Param__Result=P_THIS->CreateTextureObject(Z_Param_Out_CreateTexParams);
	P_NATIVE_END;
}
// End Class UModelingObjectsCreationAPI Function CreateTextureObject

// Begin Class UModelingObjectsCreationAPI
void UModelingObjectsCreationAPI::StaticRegisterNativesUModelingObjectsCreationAPI()
{
	UClass* Class = UModelingObjectsCreationAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateMaterialObject", &UModelingObjectsCreationAPI::execCreateMaterialObject },
		{ "CreateMeshObject", &UModelingObjectsCreationAPI::execCreateMeshObject },
		{ "CreateNewActor", &UModelingObjectsCreationAPI::execCreateNewActor },
		{ "CreateTextureObject", &UModelingObjectsCreationAPI::execCreateTextureObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelingObjectsCreationAPI);
UClass* Z_Construct_UClass_UModelingObjectsCreationAPI_NoRegister()
{
	return UModelingObjectsCreationAPI::StaticClass();
}
struct Z_Construct_UClass_UModelingObjectsCreationAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UModelingObjectsCreationAPI is a base interface for functions that can be used to\n * create various types of objects from Modeling Tools, or other sources. The \"type\" is\n * very generic here - \"Mesh\", \"Texture\", etc - because this API is meant to provide\n * an abstraction for Tools to emit different types of objects in different situations.\n * For example an Tool might emit StaticMesh Asset/Actors in-Editor, but ProceduralMeshComponents at Runtime.\n * \n * The creation inputs are specified via the structs above (eg FCreateMeshObjectParams, FCreateTextureObjectParams),\n * which are very extensive, kitchen-sink sort of structs. Generally \"New Mesh Object\"\n * creation behavior will be very complex and so this API is really just a way to route\n * the data, and very few guarantees can be made about any specific implementation.\n * \n * The assumed (but not really required) usage of instances of this type are that they\n * will be registered with an InteractiveToolsContext's ContextObjectStore, and then \n * fetched from there by Tools/Algorithms/etc that need to use these capabilities can\n * use the UE::Modeling::CreateXObject() helper functions below. However the interface\n * does not have any dependencies on this usage model. \n * \n * See UEditorModelingObjectsCreationAPI for an example implementation suitable for in-Editor use.\n */" },
		{ "IncludePath", "ModelingObjectsCreationAPI.h" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "UModelingObjectsCreationAPI is a base interface for functions that can be used to\ncreate various types of objects from Modeling Tools, or other sources. The \"type\" is\nvery generic here - \"Mesh\", \"Texture\", etc - because this API is meant to provide\nan abstraction for Tools to emit different types of objects in different situations.\nFor example an Tool might emit StaticMesh Asset/Actors in-Editor, but ProceduralMeshComponents at Runtime.\n\nThe creation inputs are specified via the structs above (eg FCreateMeshObjectParams, FCreateTextureObjectParams),\nwhich are very extensive, kitchen-sink sort of structs. Generally \"New Mesh Object\"\ncreation behavior will be very complex and so this API is really just a way to route\nthe data, and very few guarantees can be made about any specific implementation.\n\nThe assumed (but not really required) usage of instances of this type are that they\nwill be registered with an InteractiveToolsContext's ContextObjectStore, and then\nfetched from there by Tools/Algorithms/etc that need to use these capabilities can\nuse the UE::Modeling::CreateXObject() helper functions below. However the interface\ndoes not have any dependencies on this usage model.\n\nSee UEditorModelingObjectsCreationAPI for an example implementation suitable for in-Editor use." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMaterialObject, "CreateMaterialObject" }, // 4260340916
		{ &Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject, "CreateMeshObject" }, // 2255274561
		{ &Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateNewActor, "CreateNewActor" }, // 1663935018
		{ &Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject, "CreateTextureObject" }, // 1862154981
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelingObjectsCreationAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::ClassParams = {
	&UModelingObjectsCreationAPI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModelingObjectsCreationAPI()
{
	if (!Z_Registration_Info_UClass_UModelingObjectsCreationAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelingObjectsCreationAPI.OuterSingleton, Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModelingObjectsCreationAPI.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UModelingObjectsCreationAPI>()
{
	return UModelingObjectsCreationAPI::StaticClass();
}
UModelingObjectsCreationAPI::UModelingObjectsCreationAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModelingObjectsCreationAPI);
UModelingObjectsCreationAPI::~UModelingObjectsCreationAPI() {}
// End Class UModelingObjectsCreationAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECreateModelingObjectResult_StaticEnum, TEXT("ECreateModelingObjectResult"), &Z_Registration_Info_UEnum_ECreateModelingObjectResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3306225246U) },
		{ ECreateMeshObjectSourceMeshType_StaticEnum, TEXT("ECreateMeshObjectSourceMeshType"), &Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3802263392U) },
		{ ECreateObjectTypeHint_StaticEnum, TEXT("ECreateObjectTypeHint"), &Z_Registration_Info_UEnum_ECreateObjectTypeHint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2458025360U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCreateMeshObjectParams::StaticStruct, Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewStructOps, TEXT("CreateMeshObjectParams"), &Z_Registration_Info_UScriptStruct_CreateMeshObjectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateMeshObjectParams), 2005315696U) },
		{ FCreateMeshObjectResult::StaticStruct, Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewStructOps, TEXT("CreateMeshObjectResult"), &Z_Registration_Info_UScriptStruct_CreateMeshObjectResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateMeshObjectResult), 462911427U) },
		{ FCreateTextureObjectParams::StaticStruct, Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewStructOps, TEXT("CreateTextureObjectParams"), &Z_Registration_Info_UScriptStruct_CreateTextureObjectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateTextureObjectParams), 42848905U) },
		{ FCreateTextureObjectResult::StaticStruct, Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewStructOps, TEXT("CreateTextureObjectResult"), &Z_Registration_Info_UScriptStruct_CreateTextureObjectResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateTextureObjectResult), 612153220U) },
		{ FCreateMaterialObjectParams::StaticStruct, Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics::NewStructOps, TEXT("CreateMaterialObjectParams"), &Z_Registration_Info_UScriptStruct_CreateMaterialObjectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateMaterialObjectParams), 4187032796U) },
		{ FCreateMaterialObjectResult::StaticStruct, Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics::NewStructOps, TEXT("CreateMaterialObjectResult"), &Z_Registration_Info_UScriptStruct_CreateMaterialObjectResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateMaterialObjectResult), 132001503U) },
		{ FCreateActorParams::StaticStruct, Z_Construct_UScriptStruct_FCreateActorParams_Statics::NewStructOps, TEXT("CreateActorParams"), &Z_Registration_Info_UScriptStruct_CreateActorParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateActorParams), 2749323415U) },
		{ FCreateActorResult::StaticStruct, Z_Construct_UScriptStruct_FCreateActorResult_Statics::NewStructOps, TEXT("CreateActorResult"), &Z_Registration_Info_UScriptStruct_CreateActorResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateActorResult), 2975950074U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModelingObjectsCreationAPI, UModelingObjectsCreationAPI::StaticClass, TEXT("UModelingObjectsCreationAPI"), &Z_Registration_Info_UClass_UModelingObjectsCreationAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelingObjectsCreationAPI), 648067252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_2580107847(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
