// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ClusterUnionComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ExternalSpatialAccelerationPayload.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClusterUnionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UClusterUnionComponent();
ENGINE_API UClass* Z_Construct_UClass_UClusterUnionComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentPhysicsStateChange();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusteredActorData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusteredComponentData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterUnionBoneData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterUnionInitializationData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterUnionPendingAddData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterUnionReplicatedData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExternalSpatialAccelerationPayload();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FClusterUnionBoneData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterUnionBoneData;
class UScriptStruct* FClusterUnionBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterUnionBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterUnionBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterUnionBoneData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClusterUnionBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterUnionBoneData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClusterUnionBoneData>()
{
	return FClusterUnionBoneData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterUnionBoneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterUnionBoneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterUnionBoneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ClusterUnionBoneData",
	nullptr,
	0,
	sizeof(FClusterUnionBoneData),
	alignof(FClusterUnionBoneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnionBoneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterUnionBoneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterUnionBoneData()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterUnionBoneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterUnionBoneData.InnerSingleton, Z_Construct_UScriptStruct_FClusterUnionBoneData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterUnionBoneData.InnerSingleton;
}
// End ScriptStruct FClusterUnionBoneData

// Begin ScriptStruct FClusteredComponentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusteredComponentData;
class UScriptStruct* FClusteredComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusteredComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusteredComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusteredComponentData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClusteredComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_ClusteredComponentData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClusteredComponentData>()
{
	return FClusteredComponentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusteredComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedProxyComponent_MetaData[] = {
		{ "Comment", "// Using a TWeakObjectPtr here because the UClusterUnionReplicatedProxyComponent will have a pointer back\n// and we don't want to get into a situation where a circular reference occurs.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
		{ "ToolTip", "Using a TWeakObjectPtr here because the UClusterUnionReplicatedProxyComponent will have a pointer back\nand we don't want to get into a situation where a circular reference occurs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasReplicating_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingDeletion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ReplicatedProxyComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
	static void NewProp_bWasReplicating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasReplicating;
	static void NewProp_bPendingDeletion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingDeletion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusteredComponentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewProp_ReplicatedProxyComponent = { "ReplicatedProxyComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusteredComponentData, ReplicatedProxyComponent), Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedProxyComponent_MetaData), NewProp_ReplicatedProxyComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusteredComponentData, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
void Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewProp_bWasReplicating_SetBit(void* Obj)
{
	((FClusteredComponentData*)Obj)->bWasReplicating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewProp_bWasReplicating = { "bWasReplicating", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClusteredComponentData), &Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewProp_bWasReplicating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasReplicating_MetaData), NewProp_bWasReplicating_MetaData) };
void Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewProp_bPendingDeletion_SetBit(void* Obj)
{
	((FClusteredComponentData*)Obj)->bPendingDeletion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewProp_bPendingDeletion = { "bPendingDeletion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClusteredComponentData), &Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewProp_bPendingDeletion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingDeletion_MetaData), NewProp_bPendingDeletion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusteredComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewProp_ReplicatedProxyComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewProp_bWasReplicating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewProp_bPendingDeletion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusteredComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusteredComponentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ClusteredComponentData",
	Z_Construct_UScriptStruct_FClusteredComponentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusteredComponentData_Statics::PropPointers),
	sizeof(FClusteredComponentData),
	alignof(FClusteredComponentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusteredComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusteredComponentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusteredComponentData()
{
	if (!Z_Registration_Info_UScriptStruct_ClusteredComponentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusteredComponentData.InnerSingleton, Z_Construct_UScriptStruct_FClusteredComponentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusteredComponentData.InnerSingleton;
}
// End ScriptStruct FClusteredComponentData

// Begin ScriptStruct FClusteredActorData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusteredActorData;
class UScriptStruct* FClusteredActorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusteredActorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusteredActorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusteredActorData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClusteredActorData"));
	}
	return Z_Registration_Info_UScriptStruct_ClusteredActorData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClusteredActorData>()
{
	return FClusteredActorData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusteredActorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasReplicatingMovement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasReplicatingMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasReplicatingMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusteredActorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FClusteredActorData_Statics::NewProp_bWasReplicatingMovement_SetBit(void* Obj)
{
	((FClusteredActorData*)Obj)->bWasReplicatingMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClusteredActorData_Statics::NewProp_bWasReplicatingMovement = { "bWasReplicatingMovement", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClusteredActorData), &Z_Construct_UScriptStruct_FClusteredActorData_Statics::NewProp_bWasReplicatingMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasReplicatingMovement_MetaData), NewProp_bWasReplicatingMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusteredActorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusteredActorData_Statics::NewProp_bWasReplicatingMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusteredActorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusteredActorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ClusteredActorData",
	Z_Construct_UScriptStruct_FClusteredActorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusteredActorData_Statics::PropPointers),
	sizeof(FClusteredActorData),
	alignof(FClusteredActorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusteredActorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusteredActorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusteredActorData()
{
	if (!Z_Registration_Info_UScriptStruct_ClusteredActorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusteredActorData.InnerSingleton, Z_Construct_UScriptStruct_FClusteredActorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusteredActorData.InnerSingleton;
}
// End ScriptStruct FClusteredActorData

// Begin ScriptStruct FClusterUnionReplicatedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterUnionReplicatedData;
class UScriptStruct* FClusterUnionReplicatedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterUnionReplicatedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterUnionReplicatedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterUnionReplicatedData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClusterUnionReplicatedData"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterUnionReplicatedData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClusterUnionReplicatedData>()
{
	return FClusterUnionReplicatedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAnchored_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectState;
	static void NewProp_bIsAnchored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAnchored;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterUnionReplicatedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::NewProp_ObjectState = { "ObjectState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterUnionReplicatedData, ObjectState), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectState_MetaData), NewProp_ObjectState_MetaData) };
void Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::NewProp_bIsAnchored_SetBit(void* Obj)
{
	((FClusterUnionReplicatedData*)Obj)->bIsAnchored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::NewProp_bIsAnchored = { "bIsAnchored", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClusterUnionReplicatedData), &Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::NewProp_bIsAnchored_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAnchored_MetaData), NewProp_bIsAnchored_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::NewProp_ObjectState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::NewProp_bIsAnchored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ClusterUnionReplicatedData",
	Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::PropPointers),
	sizeof(FClusterUnionReplicatedData),
	alignof(FClusterUnionReplicatedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterUnionReplicatedData()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterUnionReplicatedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterUnionReplicatedData.InnerSingleton, Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterUnionReplicatedData.InnerSingleton;
}
// End ScriptStruct FClusterUnionReplicatedData

// Begin ScriptStruct FClusterUnionPendingAddData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterUnionPendingAddData;
class UScriptStruct* FClusterUnionPendingAddData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterUnionPendingAddData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterUnionPendingAddData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterUnionPendingAddData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClusterUnionPendingAddData"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterUnionPendingAddData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClusterUnionPendingAddData>()
{
	return FClusterUnionPendingAddData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationPayloads_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonesData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationPayloads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AccelerationPayloads;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BonesData_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_BonesData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterUnionPendingAddData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::NewProp_AccelerationPayloads_Inner = { "AccelerationPayloads", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FExternalSpatialAccelerationPayload, METADATA_PARAMS(0, nullptr) }; // 2094437494
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::NewProp_AccelerationPayloads = { "AccelerationPayloads", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterUnionPendingAddData, AccelerationPayloads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationPayloads_MetaData), NewProp_AccelerationPayloads_MetaData) }; // 2094437494
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::NewProp_BonesData_ElementProp = { "BonesData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClusterUnionBoneData, METADATA_PARAMS(0, nullptr) }; // 970358918
static_assert(TModels_V<CGetTypeHashable, FClusterUnionBoneData>, "The structure 'FClusterUnionBoneData' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::NewProp_BonesData = { "BonesData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterUnionPendingAddData, BonesData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonesData_MetaData), NewProp_BonesData_MetaData) }; // 970358918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::NewProp_AccelerationPayloads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::NewProp_AccelerationPayloads,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::NewProp_BonesData_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::NewProp_BonesData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ClusterUnionPendingAddData",
	Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::PropPointers),
	sizeof(FClusterUnionPendingAddData),
	alignof(FClusterUnionPendingAddData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterUnionPendingAddData()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterUnionPendingAddData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterUnionPendingAddData.InnerSingleton, Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterUnionPendingAddData.InnerSingleton;
}
// End ScriptStruct FClusterUnionPendingAddData

// Begin ScriptStruct FClusterUnionInitializationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterUnionInitializationData;
class UScriptStruct* FClusterUnionInitializationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterUnionInitializationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterUnionInitializationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterUnionInitializationData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClusterUnionInitializationData"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterUnionInitializationData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClusterUnionInitializationData>()
{
	return FClusterUnionInitializationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterUnionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessedComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClusterUnionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProcessedComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcessedComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterUnionInitializationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::NewProp_ClusterUnionComponent = { "ClusterUnionComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterUnionInitializationData, ClusterUnionComponent), Z_Construct_UClass_UClusterUnionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterUnionComponent_MetaData), NewProp_ClusterUnionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::NewProp_ProcessedComponents_Inner = { "ProcessedComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::NewProp_ProcessedComponents = { "ProcessedComponents", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterUnionInitializationData, ProcessedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessedComponents_MetaData), NewProp_ProcessedComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::NewProp_ClusterUnionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::NewProp_ProcessedComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::NewProp_ProcessedComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ClusterUnionInitializationData",
	Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::PropPointers),
	sizeof(FClusterUnionInitializationData),
	alignof(FClusterUnionInitializationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterUnionInitializationData()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterUnionInitializationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterUnionInitializationData.InnerSingleton, Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterUnionInitializationData.InnerSingleton;
}
// End ScriptStruct FClusterUnionInitializationData

// Begin Delegate FOnClusterUnionAddedComponent
struct Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnClusterUnionAddedComponent_Parms
	{
		UPrimitiveComponent* Component;
		TSet<int32> BoneIds;
		bool bIsNew;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIds_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_BoneIds;
	static void NewProp_bIsNew_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNew;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnClusterUnionAddedComponent_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::NewProp_BoneIds_ElementProp = { "BoneIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::NewProp_BoneIds = { "BoneIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnClusterUnionAddedComponent_Parms, BoneIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIds_MetaData), NewProp_BoneIds_MetaData) };
void Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::NewProp_bIsNew_SetBit(void* Obj)
{
	((_Script_Engine_eventOnClusterUnionAddedComponent_Parms*)Obj)->bIsNew = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::NewProp_bIsNew = { "bIsNew", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Engine_eventOnClusterUnionAddedComponent_Parms), &Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::NewProp_bIsNew_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::NewProp_BoneIds_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::NewProp_BoneIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::NewProp_bIsNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnClusterUnionAddedComponent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::_Script_Engine_eventOnClusterUnionAddedComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::_Script_Engine_eventOnClusterUnionAddedComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnClusterUnionAddedComponent_DelegateWrapper(const FMulticastScriptDelegate& OnClusterUnionAddedComponent, UPrimitiveComponent* Component, TSet<int32> const& BoneIds, bool bIsNew)
{
	struct _Script_Engine_eventOnClusterUnionAddedComponent_Parms
	{
		UPrimitiveComponent* Component;
		TSet<int32> BoneIds;
		bool bIsNew;
	};
	_Script_Engine_eventOnClusterUnionAddedComponent_Parms Parms;
	Parms.Component=Component;
	Parms.BoneIds=BoneIds;
	Parms.bIsNew=bIsNew ? true : false;
	OnClusterUnionAddedComponent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnClusterUnionAddedComponent

// Begin Delegate FOnClusterUnionRemovedComponent
struct Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnClusterUnionRemovedComponent_Parms
	{
		UPrimitiveComponent* Component;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnClusterUnionRemovedComponent_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnClusterUnionRemovedComponent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics::_Script_Engine_eventOnClusterUnionRemovedComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics::_Script_Engine_eventOnClusterUnionRemovedComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnClusterUnionRemovedComponent_DelegateWrapper(const FMulticastScriptDelegate& OnClusterUnionRemovedComponent, UPrimitiveComponent* Component)
{
	struct _Script_Engine_eventOnClusterUnionRemovedComponent_Parms
	{
		UPrimitiveComponent* Component;
	};
	_Script_Engine_eventOnClusterUnionRemovedComponent_Parms Parms;
	Parms.Component=Component;
	OnClusterUnionRemovedComponent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnClusterUnionRemovedComponent

// Begin Delegate FOnClusterUnionBoundsChanged
struct Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnClusterUnionBoundsChanged_Parms
	{
		UClusterUnionComponent* Component;
		FBoxSphereBounds Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnClusterUnionBoundsChanged_Parms, Component), Z_Construct_UClass_UClusterUnionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnClusterUnionBoundsChanged_Parms, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnClusterUnionBoundsChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::_Script_Engine_eventOnClusterUnionBoundsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::_Script_Engine_eventOnClusterUnionBoundsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnClusterUnionBoundsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnClusterUnionBoundsChanged, UClusterUnionComponent* Component, FBoxSphereBounds const& Bounds)
{
	struct _Script_Engine_eventOnClusterUnionBoundsChanged_Parms
	{
		UClusterUnionComponent* Component;
		FBoxSphereBounds Bounds;
	};
	_Script_Engine_eventOnClusterUnionBoundsChanged_Parms Parms;
	Parms.Component=Component;
	Parms.Bounds=Bounds;
	OnClusterUnionBoundsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnClusterUnionBoundsChanged

// Begin Class UClusterUnionComponent Function AddComponentToCluster
struct Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics
{
	struct ClusterUnionComponent_eventAddComponentToCluster_Parms
	{
		UPrimitiveComponent* InComponent;
		TArray<int32> BoneIds;
		bool bRebuildGeometry;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cluster Union" },
		{ "CPP_Default_bRebuildGeometry", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneIds;
	static void NewProp_bRebuildGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildGeometry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventAddComponentToCluster_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::NewProp_BoneIds_Inner = { "BoneIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::NewProp_BoneIds = { "BoneIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventAddComponentToCluster_Parms, BoneIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIds_MetaData), NewProp_BoneIds_MetaData) };
void Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::NewProp_bRebuildGeometry_SetBit(void* Obj)
{
	((ClusterUnionComponent_eventAddComponentToCluster_Parms*)Obj)->bRebuildGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::NewProp_bRebuildGeometry = { "bRebuildGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClusterUnionComponent_eventAddComponentToCluster_Parms), &Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::NewProp_bRebuildGeometry_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::NewProp_BoneIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::NewProp_BoneIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::NewProp_bRebuildGeometry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "AddComponentToCluster", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::ClusterUnionComponent_eventAddComponentToCluster_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::ClusterUnionComponent_eventAddComponentToCluster_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execAddComponentToCluster)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_GET_TARRAY_REF(int32,Z_Param_Out_BoneIds);
	P_GET_UBOOL(Z_Param_bRebuildGeometry);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddComponentToCluster(Z_Param_InComponent,Z_Param_Out_BoneIds,Z_Param_bRebuildGeometry);
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function AddComponentToCluster

// Begin Class UClusterUnionComponent Function ForceSetChildToParent
struct Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics
{
	struct ClusterUnionComponent_eventForceSetChildToParent_Parms
	{
		UPrimitiveComponent* InComponent;
		TArray<int32> BoneIds;
		TArray<FTransform> ChildToParent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// This should only be called on the client when replication happens.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
		{ "ToolTip", "This should only be called on the client when replication happens." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildToParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildToParent_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildToParent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventForceSetChildToParent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::NewProp_BoneIds_Inner = { "BoneIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::NewProp_BoneIds = { "BoneIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventForceSetChildToParent_Parms, BoneIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIds_MetaData), NewProp_BoneIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::NewProp_ChildToParent_Inner = { "ChildToParent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::NewProp_ChildToParent = { "ChildToParent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventForceSetChildToParent_Parms, ChildToParent), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildToParent_MetaData), NewProp_ChildToParent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::NewProp_BoneIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::NewProp_BoneIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::NewProp_ChildToParent_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::NewProp_ChildToParent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "ForceSetChildToParent", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::ClusterUnionComponent_eventForceSetChildToParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::ClusterUnionComponent_eventForceSetChildToParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execForceSetChildToParent)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_GET_TARRAY_REF(int32,Z_Param_Out_BoneIds);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_ChildToParent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceSetChildToParent(Z_Param_InComponent,Z_Param_Out_BoneIds,Z_Param_Out_ChildToParent);
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function ForceSetChildToParent

// Begin Class UClusterUnionComponent Function GetActors
struct Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics
{
	struct ClusterUnionComponent_eventGetActors_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cluster Union" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventGetActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "GetActors", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::ClusterUnionComponent_eventGetActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::ClusterUnionComponent_eventGetActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionComponent_GetActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_GetActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execGetActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActors();
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function GetActors

// Begin Class UClusterUnionComponent Function GetPrimitiveComponents
struct Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics
{
	struct ClusterUnionComponent_eventGetPrimitiveComponents_Parms
	{
		TArray<UPrimitiveComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cluster Union" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventGetPrimitiveComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "GetPrimitiveComponents", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::ClusterUnionComponent_eventGetPrimitiveComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::ClusterUnionComponent_eventGetPrimitiveComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execGetPrimitiveComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UPrimitiveComponent*>*)Z_Param__Result=P_THIS->GetPrimitiveComponents();
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function GetPrimitiveComponents

// Begin Class UClusterUnionComponent Function HandleComponentPhysicsStateChange
struct Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics
{
	struct ClusterUnionComponent_eventHandleComponentPhysicsStateChange_Parms
	{
		UPrimitiveComponent* ChangedComponent;
		EComponentPhysicsStateChange StateChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Need to handle the fact that this component may or may not be initialized prior to the components referenced in\n// ClusteredComponentsReferences. This function lets us listen to OnComponentPhysicsStateChanged on the incoming\n// primitive component so that once the physics state is properly created we can begin the process of adding it.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
		{ "ToolTip", "Need to handle the fact that this component may or may not be initialized prior to the components referenced in\nClusteredComponentsReferences. This function lets us listen to OnComponentPhysicsStateChanged on the incoming\nprimitive component so that once the physics state is properly created we can begin the process of adding it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangedComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StateChange_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StateChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::NewProp_ChangedComponent = { "ChangedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventHandleComponentPhysicsStateChange_Parms, ChangedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangedComponent_MetaData), NewProp_ChangedComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::NewProp_StateChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::NewProp_StateChange = { "StateChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventHandleComponentPhysicsStateChange_Parms, StateChange), Z_Construct_UEnum_Engine_EComponentPhysicsStateChange, METADATA_PARAMS(0, nullptr) }; // 1948275289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::NewProp_ChangedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::NewProp_StateChange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::NewProp_StateChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "HandleComponentPhysicsStateChange", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::ClusterUnionComponent_eventHandleComponentPhysicsStateChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::ClusterUnionComponent_eventHandleComponentPhysicsStateChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execHandleComponentPhysicsStateChange)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ChangedComponent);
	P_GET_ENUM(EComponentPhysicsStateChange,Z_Param_StateChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleComponentPhysicsStateChange(Z_Param_ChangedComponent,EComponentPhysicsStateChange(Z_Param_StateChange));
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function HandleComponentPhysicsStateChange

// Begin Class UClusterUnionComponent Function HandleComponentPhysicsStateChangePostAddIntoClusterUnion
struct Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics
{
	struct ClusterUnionComponent_eventHandleComponentPhysicsStateChangePostAddIntoClusterUnion_Parms
	{
		UPrimitiveComponent* ChangedComponent;
		EComponentPhysicsStateChange StateChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Once in the cluster union, if the component's physics state is destroyed, we should remove it from the cluster union.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
		{ "ToolTip", "Once in the cluster union, if the component's physics state is destroyed, we should remove it from the cluster union." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangedComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StateChange_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StateChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::NewProp_ChangedComponent = { "ChangedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventHandleComponentPhysicsStateChangePostAddIntoClusterUnion_Parms, ChangedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangedComponent_MetaData), NewProp_ChangedComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::NewProp_StateChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::NewProp_StateChange = { "StateChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventHandleComponentPhysicsStateChangePostAddIntoClusterUnion_Parms, StateChange), Z_Construct_UEnum_Engine_EComponentPhysicsStateChange, METADATA_PARAMS(0, nullptr) }; // 1948275289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::NewProp_ChangedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::NewProp_StateChange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::NewProp_StateChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "HandleComponentPhysicsStateChangePostAddIntoClusterUnion", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::ClusterUnionComponent_eventHandleComponentPhysicsStateChangePostAddIntoClusterUnion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::ClusterUnionComponent_eventHandleComponentPhysicsStateChangePostAddIntoClusterUnion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execHandleComponentPhysicsStateChangePostAddIntoClusterUnion)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ChangedComponent);
	P_GET_ENUM(EComponentPhysicsStateChange,Z_Param_StateChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleComponentPhysicsStateChangePostAddIntoClusterUnion(Z_Param_ChangedComponent,EComponentPhysicsStateChange(Z_Param_StateChange));
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function HandleComponentPhysicsStateChangePostAddIntoClusterUnion

// Begin Class UClusterUnionComponent Function IsAuthority
struct Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics
{
	struct ClusterUnionComponent_eventIsAuthority_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Whether or not this code is running on the server.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
		{ "ToolTip", "Whether or not this code is running on the server." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ClusterUnionComponent_eventIsAuthority_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClusterUnionComponent_eventIsAuthority_Parms), &Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "IsAuthority", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::ClusterUnionComponent_eventIsAuthority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::ClusterUnionComponent_eventIsAuthority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionComponent_IsAuthority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_IsAuthority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execIsAuthority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAuthority();
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function IsAuthority

// Begin Class UClusterUnionComponent Function IsComponentAdded
struct Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics
{
	struct ClusterUnionComponent_eventIsComponentAdded_Parms
	{
		UPrimitiveComponent* Component;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventIsComponentAdded_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
void Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ClusterUnionComponent_eventIsComponentAdded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClusterUnionComponent_eventIsComponentAdded_Parms), &Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "IsComponentAdded", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::ClusterUnionComponent_eventIsComponentAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::ClusterUnionComponent_eventIsComponentAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execIsComponentAdded)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsComponentAdded(Z_Param_Component);
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function IsComponentAdded

// Begin Class UClusterUnionComponent Function OnRep_RigidState
struct Z_Construct_UFunction_UClusterUnionComponent_OnRep_RigidState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Handles changes to ReplicatedRigidState. Note that this function does not handle replication of X/R since we make use\n// of the scene component's default replication for that.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
		{ "ToolTip", "Handles changes to ReplicatedRigidState. Note that this function does not handle replication of X/R since we make use\nof the scene component's default replication for that." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_OnRep_RigidState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "OnRep_RigidState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_OnRep_RigidState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_OnRep_RigidState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UClusterUnionComponent_OnRep_RigidState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_OnRep_RigidState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execOnRep_RigidState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RigidState();
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function OnRep_RigidState

// Begin Class UClusterUnionComponent Function RemoveComponentBonesFromCluster
struct Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics
{
	struct ClusterUnionComponent_eventRemoveComponentBonesFromCluster_Parms
	{
		UPrimitiveComponent* InComponent;
		TArray<int32> BoneIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cluster Union" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventRemoveComponentBonesFromCluster_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::NewProp_BoneIds_Inner = { "BoneIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::NewProp_BoneIds = { "BoneIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventRemoveComponentBonesFromCluster_Parms, BoneIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIds_MetaData), NewProp_BoneIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::NewProp_BoneIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::NewProp_BoneIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "RemoveComponentBonesFromCluster", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::ClusterUnionComponent_eventRemoveComponentBonesFromCluster_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::ClusterUnionComponent_eventRemoveComponentBonesFromCluster_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execRemoveComponentBonesFromCluster)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_GET_TARRAY_REF(int32,Z_Param_Out_BoneIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveComponentBonesFromCluster(Z_Param_InComponent,Z_Param_Out_BoneIds);
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function RemoveComponentBonesFromCluster

// Begin Class UClusterUnionComponent Function RemoveComponentFromCluster
struct Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics
{
	struct ClusterUnionComponent_eventRemoveComponentFromCluster_Parms
	{
		UPrimitiveComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cluster Union" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionComponent_eventRemoveComponentFromCluster_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "RemoveComponentFromCluster", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics::ClusterUnionComponent_eventRemoveComponentFromCluster_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics::ClusterUnionComponent_eventRemoveComponentFromCluster_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execRemoveComponentFromCluster)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveComponentFromCluster(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function RemoveComponentFromCluster

// Begin Class UClusterUnionComponent Function SetEnableDamageFromCollision
struct Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics
{
	struct ClusterUnionComponent_eventSetEnableDamageFromCollision_Parms
	{
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cluster Union" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((ClusterUnionComponent_eventSetEnableDamageFromCollision_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClusterUnionComponent_eventSetEnableDamageFromCollision_Parms), &Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "SetEnableDamageFromCollision", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::ClusterUnionComponent_eventSetEnableDamageFromCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::ClusterUnionComponent_eventSetEnableDamageFromCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execSetEnableDamageFromCollision)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableDamageFromCollision(Z_Param_bValue);
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function SetEnableDamageFromCollision

// Begin Class UClusterUnionComponent Function SetIsAnchored
struct Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics
{
	struct ClusterUnionComponent_eventSetIsAnchored_Parms
	{
		bool bIsAnchored;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cluster Union" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsAnchored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAnchored;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::NewProp_bIsAnchored_SetBit(void* Obj)
{
	((ClusterUnionComponent_eventSetIsAnchored_Parms*)Obj)->bIsAnchored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::NewProp_bIsAnchored = { "bIsAnchored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClusterUnionComponent_eventSetIsAnchored_Parms), &Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::NewProp_bIsAnchored_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::NewProp_bIsAnchored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionComponent, nullptr, "SetIsAnchored", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::ClusterUnionComponent_eventSetIsAnchored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::ClusterUnionComponent_eventSetIsAnchored_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionComponent::execSetIsAnchored)
{
	P_GET_UBOOL(Z_Param_bIsAnchored);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsAnchored(Z_Param_bIsAnchored);
	P_NATIVE_END;
}
// End Class UClusterUnionComponent Function SetIsAnchored

// Begin Class UClusterUnionComponent
void UClusterUnionComponent::StaticRegisterNativesUClusterUnionComponent()
{
	UClass* Class = UClusterUnionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddComponentToCluster", &UClusterUnionComponent::execAddComponentToCluster },
		{ "ForceSetChildToParent", &UClusterUnionComponent::execForceSetChildToParent },
		{ "GetActors", &UClusterUnionComponent::execGetActors },
		{ "GetPrimitiveComponents", &UClusterUnionComponent::execGetPrimitiveComponents },
		{ "HandleComponentPhysicsStateChange", &UClusterUnionComponent::execHandleComponentPhysicsStateChange },
		{ "HandleComponentPhysicsStateChangePostAddIntoClusterUnion", &UClusterUnionComponent::execHandleComponentPhysicsStateChangePostAddIntoClusterUnion },
		{ "IsAuthority", &UClusterUnionComponent::execIsAuthority },
		{ "IsComponentAdded", &UClusterUnionComponent::execIsComponentAdded },
		{ "OnRep_RigidState", &UClusterUnionComponent::execOnRep_RigidState },
		{ "RemoveComponentBonesFromCluster", &UClusterUnionComponent::execRemoveComponentBonesFromCluster },
		{ "RemoveComponentFromCluster", &UClusterUnionComponent::execRemoveComponentFromCluster },
		{ "SetEnableDamageFromCollision", &UClusterUnionComponent::execSetEnableDamageFromCollision },
		{ "SetIsAnchored", &UClusterUnionComponent::execSetIsAnchored },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClusterUnionComponent);
UClass* Z_Construct_UClass_UClusterUnionComponent_NoRegister()
{
	return UClusterUnionComponent::StaticClass();
}
struct Z_Construct_UClass_UClusterUnionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This does the bulk of the work exposing a physics cluster union to the game thread.\n * This component needs to be a primitive component primarily because of how physics\n * proxies need to be registered with the solver with an association with a primitive component.\n * This component can be used as part of AClusterUnionActor or on its own as its list of\n * clustered components/actors can be specified dynamically at runtime and/or statically\n * on asset creation.\n * \n * The cluster union component needs to not only maintain a game thread representation of what's happening on the\n * physics thread but it also needs to make sure this data gets replicated to every client. A general model of how\n * the data flow happens is as follows:\n * \n *  [Server GT Command] -> [Server PT Command] -> [Server Modifies PT Data] -> [Server Sync PT Data back to GT Data].\n * \n * This enables GT control over what happens to the cluster union BUT ALSO maintains a physics-first approach\n * to the cluster union where a physics event can possibly cause the cluster union to break.\n * \n * The GT data is replicated from the server to the clients either via the FClusterUnionReplicatedData on the cluster union component\n * or per-child component data is replicated via the UClusterUnionReplicatedProxyComponent. Generally, the same flow is\n * replicated on the client. The only exception is for replicating the X/R/V/W properties on the cluster union particle which does\n * a GT -> PT data sync. There's no particula reason this happens...it just mirrors the single particle physics proxy here.\n *\n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "PhysicsEngine/ClusterUnionComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This does the bulk of the work exposing a physics cluster union to the game thread.\nThis component needs to be a primitive component primarily because of how physics\nproxies need to be registered with the solver with an association with a primitive component.\nThis component can be used as part of AClusterUnionActor or on its own as its list of\nclustered components/actors can be specified dynamically at runtime and/or statically\non asset creation.\n\nThe cluster union component needs to not only maintain a game thread representation of what's happening on the\nphysics thread but it also needs to make sure this data gets replicated to every client. A general model of how\nthe data flow happens is as follows:\n\n [Server GT Command] -> [Server PT Command] -> [Server Modifies PT Data] -> [Server Sync PT Data back to GT Data].\n\nThis enables GT control over what happens to the cluster union BUT ALSO maintains a physics-first approach\nto the cluster union where a physics event can possibly cause the cluster union to break.\n\nThe GT data is replicated from the server to the clients either via the FClusterUnionReplicatedData on the cluster union component\nor per-child component data is replicated via the UClusterUnionReplicatedProxyComponent. Generally, the same flow is\nreplicated on the client. The only exception is for replicating the X/R/V/W properties on the cluster union particle which does\na GT -> PT data sync. There's no particula reason this happens...it just mirrors the single particle physics proxy here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDamageFromCollision_MetaData[] = {
		{ "BlueprintSetter", "SetEnableDamageFromCollision" },
		{ "Category", "Cluster Union" },
		{ "Comment", "/** Whether or not collisions against this geometry collection will apply strain which could cause the geometry collection to fracture. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
		{ "ToolTip", "Whether or not collisions against this geometry collection will apply strain which could cause the geometry collection to fracture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComponentAddedEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComponentRemovedEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComponentBoundsChangedEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusteredComponentsReferences_MetaData[] = {
		{ "Category", "Cluster Union" },
		{ "Comment", "// These are the statically clustered components. These should\n// be specified in the editor and never change.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
		{ "ToolTip", "These are the statically clustered components. These should\nbe specified in the editor and never change." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityGroupIndexOverride_MetaData[] = {
		{ "Category", "Cluster Union" },
		{ "Comment", "// If set to a value not equal to -1, will manually set the cluster union's gravity group\n// instead of automatically inheriting it from its children particles.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
		{ "ToolTip", "If set to a value not equal to -1, will manually set the cluster union's gravity group\ninstead of automatically inheriting it from its children particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedRigidState_MetaData[] = {
		{ "Comment", "// Data that can be changed at runtime to keep state about the cluster union consistent between the server and client.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionComponent.h" },
		{ "ToolTip", "Data that can be changed at runtime to keep state about the cluster union consistent between the server and client." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableDamageFromCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDamageFromCollision;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComponentAddedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComponentRemovedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComponentBoundsChangedEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClusteredComponentsReferences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClusteredComponentsReferences;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GravityGroupIndexOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedRigidState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UClusterUnionComponent_AddComponentToCluster, "AddComponentToCluster" }, // 4208285618
		{ &Z_Construct_UFunction_UClusterUnionComponent_ForceSetChildToParent, "ForceSetChildToParent" }, // 3350337638
		{ &Z_Construct_UFunction_UClusterUnionComponent_GetActors, "GetActors" }, // 3133103735
		{ &Z_Construct_UFunction_UClusterUnionComponent_GetPrimitiveComponents, "GetPrimitiveComponents" }, // 871847019
		{ &Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChange, "HandleComponentPhysicsStateChange" }, // 1297106151
		{ &Z_Construct_UFunction_UClusterUnionComponent_HandleComponentPhysicsStateChangePostAddIntoClusterUnion, "HandleComponentPhysicsStateChangePostAddIntoClusterUnion" }, // 3733002785
		{ &Z_Construct_UFunction_UClusterUnionComponent_IsAuthority, "IsAuthority" }, // 2209614445
		{ &Z_Construct_UFunction_UClusterUnionComponent_IsComponentAdded, "IsComponentAdded" }, // 3492093504
		{ &Z_Construct_UFunction_UClusterUnionComponent_OnRep_RigidState, "OnRep_RigidState" }, // 4091153116
		{ &Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentBonesFromCluster, "RemoveComponentBonesFromCluster" }, // 1337809555
		{ &Z_Construct_UFunction_UClusterUnionComponent_RemoveComponentFromCluster, "RemoveComponentFromCluster" }, // 2771156370
		{ &Z_Construct_UFunction_UClusterUnionComponent_SetEnableDamageFromCollision, "SetEnableDamageFromCollision" }, // 3173431378
		{ &Z_Construct_UFunction_UClusterUnionComponent_SetIsAnchored, "SetIsAnchored" }, // 1695306461
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClusterUnionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_bEnableDamageFromCollision_SetBit(void* Obj)
{
	((UClusterUnionComponent*)Obj)->bEnableDamageFromCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_bEnableDamageFromCollision = { "bEnableDamageFromCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UClusterUnionComponent), &Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_bEnableDamageFromCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDamageFromCollision_MetaData), NewProp_bEnableDamageFromCollision_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_OnComponentAddedEvent = { "OnComponentAddedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClusterUnionComponent, OnComponentAddedEvent), Z_Construct_UDelegateFunction_Engine_OnClusterUnionAddedComponent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComponentAddedEvent_MetaData), NewProp_OnComponentAddedEvent_MetaData) }; // 4227945436
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_OnComponentRemovedEvent = { "OnComponentRemovedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClusterUnionComponent, OnComponentRemovedEvent), Z_Construct_UDelegateFunction_Engine_OnClusterUnionRemovedComponent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComponentRemovedEvent_MetaData), NewProp_OnComponentRemovedEvent_MetaData) }; // 2299955397
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_OnComponentBoundsChangedEvent = { "OnComponentBoundsChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClusterUnionComponent, OnComponentBoundsChangedEvent), Z_Construct_UDelegateFunction_Engine_OnClusterUnionBoundsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComponentBoundsChangedEvent_MetaData), NewProp_OnComponentBoundsChangedEvent_MetaData) }; // 3862268544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_ClusteredComponentsReferences_Inner = { "ClusteredComponentsReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(0, nullptr) }; // 3869904073
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_ClusteredComponentsReferences = { "ClusteredComponentsReferences", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClusterUnionComponent, ClusteredComponentsReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusteredComponentsReferences_MetaData), NewProp_ClusteredComponentsReferences_MetaData) }; // 3869904073
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_GravityGroupIndexOverride = { "GravityGroupIndexOverride", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClusterUnionComponent, GravityGroupIndexOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityGroupIndexOverride_MetaData), NewProp_GravityGroupIndexOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_ReplicatedRigidState = { "ReplicatedRigidState", "OnRep_RigidState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClusterUnionComponent, ReplicatedRigidState), Z_Construct_UScriptStruct_FClusterUnionReplicatedData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedRigidState_MetaData), NewProp_ReplicatedRigidState_MetaData) }; // 1238186720
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClusterUnionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_bEnableDamageFromCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_OnComponentAddedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_OnComponentRemovedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_OnComponentBoundsChangedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_ClusteredComponentsReferences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_ClusteredComponentsReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_GravityGroupIndexOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionComponent_Statics::NewProp_ReplicatedRigidState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClusterUnionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UClusterUnionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClusterUnionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClusterUnionComponent_Statics::ClassParams = {
	&UClusterUnionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UClusterUnionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UClusterUnionComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClusterUnionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UClusterUnionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClusterUnionComponent()
{
	if (!Z_Registration_Info_UClass_UClusterUnionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClusterUnionComponent.OuterSingleton, Z_Construct_UClass_UClusterUnionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClusterUnionComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UClusterUnionComponent>()
{
	return UClusterUnionComponent::StaticClass();
}
void UClusterUnionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ReplicatedRigidState(TEXT("ReplicatedRigidState"));
	const bool bIsValid = true
		&& Name_ReplicatedRigidState == ClassReps[(int32)ENetFields_Private::ReplicatedRigidState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UClusterUnionComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClusterUnionComponent);
UClusterUnionComponent::~UClusterUnionComponent() {}
// End Class UClusterUnionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClusterUnionBoneData::StaticStruct, Z_Construct_UScriptStruct_FClusterUnionBoneData_Statics::NewStructOps, TEXT("ClusterUnionBoneData"), &Z_Registration_Info_UScriptStruct_ClusterUnionBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterUnionBoneData), 970358918U) },
		{ FClusteredComponentData::StaticStruct, Z_Construct_UScriptStruct_FClusteredComponentData_Statics::NewStructOps, TEXT("ClusteredComponentData"), &Z_Registration_Info_UScriptStruct_ClusteredComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusteredComponentData), 3361853406U) },
		{ FClusteredActorData::StaticStruct, Z_Construct_UScriptStruct_FClusteredActorData_Statics::NewStructOps, TEXT("ClusteredActorData"), &Z_Registration_Info_UScriptStruct_ClusteredActorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusteredActorData), 3986546145U) },
		{ FClusterUnionReplicatedData::StaticStruct, Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics::NewStructOps, TEXT("ClusterUnionReplicatedData"), &Z_Registration_Info_UScriptStruct_ClusterUnionReplicatedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterUnionReplicatedData), 1238186720U) },
		{ FClusterUnionPendingAddData::StaticStruct, Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics::NewStructOps, TEXT("ClusterUnionPendingAddData"), &Z_Registration_Info_UScriptStruct_ClusterUnionPendingAddData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterUnionPendingAddData), 3686448840U) },
		{ FClusterUnionInitializationData::StaticStruct, Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics::NewStructOps, TEXT("ClusterUnionInitializationData"), &Z_Registration_Info_UScriptStruct_ClusterUnionInitializationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterUnionInitializationData), 628843997U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClusterUnionComponent, UClusterUnionComponent::StaticClass, TEXT("UClusterUnionComponent"), &Z_Registration_Info_UClass_UClusterUnionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClusterUnionComponent), 4118067516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_1295104455(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
