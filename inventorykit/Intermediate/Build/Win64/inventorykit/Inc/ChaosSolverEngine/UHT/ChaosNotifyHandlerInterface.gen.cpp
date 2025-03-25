// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosSolverEngine/Public/Chaos/ChaosNotifyHandlerInterface.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosNotifyHandlerInterface() {}

// Begin Cross Module References
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_NoRegister();
CHAOSSOLVERENGINE_API UFunction* Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature();
CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References

// Begin ScriptStruct FChaosPhysicsCollisionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo;
class UScriptStruct* FChaosPhysicsCollisionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, (UObject*)Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("ChaosPhysicsCollisionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FChaosPhysicsCollisionInfo>()
{
	return FChaosPhysicsCollisionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "Chaos" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
		{ "Category", "Chaos" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Chaos" },
		{ "Comment", "/** Location of the impact */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
		{ "ToolTip", "Location of the impact" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Chaos" },
		{ "Comment", "/** Normal at the impact */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
		{ "ToolTip", "Normal at the impact" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedImpulse_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherVelocity_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherAngularVelocity_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherMass_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherAngularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OtherMass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosPhysicsCollisionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AccumulatedImpulse = { "AccumulatedImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, AccumulatedImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedImpulse_MetaData), NewProp_AccumulatedImpulse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherVelocity = { "OtherVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, OtherVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherVelocity_MetaData), NewProp_OtherVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherAngularVelocity = { "OtherAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, OtherAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherAngularVelocity_MetaData), NewProp_OtherAngularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherMass = { "OtherMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosPhysicsCollisionInfo, OtherMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherMass_MetaData), NewProp_OtherMass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AccumulatedImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewProp_OtherMass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	nullptr,
	&NewStructOps,
	"ChaosPhysicsCollisionInfo",
	Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::PropPointers),
	sizeof(FChaosPhysicsCollisionInfo),
	alignof(FChaosPhysicsCollisionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo.InnerSingleton, Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo.InnerSingleton;
}
// End ScriptStruct FChaosPhysicsCollisionInfo

// Begin Delegate FOnChaosPhysicsCollision
struct Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics
{
	struct _Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms
	{
		FChaosPhysicsCollisionInfo CollisionInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::NewProp_CollisionInfo = { "CollisionInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms, CollisionInfo), Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionInfo_MetaData), NewProp_CollisionInfo_MetaData) }; // 626704235
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::NewProp_CollisionInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ChaosSolverEngine, nullptr, "OnChaosPhysicsCollision__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::_Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::_Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChaosPhysicsCollision_DelegateWrapper(const FMulticastScriptDelegate& OnChaosPhysicsCollision, FChaosPhysicsCollisionInfo const& CollisionInfo)
{
	struct _Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms
	{
		FChaosPhysicsCollisionInfo CollisionInfo;
	};
	_Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms Parms;
	Parms.CollisionInfo=CollisionInfo;
	OnChaosPhysicsCollision.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnChaosPhysicsCollision

// Begin Interface UChaosNotifyHandlerInterface
void UChaosNotifyHandlerInterface::StaticRegisterNativesUChaosNotifyHandlerInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosNotifyHandlerInterface);
UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister()
{
	return UChaosNotifyHandlerInterface::StaticClass();
}
struct Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChaosNotifyHandlerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::ClassParams = {
	&UChaosNotifyHandlerInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface()
{
	if (!Z_Registration_Info_UClass_UChaosNotifyHandlerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosNotifyHandlerInterface.OuterSingleton, Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosNotifyHandlerInterface.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosNotifyHandlerInterface>()
{
	return UChaosNotifyHandlerInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosNotifyHandlerInterface);
UChaosNotifyHandlerInterface::~UChaosNotifyHandlerInterface() {}
// End Interface UChaosNotifyHandlerInterface

// Begin Class UChaosSolverEngineBlueprintLibrary Function ConvertPhysicsCollisionToHitResult
struct Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics
{
	struct ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms
	{
		FChaosPhysicsCollisionInfo PhysicsCollision;
		FHitResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsCollision_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsCollision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_PhysicsCollision = { "PhysicsCollision", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms, PhysicsCollision), Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsCollision_MetaData), NewProp_PhysicsCollision_MetaData) }; // 626704235
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_PhysicsCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary, nullptr, "ConvertPhysicsCollisionToHitResult", nullptr, nullptr, Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::ChaosSolverEngineBlueprintLibrary_eventConvertPhysicsCollisionToHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosSolverEngineBlueprintLibrary::execConvertPhysicsCollisionToHitResult)
{
	P_GET_STRUCT_REF(FChaosPhysicsCollisionInfo,Z_Param_Out_PhysicsCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHitResult*)Z_Param__Result=UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(Z_Param_Out_PhysicsCollision);
	P_NATIVE_END;
}
// End Class UChaosSolverEngineBlueprintLibrary Function ConvertPhysicsCollisionToHitResult

// Begin Class UChaosSolverEngineBlueprintLibrary
void UChaosSolverEngineBlueprintLibrary::StaticRegisterNativesUChaosSolverEngineBlueprintLibrary()
{
	UClass* Class = UChaosSolverEngineBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertPhysicsCollisionToHitResult", &UChaosSolverEngineBlueprintLibrary::execConvertPhysicsCollisionToHitResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosSolverEngineBlueprintLibrary);
UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_NoRegister()
{
	return UChaosSolverEngineBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Chaos/ChaosNotifyHandlerInterface.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosNotifyHandlerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult, "ConvertPhysicsCollisionToHitResult" }, // 1980133861
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosSolverEngineBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::ClassParams = {
	&UChaosSolverEngineBlueprintLibrary::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosSolverEngineBlueprintLibrary>()
{
	return UChaosSolverEngineBlueprintLibrary::StaticClass();
}
UChaosSolverEngineBlueprintLibrary::UChaosSolverEngineBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosSolverEngineBlueprintLibrary);
UChaosSolverEngineBlueprintLibrary::~UChaosSolverEngineBlueprintLibrary() {}
// End Class UChaosSolverEngineBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosPhysicsCollisionInfo::StaticStruct, Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics::NewStructOps, TEXT("ChaosPhysicsCollisionInfo"), &Z_Registration_Info_UScriptStruct_ChaosPhysicsCollisionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosPhysicsCollisionInfo), 626704235U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosNotifyHandlerInterface, UChaosNotifyHandlerInterface::StaticClass, TEXT("UChaosNotifyHandlerInterface"), &Z_Registration_Info_UClass_UChaosNotifyHandlerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosNotifyHandlerInterface), 812901129U) },
		{ Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary, UChaosSolverEngineBlueprintLibrary::StaticClass, TEXT("UChaosSolverEngineBlueprintLibrary"), &Z_Registration_Info_UClass_UChaosSolverEngineBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosSolverEngineBlueprintLibrary), 437640216U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_1586415332(TEXT("/Script/ChaosSolverEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
