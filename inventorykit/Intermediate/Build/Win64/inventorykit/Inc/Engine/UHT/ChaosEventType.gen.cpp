// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Physics/Experimental/ChaosEventType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosEventType() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCrumblingEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionChaosEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCollisionChaosEventBodyInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionChaosEventBodyInfo;
class UScriptStruct* FCollisionChaosEventBodyInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionChaosEventBodyInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionChaosEventBodyInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CollisionChaosEventBodyInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionChaosEventBodyInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollisionChaosEventBodyInfo>()
{
	return FCollisionChaosEventBodyInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaVelocity_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyIndex_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BodyIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionChaosEventBodyInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEventBodyInfo, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_DeltaVelocity = { "DeltaVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEventBodyInfo, DeltaVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaVelocity_MetaData), NewProp_DeltaVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEventBodyInfo, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEventBodyInfo, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEventBodyInfo, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysMaterial_MetaData), NewProp_PhysMaterial_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEventBodyInfo, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_BodyIndex = { "BodyIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEventBodyInfo, BodyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyIndex_MetaData), NewProp_BodyIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEventBodyInfo, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_DeltaVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_PhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_BodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CollisionChaosEventBodyInfo",
	Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::PropPointers),
	sizeof(FCollisionChaosEventBodyInfo),
	alignof(FCollisionChaosEventBodyInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionChaosEventBodyInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionChaosEventBodyInfo.InnerSingleton, Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollisionChaosEventBodyInfo.InnerSingleton;
}
// End ScriptStruct FCollisionChaosEventBodyInfo

// Begin ScriptStruct FCollisionChaosEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionChaosEvent;
class UScriptStruct* FCollisionChaosEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionChaosEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionChaosEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionChaosEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CollisionChaosEvent"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionChaosEvent.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollisionChaosEvent>()
{
	return FCollisionChaosEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedImpulse_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationDepth_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body1_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body2_MetaData[] = {
		{ "Category", "Collision Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Body1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Body2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionChaosEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewProp_AccumulatedImpulse = { "AccumulatedImpulse", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEvent, AccumulatedImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedImpulse_MetaData), NewProp_AccumulatedImpulse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEvent, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewProp_PenetrationDepth = { "PenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEvent, PenetrationDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationDepth_MetaData), NewProp_PenetrationDepth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewProp_Body1 = { "Body1", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEvent, Body1), Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body1_MetaData), NewProp_Body1_MetaData) }; // 2191886208
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewProp_Body2 = { "Body2", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionChaosEvent, Body2), Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body2_MetaData), NewProp_Body2_MetaData) }; // 2191886208
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewProp_AccumulatedImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewProp_PenetrationDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewProp_Body1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewProp_Body2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CollisionChaosEvent",
	Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::PropPointers),
	sizeof(FCollisionChaosEvent),
	alignof(FCollisionChaosEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollisionChaosEvent()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionChaosEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionChaosEvent.InnerSingleton, Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollisionChaosEvent.InnerSingleton;
}
// End ScriptStruct FCollisionChaosEvent

// Begin ScriptStruct FChaosBreakEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosBreakEvent;
class UScriptStruct* FChaosBreakEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosBreakEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosBreakEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosBreakEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ChaosBreakEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosBreakEvent.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FChaosBreakEvent>()
{
	return FChaosBreakEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosBreakEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "Break Event" },
		{ "Comment", "/** primitive component involved in the break event */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "primitive component involved in the break event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Break Event" },
		{ "Comment", "/** World location of the break */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "World location of the break" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Break Event" },
		{ "Comment", "/** Linear Velocity of the breaking particle  */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "Linear Velocity of the breaking particle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Break Event" },
		{ "Comment", "/** Angular Velocity of the breaking particle  */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "Angular Velocity of the breaking particle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[] = {
		{ "Category", "Break Event" },
		{ "Comment", "/** Extents of the bounding box */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "Extents of the bounding box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Break Event" },
		{ "Comment", "/** Mass of the breaking particle  */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "Mass of the breaking particle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Break Event" },
		{ "Comment", "/** Index of the geometry collection bone if positive */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "Index of the geometry collection bone if positive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFromCrumble_MetaData[] = {
		{ "Category", "Break Event" },
		{ "Comment", "/** Whether the break event originated from a crumble event */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "Whether the break event originated from a crumble event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_bFromCrumble_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromCrumble;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosBreakEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakEvent, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakEvent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakEvent, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakEvent, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extents_MetaData), NewProp_Extents_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakEvent, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakEvent, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_bFromCrumble_SetBit(void* Obj)
{
	((FChaosBreakEvent*)Obj)->bFromCrumble = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_bFromCrumble = { "bFromCrumble", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosBreakEvent), &Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_bFromCrumble_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFromCrumble_MetaData), NewProp_bFromCrumble_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Extents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_bFromCrumble,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ChaosBreakEvent",
	Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::PropPointers),
	sizeof(FChaosBreakEvent),
	alignof(FChaosBreakEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakEvent()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosBreakEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosBreakEvent.InnerSingleton, Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosBreakEvent.InnerSingleton;
}
// End ScriptStruct FChaosBreakEvent

// Begin ScriptStruct FChaosRemovalEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosRemovalEvent;
class UScriptStruct* FChaosRemovalEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosRemovalEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosRemovalEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosRemovalEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ChaosRemovalEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosRemovalEvent.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FChaosRemovalEvent>()
{
	return FChaosRemovalEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "Removal Event" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Removal Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Removal Event" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosRemovalEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosRemovalEvent, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosRemovalEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosRemovalEvent, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Mass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ChaosRemovalEvent",
	Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::PropPointers),
	sizeof(FChaosRemovalEvent),
	alignof(FChaosRemovalEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEvent()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosRemovalEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosRemovalEvent.InnerSingleton, Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosRemovalEvent.InnerSingleton;
}
// End ScriptStruct FChaosRemovalEvent

// Begin ScriptStruct FChaosCrumblingEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosCrumblingEvent;
class UScriptStruct* FChaosCrumblingEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosCrumblingEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosCrumblingEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosCrumblingEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ChaosCrumblingEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosCrumblingEvent.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FChaosCrumblingEvent>()
{
	return FChaosCrumblingEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "Crumble Event" },
		{ "Comment", "/** primitive component involved in the crumble event */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "primitive component involved in the crumble event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Crumble Event" },
		{ "Comment", "/** World location of the crumbling cluster */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "World location of the crumbling cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Crumble Event" },
		{ "Comment", "/** World orientation of the crumbling cluster */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "World orientation of the crumbling cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Crumble Event" },
		{ "Comment", "/** Linear Velocity of the crumbling cluster */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "Linear Velocity of the crumbling cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Crumble Event" },
		{ "Comment", "/** Angular Velocity of the crumbling cluster  */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "Angular Velocity of the crumbling cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Crumble Event" },
		{ "Comment", "/** Mass of the crumbling cluster  */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "Mass of the crumbling cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[] = {
		{ "Category", "Crumble Event" },
		{ "Comment", "/** Local bounding box of the crumbling cluster  */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "Local bounding box of the crumbling cluster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Category", "Crumble Event" },
		{ "Comment", "/** List of children indices released (optional : see geometry collection component bCrumblingEventIncludesChildren) */" },
		{ "ModuleRelativePath", "Public/Physics/Experimental/ChaosEventType.h" },
		{ "ToolTip", "List of children indices released (optional : see geometry collection component bCrumblingEventIncludesChildren)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosCrumblingEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosCrumblingEvent, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosCrumblingEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosCrumblingEvent, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosCrumblingEvent, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosCrumblingEvent, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosCrumblingEvent, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosCrumblingEvent, LocalBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalBounds_MetaData), NewProp_LocalBounds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosCrumblingEvent, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_LinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_LocalBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewProp_Children,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ChaosCrumblingEvent",
	Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::PropPointers),
	sizeof(FChaosCrumblingEvent),
	alignof(FChaosCrumblingEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosCrumblingEvent()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosCrumblingEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosCrumblingEvent.InnerSingleton, Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosCrumblingEvent.InnerSingleton;
}
// End ScriptStruct FChaosCrumblingEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventType_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCollisionChaosEventBodyInfo::StaticStruct, Z_Construct_UScriptStruct_FCollisionChaosEventBodyInfo_Statics::NewStructOps, TEXT("CollisionChaosEventBodyInfo"), &Z_Registration_Info_UScriptStruct_CollisionChaosEventBodyInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionChaosEventBodyInfo), 2191886208U) },
		{ FCollisionChaosEvent::StaticStruct, Z_Construct_UScriptStruct_FCollisionChaosEvent_Statics::NewStructOps, TEXT("CollisionChaosEvent"), &Z_Registration_Info_UScriptStruct_CollisionChaosEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionChaosEvent), 2458983899U) },
		{ FChaosBreakEvent::StaticStruct, Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewStructOps, TEXT("ChaosBreakEvent"), &Z_Registration_Info_UScriptStruct_ChaosBreakEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosBreakEvent), 1524158577U) },
		{ FChaosRemovalEvent::StaticStruct, Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewStructOps, TEXT("ChaosRemovalEvent"), &Z_Registration_Info_UScriptStruct_ChaosRemovalEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosRemovalEvent), 2076141616U) },
		{ FChaosCrumblingEvent::StaticStruct, Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics::NewStructOps, TEXT("ChaosCrumblingEvent"), &Z_Registration_Info_UScriptStruct_ChaosCrumblingEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosCrumblingEvent), 548874048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventType_h_2832493177(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_ChaosEventType_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
