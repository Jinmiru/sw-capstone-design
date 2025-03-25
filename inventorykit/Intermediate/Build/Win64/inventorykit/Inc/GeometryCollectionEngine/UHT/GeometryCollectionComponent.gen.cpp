// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionComponent.h"
#include "Runtime/Engine/Public/Physics/Experimental/ChaosEventType.h"
#include "Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosNotifyHandlerInterface.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionDamagePropagationData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionComponent() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EDamageModelTypeEnum();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EObjectStateTypeEnum();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister();
CHAOSSOLVERENGINE_API UEnum* Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum();
CHAOSSOLVERENGINE_API UFunction* Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature();
CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCrumblingEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEvent();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_AFieldSystemActor_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldNodeBase_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemMetaData_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionISMPoolActor_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionCache_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature();
GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature();
GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature();
GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionFullyDecayedEvent__DelegateSignature();
GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionRootMovedEvent__DelegateSignature();
GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature();
GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeomComponentCacheParameters();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionRepData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionRepStateData();
PHYSICSCORE_API UClass* Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Delegate FOnChaosBreakEvent
struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics
{
	struct _Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms
	{
		FChaosBreakEvent BreakEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BreakEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::NewProp_BreakEvent = { "BreakEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms, BreakEvent), Z_Construct_UScriptStruct_FChaosBreakEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakEvent_MetaData), NewProp_BreakEvent_MetaData) }; // 1524158577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::NewProp_BreakEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosBreakEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChaosBreakEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosBreakEvent, FChaosBreakEvent const& BreakEvent)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms
	{
		FChaosBreakEvent BreakEvent;
	};
	_Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms Parms;
	Parms.BreakEvent=BreakEvent;
	OnChaosBreakEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChaosBreakEvent

// Begin Delegate FOnChaosRemovalEvent
struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics
{
	struct _Script_GeometryCollectionEngine_eventOnChaosRemovalEvent_Parms
	{
		FChaosRemovalEvent RemovalEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovalEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::NewProp_RemovalEvent = { "RemovalEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosRemovalEvent_Parms, RemovalEvent), Z_Construct_UScriptStruct_FChaosRemovalEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalEvent_MetaData), NewProp_RemovalEvent_MetaData) }; // 2076141616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::NewProp_RemovalEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosRemovalEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosRemovalEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosRemovalEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChaosRemovalEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosRemovalEvent, FChaosRemovalEvent const& RemovalEvent)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosRemovalEvent_Parms
	{
		FChaosRemovalEvent RemovalEvent;
	};
	_Script_GeometryCollectionEngine_eventOnChaosRemovalEvent_Parms Parms;
	Parms.RemovalEvent=RemovalEvent;
	OnChaosRemovalEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChaosRemovalEvent

// Begin Delegate FOnChaosCrumblingEvent
struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics
{
	struct _Script_GeometryCollectionEngine_eventOnChaosCrumblingEvent_Parms
	{
		FChaosCrumblingEvent CrumbleEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrumbleEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CrumbleEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::NewProp_CrumbleEvent = { "CrumbleEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosCrumblingEvent_Parms, CrumbleEvent), Z_Construct_UScriptStruct_FChaosCrumblingEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrumbleEvent_MetaData), NewProp_CrumbleEvent_MetaData) }; // 548874048
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::NewProp_CrumbleEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosCrumblingEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosCrumblingEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosCrumblingEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChaosCrumblingEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosCrumblingEvent, FChaosCrumblingEvent const& CrumbleEvent)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosCrumblingEvent_Parms
	{
		FChaosCrumblingEvent CrumbleEvent;
	};
	_Script_GeometryCollectionEngine_eventOnChaosCrumblingEvent_Parms Parms;
	Parms.CrumbleEvent=CrumbleEvent;
	OnChaosCrumblingEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChaosCrumblingEvent

// Begin Delegate FOnGeometryCollectionFullyDecayedEvent
struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionFullyDecayedEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionFullyDecayedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnGeometryCollectionFullyDecayedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionFullyDecayedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionFullyDecayedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionFullyDecayedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionFullyDecayedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGeometryCollectionFullyDecayedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGeometryCollectionFullyDecayedEvent)
{
	OnGeometryCollectionFullyDecayedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGeometryCollectionFullyDecayedEvent

// Begin Delegate FOnGeometryCollectionRootMovedEvent
struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionRootMovedEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionRootMovedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnGeometryCollectionRootMovedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionRootMovedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionRootMovedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionRootMovedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnGeometryCollectionRootMovedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGeometryCollectionRootMovedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGeometryCollectionRootMovedEvent)
{
	OnGeometryCollectionRootMovedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGeometryCollectionRootMovedEvent

// Begin ScriptStruct FGeomComponentCacheParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters;
class UScriptStruct* FGeomComponentCacheParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeomComponentCacheParameters, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeomComponentCacheParameters"));
	}
	return Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeomComponentCacheParameters>()
{
	return FGeomComponentCacheParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheMode_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Cache mode, whether disabled, playing or recording\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Cache mode, whether disabled, playing or recording" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCache_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// The cache to target when recording or playing\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "The cache to target when recording or playing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverseCacheBeginTime_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Cache mode, whether disabled, playing or recording\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Cache mode, whether disabled, playing or recording" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveCollisionData_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Whether to buffer collisions during recording\n" },
		{ "DisplayName", "Record Collision Data" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to buffer collisions during recording" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoGenerateCollisionData_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Whether to generate collisions during playback\n" },
		{ "DisplayName", "Generate Collision Data during Playback" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to generate collisions during playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionDataSizeMax_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Maximum size of the collision buffer\n" },
		{ "DisplayName", "Collision Data Size Maximum" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum size of the collision buffer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoCollisionDataSpatialHash_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Spatial hash collision data\n" },
		{ "DisplayName", "Spatial Hash Collision Data" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Spatial hash collision data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionDataSpatialHashRadius_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Spatial hash radius for collision data\n" },
		{ "DisplayName", "Spatial Hash Radius" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Spatial hash radius for collision data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionPerCell_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Maximum number of collisions per cell\n" },
		{ "DisplayName", "Maximum Number of Collisions Per Cell" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum number of collisions per cell" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveBreakingData_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Whether to buffer breakings during recording\n" },
		{ "DisplayName", "Record Breaking Data" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to buffer breakings during recording" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoGenerateBreakingData_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Whether to generate breakings during playback\n" },
		{ "DisplayName", "Generate Breaking Data during Playback" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to generate breakings during playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakingDataSizeMax_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Maximum size of the breaking buffer\n" },
		{ "DisplayName", "Breaking Data Size Maximum" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum size of the breaking buffer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoBreakingDataSpatialHash_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Spatial hash breaking data\n" },
		{ "DisplayName", "Spatial Hash Breaking Data" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Spatial hash breaking data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakingDataSpatialHashRadius_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Spatial hash radius for breaking data\n" },
		{ "DisplayName", "Spatial Hash Radius" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Spatial hash radius for breaking data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBreakingPerCell_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Maximum number of breaking per cell\n" },
		{ "DisplayName", "Maximum Number of Breakings Per Cell" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum number of breaking per cell" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveTrailingData_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Whether to buffer trailings during recording\n" },
		{ "DisplayName", "Record Trailing Data" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to buffer trailings during recording" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoGenerateTrailingData_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Whether to generate trailings during playback\n" },
		{ "DisplayName", "Generate Trailing Data during Playback" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to generate trailings during playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailingDataSizeMax_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Maximum size of the trailing buffer\n" },
		{ "DisplayName", "Trailing Data Size Maximum" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum size of the trailing buffer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailingMinSpeedThreshold_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Minimum speed to record trailing\n" },
		{ "DisplayName", "Trailing Minimum Speed Threshold" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Minimum speed to record trailing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailingMinVolumeThreshold_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Minimum volume to record trailing\n" },
		{ "DisplayName", "Trailing Minimum Volume Threshold" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Minimum volume to record trailing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CacheMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCache;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverseCacheBeginTime;
	static void NewProp_SaveCollisionData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveCollisionData;
	static void NewProp_DoGenerateCollisionData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoGenerateCollisionData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionDataSizeMax;
	static void NewProp_DoCollisionDataSpatialHash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoCollisionDataSpatialHash;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionDataSpatialHashRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCollisionPerCell;
	static void NewProp_SaveBreakingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveBreakingData;
	static void NewProp_DoGenerateBreakingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoGenerateBreakingData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BreakingDataSizeMax;
	static void NewProp_DoBreakingDataSpatialHash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoBreakingDataSpatialHash;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakingDataSpatialHashRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBreakingPerCell;
	static void NewProp_SaveTrailingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveTrailingData;
	static void NewProp_DoGenerateTrailingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoGenerateTrailingData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TrailingDataSizeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrailingMinSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrailingMinVolumeThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeomComponentCacheParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode = { "CacheMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, CacheMode), Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheMode_MetaData), NewProp_CacheMode_MetaData) }; // 2980722996
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TargetCache = { "TargetCache", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, TargetCache), Z_Construct_UClass_UGeometryCollectionCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCache_MetaData), NewProp_TargetCache_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_ReverseCacheBeginTime = { "ReverseCacheBeginTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, ReverseCacheBeginTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverseCacheBeginTime_MetaData), NewProp_ReverseCacheBeginTime_MetaData) };
void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData_SetBit(void* Obj)
{
	((FGeomComponentCacheParameters*)Obj)->SaveCollisionData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData = { "SaveCollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveCollisionData_MetaData), NewProp_SaveCollisionData_MetaData) };
void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateCollisionData_SetBit(void* Obj)
{
	((FGeomComponentCacheParameters*)Obj)->DoGenerateCollisionData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateCollisionData = { "DoGenerateCollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateCollisionData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoGenerateCollisionData_MetaData), NewProp_DoGenerateCollisionData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSizeMax = { "CollisionDataSizeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, CollisionDataSizeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionDataSizeMax_MetaData), NewProp_CollisionDataSizeMax_MetaData) };
void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash_SetBit(void* Obj)
{
	((FGeomComponentCacheParameters*)Obj)->DoCollisionDataSpatialHash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash = { "DoCollisionDataSpatialHash", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoCollisionDataSpatialHash_MetaData), NewProp_DoCollisionDataSpatialHash_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSpatialHashRadius = { "CollisionDataSpatialHashRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, CollisionDataSpatialHashRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionDataSpatialHashRadius_MetaData), NewProp_CollisionDataSpatialHashRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxCollisionPerCell = { "MaxCollisionPerCell", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, MaxCollisionPerCell), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCollisionPerCell_MetaData), NewProp_MaxCollisionPerCell_MetaData) };
void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveBreakingData_SetBit(void* Obj)
{
	((FGeomComponentCacheParameters*)Obj)->SaveBreakingData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveBreakingData = { "SaveBreakingData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveBreakingData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveBreakingData_MetaData), NewProp_SaveBreakingData_MetaData) };
void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateBreakingData_SetBit(void* Obj)
{
	((FGeomComponentCacheParameters*)Obj)->DoGenerateBreakingData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateBreakingData = { "DoGenerateBreakingData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateBreakingData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoGenerateBreakingData_MetaData), NewProp_DoGenerateBreakingData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSizeMax = { "BreakingDataSizeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, BreakingDataSizeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakingDataSizeMax_MetaData), NewProp_BreakingDataSizeMax_MetaData) };
void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoBreakingDataSpatialHash_SetBit(void* Obj)
{
	((FGeomComponentCacheParameters*)Obj)->DoBreakingDataSpatialHash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoBreakingDataSpatialHash = { "DoBreakingDataSpatialHash", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoBreakingDataSpatialHash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoBreakingDataSpatialHash_MetaData), NewProp_DoBreakingDataSpatialHash_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSpatialHashRadius = { "BreakingDataSpatialHashRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, BreakingDataSpatialHashRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakingDataSpatialHashRadius_MetaData), NewProp_BreakingDataSpatialHashRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxBreakingPerCell = { "MaxBreakingPerCell", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, MaxBreakingPerCell), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBreakingPerCell_MetaData), NewProp_MaxBreakingPerCell_MetaData) };
void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData_SetBit(void* Obj)
{
	((FGeomComponentCacheParameters*)Obj)->SaveTrailingData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData = { "SaveTrailingData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveTrailingData_MetaData), NewProp_SaveTrailingData_MetaData) };
void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateTrailingData_SetBit(void* Obj)
{
	((FGeomComponentCacheParameters*)Obj)->DoGenerateTrailingData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateTrailingData = { "DoGenerateTrailingData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateTrailingData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoGenerateTrailingData_MetaData), NewProp_DoGenerateTrailingData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingDataSizeMax = { "TrailingDataSizeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, TrailingDataSizeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailingDataSizeMax_MetaData), NewProp_TrailingDataSizeMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinSpeedThreshold = { "TrailingMinSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, TrailingMinSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailingMinSpeedThreshold_MetaData), NewProp_TrailingMinSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinVolumeThreshold = { "TrailingMinVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeomComponentCacheParameters, TrailingMinVolumeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailingMinVolumeThreshold_MetaData), NewProp_TrailingMinVolumeThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TargetCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_ReverseCacheBeginTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateCollisionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSizeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSpatialHashRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxCollisionPerCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveBreakingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateBreakingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSizeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoBreakingDataSpatialHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSpatialHashRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxBreakingPerCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateTrailingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingDataSizeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinVolumeThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeomComponentCacheParameters",
	Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::PropPointers),
	sizeof(FGeomComponentCacheParameters),
	alignof(FGeomComponentCacheParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeomComponentCacheParameters()
{
	if (!Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters.InnerSingleton, Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters.InnerSingleton;
}
// End ScriptStruct FGeomComponentCacheParameters

// Begin ScriptStruct FGeometryCollectionRepData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionRepData;
class UScriptStruct* FGeometryCollectionRepData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionRepData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionRepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionRepData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionRepData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionRepData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionRepData>()
{
	return FGeometryCollectionRepData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Replicated data for a geometry collection when bEnableReplication is true for\n * that component. See UGeomtryCollectionComponent::UpdateRepData\n */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Replicated data for a geometry collection when bEnableReplication is true for\nthat component. See UGeomtryCollectionComponent::UpdateRepData" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionRepData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionRepData",
	nullptr,
	0,
	sizeof(FGeometryCollectionRepData),
	alignof(FGeometryCollectionRepData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionRepData()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionRepData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionRepData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionRepData.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionRepData

// Begin ScriptStruct FGeometryCollectionRepStateData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionRepStateData;
class UScriptStruct* FGeometryCollectionRepStateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionRepStateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionRepStateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionRepStateData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionRepStateData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionRepStateData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionRepStateData>()
{
	return FGeometryCollectionRepStateData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionRepStateData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Replicated state data for a geometry collection when bEnableReplication is true for that component.\n* State data means what is broken and what is not \n* See UGeomtryCollectionComponent::UpdateRepData\n*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Replicated state data for a geometry collection when bEnableReplication is true for that component.\nState data means what is broken and what is not\nSee UGeomtryCollectionComponent::UpdateRepData" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionRepStateData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionRepStateData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionRepStateData",
	nullptr,
	0,
	sizeof(FGeometryCollectionRepStateData),
	alignof(FGeometryCollectionRepStateData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionRepStateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionRepStateData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionRepStateData()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionRepStateData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionRepStateData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionRepStateData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionRepStateData.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionRepStateData

// Begin ScriptStruct FGeometryCollectionRepDynamicData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionRepDynamicData;
class UScriptStruct* FGeometryCollectionRepDynamicData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionRepDynamicData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionRepDynamicData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionRepDynamicData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionRepDynamicData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionRepDynamicData>()
{
	return FGeometryCollectionRepDynamicData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// this structure holds entries for the tracked pieces to be replicated\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "this structure holds entries for the tracked pieces to be replicated" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionRepDynamicData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"GeometryCollectionRepDynamicData",
	nullptr,
	0,
	sizeof(FGeometryCollectionRepDynamicData),
	alignof(FGeometryCollectionRepDynamicData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionRepDynamicData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionRepDynamicData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionRepDynamicData.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionRepDynamicData

// Begin Delegate FNotifyGeometryCollectionPhysicsStateChange
struct Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics
{
	struct GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms
	{
		UGeometryCollectionComponent* FracturedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Blueprint event\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Blueprint event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FracturedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FracturedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::NewProp_FracturedComponent = { "FracturedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms, FracturedComponent), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FracturedComponent_MetaData), NewProp_FracturedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::NewProp_FracturedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "NotifyGeometryCollectionPhysicsStateChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UGeometryCollectionComponent::FNotifyGeometryCollectionPhysicsStateChange_DelegateWrapper(const FMulticastScriptDelegate& NotifyGeometryCollectionPhysicsStateChange, UGeometryCollectionComponent* FracturedComponent)
{
	struct GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms
	{
		UGeometryCollectionComponent* FracturedComponent;
	};
	GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms Parms;
	Parms.FracturedComponent=FracturedComponent;
	NotifyGeometryCollectionPhysicsStateChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNotifyGeometryCollectionPhysicsStateChange

// Begin Delegate FNotifyGeometryCollectionPhysicsLoadingStateChange
struct Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics
{
	struct GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms
	{
		UGeometryCollectionComponent* FracturedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FracturedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FracturedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::NewProp_FracturedComponent = { "FracturedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms, FracturedComponent), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FracturedComponent_MetaData), NewProp_FracturedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::NewProp_FracturedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UGeometryCollectionComponent::FNotifyGeometryCollectionPhysicsLoadingStateChange_DelegateWrapper(const FMulticastScriptDelegate& NotifyGeometryCollectionPhysicsLoadingStateChange, UGeometryCollectionComponent* FracturedComponent)
{
	struct GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms
	{
		UGeometryCollectionComponent* FracturedComponent;
	};
	GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms Parms;
	Parms.FracturedComponent=FracturedComponent;
	NotifyGeometryCollectionPhysicsLoadingStateChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNotifyGeometryCollectionPhysicsLoadingStateChange

// Begin Class UGeometryCollectionComponent Function ApplyAngularVelocity
struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics
{
	struct GeometryCollectionComponent_eventApplyAngularVelocity_Parms
	{
		int32 ItemIndex;
		FVector AngularVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Apply angular velocity on specific piece \n\x09 * @param ItemIndex item index ( from HitResult) of the piece to apply velocity on\n\x09* @param AngularVelocity linear velocity to apply\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply angular velocity on specific piece\n@param ItemIndex item index ( from HitResult) of the piece to apply velocity on\n@param AngularVelocity linear velocity to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyAngularVelocity_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyAngularVelocity_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::NewProp_AngularVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyAngularVelocity", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::GeometryCollectionComponent_eventApplyAngularVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::GeometryCollectionComponent_eventApplyAngularVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyAngularVelocity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyAngularVelocity(Z_Param_ItemIndex,Z_Param_Out_AngularVelocity);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function ApplyAngularVelocity

// Begin Class UGeometryCollectionComponent Function ApplyAssetDefaults
struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAssetDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Apply default values from asset ( damage related data and physics material ) */" },
		{ "EditCondition", "RestCollection != nullptr" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply default values from asset ( damage related data and physics material )" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAssetDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyAssetDefaults", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAssetDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAssetDefaults_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAssetDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAssetDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyAssetDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyAssetDefaults();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function ApplyAssetDefaults

// Begin Class UGeometryCollectionComponent Function ApplyBreakingAngularVelocity
struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics
{
	struct GeometryCollectionComponent_eventApplyBreakingAngularVelocity_Parms
	{
		int32 ItemIndex;
		FVector AngularVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Apply linear velocity on breaking pieces for a specific cluster\n\x09 * If ItemIndex does not represent a cluster this will do nothing  \n\x09 * @param ItemIndex item index ( from HitResult) of the cluster owning the breaking pieces to apply velocity on\n\x09 * @param AngularVelocity linear velocity to apply\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply linear velocity on breaking pieces for a specific cluster\nIf ItemIndex does not represent a cluster this will do nothing\n@param ItemIndex item index ( from HitResult) of the cluster owning the breaking pieces to apply velocity on\n@param AngularVelocity linear velocity to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyBreakingAngularVelocity_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyBreakingAngularVelocity_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::NewProp_AngularVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyBreakingAngularVelocity", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::GeometryCollectionComponent_eventApplyBreakingAngularVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::GeometryCollectionComponent_eventApplyBreakingAngularVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyBreakingAngularVelocity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyBreakingAngularVelocity(Z_Param_ItemIndex,Z_Param_Out_AngularVelocity);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function ApplyBreakingAngularVelocity

// Begin Class UGeometryCollectionComponent Function ApplyBreakingLinearVelocity
struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics
{
	struct GeometryCollectionComponent_eventApplyBreakingLinearVelocity_Parms
	{
		int32 ItemIndex;
		FVector LinearVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Apply linear velocity on breaking pieces for a specific cluster\n\x09 * If ItemIndex does not represent a cluster this will do nothing  \n\x09 * @param ItemIndex item index ( from HitResult) of the cluster owning the breaking pieces to apply velocity on\n\x09 * @param LinearVelocity linear velocity to apply\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply linear velocity on breaking pieces for a specific cluster\nIf ItemIndex does not represent a cluster this will do nothing\n@param ItemIndex item index ( from HitResult) of the cluster owning the breaking pieces to apply velocity on\n@param LinearVelocity linear velocity to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyBreakingLinearVelocity_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyBreakingLinearVelocity_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::NewProp_LinearVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyBreakingLinearVelocity", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::GeometryCollectionComponent_eventApplyBreakingLinearVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::GeometryCollectionComponent_eventApplyBreakingLinearVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyBreakingLinearVelocity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyBreakingLinearVelocity(Z_Param_ItemIndex,Z_Param_Out_LinearVelocity);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function ApplyBreakingLinearVelocity

// Begin Class UGeometryCollectionComponent Function ApplyExternalStrain
struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics
{
	struct GeometryCollectionComponent_eventApplyExternalStrain_Parms
	{
		int32 ItemIndex;
		FVector Location;
		float Radius;
		int32 PropagationDepth;
		float PropagationFactor;
		float Strain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Apply an external strain to specific piece of the geometry collection\n\x09 * @param ItemIndex item index ( from HitResult) of the piece to apply strain on\n\x09 * @param Location world location of where to apply the strain\n\x09 * @param Radius radius from the location point to apply the strain to ( using the center of mass of the pieces )\n\x09 * @param PropagationDepth How many level of connection to follow to propagate the strain through\n\x09 * @param PropagationFactor when using propagation, the factor to multiply the strain from one level to the other, allowing falloff effect\n\x09 * @param Strain strain / damage to apply \n\x09 */" },
		{ "CPP_Default_PropagationDepth", "0" },
		{ "CPP_Default_PropagationFactor", "1.000000" },
		{ "CPP_Default_Radius", "0.000000" },
		{ "CPP_Default_Strain", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply an external strain to specific piece of the geometry collection\n@param ItemIndex item index ( from HitResult) of the piece to apply strain on\n@param Location world location of where to apply the strain\n@param Radius radius from the location point to apply the strain to ( using the center of mass of the pieces )\n@param PropagationDepth How many level of connection to follow to propagate the strain through\n@param PropagationFactor when using propagation, the factor to multiply the strain from one level to the other, allowing falloff effect\n@param Strain strain / damage to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PropagationDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PropagationFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyExternalStrain_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyExternalStrain_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyExternalStrain_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_PropagationDepth = { "PropagationDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyExternalStrain_Parms, PropagationDepth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_PropagationFactor = { "PropagationFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyExternalStrain_Parms, PropagationFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Strain = { "Strain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyExternalStrain_Parms, Strain), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_PropagationDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_PropagationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Strain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyExternalStrain", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::GeometryCollectionComponent_eventApplyExternalStrain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::GeometryCollectionComponent_eventApplyExternalStrain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyExternalStrain)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FIntProperty,Z_Param_PropagationDepth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PropagationFactor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyExternalStrain(Z_Param_ItemIndex,Z_Param_Out_Location,Z_Param_Radius,Z_Param_PropagationDepth,Z_Param_PropagationFactor,Z_Param_Strain);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function ApplyExternalStrain

// Begin Class UGeometryCollectionComponent Function ApplyInternalStrain
struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics
{
	struct GeometryCollectionComponent_eventApplyInternalStrain_Parms
	{
		int32 ItemIndex;
		FVector Location;
		float Radius;
		int32 PropagationDepth;
		float PropagationFactor;
		float Strain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Apply an internal strain to specific piece of the geometry collection\n\x09 * @param ItemIndex item index ( from HitResult) of the piece to apply strain on\n\x09 * @param Location world location of where to apply the strain\n\x09 * @param Radius radius from the location point to apply the strain to ( using the center of mass of the pieces )\n\x09 * @param PropagationDepth How many level of connection to follow to propagate the strain through\n\x09 * @param PropagationFactor when using propagation, the factor to multiply the strain from one level to the other, allowing falloff effect\n\x09 * @param Strain strain / damage to apply \n\x09 */" },
		{ "CPP_Default_PropagationDepth", "0" },
		{ "CPP_Default_PropagationFactor", "1.000000" },
		{ "CPP_Default_Radius", "0.000000" },
		{ "CPP_Default_Strain", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply an internal strain to specific piece of the geometry collection\n@param ItemIndex item index ( from HitResult) of the piece to apply strain on\n@param Location world location of where to apply the strain\n@param Radius radius from the location point to apply the strain to ( using the center of mass of the pieces )\n@param PropagationDepth How many level of connection to follow to propagate the strain through\n@param PropagationFactor when using propagation, the factor to multiply the strain from one level to the other, allowing falloff effect\n@param Strain strain / damage to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PropagationDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PropagationFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyInternalStrain_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyInternalStrain_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyInternalStrain_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_PropagationDepth = { "PropagationDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyInternalStrain_Parms, PropagationDepth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_PropagationFactor = { "PropagationFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyInternalStrain_Parms, PropagationFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Strain = { "Strain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyInternalStrain_Parms, Strain), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_PropagationDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_PropagationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Strain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyInternalStrain", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::GeometryCollectionComponent_eventApplyInternalStrain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::GeometryCollectionComponent_eventApplyInternalStrain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyInternalStrain)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FIntProperty,Z_Param_PropagationDepth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PropagationFactor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyInternalStrain(Z_Param_ItemIndex,Z_Param_Out_Location,Z_Param_Radius,Z_Param_PropagationDepth,Z_Param_PropagationFactor,Z_Param_Strain);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function ApplyInternalStrain

// Begin Class UGeometryCollectionComponent Function ApplyKinematicField
struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics
{
	struct GeometryCollectionComponent_eventApplyKinematicField_Parms
	{
		float Radius;
		FVector Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  SetDynamicState\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a kinematic to dynamic state change for the geo collection particles within the field.\n\x09*\n\x09*\x09 @param Radius Radial influence from the position\n\x09*    @param Position The location of the command\n\x09*\n\x09*/" },
		{ "DisplayName", "Set Dynamic State" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "SetDynamicState\n  This function will dispatch a command to the physics thread to apply\n  a kinematic to dynamic state change for the geo collection particles within the field.\n\n      @param Radius Radial influence from the position\n  @param Position The location of the command" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "DisplayName", "Field Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "DisplayName", "Center Position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyKinematicField_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyKinematicField_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyKinematicField", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::GeometryCollectionComponent_eventApplyKinematicField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::GeometryCollectionComponent_eventApplyKinematicField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyKinematicField)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyKinematicField(Z_Param_Radius,Z_Param_Position);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function ApplyKinematicField

// Begin Class UGeometryCollectionComponent Function ApplyLinearVelocity
struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics
{
	struct GeometryCollectionComponent_eventApplyLinearVelocity_Parms
	{
		int32 ItemIndex;
		FVector LinearVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Apply linear velocity on specific piece \n\x09 * @param ItemIndex item index ( from HitResult) of the piece to apply velocity on\n\x09* @param LinearVelocity linear velocity to apply\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply linear velocity on specific piece\n@param ItemIndex item index ( from HitResult) of the piece to apply velocity on\n@param LinearVelocity linear velocity to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyLinearVelocity_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyLinearVelocity_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::NewProp_LinearVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyLinearVelocity", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::GeometryCollectionComponent_eventApplyLinearVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::GeometryCollectionComponent_eventApplyLinearVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyLinearVelocity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyLinearVelocity(Z_Param_ItemIndex,Z_Param_Out_LinearVelocity);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function ApplyLinearVelocity

// Begin Class UGeometryCollectionComponent Function ApplyPhysicsField
struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics
{
	struct GeometryCollectionComponent_eventApplyPhysicsField_Parms
	{
		bool Enabled;
		EGeometryCollectionPhysicsTypeEnum Target;
		UFieldSystemMetaData* MetaData;
		UFieldNodeBase* Field;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  AddPhysicsField\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a generic evaluation of a user defined transient field network. See documentation,\n\x09*    for examples of how to recreate variations of the above generic\n\x09*    fields using field networks\n\x09*\n\x09*\x09 @param Enabled Is this force enabled for evaluation.\n\x09*    @param Target Type of field supported by the solver.\n\x09*    @param MetaData Meta data used to assist in evaluation\n\x09*    @param Field Base evaluation node for the field network.\n\x09*\n\x09*/" },
		{ "DisplayName", "Add Physics Field" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "AddPhysicsField\n  This function will dispatch a command to the physics thread to apply\n  a generic evaluation of a user defined transient field network. See documentation,\n  for examples of how to recreate variations of the above generic\n  fields using field networks\n\n      @param Enabled Is this force enabled for evaluation.\n  @param Target Type of field supported by the solver.\n  @param MetaData Meta data used to assist in evaluation\n  @param Field Base evaluation node for the field network." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "DisplayName", "Enable Field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "DisplayName", "Physics Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "DisplayName", "Meta Data" },
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[] = {
		{ "DisplayName", "Field Node" },
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Target_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Field;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventApplyPhysicsField_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventApplyPhysicsField_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyPhysicsField_Parms, Target), Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 3963894825
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyPhysicsField_Parms, MetaData), Z_Construct_UClass_UFieldSystemMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyPhysicsField_Parms, Field), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Field_MetaData), NewProp_Field_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Target_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Field,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyPhysicsField", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::GeometryCollectionComponent_eventApplyPhysicsField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::GeometryCollectionComponent_eventApplyPhysicsField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyPhysicsField)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_GET_ENUM(EGeometryCollectionPhysicsTypeEnum,Z_Param_Target);
	P_GET_OBJECT(UFieldSystemMetaData,Z_Param_MetaData);
	P_GET_OBJECT(UFieldNodeBase,Z_Param_Field);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyPhysicsField(Z_Param_Enabled,EGeometryCollectionPhysicsTypeEnum(Z_Param_Target),Z_Param_MetaData,Z_Param_Field);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function ApplyPhysicsField

// Begin Class UGeometryCollectionComponent Function CrumbleActiveClusters
struct Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Crumbe active clusters for this entire geometry collection\n\x09* this will apply to internal and regular clusters\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Crumbe active clusters for this entire geometry collection\nthis will apply to internal and regular clusters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "CrumbleActiveClusters", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execCrumbleActiveClusters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrumbleActiveClusters();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function CrumbleActiveClusters

// Begin Class UGeometryCollectionComponent Function CrumbleCluster
struct Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics
{
	struct GeometryCollectionComponent_eventCrumbleCluster_Parms
	{
		int32 ItemIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Crumbe a cluster into all its pieces\n\x09 * @param ItemIndex item index ( from HitResult) of the cluster to crumble\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Crumbe a cluster into all its pieces\n@param ItemIndex item index ( from HitResult) of the cluster to crumble" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventCrumbleCluster_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::NewProp_ItemIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "CrumbleCluster", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::GeometryCollectionComponent_eventCrumbleCluster_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::GeometryCollectionComponent_eventCrumbleCluster_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execCrumbleCluster)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrumbleCluster(Z_Param_ItemIndex);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function CrumbleCluster

// Begin Class UGeometryCollectionComponent Function EnableRootProxyForCustomRenderer
struct Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics
{
	struct GeometryCollectionComponent_eventEnableRootProxyForCustomRenderer_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Enable or disable root proxy for custom rendering - this can be set at runtime */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Enable or disable root proxy for custom rendering - this can be set at runtime" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventEnableRootProxyForCustomRenderer_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventEnableRootProxyForCustomRenderer_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "EnableRootProxyForCustomRenderer", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::GeometryCollectionComponent_eventEnableRootProxyForCustomRenderer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::GeometryCollectionComponent_eventEnableRootProxyForCustomRenderer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execEnableRootProxyForCustomRenderer)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableRootProxyForCustomRenderer(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function EnableRootProxyForCustomRenderer

// Begin Class UGeometryCollectionComponent Function GetDamageThreshold
struct Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics
{
	struct GeometryCollectionComponent_eventGetDamageThreshold_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventGetDamageThreshold_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetDamageThreshold", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::GeometryCollectionComponent_eventGetDamageThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::GeometryCollectionComponent_eventGetDamageThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execGetDamageThreshold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetDamageThreshold();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function GetDamageThreshold

// Begin Class UGeometryCollectionComponent Function GetDebugInfo
struct Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics
{
	struct GeometryCollectionComponent_eventGetDebugInfo_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** RestCollection */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "RestCollection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventGetDebugInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetDebugInfo", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::GeometryCollectionComponent_eventGetDebugInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::GeometryCollectionComponent_eventGetDebugInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execGetDebugInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDebugInfo();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function GetDebugInfo

// Begin Class UGeometryCollectionComponent Function GetInitialLevel
struct Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics
{
	struct GeometryCollectionComponent_eventGetInitialLevel_Parms
	{
		int32 ItemIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Get the initial level of a specific piece\n\x09 * Initial level means the level as it is in the unbroken state \n\x09 * @param ItemIndex item index ( from HitResult) of the cluster to get level from\n\x09 * @param Level of the piece ( 0 for root level and positive for the rest ) \n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Get the initial level of a specific piece\nInitial level means the level as it is in the unbroken state\n@param ItemIndex item index ( from HitResult) of the cluster to get level from\n@param Level of the piece ( 0 for root level and positive for the rest )" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventGetInitialLevel_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventGetInitialLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetInitialLevel", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::GeometryCollectionComponent_eventGetInitialLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::GeometryCollectionComponent_eventGetInitialLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execGetInitialLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInitialLevel(Z_Param_ItemIndex);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function GetInitialLevel

// Begin Class UGeometryCollectionComponent Function GetInitialLocalRestTransforms
struct Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics
{
	struct GeometryCollectionComponent_eventGetInitialLocalRestTransforms_Parms
	{
		TArray<FTransform> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** \n\x09* Get the initial rest transforms in component (local) space  space, \n\x09* they are the transforms as defined in the rest collection asset \n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Get the initial rest transforms in component (local) space  space,\nthey are the transforms as defined in the rest collection asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventGetInitialLocalRestTransforms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetInitialLocalRestTransforms", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::GeometryCollectionComponent_eventGetInitialLocalRestTransforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::GeometryCollectionComponent_eventGetInitialLocalRestTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execGetInitialLocalRestTransforms)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FTransform>*)Z_Param__Result=P_THIS->GetInitialLocalRestTransforms();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function GetInitialLocalRestTransforms

// Begin Class UGeometryCollectionComponent Function GetLocalBounds
struct Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics
{
	struct GeometryCollectionComponent_eventGetLocalBounds_Parms
	{
		FBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Get local bounds of the geometry collection\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Get local bounds of the geometry collection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventGetLocalBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetLocalBounds", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::GeometryCollectionComponent_eventGetLocalBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::GeometryCollectionComponent_eventGetLocalBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execGetLocalBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox*)Z_Param__Result=P_THIS->GetLocalBounds();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function GetLocalBounds

// Begin Class UGeometryCollectionComponent Function GetMassAndExtents
struct Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics
{
	struct GeometryCollectionComponent_eventGetMassAndExtents_Parms
	{
		int32 ItemIndex;
		float OutMass;
		FBox OutExtents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Get mass and extent of a specific piece\n\x09* @param ItemIndex item index ( from HitResult) of the cluster to get level from\n\x09* @param Level of the piece ( 0 for root level and positive for the rest )\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Get mass and extent of a specific piece\n@param ItemIndex item index ( from HitResult) of the cluster to get level from\n@param Level of the piece ( 0 for root level and positive for the rest )" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutExtents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventGetMassAndExtents_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::NewProp_OutMass = { "OutMass", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventGetMassAndExtents_Parms, OutMass), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::NewProp_OutExtents = { "OutExtents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventGetMassAndExtents_Parms, OutExtents), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::NewProp_OutMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::NewProp_OutExtents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetMassAndExtents", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::GeometryCollectionComponent_eventGetMassAndExtents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::GeometryCollectionComponent_eventGetMassAndExtents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execGetMassAndExtents)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMass);
	P_GET_STRUCT_REF(FBox,Z_Param_Out_OutExtents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMassAndExtents(Z_Param_ItemIndex,Z_Param_Out_OutMass,Z_Param_Out_OutExtents);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function GetMassAndExtents

// Begin Class UGeometryCollectionComponent Function GetRootCurrentTransform
struct Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics
{
	struct GeometryCollectionComponent_eventGetRootCurrentTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Get the root item current world transform */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Get the root item current world transform" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventGetRootCurrentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetRootCurrentTransform", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics::GeometryCollectionComponent_eventGetRootCurrentTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics::GeometryCollectionComponent_eventGetRootCurrentTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execGetRootCurrentTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetRootCurrentTransform();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function GetRootCurrentTransform

// Begin Class UGeometryCollectionComponent Function GetRootIndex
struct Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics
{
	struct GeometryCollectionComponent_eventGetRootIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Get the root item index of the hierarchy */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Get the root item index of the hierarchy" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventGetRootIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetRootIndex", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::GeometryCollectionComponent_eventGetRootIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::GeometryCollectionComponent_eventGetRootIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execGetRootIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRootIndex();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function GetRootIndex

// Begin Class UGeometryCollectionComponent Function GetRootInitialTransform
struct Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics
{
	struct GeometryCollectionComponent_eventGetRootInitialTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Get the root item initial transform in world space */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Get the root item initial transform in world space" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventGetRootInitialTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetRootInitialTransform", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics::GeometryCollectionComponent_eventGetRootInitialTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics::GeometryCollectionComponent_eventGetRootInitialTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execGetRootInitialTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetRootInitialTransform();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function GetRootInitialTransform

// Begin Class UGeometryCollectionComponent Function GetUseStaticMeshCollisionForTraces
struct Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics
{
	struct GeometryCollectionComponent_eventGetUseStaticMeshCollisionForTraces_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Physics" },
		{ "Comment", "// todo(chaos): Remove this and move to a cook time approach of the SM data based on the GC property\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "todo(chaos): Remove this and move to a cook time approach of the SM data based on the GC property" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventGetUseStaticMeshCollisionForTraces_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventGetUseStaticMeshCollisionForTraces_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetUseStaticMeshCollisionForTraces", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::GeometryCollectionComponent_eventGetUseStaticMeshCollisionForTraces_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::GeometryCollectionComponent_eventGetUseStaticMeshCollisionForTraces_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execGetUseStaticMeshCollisionForTraces)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUseStaticMeshCollisionForTraces();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function GetUseStaticMeshCollisionForTraces

// Begin Class UGeometryCollectionComponent Function IsRootBroken
struct Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics
{
	struct GeometryCollectionComponent_eventIsRootBroken_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** return true if the root cluster is not longer active at runtime */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "return true if the root cluster is not longer active at runtime" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventIsRootBroken_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventIsRootBroken_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "IsRootBroken", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::GeometryCollectionComponent_eventIsRootBroken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::GeometryCollectionComponent_eventIsRootBroken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execIsRootBroken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRootBroken();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function IsRootBroken

// Begin Class UGeometryCollectionComponent Function OnRep_RepData
struct Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called post solve to allow authoritative components to update their replication data */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Called post solve to allow authoritative components to update their replication data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "OnRep_RepData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execOnRep_RepData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RepData();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function OnRep_RepData

// Begin Class UGeometryCollectionComponent Function OnRep_RepDynamicData
struct Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepDynamicData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepDynamicData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "OnRep_RepDynamicData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepDynamicData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepDynamicData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepDynamicData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepDynamicData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execOnRep_RepDynamicData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RepDynamicData();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function OnRep_RepDynamicData

// Begin Class UGeometryCollectionComponent Function OnRep_RepStateData
struct Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepStateData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepStateData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "OnRep_RepStateData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepStateData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepStateData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepStateData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepStateData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execOnRep_RepStateData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RepStateData();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function OnRep_RepStateData

// Begin Class UGeometryCollectionComponent Function ReceivePhysicsCollision
struct GeometryCollectionComponent_eventReceivePhysicsCollision_Parms
{
	FChaosPhysicsCollisionInfo CollisionInfo;
};
static FName NAME_UGeometryCollectionComponent_ReceivePhysicsCollision = FName(TEXT("ReceivePhysicsCollision"));
void UGeometryCollectionComponent::ReceivePhysicsCollision(FChaosPhysicsCollisionInfo const& CollisionInfo)
{
	GeometryCollectionComponent_eventReceivePhysicsCollision_Parms Parms;
	Parms.CollisionInfo=CollisionInfo;
	ProcessEvent(FindFunctionChecked(NAME_UGeometryCollectionComponent_ReceivePhysicsCollision),&Parms);
}
struct Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "DisplayName", "Physics Collision" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo = { "CollisionInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventReceivePhysicsCollision_Parms, CollisionInfo), Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionInfo_MetaData), NewProp_CollisionInfo_MetaData) }; // 626704235
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ReceivePhysicsCollision", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::PropPointers), sizeof(GeometryCollectionComponent_eventReceivePhysicsCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(GeometryCollectionComponent_eventReceivePhysicsCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGeometryCollectionComponent Function ReceivePhysicsCollision

// Begin Class UGeometryCollectionComponent Function RemoveAllAnchors
struct Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* this will remove anchors on all the pieces ( including the static and kinematic initial states ones ) of the geometry colection\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "this will remove anchors on all the pieces ( including the static and kinematic initial states ones ) of the geometry colection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "RemoveAllAnchors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execRemoveAllAnchors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllAnchors();
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function RemoveAllAnchors

// Begin Class UGeometryCollectionComponent Function SetAbandonedParticleCollisionProfileName
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics
{
	struct GeometryCollectionComponent_eventSetAbandonedParticleCollisionProfileName_Parms
	{
		FName CollisionProfile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAbandonedParticleCollisionProfileName_Parms, CollisionProfile), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics::NewProp_CollisionProfile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetAbandonedParticleCollisionProfileName", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics::GeometryCollectionComponent_eventSetAbandonedParticleCollisionProfileName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics::GeometryCollectionComponent_eventSetAbandonedParticleCollisionProfileName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetAbandonedParticleCollisionProfileName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CollisionProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbandonedParticleCollisionProfileName(Z_Param_CollisionProfile);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetAbandonedParticleCollisionProfileName

// Begin Class UGeometryCollectionComponent Function SetAnchoredByBox
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics
{
	struct GeometryCollectionComponent_eventSetAnchoredByBox_Parms
	{
		FBox WorldSpaceBox;
		bool bAnchored;
		int32 MaxLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Set all pieces within a world space bounding box to be anchored or not \n\x09*/" },
		{ "CPP_Default_MaxLevel", "-1" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Set all pieces within a world space bounding box to be anchored or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceBox;
	static void NewProp_bAnchored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnchored;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_WorldSpaceBox = { "WorldSpaceBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAnchoredByBox_Parms, WorldSpaceBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_bAnchored_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetAnchoredByBox_Parms*)Obj)->bAnchored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_bAnchored = { "bAnchored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetAnchoredByBox_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_bAnchored_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAnchoredByBox_Parms, MaxLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_WorldSpaceBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_bAnchored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_MaxLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetAnchoredByBox", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::GeometryCollectionComponent_eventSetAnchoredByBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::GeometryCollectionComponent_eventSetAnchoredByBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetAnchoredByBox)
{
	P_GET_STRUCT(FBox,Z_Param_WorldSpaceBox);
	P_GET_UBOOL(Z_Param_bAnchored);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnchoredByBox(Z_Param_WorldSpaceBox,Z_Param_bAnchored,Z_Param_MaxLevel);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetAnchoredByBox

// Begin Class UGeometryCollectionComponent Function SetAnchoredByIndex
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics
{
	struct GeometryCollectionComponent_eventSetAnchoredByIndex_Parms
	{
		int32 Index;
		bool bAnchored;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Set a piece or cluster to be anchored or not \n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Set a piece or cluster to be anchored or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_bAnchored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnchored;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAnchoredByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::NewProp_bAnchored_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetAnchoredByIndex_Parms*)Obj)->bAnchored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::NewProp_bAnchored = { "bAnchored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetAnchoredByIndex_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::NewProp_bAnchored_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::NewProp_bAnchored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetAnchoredByIndex", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::GeometryCollectionComponent_eventSetAnchoredByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::GeometryCollectionComponent_eventSetAnchoredByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetAnchoredByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL(Z_Param_bAnchored);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnchoredByIndex(Z_Param_Index,Z_Param_bAnchored);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetAnchoredByIndex

// Begin Class UGeometryCollectionComponent Function SetAnchoredByTransformedBox
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics
{
	struct GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms
	{
		FBox Box;
		FTransform Transform;
		bool bAnchored;
		int32 MaxLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Set all pieces within a world transformed bounding box to be anchored or not\n\x09*/" },
		{ "CPP_Default_MaxLevel", "-1" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Set all pieces within a world transformed bounding box to be anchored or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_bAnchored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnchored;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_bAnchored_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms*)Obj)->bAnchored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_bAnchored = { "bAnchored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_bAnchored_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms, MaxLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_bAnchored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_MaxLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetAnchoredByTransformedBox", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetAnchoredByTransformedBox)
{
	P_GET_STRUCT(FBox,Z_Param_Box);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_UBOOL(Z_Param_bAnchored);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnchoredByTransformedBox(Z_Param_Box,Z_Param_Transform,Z_Param_bAnchored,Z_Param_MaxLevel);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetAnchoredByTransformedBox

// Begin Class UGeometryCollectionComponent Function SetDamageModel
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics
{
	struct GeometryCollectionComponent_eventSetDamageModel_Parms
	{
		EDamageModelTypeEnum InDamageModel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InDamageModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InDamageModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::NewProp_InDamageModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::NewProp_InDamageModel = { "InDamageModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetDamageModel_Parms, InDamageModel), Z_Construct_UEnum_Chaos_EDamageModelTypeEnum, METADATA_PARAMS(0, nullptr) }; // 1555958943
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::NewProp_InDamageModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::NewProp_InDamageModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetDamageModel", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::GeometryCollectionComponent_eventSetDamageModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::GeometryCollectionComponent_eventSetDamageModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetDamageModel)
{
	P_GET_ENUM(EDamageModelTypeEnum,Z_Param_InDamageModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDamageModel(EDamageModelTypeEnum(Z_Param_InDamageModel));
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetDamageModel

// Begin Class UGeometryCollectionComponent Function SetDamagePropagationData
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics
{
	struct GeometryCollectionComponent_eventSetDamagePropagationData_Parms
	{
		FGeometryCollectionDamagePropagationData InDamagePropagationData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDamagePropagationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDamagePropagationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics::NewProp_InDamagePropagationData = { "InDamagePropagationData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetDamagePropagationData_Parms, InDamagePropagationData), Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDamagePropagationData_MetaData), NewProp_InDamagePropagationData_MetaData) }; // 2094228416
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics::NewProp_InDamagePropagationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetDamagePropagationData", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics::GeometryCollectionComponent_eventSetDamagePropagationData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics::GeometryCollectionComponent_eventSetDamagePropagationData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetDamagePropagationData)
{
	P_GET_STRUCT_REF(FGeometryCollectionDamagePropagationData,Z_Param_Out_InDamagePropagationData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDamagePropagationData(Z_Param_Out_InDamagePropagationData);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetDamagePropagationData

// Begin Class UGeometryCollectionComponent Function SetDamageThreshold
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics
{
	struct GeometryCollectionComponent_eventSetDamageThreshold_Parms
	{
		TArray<float> InDamageThreshold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDamageThreshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDamageThreshold_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InDamageThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::NewProp_InDamageThreshold_Inner = { "InDamageThreshold", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::NewProp_InDamageThreshold = { "InDamageThreshold", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetDamageThreshold_Parms, InDamageThreshold), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDamageThreshold_MetaData), NewProp_InDamageThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::NewProp_InDamageThreshold_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::NewProp_InDamageThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetDamageThreshold", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::GeometryCollectionComponent_eventSetDamageThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::GeometryCollectionComponent_eventSetDamageThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetDamageThreshold)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_InDamageThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDamageThreshold(Z_Param_Out_InDamageThreshold);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetDamageThreshold

// Begin Class UGeometryCollectionComponent Function SetDensityFromPhysicsMaterial
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics
{
	struct GeometryCollectionComponent_eventSetDensityFromPhysicsMaterial_Parms
	{
		bool bInDensityFromPhysicsMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInDensityFromPhysicsMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInDensityFromPhysicsMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::NewProp_bInDensityFromPhysicsMaterial_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetDensityFromPhysicsMaterial_Parms*)Obj)->bInDensityFromPhysicsMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::NewProp_bInDensityFromPhysicsMaterial = { "bInDensityFromPhysicsMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetDensityFromPhysicsMaterial_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::NewProp_bInDensityFromPhysicsMaterial_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::NewProp_bInDensityFromPhysicsMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetDensityFromPhysicsMaterial", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::GeometryCollectionComponent_eventSetDensityFromPhysicsMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::GeometryCollectionComponent_eventSetDensityFromPhysicsMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetDensityFromPhysicsMaterial)
{
	P_GET_UBOOL(Z_Param_bInDensityFromPhysicsMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDensityFromPhysicsMaterial(Z_Param_bInDensityFromPhysicsMaterial);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetDensityFromPhysicsMaterial

// Begin Class UGeometryCollectionComponent Function SetEnableDamageFromCollision
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics
{
	struct GeometryCollectionComponent_eventSetEnableDamageFromCollision_Parms
	{
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetEnableDamageFromCollision_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetEnableDamageFromCollision_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetEnableDamageFromCollision", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::GeometryCollectionComponent_eventSetEnableDamageFromCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::GeometryCollectionComponent_eventSetEnableDamageFromCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetEnableDamageFromCollision)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableDamageFromCollision(Z_Param_bValue);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetEnableDamageFromCollision

// Begin Class UGeometryCollectionComponent Function SetGravityGroupIndex
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics
{
	struct GeometryCollectionComponent_eventSetGravityGroupIndex_Parms
	{
		int32 InGravityGroupIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGravityGroupIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics::NewProp_InGravityGroupIndex = { "InGravityGroupIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetGravityGroupIndex_Parms, InGravityGroupIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics::NewProp_InGravityGroupIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetGravityGroupIndex", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics::GeometryCollectionComponent_eventSetGravityGroupIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics::GeometryCollectionComponent_eventSetGravityGroupIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetGravityGroupIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InGravityGroupIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGravityGroupIndex(Z_Param_InGravityGroupIndex);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetGravityGroupIndex

// Begin Class UGeometryCollectionComponent Function SetLocalRestTransforms
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics
{
	struct GeometryCollectionComponent_eventSetLocalRestTransforms_Parms
	{
		TArray<FTransform> Transforms;
		bool bOnlyLeaves;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** \n\x09* Set the local rest transform, this may be different from the rest collection \n\x09* If the geometry collection is already simulating those matrices will be overriden by the physics state updates\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Set the local rest transform, this may be different from the rest collection\nIf the geometry collection is already simulating those matrices will be overriden by the physics state updates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static void NewProp_bOnlyLeaves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyLeaves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetLocalRestTransforms_Parms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
void Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::NewProp_bOnlyLeaves_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetLocalRestTransforms_Parms*)Obj)->bOnlyLeaves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::NewProp_bOnlyLeaves = { "bOnlyLeaves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetLocalRestTransforms_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::NewProp_bOnlyLeaves_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::NewProp_Transforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::NewProp_bOnlyLeaves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetLocalRestTransforms", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::GeometryCollectionComponent_eventSetLocalRestTransforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::GeometryCollectionComponent_eventSetLocalRestTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetLocalRestTransforms)
{
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_Transforms);
	P_GET_UBOOL(Z_Param_bOnlyLeaves);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLocalRestTransforms(Z_Param_Out_Transforms,Z_Param_bOnlyLeaves);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetLocalRestTransforms

// Begin Class UGeometryCollectionComponent Function SetNotifyBreaks
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics
{
	struct GeometryCollectionComponent_eventSetNotifyBreaks_Parms
	{
		bool bNewNotifyBreaks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes whether or not this component will get future break notifications. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Changes whether or not this component will get future break notifications." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewNotifyBreaks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewNotifyBreaks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::NewProp_bNewNotifyBreaks_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetNotifyBreaks_Parms*)Obj)->bNewNotifyBreaks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::NewProp_bNewNotifyBreaks = { "bNewNotifyBreaks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyBreaks_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::NewProp_bNewNotifyBreaks_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::NewProp_bNewNotifyBreaks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetNotifyBreaks", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::GeometryCollectionComponent_eventSetNotifyBreaks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::GeometryCollectionComponent_eventSetNotifyBreaks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetNotifyBreaks)
{
	P_GET_UBOOL(Z_Param_bNewNotifyBreaks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNotifyBreaks(Z_Param_bNewNotifyBreaks);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetNotifyBreaks

// Begin Class UGeometryCollectionComponent Function SetNotifyCrumblings
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics
{
	struct GeometryCollectionComponent_eventSetNotifyCrumblings_Parms
	{
		bool bNewNotifyCrumblings;
		bool bNewCrumblingEventIncludesChildren;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes whether or not this component will get future crumbling notifications. */" },
		{ "CPP_Default_bNewCrumblingEventIncludesChildren", "false" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Changes whether or not this component will get future crumbling notifications." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewNotifyCrumblings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewNotifyCrumblings;
	static void NewProp_bNewCrumblingEventIncludesChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewCrumblingEventIncludesChildren;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewNotifyCrumblings_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetNotifyCrumblings_Parms*)Obj)->bNewNotifyCrumblings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewNotifyCrumblings = { "bNewNotifyCrumblings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyCrumblings_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewNotifyCrumblings_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewCrumblingEventIncludesChildren_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetNotifyCrumblings_Parms*)Obj)->bNewCrumblingEventIncludesChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewCrumblingEventIncludesChildren = { "bNewCrumblingEventIncludesChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyCrumblings_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewCrumblingEventIncludesChildren_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewNotifyCrumblings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewCrumblingEventIncludesChildren,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetNotifyCrumblings", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::GeometryCollectionComponent_eventSetNotifyCrumblings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::GeometryCollectionComponent_eventSetNotifyCrumblings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetNotifyCrumblings)
{
	P_GET_UBOOL(Z_Param_bNewNotifyCrumblings);
	P_GET_UBOOL(Z_Param_bNewCrumblingEventIncludesChildren);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNotifyCrumblings(Z_Param_bNewNotifyCrumblings,Z_Param_bNewCrumblingEventIncludesChildren);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetNotifyCrumblings

// Begin Class UGeometryCollectionComponent Function SetNotifyGlobalBreaks
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics
{
	struct GeometryCollectionComponent_eventSetNotifyGlobalBreaks_Parms
	{
		bool bNewNotifyGlobalBreaks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes whether or not this component will get future global break notifications. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Changes whether or not this component will get future global break notifications." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewNotifyGlobalBreaks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewNotifyGlobalBreaks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::NewProp_bNewNotifyGlobalBreaks_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetNotifyGlobalBreaks_Parms*)Obj)->bNewNotifyGlobalBreaks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::NewProp_bNewNotifyGlobalBreaks = { "bNewNotifyGlobalBreaks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyGlobalBreaks_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::NewProp_bNewNotifyGlobalBreaks_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::NewProp_bNewNotifyGlobalBreaks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetNotifyGlobalBreaks", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::GeometryCollectionComponent_eventSetNotifyGlobalBreaks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::GeometryCollectionComponent_eventSetNotifyGlobalBreaks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetNotifyGlobalBreaks)
{
	P_GET_UBOOL(Z_Param_bNewNotifyGlobalBreaks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNotifyGlobalBreaks(Z_Param_bNewNotifyGlobalBreaks);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetNotifyGlobalBreaks

// Begin Class UGeometryCollectionComponent Function SetNotifyGlobalCollision
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics
{
	struct GeometryCollectionComponent_eventSetNotifyGlobalCollision_Parms
	{
		bool bNewNotifyGlobalCollisions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes whether or not this component will get future global collision notifications. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Changes whether or not this component will get future global collision notifications." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewNotifyGlobalCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewNotifyGlobalCollisions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::NewProp_bNewNotifyGlobalCollisions_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetNotifyGlobalCollision_Parms*)Obj)->bNewNotifyGlobalCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::NewProp_bNewNotifyGlobalCollisions = { "bNewNotifyGlobalCollisions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyGlobalCollision_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::NewProp_bNewNotifyGlobalCollisions_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::NewProp_bNewNotifyGlobalCollisions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetNotifyGlobalCollision", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::GeometryCollectionComponent_eventSetNotifyGlobalCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::GeometryCollectionComponent_eventSetNotifyGlobalCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetNotifyGlobalCollision)
{
	P_GET_UBOOL(Z_Param_bNewNotifyGlobalCollisions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNotifyGlobalCollision(Z_Param_bNewNotifyGlobalCollisions);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetNotifyGlobalCollision

// Begin Class UGeometryCollectionComponent Function SetNotifyGlobalCrumblings
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics
{
	struct GeometryCollectionComponent_eventSetNotifyGlobalCrumblings_Parms
	{
		bool bNewNotifyGlobalCrumblings;
		bool bGlobalNewCrumblingEventIncludesChildren;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes whether or not this component will get future global crumbling notifications. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Changes whether or not this component will get future global crumbling notifications." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewNotifyGlobalCrumblings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewNotifyGlobalCrumblings;
	static void NewProp_bGlobalNewCrumblingEventIncludesChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlobalNewCrumblingEventIncludesChildren;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::NewProp_bNewNotifyGlobalCrumblings_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetNotifyGlobalCrumblings_Parms*)Obj)->bNewNotifyGlobalCrumblings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::NewProp_bNewNotifyGlobalCrumblings = { "bNewNotifyGlobalCrumblings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyGlobalCrumblings_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::NewProp_bNewNotifyGlobalCrumblings_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::NewProp_bGlobalNewCrumblingEventIncludesChildren_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetNotifyGlobalCrumblings_Parms*)Obj)->bGlobalNewCrumblingEventIncludesChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::NewProp_bGlobalNewCrumblingEventIncludesChildren = { "bGlobalNewCrumblingEventIncludesChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyGlobalCrumblings_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::NewProp_bGlobalNewCrumblingEventIncludesChildren_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::NewProp_bNewNotifyGlobalCrumblings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::NewProp_bGlobalNewCrumblingEventIncludesChildren,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetNotifyGlobalCrumblings", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::GeometryCollectionComponent_eventSetNotifyGlobalCrumblings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::GeometryCollectionComponent_eventSetNotifyGlobalCrumblings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetNotifyGlobalCrumblings)
{
	P_GET_UBOOL(Z_Param_bNewNotifyGlobalCrumblings);
	P_GET_UBOOL(Z_Param_bGlobalNewCrumblingEventIncludesChildren);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNotifyGlobalCrumblings(Z_Param_bNewNotifyGlobalCrumblings,Z_Param_bGlobalNewCrumblingEventIncludesChildren);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetNotifyGlobalCrumblings

// Begin Class UGeometryCollectionComponent Function SetNotifyGlobalRemovals
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics
{
	struct GeometryCollectionComponent_eventSetNotifyGlobalRemovals_Parms
	{
		bool bNewNotifyGlobalRemovals;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes whether or not this component will get future global removal notifications. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Changes whether or not this component will get future global removal notifications." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewNotifyGlobalRemovals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewNotifyGlobalRemovals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::NewProp_bNewNotifyGlobalRemovals_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetNotifyGlobalRemovals_Parms*)Obj)->bNewNotifyGlobalRemovals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::NewProp_bNewNotifyGlobalRemovals = { "bNewNotifyGlobalRemovals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyGlobalRemovals_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::NewProp_bNewNotifyGlobalRemovals_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::NewProp_bNewNotifyGlobalRemovals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetNotifyGlobalRemovals", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::GeometryCollectionComponent_eventSetNotifyGlobalRemovals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::GeometryCollectionComponent_eventSetNotifyGlobalRemovals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetNotifyGlobalRemovals)
{
	P_GET_UBOOL(Z_Param_bNewNotifyGlobalRemovals);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNotifyGlobalRemovals(Z_Param_bNewNotifyGlobalRemovals);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetNotifyGlobalRemovals

// Begin Class UGeometryCollectionComponent Function SetNotifyRemovals
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics
{
	struct GeometryCollectionComponent_eventSetNotifyRemovals_Parms
	{
		bool bNewNotifyRemovals;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes whether or not this component will get future removal notifications. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Changes whether or not this component will get future removal notifications." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewNotifyRemovals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewNotifyRemovals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::NewProp_bNewNotifyRemovals_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetNotifyRemovals_Parms*)Obj)->bNewNotifyRemovals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::NewProp_bNewNotifyRemovals = { "bNewNotifyRemovals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyRemovals_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::NewProp_bNewNotifyRemovals_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::NewProp_bNewNotifyRemovals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetNotifyRemovals", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::GeometryCollectionComponent_eventSetNotifyRemovals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::GeometryCollectionComponent_eventSetNotifyRemovals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetNotifyRemovals)
{
	P_GET_UBOOL(Z_Param_bNewNotifyRemovals);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNotifyRemovals(Z_Param_bNewNotifyRemovals);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetNotifyRemovals

// Begin Class UGeometryCollectionComponent Function SetOneWayInteractionLevel
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics
{
	struct GeometryCollectionComponent_eventSetOneWayInteractionLevel_Parms
	{
		int32 InOneWayInteractionLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InOneWayInteractionLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics::NewProp_InOneWayInteractionLevel = { "InOneWayInteractionLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetOneWayInteractionLevel_Parms, InOneWayInteractionLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics::NewProp_InOneWayInteractionLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetOneWayInteractionLevel", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics::GeometryCollectionComponent_eventSetOneWayInteractionLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics::GeometryCollectionComponent_eventSetOneWayInteractionLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetOneWayInteractionLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InOneWayInteractionLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOneWayInteractionLevel(Z_Param_InOneWayInteractionLevel);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetOneWayInteractionLevel

// Begin Class UGeometryCollectionComponent Function SetPerLevelCollisionProfileNames
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics
{
	struct GeometryCollectionComponent_eventSetPerLevelCollisionProfileNames_Parms
	{
		TArray<FName> ProfileNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProfileNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::NewProp_ProfileNames_Inner = { "ProfileNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::NewProp_ProfileNames = { "ProfileNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetPerLevelCollisionProfileNames_Parms, ProfileNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileNames_MetaData), NewProp_ProfileNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::NewProp_ProfileNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::NewProp_ProfileNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetPerLevelCollisionProfileNames", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::GeometryCollectionComponent_eventSetPerLevelCollisionProfileNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::GeometryCollectionComponent_eventSetPerLevelCollisionProfileNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetPerLevelCollisionProfileNames)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_ProfileNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPerLevelCollisionProfileNames(Z_Param_Out_ProfileNames);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetPerLevelCollisionProfileNames

// Begin Class UGeometryCollectionComponent Function SetPerParticleCollisionProfileName
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics
{
	struct GeometryCollectionComponent_eventSetPerParticleCollisionProfileName_Parms
	{
		TArray<int32> BoneIds;
		FName ProfileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneIds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::NewProp_BoneIds_Inner = { "BoneIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::NewProp_BoneIds = { "BoneIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetPerParticleCollisionProfileName_Parms, BoneIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIds_MetaData), NewProp_BoneIds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetPerParticleCollisionProfileName_Parms, ProfileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::NewProp_BoneIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::NewProp_BoneIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::NewProp_ProfileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetPerParticleCollisionProfileName", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::GeometryCollectionComponent_eventSetPerParticleCollisionProfileName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::GeometryCollectionComponent_eventSetPerParticleCollisionProfileName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetPerParticleCollisionProfileName)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_BoneIds);
	P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPerParticleCollisionProfileName(Z_Param_Out_BoneIds,Z_Param_ProfileName);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetPerParticleCollisionProfileName

// Begin Class UGeometryCollectionComponent Function SetRestCollection
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics
{
	struct GeometryCollectionComponent_eventSetRestCollection_Parms
	{
		const UGeometryCollection* RestCollectionIn;
		bool bApplyAssetDefaults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** RestCollection */" },
		{ "CPP_Default_bApplyAssetDefaults", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "RestCollection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestCollectionIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RestCollectionIn;
	static void NewProp_bApplyAssetDefaults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAssetDefaults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::NewProp_RestCollectionIn = { "RestCollectionIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionComponent_eventSetRestCollection_Parms, RestCollectionIn), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestCollectionIn_MetaData), NewProp_RestCollectionIn_MetaData) };
void Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::NewProp_bApplyAssetDefaults_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetRestCollection_Parms*)Obj)->bApplyAssetDefaults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::NewProp_bApplyAssetDefaults = { "bApplyAssetDefaults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetRestCollection_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::NewProp_bApplyAssetDefaults_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::NewProp_RestCollectionIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::NewProp_bApplyAssetDefaults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetRestCollection", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::GeometryCollectionComponent_eventSetRestCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::GeometryCollectionComponent_eventSetRestCollection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetRestCollection)
{
	P_GET_OBJECT(UGeometryCollection,Z_Param_RestCollectionIn);
	P_GET_UBOOL(Z_Param_bApplyAssetDefaults);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRestCollection(Z_Param_RestCollectionIn,Z_Param_bApplyAssetDefaults);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetRestCollection

// Begin Class UGeometryCollectionComponent Function SetUseMaterialDamageModifiers
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics
{
	struct GeometryCollectionComponent_eventSetUseMaterialDamageModifiers_Parms
	{
		bool bInUseMaterialDamageModifiers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInUseMaterialDamageModifiers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseMaterialDamageModifiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::NewProp_bInUseMaterialDamageModifiers_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetUseMaterialDamageModifiers_Parms*)Obj)->bInUseMaterialDamageModifiers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::NewProp_bInUseMaterialDamageModifiers = { "bInUseMaterialDamageModifiers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetUseMaterialDamageModifiers_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::NewProp_bInUseMaterialDamageModifiers_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::NewProp_bInUseMaterialDamageModifiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetUseMaterialDamageModifiers", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::GeometryCollectionComponent_eventSetUseMaterialDamageModifiers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::GeometryCollectionComponent_eventSetUseMaterialDamageModifiers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetUseMaterialDamageModifiers)
{
	P_GET_UBOOL(Z_Param_bInUseMaterialDamageModifiers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseMaterialDamageModifiers(Z_Param_bInUseMaterialDamageModifiers);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetUseMaterialDamageModifiers

// Begin Class UGeometryCollectionComponent Function SetUseStaticMeshCollisionForTraces
struct Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics
{
	struct GeometryCollectionComponent_eventSetUseStaticMeshCollisionForTraces_Parms
	{
		bool bInUseStaticMeshCollisionForTraces;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Physics" },
		{ "Comment", "// todo(chaos): Remove this and move to a cook time approach of the SM data based on the GC property\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "todo(chaos): Remove this and move to a cook time approach of the SM data based on the GC property" },
	};
#endif // WITH_METADATA
	static void NewProp_bInUseStaticMeshCollisionForTraces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseStaticMeshCollisionForTraces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::NewProp_bInUseStaticMeshCollisionForTraces_SetBit(void* Obj)
{
	((GeometryCollectionComponent_eventSetUseStaticMeshCollisionForTraces_Parms*)Obj)->bInUseStaticMeshCollisionForTraces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::NewProp_bInUseStaticMeshCollisionForTraces = { "bInUseStaticMeshCollisionForTraces", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetUseStaticMeshCollisionForTraces_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::NewProp_bInUseStaticMeshCollisionForTraces_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::NewProp_bInUseStaticMeshCollisionForTraces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetUseStaticMeshCollisionForTraces", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::GeometryCollectionComponent_eventSetUseStaticMeshCollisionForTraces_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::GeometryCollectionComponent_eventSetUseStaticMeshCollisionForTraces_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionComponent::execSetUseStaticMeshCollisionForTraces)
{
	P_GET_UBOOL(Z_Param_bInUseStaticMeshCollisionForTraces);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseStaticMeshCollisionForTraces(Z_Param_bInUseStaticMeshCollisionForTraces);
	P_NATIVE_END;
}
// End Class UGeometryCollectionComponent Function SetUseStaticMeshCollisionForTraces

// Begin Class UGeometryCollectionComponent
void UGeometryCollectionComponent::StaticRegisterNativesUGeometryCollectionComponent()
{
	UClass* Class = UGeometryCollectionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyAngularVelocity", &UGeometryCollectionComponent::execApplyAngularVelocity },
		{ "ApplyAssetDefaults", &UGeometryCollectionComponent::execApplyAssetDefaults },
		{ "ApplyBreakingAngularVelocity", &UGeometryCollectionComponent::execApplyBreakingAngularVelocity },
		{ "ApplyBreakingLinearVelocity", &UGeometryCollectionComponent::execApplyBreakingLinearVelocity },
		{ "ApplyExternalStrain", &UGeometryCollectionComponent::execApplyExternalStrain },
		{ "ApplyInternalStrain", &UGeometryCollectionComponent::execApplyInternalStrain },
		{ "ApplyKinematicField", &UGeometryCollectionComponent::execApplyKinematicField },
		{ "ApplyLinearVelocity", &UGeometryCollectionComponent::execApplyLinearVelocity },
		{ "ApplyPhysicsField", &UGeometryCollectionComponent::execApplyPhysicsField },
		{ "CrumbleActiveClusters", &UGeometryCollectionComponent::execCrumbleActiveClusters },
		{ "CrumbleCluster", &UGeometryCollectionComponent::execCrumbleCluster },
		{ "EnableRootProxyForCustomRenderer", &UGeometryCollectionComponent::execEnableRootProxyForCustomRenderer },
		{ "GetDamageThreshold", &UGeometryCollectionComponent::execGetDamageThreshold },
		{ "GetDebugInfo", &UGeometryCollectionComponent::execGetDebugInfo },
		{ "GetInitialLevel", &UGeometryCollectionComponent::execGetInitialLevel },
		{ "GetInitialLocalRestTransforms", &UGeometryCollectionComponent::execGetInitialLocalRestTransforms },
		{ "GetLocalBounds", &UGeometryCollectionComponent::execGetLocalBounds },
		{ "GetMassAndExtents", &UGeometryCollectionComponent::execGetMassAndExtents },
		{ "GetRootCurrentTransform", &UGeometryCollectionComponent::execGetRootCurrentTransform },
		{ "GetRootIndex", &UGeometryCollectionComponent::execGetRootIndex },
		{ "GetRootInitialTransform", &UGeometryCollectionComponent::execGetRootInitialTransform },
		{ "GetUseStaticMeshCollisionForTraces", &UGeometryCollectionComponent::execGetUseStaticMeshCollisionForTraces },
		{ "IsRootBroken", &UGeometryCollectionComponent::execIsRootBroken },
		{ "OnRep_RepData", &UGeometryCollectionComponent::execOnRep_RepData },
		{ "OnRep_RepDynamicData", &UGeometryCollectionComponent::execOnRep_RepDynamicData },
		{ "OnRep_RepStateData", &UGeometryCollectionComponent::execOnRep_RepStateData },
		{ "RemoveAllAnchors", &UGeometryCollectionComponent::execRemoveAllAnchors },
		{ "SetAbandonedParticleCollisionProfileName", &UGeometryCollectionComponent::execSetAbandonedParticleCollisionProfileName },
		{ "SetAnchoredByBox", &UGeometryCollectionComponent::execSetAnchoredByBox },
		{ "SetAnchoredByIndex", &UGeometryCollectionComponent::execSetAnchoredByIndex },
		{ "SetAnchoredByTransformedBox", &UGeometryCollectionComponent::execSetAnchoredByTransformedBox },
		{ "SetDamageModel", &UGeometryCollectionComponent::execSetDamageModel },
		{ "SetDamagePropagationData", &UGeometryCollectionComponent::execSetDamagePropagationData },
		{ "SetDamageThreshold", &UGeometryCollectionComponent::execSetDamageThreshold },
		{ "SetDensityFromPhysicsMaterial", &UGeometryCollectionComponent::execSetDensityFromPhysicsMaterial },
		{ "SetEnableDamageFromCollision", &UGeometryCollectionComponent::execSetEnableDamageFromCollision },
		{ "SetGravityGroupIndex", &UGeometryCollectionComponent::execSetGravityGroupIndex },
		{ "SetLocalRestTransforms", &UGeometryCollectionComponent::execSetLocalRestTransforms },
		{ "SetNotifyBreaks", &UGeometryCollectionComponent::execSetNotifyBreaks },
		{ "SetNotifyCrumblings", &UGeometryCollectionComponent::execSetNotifyCrumblings },
		{ "SetNotifyGlobalBreaks", &UGeometryCollectionComponent::execSetNotifyGlobalBreaks },
		{ "SetNotifyGlobalCollision", &UGeometryCollectionComponent::execSetNotifyGlobalCollision },
		{ "SetNotifyGlobalCrumblings", &UGeometryCollectionComponent::execSetNotifyGlobalCrumblings },
		{ "SetNotifyGlobalRemovals", &UGeometryCollectionComponent::execSetNotifyGlobalRemovals },
		{ "SetNotifyRemovals", &UGeometryCollectionComponent::execSetNotifyRemovals },
		{ "SetOneWayInteractionLevel", &UGeometryCollectionComponent::execSetOneWayInteractionLevel },
		{ "SetPerLevelCollisionProfileNames", &UGeometryCollectionComponent::execSetPerLevelCollisionProfileNames },
		{ "SetPerParticleCollisionProfileName", &UGeometryCollectionComponent::execSetPerParticleCollisionProfileName },
		{ "SetRestCollection", &UGeometryCollectionComponent::execSetRestCollection },
		{ "SetUseMaterialDamageModifiers", &UGeometryCollectionComponent::execSetUseMaterialDamageModifiers },
		{ "SetUseStaticMeshCollisionForTraces", &UGeometryCollectionComponent::execSetUseStaticMeshCollisionForTraces },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionComponent);
UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister()
{
	return UGeometryCollectionComponent::StaticClass();
}
struct Z_Construct_UClass_UGeometryCollectionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n*\x09GeometryCollectionComponent\n*/" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "GeometryCollectionComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaosSolverActor_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Chaos RBD Solver override. Will use the world's default solver actor if null. */" },
		{ "DisplayName", "Chaos Solver" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Chaos RBD Solver override. Will use the world's default solver actor if null." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestCollection_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitializationFields_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Simulating_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "GeometryCollection now abides the bSimulatePhysics flag from the base class." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** ObjectType defines how to initialize the rigid objects state, Kinematic, Sleeping, Dynamic. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "ObjectType defines how to initialize the rigid objects state, Kinematic, Sleeping, Dynamic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityGroupIndex_MetaData[] = {
		{ "BlueprintSetter", "SetGravityGroupIndex" },
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneWayInteractionLevel_MetaData[] = {
		{ "BlueprintSetter", "SetOneWayInteractionLevel" },
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "// All bodies with a level greater than or equal to this will have One-Way Interaction enabled and act like debris (will not apply forces to non-debris bodies)\n// Set to -1 to disable (no bodies will have One-Way Interaction enabled)\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "All bodies with a level greater than or equal to this will have One-Way Interaction enabled and act like debris (will not apply forces to non-debris bodies)\nSet to -1 to disable (no bodies will have One-Way Interaction enabled)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDensityFromPhysicsMaterial_MetaData[] = {
		{ "BlueprintSetter", "SetDensityFromPhysicsMaterial" },
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** when true, density will be used to compute mass using the assigned physics material */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "when true, density will be used to compute mass using the assigned physics material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceMotionBlur_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** If ForceMotionBlur is on, motion blur will always be active, even if the GeometryCollection is at rest. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If ForceMotionBlur is on, motion blur will always be active, even if the GeometryCollection is at rest." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableClustering_MetaData[] = {
		{ "Category", "ChaosPhysics|Clustering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterGroupIndex_MetaData[] = {
		{ "Category", "ChaosPhysics|Clustering" },
		{ "Comment", "/** Maximum level for cluster breaks. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum level for cluster breaks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevel_MetaData[] = {
		{ "Category", "ChaosPhysics|Clustering" },
		{ "Comment", "/** Maximum level for cluster breaks. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum level for cluster breaks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimulatedLevel_MetaData[] = {
		{ "Category", "ChaosPhysics|Clustering" },
		{ "Comment", "/** The maximum level to create rigid bodies that could be simulated.\n\x09""Example: If we have a Geometry Collection with 2 levels, where:\n\x09""0 = Root\n\x09""1 = Clusters\n\x09""2 = Leaf Nodes\n\x09""A setting of '1' would only generate a physics representation of the Root transform and Level 1 clusters. \n\x09The leaf nodes on Level 2 would never be created on the solver, and would therefore never be considered as part of the simulation. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "The maximum level to create rigid bodies that could be simulated.\n      Example: If we have a Geometry Collection with 2 levels, where:\n      0 = Root\n      1 = Clusters\n      2 = Leaf Nodes\n      A setting of '1' would only generate a physics representation of the Root transform and Level 1 clusters.\n      The leaf nodes on Level 2 would never be created on the solver, and would therefore never be considered as part of the simulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageModel_MetaData[] = {
		{ "BlueprintSetter", "SetDamageModel" },
		{ "Category", "ChaosPhysics|Damage" },
		{ "Comment", "/** Damage model to use for evaluating destruction. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Damage model to use for evaluating destruction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageThreshold_MetaData[] = {
		{ "BlueprintGetter", "GetDamageThreshold" },
		{ "BlueprintSetter", "SetDamageThreshold" },
		{ "Category", "ChaosPhysics|Damage" },
		{ "EditCondition", "!bUseSizeSpecificDamageThreshold && DamageModel == EDamageModelTypeEnum::Chaos_Damage_Model_UserDefined_Damage_Threshold" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSizeSpecificDamageThreshold_MetaData[] = {
		{ "Category", "ChaosPhysics|Damage" },
		{ "Comment", "/** Damage threshold for clusters at different levels. */" },
		{ "EditCondition", "DamageModel == EDamageModelTypeEnum::Chaos_Damage_Model_UserDefined_Damage_Threshold" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Damage threshold for clusters at different levels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialDamageModifiers_MetaData[] = {
		{ "BlueprintSetter", "SetUseMaterialDamageModifiers" },
		{ "Category", "ChaosPhysics|Damage" },
		{ "Comment", "/** When on , use the modifiers on the material to adjust the user defined damage threshold values */" },
		{ "EditCondition", "DamageModel == EDamageModelTypeEnum::Chaos_Damage_Model_UserDefined_Damage_Threshold" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "When on , use the modifiers on the material to adjust the user defined damage threshold values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagePropagationData_MetaData[] = {
		{ "BlueprintSetter", "SetDamagePropagationData" },
		{ "Category", "ChaosPhysics|Damage" },
		{ "Comment", "/** Data about how damage propagation shoudl behave. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Data about how damage propagation shoudl behave." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDamageFromCollision_MetaData[] = {
		{ "BlueprintSetter", "SetEnableDamageFromCollision" },
		{ "Category", "ChaosPhysics|Damage" },
		{ "Comment", "/** Whether or not collisions against this geometry collection will apply strain which could cause the geometry collection to fracture. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether or not collisions against this geometry collection will apply strain which could cause the geometry collection to fracture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRemovalOnSleep_MetaData[] = {
		{ "Category", "ChaosPhysics|Removal" },
		{ "Comment", "/** Allow removal on sleep for the instance if the rest collection has it enabled */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Allow removal on sleep for the instance if the rest collection has it enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRemovalOnBreak_MetaData[] = {
		{ "Category", "ChaosPhysics|Removal" },
		{ "Comment", "/** Allow removal on break for the instance if the rest collection has it enabled */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Allow removal on break for the instance if the rest collection has it enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterConnectionType_MetaData[] = {
		{ "Comment", "/** */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Connection types are defined on the asset now." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionGroup_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleFraction_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Fraction of collision sample particles to keep */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Fraction of collision sample particles to keep" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearEtherDrag_MetaData[] = {
		{ "Comment", "/** Uniform linear ether drag. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use PhysicalMaterial instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Uniform linear ether drag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularEtherDrag_MetaData[] = {
		{ "Comment", "/** Uniform angular ether drag. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use PhysicalMaterial instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Uniform angular ether drag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[] = {
		{ "Comment", "/** Physical Properties */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Physical material now derived from render materials, for instance overrides use PhysicalMaterialOverride." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Physical Properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialVelocityType_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLinearVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialAngularVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialOverride_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Physical material now derived from render materials, for instance overrides use Colliisons PhysicalMaterialOverride." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestTransforms_MetaData[] = {
		{ "Comment", "/** Optional transforms to initialize scene proxy if difference from the RestCollection. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Optional transforms to initialize scene proxy if difference from the RestCollection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyGeometryCollectionPhysicsStateChange_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange_MetaData[] = {
		{ "Category", "Game|Loading" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChaosBreakEvent_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChaosRemovalEvent_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChaosCrumblingEvent_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredCacheTime_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachePlayback_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChaosPhysicsCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyBreaks_MetaData[] = {
		{ "Category", "ChaosPhysics|Events" },
		{ "Comment", "/** If true, this component will generate breaking events that other systems may subscribe to. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate breaking events that other systems may subscribe to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyCollisions_MetaData[] = {
		{ "Category", "ChaosPhysics|Events" },
		{ "Comment", "/** If true, this component will generate collision events that other systems may subscribe to. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate collision events that other systems may subscribe to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyTrailing_MetaData[] = {
		{ "Category", "ChaosPhysics|Events" },
		{ "Comment", "/** If true, this component will generate trailing events that other systems may subscribe to. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate trailing events that other systems may subscribe to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyRemovals_MetaData[] = {
		{ "Category", "ChaosPhysics|Events" },
		{ "Comment", "/** If true, this component will generate removal events that other systems may subscribe to. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate removal events that other systems may subscribe to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyCrumblings_MetaData[] = {
		{ "Category", "ChaosPhysics|Events" },
		{ "Comment", "/** If true, this component will generate crumbling events that other systems may subscribe to. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate crumbling events that other systems may subscribe to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCrumblingEventIncludesChildren_MetaData[] = {
		{ "Category", "ChaosPhysics|Events" },
		{ "Comment", "/** If this and bNotifyCrumblings are true, the crumbling events will contain released children indices. */" },
		{ "EditCondition", "bNotifyCrumblings" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If this and bNotifyCrumblings are true, the crumbling events will contain released children indices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyGlobalBreaks_MetaData[] = {
		{ "Category", "ChaosPhysics|Events|Global" },
		{ "Comment", "/** If true, this component will generate breaking events that will be listened by the global event relay. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate breaking events that will be listened by the global event relay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyGlobalCollisions_MetaData[] = {
		{ "Category", "ChaosPhysics|Events|Global" },
		{ "Comment", "/** If true, this component will generate collision events  that will be listened by the global event relay. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate collision events  that will be listened by the global event relay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyGlobalRemovals_MetaData[] = {
		{ "Category", "ChaosPhysics|Events|Global" },
		{ "Comment", "/** If true, this component will generate removal events  that will be listened by the global event relay. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate removal events  that will be listened by the global event relay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyGlobalCrumblings_MetaData[] = {
		{ "Category", "ChaosPhysics|Events|Global" },
		{ "Comment", "/** If true, this component will generate crumbling events  that will be listened by the global event relay. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate crumbling events  that will be listened by the global event relay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGlobalCrumblingEventIncludesChildren_MetaData[] = {
		{ "Category", "ChaosPhysics|Events|Global" },
		{ "Comment", "/** If this and bNotifyGlobalCrumblings are true, the crumbling events will contain released children indices. */" },
		{ "EditCondition", "bNotifyGlobalCrumblings" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If this and bNotifyGlobalCrumblings are true, the crumbling events will contain released children indices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStoreVelocities_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** If true, this component will save linear and angular velocities on its DynamicCollection. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will save linear and angular velocities on its DynamicCollection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurrentlyNavigationRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowBoneColors_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** Display Bone Colors instead of assigned materials */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Display Bone Colors instead of assigned materials" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateComponentTransformToRootBone_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** \n\x09* Relocate the component so that the original offset to the root bone is maintained\n\x09* This only works when the root bone is moving whole being dynamically simulated \n\x09* Note: Once the root element is broken, the component will no longer update its position\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Relocate the component so that the original offset to the root bone is maintained\nThis only works when the root bone is moving whole being dynamically simulated\nNote: Once the root element is broken, the component will no longer update its position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRootProxyForNavigation_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateNavigationInTick_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRunTimeDataCollection_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunTimeDataCollectionGuid_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMPool_MetaData[] = {
		{ "Comment", "/** Deprecated for CustomRendererType. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Deprecated for CustomRendererType." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAssignISMPool_MetaData[] = {
		{ "Comment", "/** Deprecated for CustomRendererType. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Deprecated for CustomRendererType." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCustomRenderer_MetaData[] = {
		{ "Category", "ChaosPhysics|Rendering" },
		{ "Comment", "/** If true, CustomRendererType will be used. If false, CustomRendererType comes from the RestCollection. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, CustomRendererType will be used. If false, CustomRendererType comes from the RestCollection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRendererType_MetaData[] = {
		{ "Category", "ChaosPhysics|Rendering" },
		{ "Comment", "/** Custom class type that will be used to render the geometry collection instead of using the native rendering. */" },
		{ "editcondition", "bOverrideCustomRenderer" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "MustImplement", "/Script/GeometryCollectionEngine.GeometryCollectionExternalRenderInterface" },
		{ "ToolTip", "Custom class type that will be used to render the geometry collection instead of using the native rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRootProxyForCustomRenderer_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRenderer_MetaData[] = {
		{ "Comment", "/** A custom renderer object created from CustomRenderType. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "A custom renderer object created from CustomRenderType." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableReplication_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/* Per-instance override to enable/disable replication for the geometry collection */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Per-instance override to enable/disable replication for the geometry collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAbandonAfterLevel_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/** \n\x09 * Enables use of ReplicationAbandonAfterLevel to stop providing network updates to\n\x09 * clients when the updated particle is of a level higher then specified.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Enables use of ReplicationAbandonAfterLevel to stop providing network updates to\nclients when the updated particle is of a level higher then specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbandonedCollisionProfileName_MetaData[] = {
		{ "BlueprintSetter", "SetAbandonedParticleCollisionProfileName" },
		{ "Category", "Network" },
		{ "Comment", "/**\n\x09 * Whether abandoned particles on the client should continue to have collision (i.e.\n\x09 * still be in the external/internal acceleration structure).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether abandoned particles on the client should continue to have collision (i.e.\nstill be in the external/internal acceleration structure)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfilePerLevel_MetaData[] = {
		{ "BlueprintSetter", "SetPerLevelCollisionProfileNames" },
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09 * A per-level collision profile name. If the name is set to NONE or an invalid collision profile, nothing will be changed.\n\x09 * If the there are more levels than elements in this array, then each level will use the index that best matches it.\n\x09 * For example, if the particle is level 2, and there is only 1 element in the array, then the particle will use the 0th\n\x09 * collision profile. AbandonedCollisionProfileName will override this on the client when relevant.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "A per-level collision profile name. If the name is set to NONE or an invalid collision profile, nothing will be changed.\nIf the there are more levels than elements in this array, then each level will use the index that best matches it.\nFor example, if the particle is level 2, and there is only 1 element in the array, then the particle will use the 0th\ncollision profile. AbandonedCollisionProfileName will override this on the client when relevant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationAbandonClusterLevel_MetaData[] = {
		{ "Comment", "/**\n\x09 * If replicating - the cluster level to stop sending corrections for geometry collection chunks.\n\x09 * recommended for smaller leaf levels when the size of the objects means they are no longer\n\x09 * gameplay relevant to cut down on required bandwidth to update a collection.\n\x09 * @see bEnableAbandonAfterLevel\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "GeometryCollection now uses ReplicationAbandonAfterLevel instead of ReplicationAbandonClusterLevel." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If replicating - the cluster level to stop sending corrections for geometry collection chunks.\nrecommended for smaller leaf levels when the size of the objects means they are no longer\ngameplay relevant to cut down on required bandwidth to update a collection.\n@see bEnableAbandonAfterLevel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationAbandonAfterLevel_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/**\n\x09* If replicating - the cluster level after which replication will not happen \n\x09* @see bEnableAbandonAfterLevel\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If replicating - the cluster level after which replication will not happen\n@see bEnableAbandonAfterLevel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationMaxPositionAndVelocityCorrectionLevel_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/**\n\x09* If replicating - the maximum level where clusters will have their position and velocity send over to the client for tracking and correcting\n\x09* When breaking, client will only receive the initial break velocity\n\x09* This helps save bandwidth where only the destruction state of the GC is to be replicated but the falling pieces do not need to be tracked precisely\n\x09* @note This will have an effect only if set to a value less than ReplicationAbandonAfterLevel\n\x09* @see ReplicationAbandonAfterLevel\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If replicating - the maximum level where clusters will have their position and velocity send over to the client for tracking and correcting\nWhen breaking, client will only receive the initial break velocity\nThis helps save bandwidth where only the destruction state of the GC is to be replicated but the falling pieces do not need to be tracked precisely\n@note This will have an effect only if set to a value less than ReplicationAbandonAfterLevel\n@see ReplicationAbandonAfterLevel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepStateData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepDynamicData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightedBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DummyBodySetup_MetaData[] = {
		{ "Comment", "// Temporary storage for body setup in order to initialise a dummy body instance\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Temporary storage for body setup in order to initialise a dummy body instance" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorActor_MetaData[] = {
		{ "Comment", "// Tracked editor actor that owns the original component so we can write back recorded caches\n// from PIE.\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Tracked editor actor that owns the original component so we can write back recorded caches\nfrom PIE." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventDispatcher_MetaData[] = {
		{ "Comment", "// Event dispatcher for break, crumble, removal and collision events\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Event dispatcher for break, crumble, removal and collision events" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmbeddedGeometryComponents_MetaData[] = {
		{ "Comment", "/** The information of all the embedded instanced static meshes */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "The information of all the embedded instanced static meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseStaticMeshCollisionForTraces_MetaData[] = {
		{ "BlueprintGetter", "GetUseStaticMeshCollisionForTraces" },
		{ "BlueprintSetter", "SetUseStaticMeshCollisionForTraces" },
		{ "Category", "Physics" },
		{ "Comment", "// todo(chaos): Remove the ability to change this at runtime, as we'll want to use this at cook time instead\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "todo(chaos): Remove the ability to change this at runtime, as we'll want to use this at cook time instead" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RestCollection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitializationFields_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitializationFields;
	static void NewProp_Simulating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Simulating;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GravityGroupIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OneWayInteractionLevel;
	static void NewProp_bDensityFromPhysicsMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDensityFromPhysicsMaterial;
	static void NewProp_bForceMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMotionBlur;
	static void NewProp_EnableClustering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableClustering;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterGroupIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSimulatedLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DamageModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageModel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageThreshold_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DamageThreshold;
	static void NewProp_bUseSizeSpecificDamageThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSizeSpecificDamageThreshold;
	static void NewProp_bUseMaterialDamageModifiers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialDamageModifiers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamagePropagationData;
	static void NewProp_bEnableDamageFromCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDamageFromCollision;
	static void NewProp_bAllowRemovalOnSleep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemovalOnSleep;
	static void NewProp_bAllowRemovalOnBreak_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemovalOnBreak;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterConnectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterConnectionType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionGroup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearEtherDrag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularEtherDrag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterial;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitialVelocityType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialVelocityType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialAngularVelocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterialOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CacheParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RestTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RestTransforms;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NotifyGeometryCollectionPhysicsStateChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChaosBreakEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChaosRemovalEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChaosCrumblingEvent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredCacheTime;
	static void NewProp_CachePlayback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CachePlayback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChaosPhysicsCollision;
	static void NewProp_bNotifyBreaks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyBreaks;
	static void NewProp_bNotifyCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyCollisions;
	static void NewProp_bNotifyTrailing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyTrailing;
	static void NewProp_bNotifyRemovals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyRemovals;
	static void NewProp_bNotifyCrumblings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyCrumblings;
	static void NewProp_bCrumblingEventIncludesChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrumblingEventIncludesChildren;
	static void NewProp_bNotifyGlobalBreaks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyGlobalBreaks;
	static void NewProp_bNotifyGlobalCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyGlobalCollisions;
	static void NewProp_bNotifyGlobalRemovals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyGlobalRemovals;
	static void NewProp_bNotifyGlobalCrumblings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyGlobalCrumblings;
	static void NewProp_bGlobalCrumblingEventIncludesChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlobalCrumblingEventIncludesChildren;
	static void NewProp_bStoreVelocities_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStoreVelocities;
	static void NewProp_bIsCurrentlyNavigationRelevant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentlyNavigationRelevant;
	static void NewProp_bShowBoneColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBoneColors;
	static void NewProp_bUpdateComponentTransformToRootBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateComponentTransformToRootBone;
	static void NewProp_bUseRootProxyForNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRootProxyForNavigation;
	static void NewProp_bUpdateNavigationInTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateNavigationInTick;
#if WITH_EDITORONLY_DATA
	static void NewProp_bEnableRunTimeDataCollection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRunTimeDataCollection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RunTimeDataCollectionGuid;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ISMPool;
	static void NewProp_bAutoAssignISMPool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAssignISMPool;
	static void NewProp_bOverrideCustomRenderer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCustomRenderer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomRendererType;
	static void NewProp_bEnableRootProxyForCustomRenderer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRootProxyForCustomRenderer;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_CustomRenderer;
	static void NewProp_bEnableReplication_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableReplication;
	static void NewProp_bEnableAbandonAfterLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAbandonAfterLevel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AbandonedCollisionProfileName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfilePerLevel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionProfilePerLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicationAbandonClusterLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicationAbandonAfterLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicationMaxPositionAndVelocityCorrectionLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RepData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RepStateData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RepDynamicData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedBones;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HighlightedBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HighlightedBones;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DummyBodySetup;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorActor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventDispatcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmbeddedGeometryComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EmbeddedGeometryComponents;
	static void NewProp_bUseStaticMeshCollisionForTraces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStaticMeshCollisionForTraces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity, "ApplyAngularVelocity" }, // 1361823037
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAssetDefaults, "ApplyAssetDefaults" }, // 709266472
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity, "ApplyBreakingAngularVelocity" }, // 358444833
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity, "ApplyBreakingLinearVelocity" }, // 2023512621
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain, "ApplyExternalStrain" }, // 3506247319
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain, "ApplyInternalStrain" }, // 1390992169
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField, "ApplyKinematicField" }, // 3387283743
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity, "ApplyLinearVelocity" }, // 452621380
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField, "ApplyPhysicsField" }, // 1401539365
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters, "CrumbleActiveClusters" }, // 2711079983
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster, "CrumbleCluster" }, // 2522712339
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_EnableRootProxyForCustomRenderer, "EnableRootProxyForCustomRenderer" }, // 650084270
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetDamageThreshold, "GetDamageThreshold" }, // 2684599463
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo, "GetDebugInfo" }, // 996116755
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel, "GetInitialLevel" }, // 2971901350
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLocalRestTransforms, "GetInitialLocalRestTransforms" }, // 474484702
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds, "GetLocalBounds" }, // 2657356598
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents, "GetMassAndExtents" }, // 2139260162
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetRootCurrentTransform, "GetRootCurrentTransform" }, // 1435710551
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex, "GetRootIndex" }, // 341472192
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetRootInitialTransform, "GetRootInitialTransform" }, // 2079053310
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetUseStaticMeshCollisionForTraces, "GetUseStaticMeshCollisionForTraces" }, // 756774935
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_IsRootBroken, "IsRootBroken" }, // 934987454
		{ &Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature, "NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature" }, // 2072463081
		{ &Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature, "NotifyGeometryCollectionPhysicsStateChange__DelegateSignature" }, // 2109347893
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepData, "OnRep_RepData" }, // 3620742524
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepDynamicData, "OnRep_RepDynamicData" }, // 1331772338
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_OnRep_RepStateData, "OnRep_RepStateData" }, // 1948448518
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision, "ReceivePhysicsCollision" }, // 1632796527
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors, "RemoveAllAnchors" }, // 3566168186
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetAbandonedParticleCollisionProfileName, "SetAbandonedParticleCollisionProfileName" }, // 143444816
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox, "SetAnchoredByBox" }, // 557860611
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex, "SetAnchoredByIndex" }, // 873447070
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox, "SetAnchoredByTransformedBox" }, // 3900446455
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageModel, "SetDamageModel" }, // 2142273832
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetDamagePropagationData, "SetDamagePropagationData" }, // 4253336841
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetDamageThreshold, "SetDamageThreshold" }, // 1887922438
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetDensityFromPhysicsMaterial, "SetDensityFromPhysicsMaterial" }, // 1225467731
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision, "SetEnableDamageFromCollision" }, // 704158057
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetGravityGroupIndex, "SetGravityGroupIndex" }, // 1355660424
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetLocalRestTransforms, "SetLocalRestTransforms" }, // 2211983533
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks, "SetNotifyBreaks" }, // 447288108
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings, "SetNotifyCrumblings" }, // 1973182054
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalBreaks, "SetNotifyGlobalBreaks" }, // 3483213401
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCollision, "SetNotifyGlobalCollision" }, // 575966647
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalCrumblings, "SetNotifyGlobalCrumblings" }, // 924111923
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyGlobalRemovals, "SetNotifyGlobalRemovals" }, // 2101264872
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals, "SetNotifyRemovals" }, // 2256095345
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetOneWayInteractionLevel, "SetOneWayInteractionLevel" }, // 785745004
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetPerLevelCollisionProfileNames, "SetPerLevelCollisionProfileNames" }, // 142016140
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetPerParticleCollisionProfileName, "SetPerParticleCollisionProfileName" }, // 1410702410
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection, "SetRestCollection" }, // 2694599529
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetUseMaterialDamageModifiers, "SetUseMaterialDamageModifiers" }, // 4113131663
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetUseStaticMeshCollisionForTraces, "SetUseStaticMeshCollisionForTraces" }, // 3666354924
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ChaosSolverActor = { "ChaosSolverActor", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, ChaosSolverActor), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaosSolverActor_MetaData), NewProp_ChaosSolverActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestCollection = { "RestCollection", nullptr, (EPropertyFlags)0x0114000002000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, RestCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestCollection_MetaData), NewProp_RestCollection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitializationFields_Inner = { "InitializationFields", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AFieldSystemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitializationFields = { "InitializationFields", nullptr, (EPropertyFlags)0x0114000002000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, InitializationFields), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitializationFields_MetaData), NewProp_InitializationFields_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->Simulating_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating = { "Simulating", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Simulating_MetaData), NewProp_Simulating_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, ObjectType), Z_Construct_UEnum_Chaos_EObjectStateTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectType_MetaData), NewProp_ObjectType_MetaData) }; // 1227595032
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_GravityGroupIndex = { "GravityGroupIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, GravityGroupIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityGroupIndex_MetaData), NewProp_GravityGroupIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OneWayInteractionLevel = { "OneWayInteractionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, OneWayInteractionLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneWayInteractionLevel_MetaData), NewProp_OneWayInteractionLevel_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bDensityFromPhysicsMaterial_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bDensityFromPhysicsMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bDensityFromPhysicsMaterial = { "bDensityFromPhysicsMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bDensityFromPhysicsMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDensityFromPhysicsMaterial_MetaData), NewProp_bDensityFromPhysicsMaterial_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bForceMotionBlur_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bForceMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bForceMotionBlur = { "bForceMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bForceMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceMotionBlur_MetaData), NewProp_bForceMotionBlur_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->EnableClustering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering = { "EnableClustering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableClustering_MetaData), NewProp_EnableClustering_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterGroupIndex = { "ClusterGroupIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, ClusterGroupIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterGroupIndex_MetaData), NewProp_ClusterGroupIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxClusterLevel = { "MaxClusterLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, MaxClusterLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxClusterLevel_MetaData), NewProp_MaxClusterLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxSimulatedLevel = { "MaxSimulatedLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, MaxSimulatedLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimulatedLevel_MetaData), NewProp_MaxSimulatedLevel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageModel = { "DamageModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, DamageModel), Z_Construct_UEnum_Chaos_EDamageModelTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageModel_MetaData), NewProp_DamageModel_MetaData) }; // 1555958943
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold_Inner = { "DamageThreshold", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold = { "DamageThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, DamageThreshold), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageThreshold_MetaData), NewProp_DamageThreshold_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseSizeSpecificDamageThreshold_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bUseSizeSpecificDamageThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseSizeSpecificDamageThreshold = { "bUseSizeSpecificDamageThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseSizeSpecificDamageThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSizeSpecificDamageThreshold_MetaData), NewProp_bUseSizeSpecificDamageThreshold_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseMaterialDamageModifiers_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bUseMaterialDamageModifiers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseMaterialDamageModifiers = { "bUseMaterialDamageModifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseMaterialDamageModifiers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaterialDamageModifiers_MetaData), NewProp_bUseMaterialDamageModifiers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamagePropagationData = { "DamagePropagationData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, DamagePropagationData), Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagePropagationData_MetaData), NewProp_DamagePropagationData_MetaData) }; // 2094228416
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableDamageFromCollision_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bEnableDamageFromCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableDamageFromCollision = { "bEnableDamageFromCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableDamageFromCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDamageFromCollision_MetaData), NewProp_bEnableDamageFromCollision_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnSleep_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bAllowRemovalOnSleep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnSleep = { "bAllowRemovalOnSleep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnSleep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowRemovalOnSleep_MetaData), NewProp_bAllowRemovalOnSleep_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnBreak_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bAllowRemovalOnBreak = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnBreak = { "bAllowRemovalOnBreak", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnBreak_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowRemovalOnBreak_MetaData), NewProp_bAllowRemovalOnBreak_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterConnectionType = { "ClusterConnectionType", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, ClusterConnectionType_DEPRECATED), Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterConnectionType_MetaData), NewProp_ClusterConnectionType_MetaData) }; // 842739165
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionGroup = { "CollisionGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, CollisionGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionGroup_MetaData), NewProp_CollisionGroup_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionSampleFraction = { "CollisionSampleFraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, CollisionSampleFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSampleFraction_MetaData), NewProp_CollisionSampleFraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_LinearEtherDrag = { "LinearEtherDrag", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, LinearEtherDrag_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearEtherDrag_MetaData), NewProp_LinearEtherDrag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AngularEtherDrag = { "AngularEtherDrag", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, AngularEtherDrag_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularEtherDrag_MetaData), NewProp_AngularEtherDrag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, PhysicalMaterial_DEPRECATED), Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterial_MetaData), NewProp_PhysicalMaterial_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType = { "InitialVelocityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, InitialVelocityType), Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialVelocityType_MetaData), NewProp_InitialVelocityType_MetaData) }; // 1463678991
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialLinearVelocity = { "InitialLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, InitialLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLinearVelocity_MetaData), NewProp_InitialLinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialAngularVelocity = { "InitialAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, InitialAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialAngularVelocity_MetaData), NewProp_InitialAngularVelocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterialOverride = { "PhysicalMaterialOverride", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, PhysicalMaterialOverride_DEPRECATED), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterialOverride_MetaData), NewProp_PhysicalMaterialOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CacheParameters = { "CacheParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, CacheParameters), Z_Construct_UScriptStruct_FGeomComponentCacheParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheParameters_MetaData), NewProp_CacheParameters_MetaData) }; // 1659258308
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestTransforms_Inner = { "RestTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestTransforms = { "RestTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, RestTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestTransforms_MetaData), NewProp_RestTransforms_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsStateChange = { "NotifyGeometryCollectionPhysicsStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, NotifyGeometryCollectionPhysicsStateChange), Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyGeometryCollectionPhysicsStateChange_MetaData), NewProp_NotifyGeometryCollectionPhysicsStateChange_MetaData) }; // 2109347893
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange = { "NotifyGeometryCollectionPhysicsLoadingStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, NotifyGeometryCollectionPhysicsLoadingStateChange), Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange_MetaData), NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange_MetaData) }; // 2072463081
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosBreakEvent = { "OnChaosBreakEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, OnChaosBreakEvent), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChaosBreakEvent_MetaData), NewProp_OnChaosBreakEvent_MetaData) }; // 4117274320
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosRemovalEvent = { "OnChaosRemovalEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, OnChaosRemovalEvent), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChaosRemovalEvent_MetaData), NewProp_OnChaosRemovalEvent_MetaData) }; // 108149827
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosCrumblingEvent = { "OnChaosCrumblingEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, OnChaosCrumblingEvent), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChaosCrumblingEvent_MetaData), NewProp_OnChaosCrumblingEvent_MetaData) }; // 2303269808
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DesiredCacheTime = { "DesiredCacheTime", nullptr, (EPropertyFlags)0x0010000200022005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, DesiredCacheTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredCacheTime_MetaData), NewProp_DesiredCacheTime_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CachePlayback_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->CachePlayback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CachePlayback = { "CachePlayback", nullptr, (EPropertyFlags)0x0010000000022005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CachePlayback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachePlayback_MetaData), NewProp_CachePlayback_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosPhysicsCollision = { "OnChaosPhysicsCollision", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, OnChaosPhysicsCollision), Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChaosPhysicsCollision_MetaData), NewProp_OnChaosPhysicsCollision_MetaData) }; // 51482007
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyBreaks_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bNotifyBreaks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyBreaks = { "bNotifyBreaks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyBreaks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyBreaks_MetaData), NewProp_bNotifyBreaks_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCollisions_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bNotifyCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCollisions = { "bNotifyCollisions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyCollisions_MetaData), NewProp_bNotifyCollisions_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyTrailing_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bNotifyTrailing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyTrailing = { "bNotifyTrailing", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyTrailing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyTrailing_MetaData), NewProp_bNotifyTrailing_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyRemovals_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bNotifyRemovals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyRemovals = { "bNotifyRemovals", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyRemovals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyRemovals_MetaData), NewProp_bNotifyRemovals_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCrumblings_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bNotifyCrumblings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCrumblings = { "bNotifyCrumblings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCrumblings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyCrumblings_MetaData), NewProp_bNotifyCrumblings_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bCrumblingEventIncludesChildren_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bCrumblingEventIncludesChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bCrumblingEventIncludesChildren = { "bCrumblingEventIncludesChildren", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bCrumblingEventIncludesChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCrumblingEventIncludesChildren_MetaData), NewProp_bCrumblingEventIncludesChildren_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalBreaks_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bNotifyGlobalBreaks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalBreaks = { "bNotifyGlobalBreaks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalBreaks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyGlobalBreaks_MetaData), NewProp_bNotifyGlobalBreaks_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalCollisions_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bNotifyGlobalCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalCollisions = { "bNotifyGlobalCollisions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyGlobalCollisions_MetaData), NewProp_bNotifyGlobalCollisions_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalRemovals_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bNotifyGlobalRemovals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalRemovals = { "bNotifyGlobalRemovals", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalRemovals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyGlobalRemovals_MetaData), NewProp_bNotifyGlobalRemovals_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalCrumblings_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bNotifyGlobalCrumblings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalCrumblings = { "bNotifyGlobalCrumblings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalCrumblings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyGlobalCrumblings_MetaData), NewProp_bNotifyGlobalCrumblings_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bGlobalCrumblingEventIncludesChildren_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bGlobalCrumblingEventIncludesChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bGlobalCrumblingEventIncludesChildren = { "bGlobalCrumblingEventIncludesChildren", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bGlobalCrumblingEventIncludesChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGlobalCrumblingEventIncludesChildren_MetaData), NewProp_bGlobalCrumblingEventIncludesChildren_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bStoreVelocities_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bStoreVelocities = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bStoreVelocities = { "bStoreVelocities", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bStoreVelocities_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStoreVelocities_MetaData), NewProp_bStoreVelocities_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bIsCurrentlyNavigationRelevant_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bIsCurrentlyNavigationRelevant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bIsCurrentlyNavigationRelevant = { "bIsCurrentlyNavigationRelevant", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bIsCurrentlyNavigationRelevant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCurrentlyNavigationRelevant_MetaData), NewProp_bIsCurrentlyNavigationRelevant_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bShowBoneColors_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bShowBoneColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bShowBoneColors = { "bShowBoneColors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bShowBoneColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowBoneColors_MetaData), NewProp_bShowBoneColors_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateComponentTransformToRootBone_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bUpdateComponentTransformToRootBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateComponentTransformToRootBone = { "bUpdateComponentTransformToRootBone", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateComponentTransformToRootBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateComponentTransformToRootBone_MetaData), NewProp_bUpdateComponentTransformToRootBone_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseRootProxyForNavigation_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bUseRootProxyForNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseRootProxyForNavigation = { "bUseRootProxyForNavigation", nullptr, (EPropertyFlags)0x00200c0000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseRootProxyForNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRootProxyForNavigation_MetaData), NewProp_bUseRootProxyForNavigation_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateNavigationInTick_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bUpdateNavigationInTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateNavigationInTick = { "bUpdateNavigationInTick", nullptr, (EPropertyFlags)0x00200c0000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateNavigationInTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateNavigationInTick_MetaData), NewProp_bUpdateNavigationInTick_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRunTimeDataCollection_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bEnableRunTimeDataCollection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRunTimeDataCollection = { "bEnableRunTimeDataCollection", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRunTimeDataCollection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRunTimeDataCollection_MetaData), NewProp_bEnableRunTimeDataCollection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RunTimeDataCollectionGuid = { "RunTimeDataCollectionGuid", nullptr, (EPropertyFlags)0x0020080800000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, RunTimeDataCollectionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunTimeDataCollectionGuid_MetaData), NewProp_RunTimeDataCollectionGuid_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ISMPool = { "ISMPool", nullptr, (EPropertyFlags)0x0124080020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, ISMPool_DEPRECATED), Z_Construct_UClass_AGeometryCollectionISMPoolActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMPool_MetaData), NewProp_ISMPool_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAutoAssignISMPool_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bAutoAssignISMPool_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAutoAssignISMPool = { "bAutoAssignISMPool", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAutoAssignISMPool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoAssignISMPool_MetaData), NewProp_bAutoAssignISMPool_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bOverrideCustomRenderer_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bOverrideCustomRenderer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bOverrideCustomRenderer = { "bOverrideCustomRenderer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bOverrideCustomRenderer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCustomRenderer_MetaData), NewProp_bOverrideCustomRenderer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CustomRendererType = { "CustomRendererType", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, CustomRendererType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRendererType_MetaData), NewProp_CustomRendererType_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRootProxyForCustomRenderer_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bEnableRootProxyForCustomRenderer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRootProxyForCustomRenderer = { "bEnableRootProxyForCustomRenderer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRootProxyForCustomRenderer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRootProxyForCustomRenderer_MetaData), NewProp_bEnableRootProxyForCustomRenderer_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CustomRenderer = { "CustomRenderer", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, CustomRenderer), Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRenderer_MetaData), NewProp_CustomRenderer_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableReplication_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bEnableReplication = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableReplication = { "bEnableReplication", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableReplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableReplication_MetaData), NewProp_bEnableReplication_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableAbandonAfterLevel_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bEnableAbandonAfterLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableAbandonAfterLevel = { "bEnableAbandonAfterLevel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableAbandonAfterLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAbandonAfterLevel_MetaData), NewProp_bEnableAbandonAfterLevel_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AbandonedCollisionProfileName = { "AbandonedCollisionProfileName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, AbandonedCollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbandonedCollisionProfileName_MetaData), NewProp_AbandonedCollisionProfileName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionProfilePerLevel_Inner = { "CollisionProfilePerLevel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionProfilePerLevel = { "CollisionProfilePerLevel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, CollisionProfilePerLevel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionProfilePerLevel_MetaData), NewProp_CollisionProfilePerLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonClusterLevel = { "ReplicationAbandonClusterLevel", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, ReplicationAbandonClusterLevel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationAbandonClusterLevel_MetaData), NewProp_ReplicationAbandonClusterLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonAfterLevel = { "ReplicationAbandonAfterLevel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, ReplicationAbandonAfterLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationAbandonAfterLevel_MetaData), NewProp_ReplicationAbandonAfterLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationMaxPositionAndVelocityCorrectionLevel = { "ReplicationMaxPositionAndVelocityCorrectionLevel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, ReplicationMaxPositionAndVelocityCorrectionLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationMaxPositionAndVelocityCorrectionLevel_MetaData), NewProp_ReplicationMaxPositionAndVelocityCorrectionLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RepData = { "RepData", "OnRep_RepData", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, RepData), Z_Construct_UScriptStruct_FGeometryCollectionRepData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepData_MetaData), NewProp_RepData_MetaData) }; // 1719167175
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RepStateData = { "RepStateData", "OnRep_RepStateData", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, RepStateData), Z_Construct_UScriptStruct_FGeometryCollectionRepStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepStateData_MetaData), NewProp_RepStateData_MetaData) }; // 3118513686
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RepDynamicData = { "RepDynamicData", "OnRep_RepDynamicData", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, RepDynamicData), Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepDynamicData_MetaData), NewProp_RepDynamicData_MetaData) }; // 3679778430
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_SelectedBones_Inner = { "SelectedBones", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_SelectedBones = { "SelectedBones", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, SelectedBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedBones_MetaData), NewProp_SelectedBones_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_HighlightedBones_Inner = { "HighlightedBones", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_HighlightedBones = { "HighlightedBones", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, HighlightedBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightedBones_MetaData), NewProp_HighlightedBones_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DummyBodySetup = { "DummyBodySetup", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, DummyBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DummyBodySetup_MetaData), NewProp_DummyBodySetup_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EditorActor = { "EditorActor", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, EditorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorActor_MetaData), NewProp_EditorActor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EventDispatcher = { "EventDispatcher", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, EventDispatcher), Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventDispatcher_MetaData), NewProp_EventDispatcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EmbeddedGeometryComponents_Inner = { "EmbeddedGeometryComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EmbeddedGeometryComponents = { "EmbeddedGeometryComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionComponent, EmbeddedGeometryComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmbeddedGeometryComponents_MetaData), NewProp_EmbeddedGeometryComponents_MetaData) };
void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseStaticMeshCollisionForTraces_SetBit(void* Obj)
{
	((UGeometryCollectionComponent*)Obj)->bUseStaticMeshCollisionForTraces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseStaticMeshCollisionForTraces = { "bUseStaticMeshCollisionForTraces", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseStaticMeshCollisionForTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseStaticMeshCollisionForTraces_MetaData), NewProp_bUseStaticMeshCollisionForTraces_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollectionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ChaosSolverActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitializationFields_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitializationFields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_GravityGroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OneWayInteractionLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bDensityFromPhysicsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bForceMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterGroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxClusterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxSimulatedLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseSizeSpecificDamageThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseMaterialDamageModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamagePropagationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableDamageFromCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnSleep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnBreak,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterConnectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterConnectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionSampleFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_LinearEtherDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AngularEtherDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialLinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CacheParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsStateChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosBreakEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosRemovalEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosCrumblingEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DesiredCacheTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CachePlayback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosPhysicsCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyBreaks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyTrailing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyRemovals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCrumblings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bCrumblingEventIncludesChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalBreaks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalRemovals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyGlobalCrumblings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bGlobalCrumblingEventIncludesChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bStoreVelocities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bIsCurrentlyNavigationRelevant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bShowBoneColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateComponentTransformToRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseRootProxyForNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateNavigationInTick,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRunTimeDataCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RunTimeDataCollectionGuid,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ISMPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAutoAssignISMPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bOverrideCustomRenderer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CustomRendererType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRootProxyForCustomRenderer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CustomRenderer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableReplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableAbandonAfterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AbandonedCollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionProfilePerLevel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionProfilePerLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonClusterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonAfterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationMaxPositionAndVelocityCorrectionLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RepData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RepStateData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RepDynamicData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_SelectedBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_SelectedBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_HighlightedBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_HighlightedBones,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DummyBodySetup,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EditorActor,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EventDispatcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EmbeddedGeometryComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EmbeddedGeometryComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseStaticMeshCollisionForTraces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeometryCollectionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister, (int32)VTABLE_OFFSET(UGeometryCollectionComponent, IChaosNotifyHandlerInterface), false },  // 812901129
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::ClassParams = {
	&UGeometryCollectionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGeometryCollectionComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCollectionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCollectionComponent()
{
	if (!Z_Registration_Info_UClass_UGeometryCollectionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionComponent.OuterSingleton, Z_Construct_UClass_UGeometryCollectionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCollectionComponent.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionComponent>()
{
	return UGeometryCollectionComponent::StaticClass();
}
void UGeometryCollectionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_RepData(TEXT("RepData"));
	static const FName Name_RepStateData(TEXT("RepStateData"));
	static const FName Name_RepDynamicData(TEXT("RepDynamicData"));
	const bool bIsValid = true
		&& Name_RepData == ClassReps[(int32)ENetFields_Private::RepData].Property->GetFName()
		&& Name_RepStateData == ClassReps[(int32)ENetFields_Private::RepStateData].Property->GetFName()
		&& Name_RepDynamicData == ClassReps[(int32)ENetFields_Private::RepDynamicData].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGeometryCollectionComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionComponent);
UGeometryCollectionComponent::~UGeometryCollectionComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCollectionComponent)
// End Class UGeometryCollectionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeomComponentCacheParameters::StaticStruct, Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewStructOps, TEXT("GeomComponentCacheParameters"), &Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeomComponentCacheParameters), 1659258308U) },
		{ FGeometryCollectionRepData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics::NewStructOps, TEXT("GeometryCollectionRepData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionRepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionRepData), 1719167175U) },
		{ FGeometryCollectionRepStateData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionRepStateData_Statics::NewStructOps, TEXT("GeometryCollectionRepStateData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionRepStateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionRepStateData), 3118513686U) },
		{ FGeometryCollectionRepDynamicData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData_Statics::NewStructOps, TEXT("GeometryCollectionRepDynamicData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionRepDynamicData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionRepDynamicData), 3679778430U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionComponent, UGeometryCollectionComponent::StaticClass, TEXT("UGeometryCollectionComponent"), &Z_Registration_Info_UClass_UGeometryCollectionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionComponent), 1555893678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_1509693591(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
