// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCaching/Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionComponentCacheAdapter() {}

// Begin Cross Module References
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FBreakingEvent();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FCacheEventBase();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionEvent();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FEnableStateEvent();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FTrailingEvent();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References

// Begin ScriptStruct FEnableStateEvent
static_assert(std::is_polymorphic<FEnableStateEvent>() == std::is_polymorphic<FCacheEventBase>(), "USTRUCT FEnableStateEvent cannot be polymorphic unless super FCacheEventBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnableStateEvent;
class UScriptStruct* FEnableStateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnableStateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnableStateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnableStateEvent, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("EnableStateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_EnableStateEvent.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FEnableStateEvent>()
{
	return FEnableStateEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnableStateEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnableStateEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnableStateEvent, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((FEnableStateEvent*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEnableStateEvent), &Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnableStateEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnableStateEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnableStateEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	Z_Construct_UScriptStruct_FCacheEventBase,
	&NewStructOps,
	"EnableStateEvent",
	Z_Construct_UScriptStruct_FEnableStateEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnableStateEvent_Statics::PropPointers),
	sizeof(FEnableStateEvent),
	alignof(FEnableStateEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnableStateEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnableStateEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnableStateEvent()
{
	if (!Z_Registration_Info_UScriptStruct_EnableStateEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnableStateEvent.InnerSingleton, Z_Construct_UScriptStruct_FEnableStateEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnableStateEvent.InnerSingleton;
}
// End ScriptStruct FEnableStateEvent

// Begin ScriptStruct FBreakingEvent
static_assert(std::is_polymorphic<FBreakingEvent>() == std::is_polymorphic<FCacheEventBase>(), "USTRUCT FBreakingEvent cannot be polymorphic unless super FCacheEventBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BreakingEvent;
class UScriptStruct* FBreakingEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BreakingEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BreakingEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBreakingEvent, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("BreakingEvent"));
	}
	return Z_Registration_Info_UScriptStruct_BreakingEvent.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FBreakingEvent>()
{
	return FBreakingEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBreakingEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBreakingEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBreakingEvent, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBreakingEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBreakingEvent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBreakingEvent, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBreakingEvent, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMin = { "BoundingBoxMin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBreakingEvent, BoundingBoxMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBoxMin_MetaData), NewProp_BoundingBoxMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMax = { "BoundingBoxMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBreakingEvent, BoundingBoxMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBoxMax_MetaData), NewProp_BoundingBoxMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBreakingEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakingEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	Z_Construct_UScriptStruct_FCacheEventBase,
	&NewStructOps,
	"BreakingEvent",
	Z_Construct_UScriptStruct_FBreakingEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakingEvent_Statics::PropPointers),
	sizeof(FBreakingEvent),
	alignof(FBreakingEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakingEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBreakingEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBreakingEvent()
{
	if (!Z_Registration_Info_UScriptStruct_BreakingEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BreakingEvent.InnerSingleton, Z_Construct_UScriptStruct_FBreakingEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BreakingEvent.InnerSingleton;
}
// End ScriptStruct FBreakingEvent

// Begin ScriptStruct FCollisionEvent
static_assert(std::is_polymorphic<FCollisionEvent>() == std::is_polymorphic<FCacheEventBase>(), "USTRUCT FCollisionEvent cannot be polymorphic unless super FCacheEventBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionEvent;
class UScriptStruct* FCollisionEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionEvent, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("CollisionEvent"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionEvent.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FCollisionEvent>()
{
	return FCollisionEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollisionEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedImpulse_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaVelocity1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaVelocity2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationDepth_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaVelocity1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaVelocity2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AccumulatedImpulse = { "AccumulatedImpulse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionEvent, AccumulatedImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedImpulse_MetaData), NewProp_AccumulatedImpulse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionEvent, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity1 = { "Velocity1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionEvent, Velocity1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity1_MetaData), NewProp_Velocity1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity2 = { "Velocity2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionEvent, Velocity2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity2_MetaData), NewProp_Velocity2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity1 = { "DeltaVelocity1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionEvent, DeltaVelocity1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaVelocity1_MetaData), NewProp_DeltaVelocity1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity2 = { "DeltaVelocity2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionEvent, DeltaVelocity2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaVelocity2_MetaData), NewProp_DeltaVelocity2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity1 = { "AngularVelocity1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionEvent, AngularVelocity1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity1_MetaData), NewProp_AngularVelocity1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity2 = { "AngularVelocity2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionEvent, AngularVelocity2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity2_MetaData), NewProp_AngularVelocity2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass1 = { "Mass1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionEvent, Mass1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass1_MetaData), NewProp_Mass1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass2 = { "Mass2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionEvent, Mass2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass2_MetaData), NewProp_Mass2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_PenetrationDepth = { "PenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionEvent, PenetrationDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationDepth_MetaData), NewProp_PenetrationDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AccumulatedImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_PenetrationDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	Z_Construct_UScriptStruct_FCacheEventBase,
	&NewStructOps,
	"CollisionEvent",
	Z_Construct_UScriptStruct_FCollisionEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::PropPointers),
	sizeof(FCollisionEvent),
	alignof(FCollisionEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollisionEvent()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionEvent.InnerSingleton, Z_Construct_UScriptStruct_FCollisionEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollisionEvent.InnerSingleton;
}
// End ScriptStruct FCollisionEvent

// Begin ScriptStruct FTrailingEvent
static_assert(std::is_polymorphic<FTrailingEvent>() == std::is_polymorphic<FCacheEventBase>(), "USTRUCT FTrailingEvent cannot be polymorphic unless super FCacheEventBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrailingEvent;
class UScriptStruct* FTrailingEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrailingEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrailingEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrailingEvent, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("TrailingEvent"));
	}
	return Z_Registration_Info_UScriptStruct_TrailingEvent.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FTrailingEvent>()
{
	return FTrailingEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTrailingEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrailingEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrailingEvent, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrailingEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrailingEvent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrailingEvent, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMin = { "BoundingBoxMin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrailingEvent, BoundingBoxMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBoxMin_MetaData), NewProp_BoundingBoxMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMax = { "BoundingBoxMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrailingEvent, BoundingBoxMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBoxMax_MetaData), NewProp_BoundingBoxMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrailingEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrailingEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	Z_Construct_UScriptStruct_FCacheEventBase,
	&NewStructOps,
	"TrailingEvent",
	Z_Construct_UScriptStruct_FTrailingEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrailingEvent_Statics::PropPointers),
	sizeof(FTrailingEvent),
	alignof(FTrailingEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrailingEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTrailingEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTrailingEvent()
{
	if (!Z_Registration_Info_UScriptStruct_TrailingEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrailingEvent.InnerSingleton, Z_Construct_UScriptStruct_FTrailingEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TrailingEvent.InnerSingleton;
}
// End ScriptStruct FTrailingEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Adapters_GeometryCollectionComponentCacheAdapter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEnableStateEvent::StaticStruct, Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewStructOps, TEXT("EnableStateEvent"), &Z_Registration_Info_UScriptStruct_EnableStateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnableStateEvent), 276526003U) },
		{ FBreakingEvent::StaticStruct, Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewStructOps, TEXT("BreakingEvent"), &Z_Registration_Info_UScriptStruct_BreakingEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBreakingEvent), 1638317703U) },
		{ FCollisionEvent::StaticStruct, Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewStructOps, TEXT("CollisionEvent"), &Z_Registration_Info_UScriptStruct_CollisionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionEvent), 3945288938U) },
		{ FTrailingEvent::StaticStruct, Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewStructOps, TEXT("TrailingEvent"), &Z_Registration_Info_UScriptStruct_TrailingEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrailingEvent), 188675691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Adapters_GeometryCollectionComponentCacheAdapter_h_3063140883(TEXT("/Script/ChaosCaching"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Adapters_GeometryCollectionComponentCacheAdapter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Adapters_GeometryCollectionComponentCacheAdapter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
