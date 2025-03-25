// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/ChaosBlueprint.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/ChaosBreakingEventFilter.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/ChaosCollisionEventFilter.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/ChaosRemovalEventFilter.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/ChaosTrailingEventFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosBlueprint() {}

// Begin Cross Module References
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UChaosDestructionListener();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UChaosDestructionListener_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod();
GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod();
GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod();
GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod();
GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature();
GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature();
GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature();
GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEventData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Delegate FOnChaosCollisionEvents
struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics
{
	struct _Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms
	{
		TArray<FChaosCollisionEventData> CollisionEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when new destruction events are available for collisions. Collision listening must be enabled to get callbacks on this delegate.\n*/" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new destruction events are available for collisions. Collision listening must be enabled to get callbacks on this delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents_Inner = { "CollisionEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosCollisionEventData, METADATA_PARAMS(0, nullptr) }; // 2084218623
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents = { "CollisionEvents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms, CollisionEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionEvents_MetaData), NewProp_CollisionEvents_MetaData) }; // 2084218623
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosCollisionEvents__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChaosCollisionEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosCollisionEvents, TArray<FChaosCollisionEventData> const& CollisionEvents)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms
	{
		TArray<FChaosCollisionEventData> CollisionEvents;
	};
	_Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms Parms;
	Parms.CollisionEvents=CollisionEvents;
	OnChaosCollisionEvents.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChaosCollisionEvents

// Begin Delegate FOnChaosBreakingEvents
struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics
{
	struct _Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms
	{
		TArray<FChaosBreakingEventData> BreakingEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when new destruction events are available for breaks. Breaking listening must be enabled to get callbacks on this delegate.\n*/" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new destruction events are available for breaks. Breaking listening must be enabled to get callbacks on this delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakingEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BreakingEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BreakingEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents_Inner = { "BreakingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosBreakingEventData, METADATA_PARAMS(0, nullptr) }; // 3805912913
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents = { "BreakingEvents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms, BreakingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakingEvents_MetaData), NewProp_BreakingEvents_MetaData) }; // 3805912913
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosBreakingEvents__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChaosBreakingEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosBreakingEvents, TArray<FChaosBreakingEventData> const& BreakingEvents)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms
	{
		TArray<FChaosBreakingEventData> BreakingEvents;
	};
	_Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms Parms;
	Parms.BreakingEvents=BreakingEvents;
	OnChaosBreakingEvents.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChaosBreakingEvents

// Begin Delegate FOnChaosTrailingEvents
struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics
{
	struct _Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms
	{
		TArray<FChaosTrailingEventData> TrailingEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when new trailing events are available for breaks. Trailing listening must be enabled to get callbacks on this delegate.\n*/" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new trailing events are available for breaks. Trailing listening must be enabled to get callbacks on this delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailingEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailingEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrailingEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents_Inner = { "TrailingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosTrailingEventData, METADATA_PARAMS(0, nullptr) }; // 319629255
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents = { "TrailingEvents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms, TrailingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailingEvents_MetaData), NewProp_TrailingEvents_MetaData) }; // 319629255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosTrailingEvents__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChaosTrailingEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosTrailingEvents, TArray<FChaosTrailingEventData> const& TrailingEvents)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms
	{
		TArray<FChaosTrailingEventData> TrailingEvents;
	};
	_Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms Parms;
	Parms.TrailingEvents=TrailingEvents;
	OnChaosTrailingEvents.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChaosTrailingEvents

// Begin Delegate FOnChaosRemovalEvents
struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics
{
	struct _Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms
	{
		TArray<FChaosRemovalEventData> RemovalEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when new destruction events are available for removals. Removal listening must be enabled to get callbacks on this delegate.\n*/" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new destruction events are available for removals. Removal listening must be enabled to get callbacks on this delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovalEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovalEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::NewProp_RemovalEvents_Inner = { "RemovalEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosRemovalEventData, METADATA_PARAMS(0, nullptr) }; // 997543023
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::NewProp_RemovalEvents = { "RemovalEvents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms, RemovalEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalEvents_MetaData), NewProp_RemovalEvents_MetaData) }; // 997543023
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::NewProp_RemovalEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::NewProp_RemovalEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosRemovalEvents__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChaosRemovalEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosRemovalEvents, TArray<FChaosRemovalEventData> const& RemovalEvents)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms
	{
		TArray<FChaosRemovalEventData> RemovalEvents;
	};
	_Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms Parms;
	Parms.RemovalEvents=RemovalEvents;
	OnChaosRemovalEvents.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChaosRemovalEvents

// Begin Class UChaosDestructionListener Function AddChaosSolverActor
struct Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics
{
	struct ChaosDestructionListener_eventAddChaosSolverActor_Parms
	{
		AChaosSolverActor* ChaosSolverActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Dynamically adds a chaos solver to the listener\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Dynamically adds a chaos solver to the listener" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::NewProp_ChaosSolverActor = { "ChaosSolverActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventAddChaosSolverActor_Parms, ChaosSolverActor), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::NewProp_ChaosSolverActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "AddChaosSolverActor", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::ChaosDestructionListener_eventAddChaosSolverActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::ChaosDestructionListener_eventAddChaosSolverActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execAddChaosSolverActor)
{
	P_GET_OBJECT(AChaosSolverActor,Z_Param_ChaosSolverActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddChaosSolverActor(Z_Param_ChaosSolverActor);
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function AddChaosSolverActor

// Begin Class UChaosDestructionListener Function AddGeometryCollectionActor
struct Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics
{
	struct ChaosDestructionListener_eventAddGeometryCollectionActor_Parms
	{
		AGeometryCollectionActor* GeometryCollectionActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Dynamically adds a chaos solver to the listener\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Dynamically adds a chaos solver to the listener" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::NewProp_GeometryCollectionActor = { "GeometryCollectionActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventAddGeometryCollectionActor_Parms, GeometryCollectionActor), Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::NewProp_GeometryCollectionActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "AddGeometryCollectionActor", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::ChaosDestructionListener_eventAddGeometryCollectionActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::ChaosDestructionListener_eventAddGeometryCollectionActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execAddGeometryCollectionActor)
{
	P_GET_OBJECT(AGeometryCollectionActor,Z_Param_GeometryCollectionActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddGeometryCollectionActor(Z_Param_GeometryCollectionActor);
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function AddGeometryCollectionActor

// Begin Class UChaosDestructionListener Function IsEventListening
struct Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics
{
	struct ChaosDestructionListener_eventIsEventListening_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Returns if the destruction listener is listening to any events\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Returns if the destruction listener is listening to any events" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ChaosDestructionListener_eventIsEventListening_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosDestructionListener_eventIsEventListening_Parms), &Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "IsEventListening", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::ChaosDestructionListener_eventIsEventListening_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::ChaosDestructionListener_eventIsEventListening_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_IsEventListening()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execIsEventListening)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEventListening();
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function IsEventListening

// Begin Class UChaosDestructionListener Function RemoveChaosSolverActor
struct Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics
{
	struct ChaosDestructionListener_eventRemoveChaosSolverActor_Parms
	{
		AChaosSolverActor* ChaosSolverActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Dynamically removes a chaos solver from the listener\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Dynamically removes a chaos solver from the listener" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::NewProp_ChaosSolverActor = { "ChaosSolverActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventRemoveChaosSolverActor_Parms, ChaosSolverActor), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::NewProp_ChaosSolverActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "RemoveChaosSolverActor", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::ChaosDestructionListener_eventRemoveChaosSolverActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::ChaosDestructionListener_eventRemoveChaosSolverActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execRemoveChaosSolverActor)
{
	P_GET_OBJECT(AChaosSolverActor,Z_Param_ChaosSolverActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveChaosSolverActor(Z_Param_ChaosSolverActor);
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function RemoveChaosSolverActor

// Begin Class UChaosDestructionListener Function RemoveGeometryCollectionActor
struct Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics
{
	struct ChaosDestructionListener_eventRemoveGeometryCollectionActor_Parms
	{
		AGeometryCollectionActor* GeometryCollectionActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Dynamically removes a chaos solver from the listener\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Dynamically removes a chaos solver from the listener" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::NewProp_GeometryCollectionActor = { "GeometryCollectionActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventRemoveGeometryCollectionActor_Parms, GeometryCollectionActor), Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::NewProp_GeometryCollectionActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "RemoveGeometryCollectionActor", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::ChaosDestructionListener_eventRemoveGeometryCollectionActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::ChaosDestructionListener_eventRemoveGeometryCollectionActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execRemoveGeometryCollectionActor)
{
	P_GET_OBJECT(AGeometryCollectionActor,Z_Param_GeometryCollectionActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGeometryCollectionActor(Z_Param_GeometryCollectionActor);
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function RemoveGeometryCollectionActor

// Begin Class UChaosDestructionListener Function SetBreakingEventEnabled
struct Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics
{
	struct ChaosDestructionListener_eventSetBreakingEventEnabled_Parms
	{
		bool bIsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Enables or disables breaking event listening\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Enables or disables breaking event listening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((ChaosDestructionListener_eventSetBreakingEventEnabled_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosDestructionListener_eventSetBreakingEventEnabled_Parms), &Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetBreakingEventEnabled", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::ChaosDestructionListener_eventSetBreakingEventEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::ChaosDestructionListener_eventSetBreakingEventEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execSetBreakingEventEnabled)
{
	P_GET_UBOOL(Z_Param_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBreakingEventEnabled(Z_Param_bIsEnabled);
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function SetBreakingEventEnabled

// Begin Class UChaosDestructionListener Function SetBreakingEventRequestSettings
struct Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics
{
	struct ChaosDestructionListener_eventSetBreakingEventRequestSettings_Parms
	{
		FChaosBreakingEventRequestSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sets breaking event request settings dynamically\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sets breaking event request settings dynamically" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSetBreakingEventRequestSettings_Parms, InSettings), Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 501564580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetBreakingEventRequestSettings", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::ChaosDestructionListener_eventSetBreakingEventRequestSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::ChaosDestructionListener_eventSetBreakingEventRequestSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execSetBreakingEventRequestSettings)
{
	P_GET_STRUCT_REF(FChaosBreakingEventRequestSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBreakingEventRequestSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function SetBreakingEventRequestSettings

// Begin Class UChaosDestructionListener Function SetCollisionEventEnabled
struct Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics
{
	struct ChaosDestructionListener_eventSetCollisionEventEnabled_Parms
	{
		bool bIsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Enables or disables collision event listening\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Enables or disables collision event listening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((ChaosDestructionListener_eventSetCollisionEventEnabled_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosDestructionListener_eventSetCollisionEventEnabled_Parms), &Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetCollisionEventEnabled", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::ChaosDestructionListener_eventSetCollisionEventEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::ChaosDestructionListener_eventSetCollisionEventEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execSetCollisionEventEnabled)
{
	P_GET_UBOOL(Z_Param_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCollisionEventEnabled(Z_Param_bIsEnabled);
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function SetCollisionEventEnabled

// Begin Class UChaosDestructionListener Function SetCollisionEventRequestSettings
struct Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics
{
	struct ChaosDestructionListener_eventSetCollisionEventRequestSettings_Parms
	{
		FChaosCollisionEventRequestSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sets collision event request settings dynamically\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sets collision event request settings dynamically" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSetCollisionEventRequestSettings_Parms, InSettings), Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 3579245740
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetCollisionEventRequestSettings", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::ChaosDestructionListener_eventSetCollisionEventRequestSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::ChaosDestructionListener_eventSetCollisionEventRequestSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execSetCollisionEventRequestSettings)
{
	P_GET_STRUCT_REF(FChaosCollisionEventRequestSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCollisionEventRequestSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function SetCollisionEventRequestSettings

// Begin Class UChaosDestructionListener Function SetRemovalEventEnabled
struct Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics
{
	struct ChaosDestructionListener_eventSetRemovalEventEnabled_Parms
	{
		bool bIsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Enables or disables removal event listening\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Enables or disables removal event listening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((ChaosDestructionListener_eventSetRemovalEventEnabled_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosDestructionListener_eventSetRemovalEventEnabled_Parms), &Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetRemovalEventEnabled", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::ChaosDestructionListener_eventSetRemovalEventEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::ChaosDestructionListener_eventSetRemovalEventEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execSetRemovalEventEnabled)
{
	P_GET_UBOOL(Z_Param_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRemovalEventEnabled(Z_Param_bIsEnabled);
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function SetRemovalEventEnabled

// Begin Class UChaosDestructionListener Function SetRemovalEventRequestSettings
struct Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics
{
	struct ChaosDestructionListener_eventSetRemovalEventRequestSettings_Parms
	{
		FChaosRemovalEventRequestSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sets removal event request settings dynamically\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sets removal event request settings dynamically" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSetRemovalEventRequestSettings_Parms, InSettings), Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 953290065
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetRemovalEventRequestSettings", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::ChaosDestructionListener_eventSetRemovalEventRequestSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::ChaosDestructionListener_eventSetRemovalEventRequestSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execSetRemovalEventRequestSettings)
{
	P_GET_STRUCT_REF(FChaosRemovalEventRequestSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRemovalEventRequestSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function SetRemovalEventRequestSettings

// Begin Class UChaosDestructionListener Function SetTrailingEventEnabled
struct Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics
{
	struct ChaosDestructionListener_eventSetTrailingEventEnabled_Parms
	{
		bool bIsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Enables or disables trailing event listening\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Enables or disables trailing event listening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((ChaosDestructionListener_eventSetTrailingEventEnabled_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChaosDestructionListener_eventSetTrailingEventEnabled_Parms), &Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetTrailingEventEnabled", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::ChaosDestructionListener_eventSetTrailingEventEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::ChaosDestructionListener_eventSetTrailingEventEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execSetTrailingEventEnabled)
{
	P_GET_UBOOL(Z_Param_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTrailingEventEnabled(Z_Param_bIsEnabled);
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function SetTrailingEventEnabled

// Begin Class UChaosDestructionListener Function SetTrailingEventRequestSettings
struct Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics
{
	struct ChaosDestructionListener_eventSetTrailingEventRequestSettings_Parms
	{
		FChaosTrailingEventRequestSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sets trailing event request settings dynamically\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sets trailing event request settings dynamically" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSetTrailingEventRequestSettings_Parms, InSettings), Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 3006745598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetTrailingEventRequestSettings", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::ChaosDestructionListener_eventSetTrailingEventRequestSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::ChaosDestructionListener_eventSetTrailingEventRequestSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execSetTrailingEventRequestSettings)
{
	P_GET_STRUCT_REF(FChaosTrailingEventRequestSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTrailingEventRequestSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function SetTrailingEventRequestSettings

// Begin Class UChaosDestructionListener Function SortBreakingEvents
struct Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics
{
	struct ChaosDestructionListener_eventSortBreakingEvents_Parms
	{
		TArray<FChaosBreakingEventData> BreakingEvents;
		EChaosBreakingSortMethod SortMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sorts breaking events according to the given sort method\x09\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sorts breaking events according to the given sort method" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BreakingEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BreakingEvents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_BreakingEvents_Inner = { "BreakingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosBreakingEventData, METADATA_PARAMS(0, nullptr) }; // 3805912913
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_BreakingEvents = { "BreakingEvents", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortBreakingEvents_Parms, BreakingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3805912913
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortBreakingEvents_Parms, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod, METADATA_PARAMS(0, nullptr) }; // 3259689623
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_BreakingEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_BreakingEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_SortMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_SortMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SortBreakingEvents", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::ChaosDestructionListener_eventSortBreakingEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::ChaosDestructionListener_eventSortBreakingEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execSortBreakingEvents)
{
	P_GET_TARRAY_REF(FChaosBreakingEventData,Z_Param_Out_BreakingEvents);
	P_GET_ENUM(EChaosBreakingSortMethod,Z_Param_SortMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortBreakingEvents(Z_Param_Out_BreakingEvents,EChaosBreakingSortMethod(Z_Param_SortMethod));
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function SortBreakingEvents

// Begin Class UChaosDestructionListener Function SortCollisionEvents
struct Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics
{
	struct ChaosDestructionListener_eventSortCollisionEvents_Parms
	{
		TArray<FChaosCollisionEventData> CollisionEvents;
		EChaosCollisionSortMethod SortMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sorts collision events according to the given sort method\x09\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sorts collision events according to the given sort method" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionEvents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_CollisionEvents_Inner = { "CollisionEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosCollisionEventData, METADATA_PARAMS(0, nullptr) }; // 2084218623
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_CollisionEvents = { "CollisionEvents", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortCollisionEvents_Parms, CollisionEvents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2084218623
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortCollisionEvents_Parms, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod, METADATA_PARAMS(0, nullptr) }; // 712191254
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_CollisionEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_CollisionEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_SortMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_SortMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SortCollisionEvents", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::ChaosDestructionListener_eventSortCollisionEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::ChaosDestructionListener_eventSortCollisionEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execSortCollisionEvents)
{
	P_GET_TARRAY_REF(FChaosCollisionEventData,Z_Param_Out_CollisionEvents);
	P_GET_ENUM(EChaosCollisionSortMethod,Z_Param_SortMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortCollisionEvents(Z_Param_Out_CollisionEvents,EChaosCollisionSortMethod(Z_Param_SortMethod));
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function SortCollisionEvents

// Begin Class UChaosDestructionListener Function SortRemovalEvents
struct Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics
{
	struct ChaosDestructionListener_eventSortRemovalEvents_Parms
	{
		TArray<FChaosRemovalEventData> RemovalEvents;
		EChaosRemovalSortMethod SortMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sorts removal events according to the given sort method\x09\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sorts removal events according to the given sort method" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovalEvents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_RemovalEvents_Inner = { "RemovalEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosRemovalEventData, METADATA_PARAMS(0, nullptr) }; // 997543023
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_RemovalEvents = { "RemovalEvents", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortRemovalEvents_Parms, RemovalEvents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 997543023
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortRemovalEvents_Parms, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod, METADATA_PARAMS(0, nullptr) }; // 1975208567
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_RemovalEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_RemovalEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_SortMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_SortMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SortRemovalEvents", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::ChaosDestructionListener_eventSortRemovalEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::ChaosDestructionListener_eventSortRemovalEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execSortRemovalEvents)
{
	P_GET_TARRAY_REF(FChaosRemovalEventData,Z_Param_Out_RemovalEvents);
	P_GET_ENUM(EChaosRemovalSortMethod,Z_Param_SortMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortRemovalEvents(Z_Param_Out_RemovalEvents,EChaosRemovalSortMethod(Z_Param_SortMethod));
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function SortRemovalEvents

// Begin Class UChaosDestructionListener Function SortTrailingEvents
struct Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics
{
	struct ChaosDestructionListener_eventSortTrailingEvents_Parms
	{
		TArray<FChaosTrailingEventData> TrailingEvents;
		EChaosTrailingSortMethod SortMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sorts trailing events according to the given sort method\x09\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sorts trailing events according to the given sort method" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailingEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrailingEvents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_TrailingEvents_Inner = { "TrailingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosTrailingEventData, METADATA_PARAMS(0, nullptr) }; // 319629255
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_TrailingEvents = { "TrailingEvents", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortTrailingEvents_Parms, TrailingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 319629255
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosDestructionListener_eventSortTrailingEvents_Parms, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod, METADATA_PARAMS(0, nullptr) }; // 4143665921
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_TrailingEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_TrailingEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_SortMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_SortMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SortTrailingEvents", nullptr, nullptr, Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::ChaosDestructionListener_eventSortTrailingEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::ChaosDestructionListener_eventSortTrailingEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosDestructionListener::execSortTrailingEvents)
{
	P_GET_TARRAY_REF(FChaosTrailingEventData,Z_Param_Out_TrailingEvents);
	P_GET_ENUM(EChaosTrailingSortMethod,Z_Param_SortMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortTrailingEvents(Z_Param_Out_TrailingEvents,EChaosTrailingSortMethod(Z_Param_SortMethod));
	P_NATIVE_END;
}
// End Class UChaosDestructionListener Function SortTrailingEvents

// Begin Class UChaosDestructionListener
void UChaosDestructionListener::StaticRegisterNativesUChaosDestructionListener()
{
	UClass* Class = UChaosDestructionListener::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChaosSolverActor", &UChaosDestructionListener::execAddChaosSolverActor },
		{ "AddGeometryCollectionActor", &UChaosDestructionListener::execAddGeometryCollectionActor },
		{ "IsEventListening", &UChaosDestructionListener::execIsEventListening },
		{ "RemoveChaosSolverActor", &UChaosDestructionListener::execRemoveChaosSolverActor },
		{ "RemoveGeometryCollectionActor", &UChaosDestructionListener::execRemoveGeometryCollectionActor },
		{ "SetBreakingEventEnabled", &UChaosDestructionListener::execSetBreakingEventEnabled },
		{ "SetBreakingEventRequestSettings", &UChaosDestructionListener::execSetBreakingEventRequestSettings },
		{ "SetCollisionEventEnabled", &UChaosDestructionListener::execSetCollisionEventEnabled },
		{ "SetCollisionEventRequestSettings", &UChaosDestructionListener::execSetCollisionEventRequestSettings },
		{ "SetRemovalEventEnabled", &UChaosDestructionListener::execSetRemovalEventEnabled },
		{ "SetRemovalEventRequestSettings", &UChaosDestructionListener::execSetRemovalEventRequestSettings },
		{ "SetTrailingEventEnabled", &UChaosDestructionListener::execSetTrailingEventEnabled },
		{ "SetTrailingEventRequestSettings", &UChaosDestructionListener::execSetTrailingEventRequestSettings },
		{ "SortBreakingEvents", &UChaosDestructionListener::execSortBreakingEvents },
		{ "SortCollisionEvents", &UChaosDestructionListener::execSortCollisionEvents },
		{ "SortRemovalEvents", &UChaosDestructionListener::execSortRemovalEvents },
		{ "SortTrailingEvents", &UChaosDestructionListener::execSortTrailingEvents },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosDestructionListener);
UClass* Z_Construct_UClass_UChaosDestructionListener_NoRegister()
{
	return UChaosDestructionListener::StaticClass();
}
struct Z_Construct_UClass_UChaosDestructionListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Chaos" },
		{ "Comment", "/** Object allowing for retrieving Chaos Destruction data. */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "ChaosBlueprint.h" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Object allowing for retrieving Chaos Destruction data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCollisionEventListeningEnabled_MetaData[] = {
		{ "Category", "Collision Events" },
		{ "Comment", "// Whether or not collision event listening is enabled\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Whether or not collision event listening is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBreakingEventListeningEnabled_MetaData[] = {
		{ "Category", "Breaking Events" },
		{ "Comment", "// Whether or not collision event listening is enabled\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Whether or not collision event listening is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTrailingEventListeningEnabled_MetaData[] = {
		{ "Category", "Trailing Events" },
		{ "Comment", "// Whether or not trailing event listening is enabled\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Whether or not trailing event listening is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRemovalEventListeningEnabled_MetaData[] = {
		{ "Category", "Removal Events" },
		{ "Comment", "// Whether or not removal event listening is enabled\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Whether or not removal event listening is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEventRequestSettings_MetaData[] = {
		{ "Category", "Collision Events" },
		{ "Comment", "// The settings to use for collision event listening\n" },
		{ "EditCondition", "bIsCollisionEventListeningEnabled" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "The settings to use for collision event listening" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakingEventRequestSettings_MetaData[] = {
		{ "Category", "Breaking Events" },
		{ "Comment", "// The settings to use for breaking event listening\n" },
		{ "EditCondition", "bIsBreakingEventListeningEnabled" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "The settings to use for breaking event listening" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailingEventRequestSettings_MetaData[] = {
		{ "Category", "Trailing Events" },
		{ "Comment", "// The settings to use for trailing event listening\n" },
		{ "EditCondition", "bIsTrailingEventListeningEnabled" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "The settings to use for trailing event listening" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovalEventRequestSettings_MetaData[] = {
		{ "Category", "Removal Events" },
		{ "Comment", "// The settings to use for removal event listening\n" },
		{ "EditCondition", "bIsRemovalEventListeningEnabled" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "The settings to use for removal event listening" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaosSolverActors_MetaData[] = {
		{ "Category", "Solvers" },
		{ "Comment", "// Which chaos solver actors we're using. If empty, this listener will fallback to the \"world\" solver.\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Which chaos solver actors we're using. If empty, this listener will fallback to the \"world\" solver." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionActors_MetaData[] = {
		{ "Category", "GeometryCollections" },
		{ "Comment", "// Which chaos solver actors we're using. If empty, this listener will fallback to the \"world\" solver.\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Which chaos solver actors we're using. If empty, this listener will fallback to the \"world\" solver." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCollisionEvents_MetaData[] = {
		{ "Comment", "/** Called when new collision events are available. */" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new collision events are available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBreakingEvents_MetaData[] = {
		{ "Comment", "/** Called when new breaking events are available. */" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new breaking events are available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrailingEvents_MetaData[] = {
		{ "Comment", "/** Called when new trailing events are available. */" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new trailing events are available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemovalEvents_MetaData[] = {
		{ "Comment", "/** Called when new trailing events are available. */" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new trailing events are available." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsCollisionEventListeningEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCollisionEventListeningEnabled;
	static void NewProp_bIsBreakingEventListeningEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBreakingEventListeningEnabled;
	static void NewProp_bIsTrailingEventListeningEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTrailingEventListeningEnabled;
	static void NewProp_bIsRemovalEventListeningEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRemovalEventListeningEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionEventRequestSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BreakingEventRequestSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailingEventRequestSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalEventRequestSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ChaosSolverActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionActors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_GeometryCollectionActors;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollisionEvents;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBreakingEvents;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrailingEvents;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemovalEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor, "AddChaosSolverActor" }, // 781161693
		{ &Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor, "AddGeometryCollectionActor" }, // 2835697853
		{ &Z_Construct_UFunction_UChaosDestructionListener_IsEventListening, "IsEventListening" }, // 2250150141
		{ &Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor, "RemoveChaosSolverActor" }, // 4019076609
		{ &Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor, "RemoveGeometryCollectionActor" }, // 3917583887
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled, "SetBreakingEventEnabled" }, // 1116504100
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings, "SetBreakingEventRequestSettings" }, // 1021107002
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled, "SetCollisionEventEnabled" }, // 3121060853
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings, "SetCollisionEventRequestSettings" }, // 1776971727
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled, "SetRemovalEventEnabled" }, // 107721182
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings, "SetRemovalEventRequestSettings" }, // 512580973
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled, "SetTrailingEventEnabled" }, // 418935056
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings, "SetTrailingEventRequestSettings" }, // 1034587607
		{ &Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents, "SortBreakingEvents" }, // 4183027335
		{ &Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents, "SortCollisionEvents" }, // 304293108
		{ &Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents, "SortRemovalEvents" }, // 848714792
		{ &Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents, "SortTrailingEvents" }, // 1389198388
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosDestructionListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled_SetBit(void* Obj)
{
	((UChaosDestructionListener*)Obj)->bIsCollisionEventListeningEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled = { "bIsCollisionEventListeningEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosDestructionListener), &Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCollisionEventListeningEnabled_MetaData), NewProp_bIsCollisionEventListeningEnabled_MetaData) };
void Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled_SetBit(void* Obj)
{
	((UChaosDestructionListener*)Obj)->bIsBreakingEventListeningEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled = { "bIsBreakingEventListeningEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosDestructionListener), &Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBreakingEventListeningEnabled_MetaData), NewProp_bIsBreakingEventListeningEnabled_MetaData) };
void Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled_SetBit(void* Obj)
{
	((UChaosDestructionListener*)Obj)->bIsTrailingEventListeningEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled = { "bIsTrailingEventListeningEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosDestructionListener), &Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTrailingEventListeningEnabled_MetaData), NewProp_bIsTrailingEventListeningEnabled_MetaData) };
void Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsRemovalEventListeningEnabled_SetBit(void* Obj)
{
	((UChaosDestructionListener*)Obj)->bIsRemovalEventListeningEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsRemovalEventListeningEnabled = { "bIsRemovalEventListeningEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UChaosDestructionListener), &Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsRemovalEventListeningEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRemovalEventListeningEnabled_MetaData), NewProp_bIsRemovalEventListeningEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_CollisionEventRequestSettings = { "CollisionEventRequestSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosDestructionListener, CollisionEventRequestSettings), Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionEventRequestSettings_MetaData), NewProp_CollisionEventRequestSettings_MetaData) }; // 3579245740
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_BreakingEventRequestSettings = { "BreakingEventRequestSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosDestructionListener, BreakingEventRequestSettings), Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakingEventRequestSettings_MetaData), NewProp_BreakingEventRequestSettings_MetaData) }; // 501564580
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_TrailingEventRequestSettings = { "TrailingEventRequestSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosDestructionListener, TrailingEventRequestSettings), Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailingEventRequestSettings_MetaData), NewProp_TrailingEventRequestSettings_MetaData) }; // 3006745598
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_RemovalEventRequestSettings = { "RemovalEventRequestSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosDestructionListener, RemovalEventRequestSettings), Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalEventRequestSettings_MetaData), NewProp_RemovalEventRequestSettings_MetaData) }; // 953290065
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors_ElementProp = { "ChaosSolverActors", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors = { "ChaosSolverActors", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosDestructionListener, ChaosSolverActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaosSolverActors_MetaData), NewProp_ChaosSolverActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors_ElementProp = { "GeometryCollectionActors", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors = { "GeometryCollectionActors", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosDestructionListener, GeometryCollectionActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionActors_MetaData), NewProp_GeometryCollectionActors_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnCollisionEvents = { "OnCollisionEvents", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosDestructionListener, OnCollisionEvents), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCollisionEvents_MetaData), NewProp_OnCollisionEvents_MetaData) }; // 2820072989
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnBreakingEvents = { "OnBreakingEvents", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosDestructionListener, OnBreakingEvents), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBreakingEvents_MetaData), NewProp_OnBreakingEvents_MetaData) }; // 2140128859
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnTrailingEvents = { "OnTrailingEvents", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosDestructionListener, OnTrailingEvents), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrailingEvents_MetaData), NewProp_OnTrailingEvents_MetaData) }; // 883111271
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnRemovalEvents = { "OnRemovalEvents", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosDestructionListener, OnRemovalEvents), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemovalEvents_MetaData), NewProp_OnRemovalEvents_MetaData) }; // 3311167321
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosDestructionListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsRemovalEventListeningEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_CollisionEventRequestSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_BreakingEventRequestSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_TrailingEventRequestSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_RemovalEventRequestSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnCollisionEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnBreakingEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnTrailingEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnRemovalEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChaosDestructionListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosDestructionListener_Statics::ClassParams = {
	&UChaosDestructionListener::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UChaosDestructionListener_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosDestructionListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosDestructionListener()
{
	if (!Z_Registration_Info_UClass_UChaosDestructionListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosDestructionListener.OuterSingleton, Z_Construct_UClass_UChaosDestructionListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosDestructionListener.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UChaosDestructionListener>()
{
	return UChaosDestructionListener::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosDestructionListener);
UChaosDestructionListener::~UChaosDestructionListener() {}
// End Class UChaosDestructionListener

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosDestructionListener, UChaosDestructionListener::StaticClass, TEXT("UChaosDestructionListener"), &Z_Registration_Info_UClass_UChaosDestructionListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosDestructionListener), 3032575683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_2372408542(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
