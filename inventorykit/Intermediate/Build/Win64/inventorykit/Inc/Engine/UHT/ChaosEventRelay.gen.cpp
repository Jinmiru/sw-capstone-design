// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Physics/Experimental/ChaosEventRelay.h"
#include "Runtime/Engine/Public/Physics/Experimental/ChaosEventType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosEventRelay() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UChaosEventRelay();
ENGINE_API UClass* Z_Construct_UClass_UChaosEventRelay_NoRegister();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCrumblingEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionChaosEvent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Delegate FCollisionEventSignature
struct Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventCollisionEventSignature_Parms
	{
		TArray<FCollisionChaosEvent> CollisionEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventRelay.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::NewProp_CollisionEvents_Inner = { "CollisionEvents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCollisionChaosEvent, METADATA_PARAMS(0, nullptr) }; // 2458983899
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::NewProp_CollisionEvents = { "CollisionEvents", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventCollisionEventSignature_Parms, CollisionEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionEvents_MetaData), NewProp_CollisionEvents_MetaData) }; // 2458983899
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::NewProp_CollisionEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::NewProp_CollisionEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "CollisionEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::_Script_Engine_eventCollisionEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::_Script_Engine_eventCollisionEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCollisionEventSignature_DelegateWrapper(const FMulticastScriptDelegate& CollisionEventSignature, TArray<FCollisionChaosEvent> const& CollisionEvents)
{
	struct _Script_Engine_eventCollisionEventSignature_Parms
	{
		TArray<FCollisionChaosEvent> CollisionEvents;
	};
	_Script_Engine_eventCollisionEventSignature_Parms Parms;
	Parms.CollisionEvents=CollisionEvents;
	CollisionEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCollisionEventSignature

// Begin Delegate FBreakEventSignature
struct Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventBreakEventSignature_Parms
	{
		TArray<FChaosBreakEvent> BreakEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventRelay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BreakEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BreakEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::NewProp_BreakEvents_Inner = { "BreakEvents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosBreakEvent, METADATA_PARAMS(0, nullptr) }; // 1524158577
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::NewProp_BreakEvents = { "BreakEvents", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventBreakEventSignature_Parms, BreakEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakEvents_MetaData), NewProp_BreakEvents_MetaData) }; // 1524158577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::NewProp_BreakEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::NewProp_BreakEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "BreakEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::_Script_Engine_eventBreakEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::_Script_Engine_eventBreakEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBreakEventSignature_DelegateWrapper(const FMulticastScriptDelegate& BreakEventSignature, TArray<FChaosBreakEvent> const& BreakEvents)
{
	struct _Script_Engine_eventBreakEventSignature_Parms
	{
		TArray<FChaosBreakEvent> BreakEvents;
	};
	_Script_Engine_eventBreakEventSignature_Parms Parms;
	Parms.BreakEvents=BreakEvents;
	BreakEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FBreakEventSignature

// Begin Delegate FRemovalEventSignature
struct Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventRemovalEventSignature_Parms
	{
		TArray<FChaosRemovalEvent> RemovalEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventRelay.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::NewProp_RemovalEvents_Inner = { "RemovalEvents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosRemovalEvent, METADATA_PARAMS(0, nullptr) }; // 2076141616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::NewProp_RemovalEvents = { "RemovalEvents", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventRemovalEventSignature_Parms, RemovalEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovalEvents_MetaData), NewProp_RemovalEvents_MetaData) }; // 2076141616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::NewProp_RemovalEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::NewProp_RemovalEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "RemovalEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::_Script_Engine_eventRemovalEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::_Script_Engine_eventRemovalEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRemovalEventSignature_DelegateWrapper(const FMulticastScriptDelegate& RemovalEventSignature, TArray<FChaosRemovalEvent> const& RemovalEvents)
{
	struct _Script_Engine_eventRemovalEventSignature_Parms
	{
		TArray<FChaosRemovalEvent> RemovalEvents;
	};
	_Script_Engine_eventRemovalEventSignature_Parms Parms;
	Parms.RemovalEvents=RemovalEvents;
	RemovalEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRemovalEventSignature

// Begin Delegate FCrumblingEventSignature
struct Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics
{
	struct _Script_Engine_eventCrumblingEventSignature_Parms
	{
		TArray<FChaosCrumblingEvent> CrumblingEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventRelay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrumblingEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CrumblingEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CrumblingEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::NewProp_CrumblingEvents_Inner = { "CrumblingEvents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosCrumblingEvent, METADATA_PARAMS(0, nullptr) }; // 548874048
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::NewProp_CrumblingEvents = { "CrumblingEvents", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventCrumblingEventSignature_Parms, CrumblingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrumblingEvents_MetaData), NewProp_CrumblingEvents_MetaData) }; // 548874048
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::NewProp_CrumblingEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::NewProp_CrumblingEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "CrumblingEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::_Script_Engine_eventCrumblingEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::_Script_Engine_eventCrumblingEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCrumblingEventSignature_DelegateWrapper(const FMulticastScriptDelegate& CrumblingEventSignature, TArray<FChaosCrumblingEvent> const& CrumblingEvents)
{
	struct _Script_Engine_eventCrumblingEventSignature_Parms
	{
		TArray<FChaosCrumblingEvent> CrumblingEvents;
	};
	_Script_Engine_eventCrumblingEventSignature_Parms Parms;
	Parms.CrumblingEvents=CrumblingEvents;
	CrumblingEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCrumblingEventSignature

// Begin Class UChaosEventRelay
void UChaosEventRelay::StaticRegisterNativesUChaosEventRelay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosEventRelay);
UClass* Z_Construct_UClass_UChaosEventRelay_NoRegister()
{
	return UChaosEventRelay::StaticClass();
}
struct Z_Construct_UClass_UChaosEventRelay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* An object managing events\n*/" },
		{ "IncludePath", "Physics/Experimental/ChaosEventRelay.h" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventRelay.h" },
		{ "ToolTip", "An object managing events" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCollisionEvent_MetaData[] = {
		{ "Category", "Physics Events" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventRelay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBreakEvent_MetaData[] = {
		{ "Category", "Physics Events" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventRelay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemovalEvent_MetaData[] = {
		{ "Category", "Physics Events" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventRelay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCrumblingEvent_MetaData[] = {
		{ "Category", "Physics Events" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventRelay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollisionEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBreakEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemovalEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCrumblingEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosEventRelay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosEventRelay_Statics::NewProp_OnCollisionEvent = { "OnCollisionEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosEventRelay, OnCollisionEvent), Z_Construct_UDelegateFunction_Engine_CollisionEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCollisionEvent_MetaData), NewProp_OnCollisionEvent_MetaData) }; // 4158680783
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosEventRelay_Statics::NewProp_OnBreakEvent = { "OnBreakEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosEventRelay, OnBreakEvent), Z_Construct_UDelegateFunction_Engine_BreakEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBreakEvent_MetaData), NewProp_OnBreakEvent_MetaData) }; // 3744940014
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosEventRelay_Statics::NewProp_OnRemovalEvent = { "OnRemovalEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosEventRelay, OnRemovalEvent), Z_Construct_UDelegateFunction_Engine_RemovalEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemovalEvent_MetaData), NewProp_OnRemovalEvent_MetaData) }; // 2395998610
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosEventRelay_Statics::NewProp_OnCrumblingEvent = { "OnCrumblingEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosEventRelay, OnCrumblingEvent), Z_Construct_UDelegateFunction_Engine_CrumblingEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCrumblingEvent_MetaData), NewProp_OnCrumblingEvent_MetaData) }; // 1848258257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosEventRelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosEventRelay_Statics::NewProp_OnCollisionEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosEventRelay_Statics::NewProp_OnBreakEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosEventRelay_Statics::NewProp_OnRemovalEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosEventRelay_Statics::NewProp_OnCrumblingEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosEventRelay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChaosEventRelay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosEventRelay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosEventRelay_Statics::ClassParams = {
	&UChaosEventRelay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UChaosEventRelay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UChaosEventRelay_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosEventRelay_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosEventRelay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosEventRelay()
{
	if (!Z_Registration_Info_UClass_UChaosEventRelay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosEventRelay.OuterSingleton, Z_Construct_UClass_UChaosEventRelay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosEventRelay.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UChaosEventRelay>()
{
	return UChaosEventRelay::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosEventRelay);
UChaosEventRelay::~UChaosEventRelay() {}
// End Class UChaosEventRelay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosEventRelay, UChaosEventRelay::StaticClass, TEXT("UChaosEventRelay"), &Z_Registration_Info_UClass_UChaosEventRelay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosEventRelay), 1143887436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_2720669371(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventRelay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
