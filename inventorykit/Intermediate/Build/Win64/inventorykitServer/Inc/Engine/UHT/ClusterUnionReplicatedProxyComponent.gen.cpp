// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClusterUnionReplicatedProxyComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UClusterUnionComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UClusterUnionReplicatedProxyComponent();
ENGINE_API UClass* Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UClusterUnionReplicatedProxyComponent Function GetChildClusteredComponent
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics
{
	struct ClusterUnionReplicatedProxyComponent_eventGetChildClusteredComponent_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionReplicatedProxyComponent_eventGetChildClusteredComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "GetChildClusteredComponent", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics::ClusterUnionReplicatedProxyComponent_eventGetChildClusteredComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics::ClusterUnionReplicatedProxyComponent_eventGetChildClusteredComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execGetChildClusteredComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetChildClusteredComponent();
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function GetChildClusteredComponent

// Begin Class UClusterUnionReplicatedProxyComponent Function GetParentClusterUnionComponent
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics
{
	struct ClusterUnionReplicatedProxyComponent_eventGetParentClusterUnionComponent_Parms
	{
		UClusterUnionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionReplicatedProxyComponent_eventGetParentClusterUnionComponent_Parms, ReturnValue), Z_Construct_UClass_UClusterUnionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "GetParentClusterUnionComponent", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics::ClusterUnionReplicatedProxyComponent_eventGetParentClusterUnionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics::ClusterUnionReplicatedProxyComponent_eventGetParentClusterUnionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execGetParentClusterUnionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClusterUnionComponent**)Z_Param__Result=P_THIS->GetParentClusterUnionComponent();
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function GetParentClusterUnionComponent

// Begin Class UClusterUnionReplicatedProxyComponent Function GetParticleBoneIds
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics
{
	struct ClusterUnionReplicatedProxyComponent_eventGetParticleBoneIds_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionReplicatedProxyComponent_eventGetParticleBoneIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "GetParticleBoneIds", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::ClusterUnionReplicatedProxyComponent_eventGetParticleBoneIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::ClusterUnionReplicatedProxyComponent_eventGetParticleBoneIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execGetParticleBoneIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetParticleBoneIds();
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function GetParticleBoneIds

// Begin Class UClusterUnionReplicatedProxyComponent Function IsPendingDeletion
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics
{
	struct ClusterUnionReplicatedProxyComponent_eventIsPendingDeletion_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ClusterUnionReplicatedProxyComponent_eventIsPendingDeletion_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ClusterUnionReplicatedProxyComponent_eventIsPendingDeletion_Parms), &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "IsPendingDeletion", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::ClusterUnionReplicatedProxyComponent_eventIsPendingDeletion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::ClusterUnionReplicatedProxyComponent_eventIsPendingDeletion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execIsPendingDeletion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPendingDeletion();
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function IsPendingDeletion

// Begin Class UClusterUnionReplicatedProxyComponent Function MarkPendingDeletion
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_MarkPendingDeletion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_MarkPendingDeletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "MarkPendingDeletion", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_MarkPendingDeletion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_MarkPendingDeletion_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_MarkPendingDeletion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_MarkPendingDeletion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execMarkPendingDeletion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MarkPendingDeletion();
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function MarkPendingDeletion

// Begin Class UClusterUnionReplicatedProxyComponent Function OnRep_ChildClusteredComponent
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ChildClusteredComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ChildClusteredComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "OnRep_ChildClusteredComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ChildClusteredComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ChildClusteredComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ChildClusteredComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ChildClusteredComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execOnRep_ChildClusteredComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ChildClusteredComponent();
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function OnRep_ChildClusteredComponent

// Begin Class UClusterUnionReplicatedProxyComponent Function OnRep_ParentClusterUnion
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParentClusterUnion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParentClusterUnion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "OnRep_ParentClusterUnion", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParentClusterUnion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParentClusterUnion_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParentClusterUnion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParentClusterUnion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execOnRep_ParentClusterUnion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ParentClusterUnion();
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function OnRep_ParentClusterUnion

// Begin Class UClusterUnionReplicatedProxyComponent Function OnRep_ParticleBoneIds
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleBoneIds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleBoneIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "OnRep_ParticleBoneIds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleBoneIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleBoneIds_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleBoneIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleBoneIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execOnRep_ParticleBoneIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ParticleBoneIds();
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function OnRep_ParticleBoneIds

// Begin Class UClusterUnionReplicatedProxyComponent Function OnRep_ParticleChildToParents
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleChildToParents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleChildToParents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "OnRep_ParticleChildToParents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleChildToParents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleChildToParents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleChildToParents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleChildToParents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execOnRep_ParticleChildToParents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ParticleChildToParents();
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function OnRep_ParticleChildToParents

// Begin Class UClusterUnionReplicatedProxyComponent Function SetChildClusteredComponent
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics
{
	struct ClusterUnionReplicatedProxyComponent_eventSetChildClusteredComponent_Parms
	{
		UPrimitiveComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionReplicatedProxyComponent_eventSetChildClusteredComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "SetChildClusteredComponent", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics::ClusterUnionReplicatedProxyComponent_eventSetChildClusteredComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics::ClusterUnionReplicatedProxyComponent_eventSetChildClusteredComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execSetChildClusteredComponent)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChildClusteredComponent(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function SetChildClusteredComponent

// Begin Class UClusterUnionReplicatedProxyComponent Function SetParentClusterUnion
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics
{
	struct ClusterUnionReplicatedProxyComponent_eventSetParentClusterUnion_Parms
	{
		UClusterUnionComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionReplicatedProxyComponent_eventSetParentClusterUnion_Parms, InComponent), Z_Construct_UClass_UClusterUnionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "SetParentClusterUnion", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics::ClusterUnionReplicatedProxyComponent_eventSetParentClusterUnion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics::ClusterUnionReplicatedProxyComponent_eventSetParentClusterUnion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execSetParentClusterUnion)
{
	P_GET_OBJECT(UClusterUnionComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParentClusterUnion(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function SetParentClusterUnion

// Begin Class UClusterUnionReplicatedProxyComponent Function SetParticleBoneIds
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics
{
	struct ClusterUnionReplicatedProxyComponent_eventSetParticleBoneIds_Parms
	{
		TArray<int32> InIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::NewProp_InIds_Inner = { "InIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::NewProp_InIds = { "InIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionReplicatedProxyComponent_eventSetParticleBoneIds_Parms, InIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InIds_MetaData), NewProp_InIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::NewProp_InIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::NewProp_InIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "SetParticleBoneIds", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::ClusterUnionReplicatedProxyComponent_eventSetParticleBoneIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::ClusterUnionReplicatedProxyComponent_eventSetParticleBoneIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execSetParticleBoneIds)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParticleBoneIds(Z_Param_Out_InIds);
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function SetParticleBoneIds

// Begin Class UClusterUnionReplicatedProxyComponent Function SetParticleChildToParent
struct Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics
{
	struct ClusterUnionReplicatedProxyComponent_eventSetParticleChildToParent_Parms
	{
		int32 BoneId;
		FTransform ChildToParent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildToParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildToParent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionReplicatedProxyComponent_eventSetParticleChildToParent_Parms, BoneId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::NewProp_ChildToParent = { "ChildToParent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionReplicatedProxyComponent_eventSetParticleChildToParent_Parms, ChildToParent), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildToParent_MetaData), NewProp_ChildToParent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::NewProp_BoneId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::NewProp_ChildToParent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, nullptr, "SetParticleChildToParent", nullptr, nullptr, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::ClusterUnionReplicatedProxyComponent_eventSetParticleChildToParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::ClusterUnionReplicatedProxyComponent_eventSetParticleChildToParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClusterUnionReplicatedProxyComponent::execSetParticleChildToParent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BoneId);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_ChildToParent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParticleChildToParent(Z_Param_BoneId,Z_Param_Out_ChildToParent);
	P_NATIVE_END;
}
// End Class UClusterUnionReplicatedProxyComponent Function SetParticleChildToParent

// Begin Class UClusterUnionReplicatedProxyComponent
void UClusterUnionReplicatedProxyComponent::StaticRegisterNativesUClusterUnionReplicatedProxyComponent()
{
	UClass* Class = UClusterUnionReplicatedProxyComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetChildClusteredComponent", &UClusterUnionReplicatedProxyComponent::execGetChildClusteredComponent },
		{ "GetParentClusterUnionComponent", &UClusterUnionReplicatedProxyComponent::execGetParentClusterUnionComponent },
		{ "GetParticleBoneIds", &UClusterUnionReplicatedProxyComponent::execGetParticleBoneIds },
		{ "IsPendingDeletion", &UClusterUnionReplicatedProxyComponent::execIsPendingDeletion },
		{ "MarkPendingDeletion", &UClusterUnionReplicatedProxyComponent::execMarkPendingDeletion },
		{ "OnRep_ChildClusteredComponent", &UClusterUnionReplicatedProxyComponent::execOnRep_ChildClusteredComponent },
		{ "OnRep_ParentClusterUnion", &UClusterUnionReplicatedProxyComponent::execOnRep_ParentClusterUnion },
		{ "OnRep_ParticleBoneIds", &UClusterUnionReplicatedProxyComponent::execOnRep_ParticleBoneIds },
		{ "OnRep_ParticleChildToParents", &UClusterUnionReplicatedProxyComponent::execOnRep_ParticleChildToParents },
		{ "SetChildClusteredComponent", &UClusterUnionReplicatedProxyComponent::execSetChildClusteredComponent },
		{ "SetParentClusterUnion", &UClusterUnionReplicatedProxyComponent::execSetParentClusterUnion },
		{ "SetParticleBoneIds", &UClusterUnionReplicatedProxyComponent::execSetParticleBoneIds },
		{ "SetParticleChildToParent", &UClusterUnionReplicatedProxyComponent::execSetParticleChildToParent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClusterUnionReplicatedProxyComponent);
UClass* Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_NoRegister()
{
	return UClusterUnionReplicatedProxyComponent::StaticClass();
}
struct Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This component lets us store replicated information about how any particular UPrimitiveComponent\n * should be attached to its parent cluster union. The benefits of using a separate components are:\n * \n *\x09""1) It lets us avoid adding any additional overhead into the UPrimitiveComponent.\n *  2) It lets the replicated information have the same net relevancy as the actor being added to the cluster union\n *     rather than having the same net relevancy as the cluster union (i.e. in the case of replicating this data in\n *     an array in the ClusterUnionComponent).\n *  3) It lets us pinpoint what exactly is being added/removed (vs if all this data was stored in an array) which lets\n *     us be a bit more efficient in terms of modifying the cluster union.\n */" },
		{ "IncludePath", "PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This component lets us store replicated information about how any particular UPrimitiveComponent\nshould be attached to its parent cluster union. The benefits of using a separate components are:\n\n    1) It lets us avoid adding any additional overhead into the UPrimitiveComponent.\n 2) It lets the replicated information have the same net relevancy as the actor being added to the cluster union\n    rather than having the same net relevancy as the cluster union (i.e. in the case of replicating this data in\n    an array in the ClusterUnionComponent).\n 3) It lets us pinpoint what exactly is being added/removed (vs if all this data was stored in an array) which lets\n    us be a bit more efficient in terms of modifying the cluster union." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClusterUnion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetUpdateParentClusterUnion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildClusteredComponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetUpdateChildClusteredComponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleBoneIds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetUpdateParticleBoneIds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleChildToParents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetUpdateParticleChildToParents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPendingDeletion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionReplicatedProxyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentClusterUnion;
	static void NewProp_bNetUpdateParentClusterUnion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetUpdateParentClusterUnion;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ChildClusteredComponent;
	static void NewProp_bNetUpdateChildClusteredComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetUpdateChildClusteredComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleBoneIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticleBoneIds;
	static void NewProp_bNetUpdateParticleBoneIds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetUpdateParticleBoneIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleChildToParents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticleChildToParents;
	static void NewProp_bNetUpdateParticleChildToParents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetUpdateParticleChildToParents;
	static void NewProp_bIsPendingDeletion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPendingDeletion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetChildClusteredComponent, "GetChildClusteredComponent" }, // 3563103234
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParentClusterUnionComponent, "GetParentClusterUnionComponent" }, // 516017022
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_GetParticleBoneIds, "GetParticleBoneIds" }, // 1025607259
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_IsPendingDeletion, "IsPendingDeletion" }, // 1604979618
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_MarkPendingDeletion, "MarkPendingDeletion" }, // 3017471102
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ChildClusteredComponent, "OnRep_ChildClusteredComponent" }, // 3779086176
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParentClusterUnion, "OnRep_ParentClusterUnion" }, // 1953229731
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleBoneIds, "OnRep_ParticleBoneIds" }, // 621944458
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_OnRep_ParticleChildToParents, "OnRep_ParticleChildToParents" }, // 1282769023
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetChildClusteredComponent, "SetChildClusteredComponent" }, // 1000760133
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParentClusterUnion, "SetParentClusterUnion" }, // 830406375
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleBoneIds, "SetParticleBoneIds" }, // 3662649670
		{ &Z_Construct_UFunction_UClusterUnionReplicatedProxyComponent_SetParticleChildToParent, "SetParticleChildToParent" }, // 424635957
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClusterUnionReplicatedProxyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_ParentClusterUnion = { "ParentClusterUnion", "OnRep_ParentClusterUnion", (EPropertyFlags)0x0044000100080028, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClusterUnionReplicatedProxyComponent, ParentClusterUnion), Z_Construct_UClass_UClusterUnionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClusterUnion_MetaData), NewProp_ParentClusterUnion_MetaData) };
void Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateParentClusterUnion_SetBit(void* Obj)
{
	((UClusterUnionReplicatedProxyComponent*)Obj)->bNetUpdateParentClusterUnion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateParentClusterUnion = { "bNetUpdateParentClusterUnion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UClusterUnionReplicatedProxyComponent), &Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateParentClusterUnion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetUpdateParentClusterUnion_MetaData), NewProp_bNetUpdateParentClusterUnion_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_ChildClusteredComponent = { "ChildClusteredComponent", "OnRep_ChildClusteredComponent", (EPropertyFlags)0x0044000100080028, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClusterUnionReplicatedProxyComponent, ChildClusteredComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildClusteredComponent_MetaData), NewProp_ChildClusteredComponent_MetaData) };
void Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateChildClusteredComponent_SetBit(void* Obj)
{
	((UClusterUnionReplicatedProxyComponent*)Obj)->bNetUpdateChildClusteredComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateChildClusteredComponent = { "bNetUpdateChildClusteredComponent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UClusterUnionReplicatedProxyComponent), &Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateChildClusteredComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetUpdateChildClusteredComponent_MetaData), NewProp_bNetUpdateChildClusteredComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_ParticleBoneIds_Inner = { "ParticleBoneIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_ParticleBoneIds = { "ParticleBoneIds", "OnRep_ParticleBoneIds", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClusterUnionReplicatedProxyComponent, ParticleBoneIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleBoneIds_MetaData), NewProp_ParticleBoneIds_MetaData) };
void Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateParticleBoneIds_SetBit(void* Obj)
{
	((UClusterUnionReplicatedProxyComponent*)Obj)->bNetUpdateParticleBoneIds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateParticleBoneIds = { "bNetUpdateParticleBoneIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UClusterUnionReplicatedProxyComponent), &Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateParticleBoneIds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetUpdateParticleBoneIds_MetaData), NewProp_bNetUpdateParticleBoneIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_ParticleChildToParents_Inner = { "ParticleChildToParents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_ParticleChildToParents = { "ParticleChildToParents", "OnRep_ParticleChildToParents", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClusterUnionReplicatedProxyComponent, ParticleChildToParents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleChildToParents_MetaData), NewProp_ParticleChildToParents_MetaData) };
void Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateParticleChildToParents_SetBit(void* Obj)
{
	((UClusterUnionReplicatedProxyComponent*)Obj)->bNetUpdateParticleChildToParents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateParticleChildToParents = { "bNetUpdateParticleChildToParents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UClusterUnionReplicatedProxyComponent), &Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateParticleChildToParents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetUpdateParticleChildToParents_MetaData), NewProp_bNetUpdateParticleChildToParents_MetaData) };
void Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bIsPendingDeletion_SetBit(void* Obj)
{
	((UClusterUnionReplicatedProxyComponent*)Obj)->bIsPendingDeletion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bIsPendingDeletion = { "bIsPendingDeletion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UClusterUnionReplicatedProxyComponent), &Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bIsPendingDeletion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPendingDeletion_MetaData), NewProp_bIsPendingDeletion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_ParentClusterUnion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateParentClusterUnion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_ChildClusteredComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateChildClusteredComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_ParticleBoneIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_ParticleBoneIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateParticleBoneIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_ParticleChildToParents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_ParticleChildToParents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bNetUpdateParticleChildToParents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::NewProp_bIsPendingDeletion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::ClassParams = {
	&UClusterUnionReplicatedProxyComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClusterUnionReplicatedProxyComponent()
{
	if (!Z_Registration_Info_UClass_UClusterUnionReplicatedProxyComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClusterUnionReplicatedProxyComponent.OuterSingleton, Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClusterUnionReplicatedProxyComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UClusterUnionReplicatedProxyComponent>()
{
	return UClusterUnionReplicatedProxyComponent::StaticClass();
}
void UClusterUnionReplicatedProxyComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ParentClusterUnion(TEXT("ParentClusterUnion"));
	static const FName Name_ChildClusteredComponent(TEXT("ChildClusteredComponent"));
	static const FName Name_ParticleBoneIds(TEXT("ParticleBoneIds"));
	static const FName Name_ParticleChildToParents(TEXT("ParticleChildToParents"));
	const bool bIsValid = true
		&& Name_ParentClusterUnion == ClassReps[(int32)ENetFields_Private::ParentClusterUnion].Property->GetFName()
		&& Name_ChildClusteredComponent == ClassReps[(int32)ENetFields_Private::ChildClusteredComponent].Property->GetFName()
		&& Name_ParticleBoneIds == ClassReps[(int32)ENetFields_Private::ParticleBoneIds].Property->GetFName()
		&& Name_ParticleChildToParents == ClassReps[(int32)ENetFields_Private::ParticleChildToParents].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UClusterUnionReplicatedProxyComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClusterUnionReplicatedProxyComponent);
UClusterUnionReplicatedProxyComponent::~UClusterUnionReplicatedProxyComponent() {}
// End Class UClusterUnionReplicatedProxyComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClusterUnionReplicatedProxyComponent, UClusterUnionReplicatedProxyComponent::StaticClass, TEXT("UClusterUnionReplicatedProxyComponent"), &Z_Registration_Info_UClass_UClusterUnionReplicatedProxyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClusterUnionReplicatedProxyComponent), 1540896809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h_1789016155(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
