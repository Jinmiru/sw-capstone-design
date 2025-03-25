// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/CharacterMovementComponentAsync.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetworkPredictionInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetworkSmoothingMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFindFloorResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceMask();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSourceGroup();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCharacterMovementComponentPostPhysicsTickFunction
static_assert(std::is_polymorphic<FCharacterMovementComponentPostPhysicsTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FCharacterMovementComponentPostPhysicsTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterMovementComponentPostPhysicsTickFunction;
class UScriptStruct* FCharacterMovementComponentPostPhysicsTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterMovementComponentPostPhysicsTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterMovementComponentPostPhysicsTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CharacterMovementComponentPostPhysicsTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterMovementComponentPostPhysicsTickFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCharacterMovementComponentPostPhysicsTickFunction>()
{
	return FCharacterMovementComponentPostPhysicsTickFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Tick function that calls UCharacterMovementComponent::PostPhysicsTickComponent\n **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Tick function that calls UCharacterMovementComponent::PostPhysicsTickComponent" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterMovementComponentPostPhysicsTickFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FTickFunction,
	&NewStructOps,
	"CharacterMovementComponentPostPhysicsTickFunction",
	nullptr,
	0,
	sizeof(FCharacterMovementComponentPostPhysicsTickFunction),
	alignof(FCharacterMovementComponentPostPhysicsTickFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterMovementComponentPostPhysicsTickFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterMovementComponentPostPhysicsTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterMovementComponentPostPhysicsTickFunction.InnerSingleton;
}
// End ScriptStruct FCharacterMovementComponentPostPhysicsTickFunction

// Begin ScriptStruct FCharacterMovementComponentPrePhysicsTickFunction
static_assert(std::is_polymorphic<FCharacterMovementComponentPrePhysicsTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FCharacterMovementComponentPrePhysicsTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterMovementComponentPrePhysicsTickFunction;
class UScriptStruct* FCharacterMovementComponentPrePhysicsTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterMovementComponentPrePhysicsTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterMovementComponentPrePhysicsTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CharacterMovementComponentPrePhysicsTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterMovementComponentPrePhysicsTickFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCharacterMovementComponentPrePhysicsTickFunction>()
{
	return FCharacterMovementComponentPrePhysicsTickFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterMovementComponentPrePhysicsTickFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FTickFunction,
	&NewStructOps,
	"CharacterMovementComponentPrePhysicsTickFunction",
	nullptr,
	0,
	sizeof(FCharacterMovementComponentPrePhysicsTickFunction),
	alignof(FCharacterMovementComponentPrePhysicsTickFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterMovementComponentPrePhysicsTickFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterMovementComponentPrePhysicsTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterMovementComponentPrePhysicsTickFunction.InnerSingleton;
}
// End ScriptStruct FCharacterMovementComponentPrePhysicsTickFunction

// Begin Class UCharacterMovementComponent Function AddForce
struct Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics
{
	struct CharacterMovementComponent_eventAddForce_Parms
	{
		FVector Force;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** \n\x09 * Add force to character. Forces are accumulated each tick and applied together\n\x09 * so multiple calls to this function will accumulate.\n\x09 * Forces are scaled depending on timestep, so they can be applied each frame. If you want an\n\x09 * instantaneous force, use AddImpulse.\n\x09 * Adding a force always takes the actor's mass into account.\n\x09 * Note that changing the momentum of characters like this can change the movement mode.\n\x09 * \n\x09 * @param\x09""Force\x09\x09\x09""Force to apply.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Add force to character. Forces are accumulated each tick and applied together\nso multiple calls to this function will accumulate.\nForces are scaled depending on timestep, so they can be applied each frame. If you want an\ninstantaneous force, use AddImpulse.\nAdding a force always takes the actor's mass into account.\nNote that changing the momentum of characters like this can change the movement mode.\n\n@param       Force                   Force to apply." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventAddForce_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics::NewProp_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "AddForce", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics::CharacterMovementComponent_eventAddForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics::CharacterMovementComponent_eventAddForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_AddForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_AddForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execAddForce)
{
	P_GET_STRUCT(FVector,Z_Param_Force);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddForce(Z_Param_Force);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function AddForce

// Begin Class UCharacterMovementComponent Function AddImpulse
struct Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics
{
	struct CharacterMovementComponent_eventAddImpulse_Parms
	{
		FVector Impulse;
		bool bVelocityChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** \n\x09 * Add impulse to character. Impulses are accumulated each tick and applied together\n\x09 * so multiple calls to this function will accumulate.\n\x09 * An impulse is an instantaneous force, usually applied once. If you want to continually apply\n\x09 * forces each frame, use AddForce().\n\x09 * Note that changing the momentum of characters like this can change the movement mode.\n\x09 * \n\x09 * @param\x09Impulse\x09\x09\x09\x09Impulse to apply.\n\x09 * @param\x09""bVelocityChange\x09\x09Whether or not the impulse is relative to mass.\n\x09 */" },
		{ "CPP_Default_bVelocityChange", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Add impulse to character. Impulses are accumulated each tick and applied together\nso multiple calls to this function will accumulate.\nAn impulse is an instantaneous force, usually applied once. If you want to continually apply\nforces each frame, use AddForce().\nNote that changing the momentum of characters like this can change the movement mode.\n\n@param       Impulse                         Impulse to apply.\n@param       bVelocityChange         Whether or not the impulse is relative to mass." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static void NewProp_bVelocityChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVelocityChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventAddImpulse_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::NewProp_bVelocityChange_SetBit(void* Obj)
{
	((CharacterMovementComponent_eventAddImpulse_Parms*)Obj)->bVelocityChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::NewProp_bVelocityChange = { "bVelocityChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMovementComponent_eventAddImpulse_Parms), &Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::NewProp_bVelocityChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::NewProp_bVelocityChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "AddImpulse", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::CharacterMovementComponent_eventAddImpulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::CharacterMovementComponent_eventAddImpulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execAddImpulse)
{
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_GET_UBOOL(Z_Param_bVelocityChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddImpulse(Z_Param_Impulse,Z_Param_bVelocityChange);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function AddImpulse

// Begin Class UCharacterMovementComponent Function CalcVelocity
struct Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics
{
	struct CharacterMovementComponent_eventCalcVelocity_Parms
	{
		float DeltaTime;
		float Friction;
		bool bFluid;
		float BrakingDeceleration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** \n\x09 * Updates Velocity and Acceleration based on the current state, applying the effects of friction and acceleration or deceleration. Does not apply gravity.\n\x09 * This is used internally during movement updates. Normally you don't need to call this from outside code, but you might want to use it for custom movement modes.\n\x09 *\n\x09 * @param\x09""DeltaTime\x09\x09\x09\x09\x09\x09time elapsed since last frame.\n\x09 * @param\x09""Friction\x09\x09\x09\x09\x09\x09""coefficient of friction when not accelerating, or in the direction opposite acceleration.\n\x09 * @param\x09""bFluid\x09\x09\x09\x09\x09\x09\x09true if moving through a fluid, causing Friction to always be applied regardless of acceleration.\n\x09 * @param\x09""BrakingDeceleration\x09\x09\x09\x09""deceleration applied when not accelerating, or when exceeding max velocity.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Updates Velocity and Acceleration based on the current state, applying the effects of friction and acceleration or deceleration. Does not apply gravity.\nThis is used internally during movement updates. Normally you don't need to call this from outside code, but you might want to use it for custom movement modes.\n\n@param       DeltaTime                                               time elapsed since last frame.\n@param       Friction                                                coefficient of friction when not accelerating, or in the direction opposite acceleration.\n@param       bFluid                                                  true if moving through a fluid, causing Friction to always be applied regardless of acceleration.\n@param       BrakingDeceleration                             deceleration applied when not accelerating, or when exceeding max velocity." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
	static void NewProp_bFluid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFluid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDeceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventCalcVelocity_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventCalcVelocity_Parms, Friction), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::NewProp_bFluid_SetBit(void* Obj)
{
	((CharacterMovementComponent_eventCalcVelocity_Parms*)Obj)->bFluid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::NewProp_bFluid = { "bFluid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMovementComponent_eventCalcVelocity_Parms), &Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::NewProp_bFluid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::NewProp_BrakingDeceleration = { "BrakingDeceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventCalcVelocity_Parms, BrakingDeceleration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::NewProp_bFluid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::NewProp_BrakingDeceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "CalcVelocity", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::CharacterMovementComponent_eventCalcVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::CharacterMovementComponent_eventCalcVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execCalcVelocity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Friction);
	P_GET_UBOOL(Z_Param_bFluid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BrakingDeceleration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalcVelocity(Z_Param_DeltaTime,Z_Param_Friction,Z_Param_bFluid,Z_Param_BrakingDeceleration);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function CalcVelocity

// Begin Class UCharacterMovementComponent Function CapsuleTouched
struct Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics
{
	struct CharacterMovementComponent_eventCapsuleTouched_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* Other;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the collision capsule touches another primitive component */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Called when the collision capsule touches another primitive component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventCapsuleTouched_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventCapsuleTouched_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventCapsuleTouched_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventCapsuleTouched_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((CharacterMovementComponent_eventCapsuleTouched_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMovementComponent_eventCapsuleTouched_Parms), &Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventCapsuleTouched_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "CapsuleTouched", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::CharacterMovementComponent_eventCapsuleTouched_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::CharacterMovementComponent_eventCapsuleTouched_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execCapsuleTouched)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CapsuleTouched(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function CapsuleTouched

// Begin Class UCharacterMovementComponent Function ClearAccumulatedForces
struct Z_Construct_UFunction_UCharacterMovementComponent_ClearAccumulatedForces_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Clears forces accumulated through AddImpulse() and AddForce(), and also pending launch velocity. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Clears forces accumulated through AddImpulse() and AddForce(), and also pending launch velocity." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_ClearAccumulatedForces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "ClearAccumulatedForces", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_ClearAccumulatedForces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_ClearAccumulatedForces_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_ClearAccumulatedForces()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_ClearAccumulatedForces_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execClearAccumulatedForces)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAccumulatedForces();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function ClearAccumulatedForces

// Begin Class UCharacterMovementComponent Function DisableMovement
struct Z_Construct_UFunction_UCharacterMovementComponent_DisableMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Make movement impossible (sets movement mode to MOVE_None). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Make movement impossible (sets movement mode to MOVE_None)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_DisableMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "DisableMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_DisableMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_DisableMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_DisableMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_DisableMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execDisableMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableMovement();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function DisableMovement

// Begin Class UCharacterMovementComponent Function GetAnalogInputModifier
struct Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics
{
	struct CharacterMovementComponent_eventGetAnalogInputModifier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Returns modifier [0..1] based on the magnitude of the last input vector, which is used to modify the acceleration and max speed during movement. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns modifier [0..1] based on the magnitude of the last input vector, which is used to modify the acceleration and max speed during movement." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetAnalogInputModifier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetAnalogInputModifier", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics::CharacterMovementComponent_eventGetAnalogInputModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics::CharacterMovementComponent_eventGetAnalogInputModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetAnalogInputModifier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAnalogInputModifier();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetAnalogInputModifier

// Begin Class UCharacterMovementComponent Function GetCharacterOwner
struct Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics
{
	struct CharacterMovementComponent_eventGetCharacterOwner_Parms
	{
		ACharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Get the Character that owns UpdatedComponent. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Get the Character that owns UpdatedComponent." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetCharacterOwner_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetCharacterOwner", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics::CharacterMovementComponent_eventGetCharacterOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics::CharacterMovementComponent_eventGetCharacterOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetCharacterOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACharacter**)Z_Param__Result=P_THIS->GetCharacterOwner();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetCharacterOwner

// Begin Class UCharacterMovementComponent Function GetCrouchedHalfHeight
struct Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics
{
	struct CharacterMovementComponent_eventGetCrouchedHalfHeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Returns the collision half-height when crouching (component scale is applied separately) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns the collision half-height when crouching (component scale is applied separately)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetCrouchedHalfHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetCrouchedHalfHeight", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics::CharacterMovementComponent_eventGetCrouchedHalfHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics::CharacterMovementComponent_eventGetCrouchedHalfHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetCrouchedHalfHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCrouchedHalfHeight();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetCrouchedHalfHeight

// Begin Class UCharacterMovementComponent Function GetCurrentAcceleration
struct Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics
{
	struct CharacterMovementComponent_eventGetCurrentAcceleration_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Returns current acceleration, computed from input vector each update. */" },
		{ "Keywords", "Acceleration GetAcceleration" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns current acceleration, computed from input vector each update." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetCurrentAcceleration_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetCurrentAcceleration", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics::CharacterMovementComponent_eventGetCurrentAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics::CharacterMovementComponent_eventGetCurrentAcceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetCurrentAcceleration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCurrentAcceleration();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetCurrentAcceleration

// Begin Class UCharacterMovementComponent Function GetGravityDirection
struct Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics
{
	struct CharacterMovementComponent_eventGetGravityDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Returns the current gravity direction. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns the current gravity direction." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetGravityDirection", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics::CharacterMovementComponent_eventGetGravityDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics::CharacterMovementComponent_eventGetGravityDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetGravityDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetGravityDirection

// Begin Class UCharacterMovementComponent Function GetImpartedMovementBaseVelocity
struct Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics
{
	struct CharacterMovementComponent_eventGetImpartedMovementBaseVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/**\n\x09 * If we have a movement base, get the velocity that should be imparted by that base, usually when jumping off of it.\n\x09 * Only applies the components of the velocity enabled by bImpartBaseVelocityX, bImpartBaseVelocityY, bImpartBaseVelocityZ.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If we have a movement base, get the velocity that should be imparted by that base, usually when jumping off of it.\nOnly applies the components of the velocity enabled by bImpartBaseVelocityX, bImpartBaseVelocityY, bImpartBaseVelocityZ." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetImpartedMovementBaseVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetImpartedMovementBaseVelocity", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics::CharacterMovementComponent_eventGetImpartedMovementBaseVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics::CharacterMovementComponent_eventGetImpartedMovementBaseVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetImpartedMovementBaseVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetImpartedMovementBaseVelocity();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetImpartedMovementBaseVelocity

// Begin Class UCharacterMovementComponent Function GetLastUpdateLocation
struct Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics
{
	struct CharacterMovementComponent_eventGetLastUpdateLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Returns the location at the end of the last tick. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns the location at the end of the last tick." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetLastUpdateLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetLastUpdateLocation", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics::CharacterMovementComponent_eventGetLastUpdateLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics::CharacterMovementComponent_eventGetLastUpdateLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetLastUpdateLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLastUpdateLocation();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetLastUpdateLocation

// Begin Class UCharacterMovementComponent Function GetLastUpdateRequestedVelocity
struct Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics
{
	struct CharacterMovementComponent_eventGetLastUpdateRequestedVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Returns velocity requested by path following */" },
		{ "Keywords", "Velocity RequestedVelocity" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns velocity requested by path following" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetLastUpdateRequestedVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetLastUpdateRequestedVelocity", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics::CharacterMovementComponent_eventGetLastUpdateRequestedVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics::CharacterMovementComponent_eventGetLastUpdateRequestedVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetLastUpdateRequestedVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLastUpdateRequestedVelocity();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetLastUpdateRequestedVelocity

// Begin Class UCharacterMovementComponent Function GetLastUpdateRotation
struct Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics
{
	struct CharacterMovementComponent_eventGetLastUpdateRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Returns the rotation at the end of the last tick. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns the rotation at the end of the last tick." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetLastUpdateRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetLastUpdateRotation", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics::CharacterMovementComponent_eventGetLastUpdateRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics::CharacterMovementComponent_eventGetLastUpdateRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetLastUpdateRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetLastUpdateRotation();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetLastUpdateRotation

// Begin Class UCharacterMovementComponent Function GetLastUpdateVelocity
struct Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics
{
	struct CharacterMovementComponent_eventGetLastUpdateVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Returns the velocity at the end of the last tick. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns the velocity at the end of the last tick." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetLastUpdateVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetLastUpdateVelocity", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics::CharacterMovementComponent_eventGetLastUpdateVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics::CharacterMovementComponent_eventGetLastUpdateVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetLastUpdateVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLastUpdateVelocity();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetLastUpdateVelocity

// Begin Class UCharacterMovementComponent Function GetMaxAcceleration
struct Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics
{
	struct CharacterMovementComponent_eventGetMaxAcceleration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Returns maximum acceleration for the current state. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns maximum acceleration for the current state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetMaxAcceleration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetMaxAcceleration", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics::CharacterMovementComponent_eventGetMaxAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics::CharacterMovementComponent_eventGetMaxAcceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetMaxAcceleration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxAcceleration();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetMaxAcceleration

// Begin Class UCharacterMovementComponent Function GetMaxBrakingDeceleration
struct Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics
{
	struct CharacterMovementComponent_eventGetMaxBrakingDeceleration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Returns maximum deceleration for the current state when braking (ie when there is no acceleration). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns maximum deceleration for the current state when braking (ie when there is no acceleration)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetMaxBrakingDeceleration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetMaxBrakingDeceleration", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics::CharacterMovementComponent_eventGetMaxBrakingDeceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics::CharacterMovementComponent_eventGetMaxBrakingDeceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetMaxBrakingDeceleration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxBrakingDeceleration();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetMaxBrakingDeceleration

// Begin Class UCharacterMovementComponent Function GetMaxJumpHeight
struct Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics
{
	struct CharacterMovementComponent_eventGetMaxJumpHeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/**\n\x09 *\x09""Compute the max jump height based on the JumpZVelocity velocity and gravity.\n\x09 *\x09This does not take into account the CharacterOwner's MaxJumpHoldTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Compute the max jump height based on the JumpZVelocity velocity and gravity.\nThis does not take into account the CharacterOwner's MaxJumpHoldTime." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetMaxJumpHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetMaxJumpHeight", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics::CharacterMovementComponent_eventGetMaxJumpHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics::CharacterMovementComponent_eventGetMaxJumpHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetMaxJumpHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxJumpHeight();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetMaxJumpHeight

// Begin Class UCharacterMovementComponent Function GetMaxJumpHeightWithJumpTime
struct Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics
{
	struct CharacterMovementComponent_eventGetMaxJumpHeightWithJumpTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/**\n\x09 *\x09""Compute the max jump height based on the JumpZVelocity velocity and gravity.\n\x09 *\x09This does take into account the CharacterOwner's MaxJumpHoldTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Compute the max jump height based on the JumpZVelocity velocity and gravity.\nThis does take into account the CharacterOwner's MaxJumpHoldTime." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetMaxJumpHeightWithJumpTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetMaxJumpHeightWithJumpTime", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics::CharacterMovementComponent_eventGetMaxJumpHeightWithJumpTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics::CharacterMovementComponent_eventGetMaxJumpHeightWithJumpTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetMaxJumpHeightWithJumpTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxJumpHeightWithJumpTime();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetMaxJumpHeightWithJumpTime

// Begin Class UCharacterMovementComponent Function GetMinAnalogSpeed
struct Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics
{
	struct CharacterMovementComponent_eventGetMinAnalogSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Returns maximum acceleration for the current state. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns maximum acceleration for the current state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetMinAnalogSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetMinAnalogSpeed", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics::CharacterMovementComponent_eventGetMinAnalogSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics::CharacterMovementComponent_eventGetMinAnalogSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetMinAnalogSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMinAnalogSpeed();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetMinAnalogSpeed

// Begin Class UCharacterMovementComponent Function GetMovementBase
struct Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics
{
	struct CharacterMovementComponent_eventGetMovementBase_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Return PrimitiveComponent we are based on (standing and walking on). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Return PrimitiveComponent we are based on (standing and walking on)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetMovementBase_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetMovementBase", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics::CharacterMovementComponent_eventGetMovementBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics::CharacterMovementComponent_eventGetMovementBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetMovementBase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetMovementBase();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetMovementBase

// Begin Class UCharacterMovementComponent Function GetPerchRadiusThreshold
struct Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics
{
	struct CharacterMovementComponent_eventGetPerchRadiusThreshold_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Returns The distance from the edge of the capsule within which we don't allow the character to perch on the edge of a surface. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns The distance from the edge of the capsule within which we don't allow the character to perch on the edge of a surface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetPerchRadiusThreshold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetPerchRadiusThreshold", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics::CharacterMovementComponent_eventGetPerchRadiusThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics::CharacterMovementComponent_eventGetPerchRadiusThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetPerchRadiusThreshold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPerchRadiusThreshold();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetPerchRadiusThreshold

// Begin Class UCharacterMovementComponent Function GetValidPerchRadius
struct Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics
{
	struct CharacterMovementComponent_eventGetValidPerchRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/**\n\x09 * Returns the radius within which we can stand on the edge of a surface without falling (if this is a walkable surface).\n\x09 * Simply computed as the capsule radius minus the result of GetPerchRadiusThreshold().\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns the radius within which we can stand on the edge of a surface without falling (if this is a walkable surface).\nSimply computed as the capsule radius minus the result of GetPerchRadiusThreshold()." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventGetValidPerchRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "GetValidPerchRadius", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics::CharacterMovementComponent_eventGetValidPerchRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics::CharacterMovementComponent_eventGetValidPerchRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execGetValidPerchRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValidPerchRadius();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function GetValidPerchRadius

// Begin Class UCharacterMovementComponent Function HasCustomGravity
struct Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics
{
	struct CharacterMovementComponent_eventHasCustomGravity_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Whether the gravity direction is different from UCharacterMovementComponent::DefaultGravityDirection. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Whether the gravity direction is different from UCharacterMovementComponent::DefaultGravityDirection." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMovementComponent_eventHasCustomGravity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMovementComponent_eventHasCustomGravity_Parms), &Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "HasCustomGravity", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::CharacterMovementComponent_eventHasCustomGravity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::CharacterMovementComponent_eventHasCustomGravity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execHasCustomGravity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCustomGravity();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function HasCustomGravity

// Begin Class UCharacterMovementComponent Function IsWalkable
struct Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics
{
	struct CharacterMovementComponent_eventIsWalkable_Parms
	{
		FHitResult Hit;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Return true if the hit result should be considered a walkable surface for the character. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Return true if the hit result should be considered a walkable surface for the character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventIsWalkable_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
void Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMovementComponent_eventIsWalkable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMovementComponent_eventIsWalkable_Parms), &Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "IsWalkable", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::CharacterMovementComponent_eventIsWalkable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::CharacterMovementComponent_eventIsWalkable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execIsWalkable)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWalkable(Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function IsWalkable

// Begin Class UCharacterMovementComponent Function IsWalking
struct Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics
{
	struct CharacterMovementComponent_eventIsWalking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Returns true if the character is in the 'Walking' movement mode. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Returns true if the character is in the 'Walking' movement mode." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMovementComponent_eventIsWalking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMovementComponent_eventIsWalking_Parms), &Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "IsWalking", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::CharacterMovementComponent_eventIsWalking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::CharacterMovementComponent_eventIsWalking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_IsWalking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_IsWalking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execIsWalking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWalking();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function IsWalking

// Begin Class UCharacterMovementComponent Function K2_ComputeFloorDist
struct Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics
{
	struct CharacterMovementComponent_eventK2_ComputeFloorDist_Parms
	{
		FVector CapsuleLocation;
		float LineDistance;
		float SweepDistance;
		float SweepRadius;
		FFindFloorResult FloorResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/**\n\x09* Compute distance to the floor from bottom sphere of capsule and store the result in FloorResult.\n\x09* This distance is the swept distance of the capsule to the first point impacted by the lower hemisphere, or distance from the bottom of the capsule in the case of a line trace.\n\x09* This function does not care if collision is disabled on the capsule (unlike FindFloor).\n\x09*\n\x09* @param CapsuleLocation\x09\x09Location where the capsule sweep should originate\n\x09* @param LineDistance\x09\x09\x09If non-zero, max distance to test for a simple line check from the capsule base. Used only if the sweep test fails to find a walkable floor, and only returns a valid result if the impact normal is a walkable normal.\n\x09* @param SweepDistance\x09\x09\x09If non-zero, max distance to use when sweeping a capsule downwards for the test. MUST be greater than or equal to the line distance.\n\x09* @param SweepRadius\x09\x09\x09The radius to use for sweep tests. Should be <= capsule radius.\n\x09* @param FloorResult\x09\x09\x09Result of the floor check\n\x09*/" },
		{ "DisplayName", "ComputeFloorDistance" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ScriptName", "ComputeFloorDistance" },
		{ "ToolTip", "Compute distance to the floor from bottom sphere of capsule and store the result in FloorResult.\nThis distance is the swept distance of the capsule to the first point impacted by the lower hemisphere, or distance from the bottom of the capsule in the case of a line trace.\nThis function does not care if collision is disabled on the capsule (unlike FindFloor).\n\n@param CapsuleLocation                Location where the capsule sweep should originate\n@param LineDistance                   If non-zero, max distance to test for a simple line check from the capsule base. Used only if the sweep test fails to find a walkable floor, and only returns a valid result if the impact normal is a walkable normal.\n@param SweepDistance                  If non-zero, max distance to use when sweeping a capsule downwards for the test. MUST be greater than or equal to the line distance.\n@param SweepRadius                    The radius to use for sweep tests. Should be <= capsule radius.\n@param FloorResult                    Result of the floor check" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::NewProp_CapsuleLocation = { "CapsuleLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventK2_ComputeFloorDist_Parms, CapsuleLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::NewProp_LineDistance = { "LineDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventK2_ComputeFloorDist_Parms, LineDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::NewProp_SweepDistance = { "SweepDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventK2_ComputeFloorDist_Parms, SweepDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::NewProp_SweepRadius = { "SweepRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventK2_ComputeFloorDist_Parms, SweepRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::NewProp_FloorResult = { "FloorResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventK2_ComputeFloorDist_Parms, FloorResult), Z_Construct_UScriptStruct_FFindFloorResult, METADATA_PARAMS(0, nullptr) }; // 3134433334
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::NewProp_CapsuleLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::NewProp_LineDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::NewProp_SweepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::NewProp_SweepRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::NewProp_FloorResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "K2_ComputeFloorDist", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::CharacterMovementComponent_eventK2_ComputeFloorDist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::CharacterMovementComponent_eventK2_ComputeFloorDist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execK2_ComputeFloorDist)
{
	P_GET_STRUCT(FVector,Z_Param_CapsuleLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LineDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SweepDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SweepRadius);
	P_GET_STRUCT_REF(FFindFloorResult,Z_Param_Out_FloorResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_ComputeFloorDist(Z_Param_CapsuleLocation,Z_Param_LineDistance,Z_Param_SweepDistance,Z_Param_SweepRadius,Z_Param_Out_FloorResult);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function K2_ComputeFloorDist

// Begin Class UCharacterMovementComponent Function K2_FindFloor
struct Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics
{
	struct CharacterMovementComponent_eventK2_FindFloor_Parms
	{
		FVector CapsuleLocation;
		FFindFloorResult FloorResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/**\n\x09* Sweeps a vertical trace to find the floor for the capsule at the given location. Will attempt to perch if ShouldComputePerchResult() returns true for the downward sweep result.\n\x09* No floor will be found if collision is disabled on the capsule!\n\x09*\n\x09* @param CapsuleLocation\x09\x09Location where the capsule sweep should originate\n\x09* @param FloorResult\x09\x09\x09Result of the floor check\n\x09*/" },
		{ "DisplayName", "FindFloor" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ScriptName", "FindFloor" },
		{ "ToolTip", "Sweeps a vertical trace to find the floor for the capsule at the given location. Will attempt to perch if ShouldComputePerchResult() returns true for the downward sweep result.\nNo floor will be found if collision is disabled on the capsule!\n\n@param CapsuleLocation                Location where the capsule sweep should originate\n@param FloorResult                    Result of the floor check" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::NewProp_CapsuleLocation = { "CapsuleLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventK2_FindFloor_Parms, CapsuleLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::NewProp_FloorResult = { "FloorResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventK2_FindFloor_Parms, FloorResult), Z_Construct_UScriptStruct_FFindFloorResult, METADATA_PARAMS(0, nullptr) }; // 3134433334
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::NewProp_CapsuleLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::NewProp_FloorResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "K2_FindFloor", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::CharacterMovementComponent_eventK2_FindFloor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::CharacterMovementComponent_eventK2_FindFloor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execK2_FindFloor)
{
	P_GET_STRUCT(FVector,Z_Param_CapsuleLocation);
	P_GET_STRUCT_REF(FFindFloorResult,Z_Param_Out_FloorResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_FindFloor(Z_Param_CapsuleLocation,Z_Param_Out_FloorResult);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function K2_FindFloor

// Begin Class UCharacterMovementComponent Function K2_GetWalkableFloorAngle
struct Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics
{
	struct CharacterMovementComponent_eventK2_GetWalkableFloorAngle_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Get the max angle in degrees of a walkable surface for the character. */" },
		{ "DisplayName", "GetWalkableFloorAngle" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ScriptName", "GetWalkableFloorAngle" },
		{ "ToolTip", "Get the max angle in degrees of a walkable surface for the character." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventK2_GetWalkableFloorAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "K2_GetWalkableFloorAngle", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics::CharacterMovementComponent_eventK2_GetWalkableFloorAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics::CharacterMovementComponent_eventK2_GetWalkableFloorAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execK2_GetWalkableFloorAngle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetWalkableFloorAngle();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function K2_GetWalkableFloorAngle

// Begin Class UCharacterMovementComponent Function K2_GetWalkableFloorZ
struct Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics
{
	struct CharacterMovementComponent_eventK2_GetWalkableFloorZ_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Get the Z component of the normal of the steepest walkable surface for the character. Any lower than this and it is not walkable. */" },
		{ "DisplayName", "GetWalkableFloorZ" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ScriptName", "GetWalkableFloorZ" },
		{ "ToolTip", "Get the Z component of the normal of the steepest walkable surface for the character. Any lower than this and it is not walkable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventK2_GetWalkableFloorZ_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "K2_GetWalkableFloorZ", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics::CharacterMovementComponent_eventK2_GetWalkableFloorZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics::CharacterMovementComponent_eventK2_GetWalkableFloorZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execK2_GetWalkableFloorZ)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetWalkableFloorZ();
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function K2_GetWalkableFloorZ

// Begin Class UCharacterMovementComponent Function SetAvoidanceEnabled
struct Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics
{
	struct CharacterMovementComponent_eventSetAvoidanceEnabled_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Change avoidance state and registers in RVO manager if needed */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Change avoidance state and registers in RVO manager if needed" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((CharacterMovementComponent_eventSetAvoidanceEnabled_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMovementComponent_eventSetAvoidanceEnabled_Parms), &Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "SetAvoidanceEnabled", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::CharacterMovementComponent_eventSetAvoidanceEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::CharacterMovementComponent_eventSetAvoidanceEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execSetAvoidanceEnabled)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAvoidanceEnabled(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function SetAvoidanceEnabled

// Begin Class UCharacterMovementComponent Function SetAvoidanceGroup
struct Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics
{
	struct CharacterMovementComponent_eventSetAvoidanceGroup_Parms
	{
		int32 GroupFlags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use SetAvoidanceGroupMask function instead." },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics::NewProp_GroupFlags = { "GroupFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventSetAvoidanceGroup_Parms, GroupFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics::NewProp_GroupFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "SetAvoidanceGroup", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics::CharacterMovementComponent_eventSetAvoidanceGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics::CharacterMovementComponent_eventSetAvoidanceGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execSetAvoidanceGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GroupFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAvoidanceGroup(Z_Param_GroupFlags);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function SetAvoidanceGroup

// Begin Class UCharacterMovementComponent Function SetAvoidanceGroupMask
struct Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics
{
	struct CharacterMovementComponent_eventSetAvoidanceGroupMask_Parms
	{
		FNavAvoidanceMask GroupMask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupMask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics::NewProp_GroupMask = { "GroupMask", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventSetAvoidanceGroupMask_Parms, GroupMask), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupMask_MetaData), NewProp_GroupMask_MetaData) }; // 2868412061
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics::NewProp_GroupMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "SetAvoidanceGroupMask", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics::CharacterMovementComponent_eventSetAvoidanceGroupMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics::CharacterMovementComponent_eventSetAvoidanceGroupMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execSetAvoidanceGroupMask)
{
	P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAvoidanceGroupMask(Z_Param_Out_GroupMask);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function SetAvoidanceGroupMask

// Begin Class UCharacterMovementComponent Function SetCrouchedHalfHeight
struct Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics
{
	struct CharacterMovementComponent_eventSetCrouchedHalfHeight_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Sets collision half-height when crouching and updates dependent computations */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Sets collision half-height when crouching and updates dependent computations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventSetCrouchedHalfHeight_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "SetCrouchedHalfHeight", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics::CharacterMovementComponent_eventSetCrouchedHalfHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics::CharacterMovementComponent_eventSetCrouchedHalfHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execSetCrouchedHalfHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCrouchedHalfHeight(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function SetCrouchedHalfHeight

// Begin Class UCharacterMovementComponent Function SetGravityDirection
struct Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics
{
	struct CharacterMovementComponent_eventSetGravityDirection_Parms
	{
		FVector GravityDir;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/**\n\x09 * Set a custom, local gravity direction to use during movement simulation.\n\x09 * The gravity direction must be synchronized by external systems between the autonomous\n\x09 * and authority processes. The gravity direction will be corrected as part of movement\n\x09 * corrections should the movement state diverge.\n\x09 * SetGravityDirection is responsible for initializing cached values used to tranform to\n\x09 * from gravity relative space.\n\x09 * @param GravityDir\x09\x09""A non-zero vector representing the new gravity direction. The vector will be normalized.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Set a custom, local gravity direction to use during movement simulation.\nThe gravity direction must be synchronized by external systems between the autonomous\nand authority processes. The gravity direction will be corrected as part of movement\ncorrections should the movement state diverge.\nSetGravityDirection is responsible for initializing cached values used to tranform to\nfrom gravity relative space.\n@param GravityDir            A non-zero vector representing the new gravity direction. The vector will be normalized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityDir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics::NewProp_GravityDir = { "GravityDir", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventSetGravityDirection_Parms, GravityDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityDir_MetaData), NewProp_GravityDir_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics::NewProp_GravityDir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "SetGravityDirection", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics::CharacterMovementComponent_eventSetGravityDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics::CharacterMovementComponent_eventSetGravityDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execSetGravityDirection)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GravityDir);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGravityDirection(Z_Param_Out_GravityDir);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function SetGravityDirection

// Begin Class UCharacterMovementComponent Function SetGroupsToAvoid
struct Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics
{
	struct CharacterMovementComponent_eventSetGroupsToAvoid_Parms
	{
		int32 GroupFlags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use SetGroupsToAvoidMask function instead." },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics::NewProp_GroupFlags = { "GroupFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventSetGroupsToAvoid_Parms, GroupFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics::NewProp_GroupFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "SetGroupsToAvoid", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics::CharacterMovementComponent_eventSetGroupsToAvoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics::CharacterMovementComponent_eventSetGroupsToAvoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execSetGroupsToAvoid)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GroupFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGroupsToAvoid(Z_Param_GroupFlags);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function SetGroupsToAvoid

// Begin Class UCharacterMovementComponent Function SetGroupsToAvoidMask
struct Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics
{
	struct CharacterMovementComponent_eventSetGroupsToAvoidMask_Parms
	{
		FNavAvoidanceMask GroupMask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupMask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics::NewProp_GroupMask = { "GroupMask", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventSetGroupsToAvoidMask_Parms, GroupMask), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupMask_MetaData), NewProp_GroupMask_MetaData) }; // 2868412061
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics::NewProp_GroupMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "SetGroupsToAvoidMask", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics::CharacterMovementComponent_eventSetGroupsToAvoidMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics::CharacterMovementComponent_eventSetGroupsToAvoidMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execSetGroupsToAvoidMask)
{
	P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGroupsToAvoidMask(Z_Param_Out_GroupMask);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function SetGroupsToAvoidMask

// Begin Class UCharacterMovementComponent Function SetGroupsToIgnore
struct Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics
{
	struct CharacterMovementComponent_eventSetGroupsToIgnore_Parms
	{
		int32 GroupFlags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use SetGroupsToIgnoreMask function instead." },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics::NewProp_GroupFlags = { "GroupFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventSetGroupsToIgnore_Parms, GroupFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics::NewProp_GroupFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "SetGroupsToIgnore", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics::CharacterMovementComponent_eventSetGroupsToIgnore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics::CharacterMovementComponent_eventSetGroupsToIgnore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execSetGroupsToIgnore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_GroupFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGroupsToIgnore(Z_Param_GroupFlags);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function SetGroupsToIgnore

// Begin Class UCharacterMovementComponent Function SetGroupsToIgnoreMask
struct Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics
{
	struct CharacterMovementComponent_eventSetGroupsToIgnoreMask_Parms
	{
		FNavAvoidanceMask GroupMask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupMask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics::NewProp_GroupMask = { "GroupMask", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventSetGroupsToIgnoreMask_Parms, GroupMask), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupMask_MetaData), NewProp_GroupMask_MetaData) }; // 2868412061
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics::NewProp_GroupMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "SetGroupsToIgnoreMask", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics::CharacterMovementComponent_eventSetGroupsToIgnoreMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics::CharacterMovementComponent_eventSetGroupsToIgnoreMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execSetGroupsToIgnoreMask)
{
	P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGroupsToIgnoreMask(Z_Param_Out_GroupMask);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function SetGroupsToIgnoreMask

// Begin Class UCharacterMovementComponent Function SetMovementMode
struct Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics
{
	struct CharacterMovementComponent_eventSetMovementMode_Parms
	{
		TEnumAsByte<EMovementMode> NewMovementMode;
		uint8 NewCustomMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/**\n\x09 * Change movement mode.\n\x09 *\n\x09 * @param NewMovementMode\x09The new movement mode\n\x09 * @param NewCustomMode\x09\x09The new custom sub-mode, only applicable if NewMovementMode is Custom.\n\x09 */" },
		{ "CPP_Default_NewCustomMode", "0" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Change movement mode.\n\n@param NewMovementMode       The new movement mode\n@param NewCustomMode         The new custom sub-mode, only applicable if NewMovementMode is Custom." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewCustomMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::NewProp_NewMovementMode = { "NewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventSetMovementMode_Parms, NewMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(0, nullptr) }; // 1967555749
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::NewProp_NewCustomMode = { "NewCustomMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventSetMovementMode_Parms, NewCustomMode), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::NewProp_NewMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::NewProp_NewCustomMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "SetMovementMode", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::CharacterMovementComponent_eventSetMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::CharacterMovementComponent_eventSetMovementMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execSetMovementMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_NewMovementMode);
	P_GET_PROPERTY(FByteProperty,Z_Param_NewCustomMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementMode(EMovementMode(Z_Param_NewMovementMode),Z_Param_NewCustomMode);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function SetMovementMode

// Begin Class UCharacterMovementComponent Function SetWalkableFloorAngle
struct Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics
{
	struct CharacterMovementComponent_eventSetWalkableFloorAngle_Parms
	{
		float InWalkableFloorAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Set the max angle in degrees of a walkable surface for the character. Also computes WalkableFloorZ. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Set the max angle in degrees of a walkable surface for the character. Also computes WalkableFloorZ." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWalkableFloorAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics::NewProp_InWalkableFloorAngle = { "InWalkableFloorAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventSetWalkableFloorAngle_Parms, InWalkableFloorAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics::NewProp_InWalkableFloorAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "SetWalkableFloorAngle", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics::CharacterMovementComponent_eventSetWalkableFloorAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics::CharacterMovementComponent_eventSetWalkableFloorAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execSetWalkableFloorAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWalkableFloorAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWalkableFloorAngle(Z_Param_InWalkableFloorAngle);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function SetWalkableFloorAngle

// Begin Class UCharacterMovementComponent Function SetWalkableFloorZ
struct Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics
{
	struct CharacterMovementComponent_eventSetWalkableFloorZ_Parms
	{
		float InWalkableFloorZ;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Set the Z component of the normal of the steepest walkable surface for the character. Also computes WalkableFloorAngle. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Set the Z component of the normal of the steepest walkable surface for the character. Also computes WalkableFloorAngle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWalkableFloorZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics::NewProp_InWalkableFloorZ = { "InWalkableFloorZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementComponent_eventSetWalkableFloorZ_Parms, InWalkableFloorZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics::NewProp_InWalkableFloorZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementComponent, nullptr, "SetWalkableFloorZ", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics::CharacterMovementComponent_eventSetWalkableFloorZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics::CharacterMovementComponent_eventSetWalkableFloorZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMovementComponent::execSetWalkableFloorZ)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWalkableFloorZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWalkableFloorZ(Z_Param_InWalkableFloorZ);
	P_NATIVE_END;
}
// End Class UCharacterMovementComponent Function SetWalkableFloorZ

// Begin Class UCharacterMovementComponent
void UCharacterMovementComponent::StaticRegisterNativesUCharacterMovementComponent()
{
	UClass* Class = UCharacterMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddForce", &UCharacterMovementComponent::execAddForce },
		{ "AddImpulse", &UCharacterMovementComponent::execAddImpulse },
		{ "CalcVelocity", &UCharacterMovementComponent::execCalcVelocity },
		{ "CapsuleTouched", &UCharacterMovementComponent::execCapsuleTouched },
		{ "ClearAccumulatedForces", &UCharacterMovementComponent::execClearAccumulatedForces },
		{ "DisableMovement", &UCharacterMovementComponent::execDisableMovement },
		{ "GetAnalogInputModifier", &UCharacterMovementComponent::execGetAnalogInputModifier },
		{ "GetCharacterOwner", &UCharacterMovementComponent::execGetCharacterOwner },
		{ "GetCrouchedHalfHeight", &UCharacterMovementComponent::execGetCrouchedHalfHeight },
		{ "GetCurrentAcceleration", &UCharacterMovementComponent::execGetCurrentAcceleration },
		{ "GetGravityDirection", &UCharacterMovementComponent::execGetGravityDirection },
		{ "GetImpartedMovementBaseVelocity", &UCharacterMovementComponent::execGetImpartedMovementBaseVelocity },
		{ "GetLastUpdateLocation", &UCharacterMovementComponent::execGetLastUpdateLocation },
		{ "GetLastUpdateRequestedVelocity", &UCharacterMovementComponent::execGetLastUpdateRequestedVelocity },
		{ "GetLastUpdateRotation", &UCharacterMovementComponent::execGetLastUpdateRotation },
		{ "GetLastUpdateVelocity", &UCharacterMovementComponent::execGetLastUpdateVelocity },
		{ "GetMaxAcceleration", &UCharacterMovementComponent::execGetMaxAcceleration },
		{ "GetMaxBrakingDeceleration", &UCharacterMovementComponent::execGetMaxBrakingDeceleration },
		{ "GetMaxJumpHeight", &UCharacterMovementComponent::execGetMaxJumpHeight },
		{ "GetMaxJumpHeightWithJumpTime", &UCharacterMovementComponent::execGetMaxJumpHeightWithJumpTime },
		{ "GetMinAnalogSpeed", &UCharacterMovementComponent::execGetMinAnalogSpeed },
		{ "GetMovementBase", &UCharacterMovementComponent::execGetMovementBase },
		{ "GetPerchRadiusThreshold", &UCharacterMovementComponent::execGetPerchRadiusThreshold },
		{ "GetValidPerchRadius", &UCharacterMovementComponent::execGetValidPerchRadius },
		{ "HasCustomGravity", &UCharacterMovementComponent::execHasCustomGravity },
		{ "IsWalkable", &UCharacterMovementComponent::execIsWalkable },
		{ "IsWalking", &UCharacterMovementComponent::execIsWalking },
		{ "K2_ComputeFloorDist", &UCharacterMovementComponent::execK2_ComputeFloorDist },
		{ "K2_FindFloor", &UCharacterMovementComponent::execK2_FindFloor },
		{ "K2_GetWalkableFloorAngle", &UCharacterMovementComponent::execK2_GetWalkableFloorAngle },
		{ "K2_GetWalkableFloorZ", &UCharacterMovementComponent::execK2_GetWalkableFloorZ },
		{ "SetAvoidanceEnabled", &UCharacterMovementComponent::execSetAvoidanceEnabled },
		{ "SetAvoidanceGroup", &UCharacterMovementComponent::execSetAvoidanceGroup },
		{ "SetAvoidanceGroupMask", &UCharacterMovementComponent::execSetAvoidanceGroupMask },
		{ "SetCrouchedHalfHeight", &UCharacterMovementComponent::execSetCrouchedHalfHeight },
		{ "SetGravityDirection", &UCharacterMovementComponent::execSetGravityDirection },
		{ "SetGroupsToAvoid", &UCharacterMovementComponent::execSetGroupsToAvoid },
		{ "SetGroupsToAvoidMask", &UCharacterMovementComponent::execSetGroupsToAvoidMask },
		{ "SetGroupsToIgnore", &UCharacterMovementComponent::execSetGroupsToIgnore },
		{ "SetGroupsToIgnoreMask", &UCharacterMovementComponent::execSetGroupsToIgnoreMask },
		{ "SetMovementMode", &UCharacterMovementComponent::execSetMovementMode },
		{ "SetWalkableFloorAngle", &UCharacterMovementComponent::execSetWalkableFloorAngle },
		{ "SetWalkableFloorZ", &UCharacterMovementComponent::execSetWalkableFloorZ },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterMovementComponent);
UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister()
{
	return UCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * CharacterMovementComponent handles movement logic for the associated Character owner.\n * It supports various movement modes including: walking, falling, swimming, flying, custom.\n *\n * Movement is affected primarily by current Velocity and Acceleration. Acceleration is updated each frame\n * based on the input vector accumulated thus far (see UPawnMovementComponent::GetPendingInputVector()).\n *\n * Networking is fully implemented, with server-client correction and prediction included.\n *\n * @see ACharacter, UPawnMovementComponent\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/\n */" },
		{ "IncludePath", "GameFramework/CharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "CharacterMovementComponent handles movement logic for the associated Character owner.\nIt supports various movement modes including: walking, falling, swimming, flying, custom.\n\nMovement is affected primarily by current Velocity and Acceleration. Acceleration is updated each frame\nbased on the input vector accumulated thus far (see UPawnMovementComponent::GetPendingInputVector()).\n\nNetworking is fully implemented, with server-client correction and prediction included.\n\n@see ACharacter, UPawnMovementComponent\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[] = {
		{ "Comment", "/** Character movement component belongs to */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Character movement component belongs to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/** Custom gravity scale. Gravity is multiplied by this amount for the character. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Custom gravity scale. Gravity is multiplied by this amount for the character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStepHeight_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum height character can step up */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Maximum height character can step up" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpZVelocity_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Initial velocity (instantaneous vertical acceleration) when jumping. */" },
		{ "DisplayName", "Jump Z Velocity" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Initial velocity (instantaneous vertical acceleration) when jumping." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpOffJumpZFactor_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fraction of JumpZVelocity to use when automatically \"jumping off\" of a base actor that's not allowed to be a base for a character. (For example, if you're not allowed to stand on other players.) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Fraction of JumpZVelocity to use when automatically \"jumping off\" of a base actor that's not allowed to be a base for a character. (For example, if you're not allowed to stand on other players.)" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkableFloorAngle_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Max angle in degrees of a walkable surface. Any greater than this and it is too steep to be walkable.\n\x09 */" },
		{ "ForceUnits", "degrees" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Max angle in degrees of a walkable surface. Any greater than this and it is too steep to be walkable." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkableFloorZ_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/**\n\x09 * Minimum Z value for floor normal. If less, not a walkable surface. Computed from WalkableFloorAngle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Minimum Z value for floor normal. If less, not a walkable surface. Computed from WalkableFloorAngle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character Movement: Gravity" },
		{ "Comment", "/**\n\x09 * A normalized vector representing the direction of gravity for gravity relative movement modes: walking, falling,\n\x09 * and custom movement modes. Gravity direction remaps player input as being within the plane defined by the gravity\n\x09 * direction. Movement simulation values like velocity and acceleration are maintained in their existing world coordinate\n\x09 * space but are transformed internally as gravity relative (for instance moving forward up a vertical wall that gravity is\n\x09 * defined to be perpendicular to and jump \"up\" from that wall). If ShouldRemainVertical() is true the character's capsule\n\x09 * will be oriented to align with the gravity direction.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "A normalized vector representing the direction of gravity for gravity relative movement modes: walking, falling,\nand custom movement modes. Gravity direction remaps player input as being within the plane defined by the gravity\ndirection. Movement simulation values like velocity and acceleration are maintained in their existing world coordinate\nspace but are transformed internally as gravity relative (for instance moving forward up a vertical wall that gravity is\ndefined to be perpendicular to and jump \"up\" from that wall). If ShouldRemainVertical() is true the character's capsule\nwill be oriented to align with the gravity direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldToGravityTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character Movement: Gravity" },
		{ "Comment", "/**\n\x09 * A cached quaternion representing the rotation from world space to gravity relative space defined by GravityDirection.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "A cached quaternion representing the rotation from world space to gravity relative space defined by GravityDirection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityToWorldTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character Movement: Gravity" },
		{ "Comment", "/**\n\x09 * A cached quaternion representing the inverse rotation from world space to gravity relative space defined by GravityDirection.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "A cached quaternion representing the inverse rotation from world space to gravity relative space defined by GravityDirection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[] = {
		{ "Category", "Character Movement: MovementMode" },
		{ "Comment", "/**\n\x09 * Actor's current movement mode (walking, falling, etc).\n\x09 *    - walking:  Walking on a surface, under the effects of friction, and able to \"step up\" barriers. Vertical velocity is zero.\n\x09 *    - falling:  Falling under the effects of gravity, after jumping or walking off the edge of a surface.\n\x09 *    - flying:   Flying, ignoring the effects of gravity.\n\x09 *    - swimming: Swimming through a fluid volume, under the effects of gravity and buoyancy.\n\x09 *    - custom:   User-defined custom movement mode, including many possible sub-modes.\n\x09 * This is automatically replicated through the Character owner and for client-server movement functions.\n\x09 * @see SetMovementMode(), CustomMovementMode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Actor's current movement mode (walking, falling, etc).\n   - walking:  Walking on a surface, under the effects of friction, and able to \"step up\" barriers. Vertical velocity is zero.\n   - falling:  Falling under the effects of gravity, after jumping or walking off the edge of a surface.\n   - flying:   Flying, ignoring the effects of gravity.\n   - swimming: Swimming through a fluid volume, under the effects of gravity and buoyancy.\n   - custom:   User-defined custom movement mode, including many possible sub-modes.\nThis is automatically replicated through the Character owner and for client-server movement functions.\n@see SetMovementMode(), CustomMovementMode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMovementMode_MetaData[] = {
		{ "Category", "Character Movement: MovementMode" },
		{ "Comment", "/**\n\x09 * Current custom sub-mode if MovementMode is set to Custom.\n\x09 * This is automatically replicated through the Character owner and for client-server movement functions.\n\x09 * @see SetMovementMode()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Current custom sub-mode if MovementMode is set to Custom.\nThis is automatically replicated through the Character owner and for client-server movement functions.\n@see SetMovementMode()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkSmoothingMode_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "Comment", "/** Smoothing mode for simulated proxies in network game. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Smoothing mode for simulated proxies in network game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundFriction_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Setting that affects movement control. Higher values allow faster changes in direction.\n\x09 * If bUseSeparateBrakingFriction is false, also affects the ability to stop more quickly when braking (whenever Acceleration is zero), where it is multiplied by BrakingFrictionFactor.\n\x09 * When braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity.\n\x09 * This can be used to simulate slippery surfaces such as ice or oil by changing the value (possibly based on the material pawn is standing on).\n\x09 * @see BrakingDecelerationWalking, BrakingFriction, bUseSeparateBrakingFriction, BrakingFrictionFactor\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Setting that affects movement control. Higher values allow faster changes in direction.\nIf bUseSeparateBrakingFriction is false, also affects the ability to stop more quickly when braking (whenever Acceleration is zero), where it is multiplied by BrakingFrictionFactor.\nWhen braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity.\nThis can be used to simulate slippery surfaces such as ice or oil by changing the value (possibly based on the material pawn is standing on).\n@see BrakingDecelerationWalking, BrakingFriction, bUseSeparateBrakingFriction, BrakingFrictionFactor" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The maximum ground speed when walking. Also determines maximum lateral speed when falling. */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "The maximum ground speed when walking. Also determines maximum lateral speed when falling." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeedCrouched_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The maximum ground speed when walking and crouched. */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "The maximum ground speed when walking and crouched." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSwimSpeed_MetaData[] = {
		{ "Category", "Character Movement: Swimming" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The maximum swimming speed. */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "The maximum swimming speed." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFlySpeed_MetaData[] = {
		{ "Category", "Character Movement: Flying" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The maximum flying speed. */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "The maximum flying speed." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCustomMovementSpeed_MetaData[] = {
		{ "Category", "Character Movement: Custom Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The maximum speed when using Custom movement mode. */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "The maximum speed when using Custom movement mode." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max Acceleration (rate of change of velocity) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Max Acceleration (rate of change of velocity)" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAnalogWalkSpeed_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The ground speed that we should accelerate up to when walking at minimum analog stick tilt */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "The ground speed that we should accelerate up to when walking at minimum analog stick tilt" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingFrictionFactor_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Factor used to multiply actual value of friction used when braking.\n\x09 * This applies to any friction value that is currently used, which may depend on bUseSeparateBrakingFriction.\n\x09 * @note This is 2 by default for historical reasons, a value of 1 gives the true drag equation.\n\x09 * @see bUseSeparateBrakingFriction, GroundFriction, BrakingFriction\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Factor used to multiply actual value of friction used when braking.\nThis applies to any friction value that is currently used, which may depend on bUseSeparateBrakingFriction.\n@note This is 2 by default for historical reasons, a value of 1 gives the true drag equation.\n@see bUseSeparateBrakingFriction, GroundFriction, BrakingFriction" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingFriction_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Friction (drag) coefficient applied when braking (whenever Acceleration = 0, or if character is exceeding max speed); actual value used is this multiplied by BrakingFrictionFactor.\n\x09 * When braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity.\n\x09 * Braking is composed of friction (velocity-dependent drag) and constant deceleration.\n\x09 * This is the current value, used in all movement modes; if this is not desired, override it or bUseSeparateBrakingFriction when movement mode changes.\n\x09 * @note Only used if bUseSeparateBrakingFriction setting is true, otherwise current friction such as GroundFriction is used.\n\x09 * @see bUseSeparateBrakingFriction, BrakingFrictionFactor, GroundFriction, BrakingDecelerationWalking\n\x09 */" },
		{ "EditCondition", "bUseSeparateBrakingFriction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Friction (drag) coefficient applied when braking (whenever Acceleration = 0, or if character is exceeding max speed); actual value used is this multiplied by BrakingFrictionFactor.\nWhen braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity.\nBraking is composed of friction (velocity-dependent drag) and constant deceleration.\nThis is the current value, used in all movement modes; if this is not desired, override it or bUseSeparateBrakingFriction when movement mode changes.\n@note Only used if bUseSeparateBrakingFriction setting is true, otherwise current friction such as GroundFriction is used.\n@see bUseSeparateBrakingFriction, BrakingFrictionFactor, GroundFriction, BrakingDecelerationWalking" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingSubStepTime_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMax", "0.05" },
		{ "ClampMin", "0.0166" },
		{ "Comment", "/**\n\x09 * Time substepping when applying braking friction. Smaller time steps increase accuracy at the slight cost of performance, especially if there are large frame times.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Time substepping when applying braking friction. Smaller time steps increase accuracy at the slight cost of performance, especially if there are large frame times." },
		{ "UIMax", "0.05" },
		{ "UIMin", "0.0166" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationWalking_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Deceleration when walking and not applying acceleration. This is a constant opposing force that directly lowers velocity by a constant value.\n\x09 * @see GroundFriction, MaxAcceleration\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Deceleration when walking and not applying acceleration. This is a constant opposing force that directly lowers velocity by a constant value.\n@see GroundFriction, MaxAcceleration" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationFalling_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Lateral deceleration when falling and not applying acceleration.\n\x09 * @see MaxAcceleration\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Lateral deceleration when falling and not applying acceleration.\n@see MaxAcceleration" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationSwimming_MetaData[] = {
		{ "Category", "Character Movement: Swimming" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Deceleration when swimming and not applying acceleration.\n\x09 * @see MaxAcceleration\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Deceleration when swimming and not applying acceleration.\n@see MaxAcceleration" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationFlying_MetaData[] = {
		{ "Category", "Character Movement: Flying" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Deceleration when flying and not applying acceleration.\n\x09 * @see MaxAcceleration\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Deceleration when flying and not applying acceleration.\n@see MaxAcceleration" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirControl_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * When falling, amount of lateral movement control available to the character.\n\x09 * 0 = no control, 1 = full control at max speed of MaxWalkSpeed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "When falling, amount of lateral movement control available to the character.\n0 = no control, 1 = full control at max speed of MaxWalkSpeed." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirControlBoostMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * When falling, multiplier applied to AirControl when lateral velocity is less than AirControlBoostVelocityThreshold.\n\x09 * Setting this to zero will disable air control boosting. Final result is clamped at 1.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "When falling, multiplier applied to AirControl when lateral velocity is less than AirControlBoostVelocityThreshold.\nSetting this to zero will disable air control boosting. Final result is clamped at 1." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirControlBoostVelocityThreshold_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * When falling, if lateral velocity magnitude is less than this value, AirControl is multiplied by AirControlBoostMultiplier.\n\x09 * Setting this to zero will disable air control boosting.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "When falling, if lateral velocity magnitude is less than this value, AirControl is multiplied by AirControlBoostMultiplier.\nSetting this to zero will disable air control boosting." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallingLateralFriction_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Friction to apply to lateral air movement when falling.\n\x09 * If bUseSeparateBrakingFriction is false, also affects the ability to stop more quickly when braking (whenever Acceleration is zero).\n\x09 * @see BrakingFriction, bUseSeparateBrakingFriction\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Friction to apply to lateral air movement when falling.\nIf bUseSeparateBrakingFriction is false, also affects the ability to stop more quickly when braking (whenever Acceleration is zero).\n@see BrakingFriction, bUseSeparateBrakingFriction" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchedHalfHeight_MetaData[] = {
		{ "BlueprintGetter", "GetCrouchedHalfHeight" },
		{ "BlueprintSetter", "SetCrouchedHalfHeight" },
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buoyancy_MetaData[] = {
		{ "Category", "Character Movement: Swimming" },
		{ "Comment", "/** Water buoyancy. A ratio (1.0 = neutral buoyancy, 0.0 = no buoyancy) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Water buoyancy. A ratio (1.0 = neutral buoyancy, 0.0 = no buoyancy)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerchRadiusThreshold_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Don't allow the character to perch on the edge of a surface if the contact is this close to the edge of the capsule.\n\x09 * Note that characters will not fall off if they are within MaxStepHeight of a walkable surface below.\n\x09 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Don't allow the character to perch on the edge of a surface if the contact is this close to the edge of the capsule.\nNote that characters will not fall off if they are within MaxStepHeight of a walkable surface below." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerchAdditionalHeight_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * When perching on a ledge, add this additional distance to MaxStepHeight when determining how high above a walkable floor we can perch.\n\x09 * Note that we still enforce MaxStepHeight to start the step up; this just allows the character to hang off the edge or step slightly higher off the floor.\n\x09 * (@see PerchRadiusThreshold)\n\x09 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "When perching on a ledge, add this additional distance to MaxStepHeight when determining how high above a walkable floor we can perch.\nNote that we still enforce MaxStepHeight to start the step up; this just allows the character to hang off the edge or step slightly higher off the floor.\n(@see PerchRadiusThreshold)" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "Character Movement (Rotation Settings)" },
		{ "Comment", "/** Change in rotation per second, used when UseControllerDesiredRotation or OrientRotationToMovement are true. Set a negative value for infinite rotation rate and instant turns. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Change in rotation per second, used when UseControllerDesiredRotation or OrientRotationToMovement are true. Set a negative value for infinite rotation rate and instant turns." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSeparateBrakingFriction_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/**\n\x09 * If true, BrakingFriction will be used to slow the character to a stop (when there is no Acceleration).\n\x09 * If false, braking uses the same friction passed to CalcVelocity() (ie GroundFriction when walking), multiplied by BrakingFrictionFactor.\n\x09 * This setting applies to all movement modes; if only desired in certain modes, consider toggling it when movement modes change.\n\x09 * @see BrakingFriction\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, BrakingFriction will be used to slow the character to a stop (when there is no Acceleration).\nIf false, braking uses the same friction passed to CalcVelocity() (ie GroundFriction when walking), multiplied by BrakingFrictionFactor.\nThis setting applies to all movement modes; if only desired in certain modes, consider toggling it when movement modes change.\n@see BrakingFriction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyGravityWhileJumping_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "Comment", "/**\n\x09 *\x09""Apply gravity while the character is actively jumping (e.g. holding the jump key).\n\x09 *\x09Helps remove frame-rate dependent jump height, but may alter base jump height.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Apply gravity while the character is actively jumping (e.g. holding the jump key).\nHelps remove frame-rate dependent jump height, but may alter base jump height." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerDesiredRotation_MetaData[] = {
		{ "Category", "Character Movement (Rotation Settings)" },
		{ "Comment", "/**\n\x09 * If true, smoothly rotate the Character toward the Controller's desired rotation (typically Controller->ControlRotation), using RotationRate as the rate of rotation change. Overridden by OrientRotationToMovement.\n\x09 * Normally you will want to make sure that other settings are cleared, such as bUseControllerRotationYaw on the Character.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, smoothly rotate the Character toward the Controller's desired rotation (typically Controller->ControlRotation), using RotationRate as the rate of rotation change. Overridden by OrientRotationToMovement.\nNormally you will want to make sure that other settings are cleared, such as bUseControllerRotationYaw on the Character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientRotationToMovement_MetaData[] = {
		{ "Category", "Character Movement (Rotation Settings)" },
		{ "Comment", "/**\n\x09 * If true, rotate the Character toward the direction of acceleration, using RotationRate as the rate of rotation change. Overrides UseControllerDesiredRotation.\n\x09 * Normally you will want to make sure that other settings are cleared, such as bUseControllerRotationYaw on the Character.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, rotate the Character toward the direction of acceleration, using RotationRate as the rate of rotation change. Overrides UseControllerDesiredRotation.\nNormally you will want to make sure that other settings are cleared, such as bUseControllerRotationYaw on the Character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSweepWhileNavWalking_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/**\n\x09 * Whether or not the character should sweep for collision geometry while walking.\n\x09 * @see USceneComponent::MoveComponent.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Whether or not the character should sweep for collision geometry while walking.\n@see USceneComponent::MoveComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMovementInProgress_MetaData[] = {
		{ "Comment", "/**\n\x09 * True during movement update.\n\x09 * Used internally so that attempts to change CharacterOwner and UpdatedComponent are deferred until after an update.\n\x09 * @see IsMovementInProgress()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "True during movement update.\nUsed internally so that attempts to change CharacterOwner and UpdatedComponent are deferred until after an update.\n@see IsMovementInProgress()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableScopedMovementUpdates_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/**\n\x09 * If true, high-level movement updates will be wrapped in a movement scope that accumulates updates and defers a bulk of the work until the end.\n\x09 * When enabled, touch and hit events will not be triggered until the end of multiple moves within an update, which can improve performance.\n\x09 *\n\x09 * @see FScopedMovementUpdate\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, high-level movement updates will be wrapped in a movement scope that accumulates updates and defers a bulk of the work until the end.\nWhen enabled, touch and hit events will not be triggered until the end of multiple moves within an update, which can improve performance.\n\n@see FScopedMovementUpdate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableServerDualMoveScopedMovementUpdates_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/**\n\x09 * Optional scoped movement update to combine moves for cheaper performance on the server when the client sends two moves in one packet.\n\x09 * Be warned that since this wraps a larger scope than is normally done with bEnableScopedMovementUpdates, this can result in subtle changes in behavior\n\x09 * in regards to when overlap events are handled, when attached components are moved, etc.\n\x09 *\n\x09 * @see bEnableScopedMovementUpdates\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Optional scoped movement update to combine moves for cheaper performance on the server when the client sends two moves in one packet.\nBe warned that since this wraps a larger scope than is normally done with bEnableScopedMovementUpdates, this can result in subtle changes in behavior\nin regards to when overlap events are handled, when attached components are moved, etc.\n\n@see bEnableScopedMovementUpdates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceMaxAccel_MetaData[] = {
		{ "Comment", "/** Ignores size of acceleration component, and forces max acceleration to drive character at full velocity. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Ignores size of acceleration component, and forces max acceleration to drive character at full velocity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunPhysicsWithNoController_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/**\n\x09 * If true, movement will be performed even if there is no Controller for the Character owner.\n\x09 * Normally without a Controller, movement will be aborted and velocity and acceleration are zeroed if the character is walking.\n\x09 * Characters that are spawned without a Controller but with this flag enabled will initialize the movement mode to DefaultLandMovementMode or DefaultWaterMovementMode appropriately.\n\x09 * @see DefaultLandMovementMode, DefaultWaterMovementMode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, movement will be performed even if there is no Controller for the Character owner.\nNormally without a Controller, movement will be aborted and velocity and acceleration are zeroed if the character is walking.\nCharacters that are spawned without a Controller but with this flag enabled will initialize the movement mode to DefaultLandMovementMode or DefaultWaterMovementMode appropriately.\n@see DefaultLandMovementMode, DefaultWaterMovementMode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNextFloorCheck_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/**\n\x09 * Force the Character in MOVE_Walking to do a check for a valid floor even if it hasn't moved. Cleared after next floor check.\n\x09 * Normally if bAlwaysCheckFloor is false we try to avoid the floor check unless some conditions are met, but this can be used to force the next check to always run.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Force the Character in MOVE_Walking to do a check for a valid floor even if it hasn't moved. Cleared after next floor check.\nNormally if bAlwaysCheckFloor is false we try to avoid the floor check unless some conditions are met, but this can be used to force the next check to always run." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShrinkProxyCapsule_MetaData[] = {
		{ "Comment", "/** If true, the capsule needs to be shrunk on this simulated proxy, to avoid replication rounding putting us in geometry.\n\x09  * Whenever this is set to true, this will cause the capsule to be shrunk again on the next update, and then set to false. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, the capsule needs to be shrunk on this simulated proxy, to avoid replication rounding putting us in geometry.\nWhenever this is set to true, this will cause the capsule to be shrunk again on the next update, and then set to false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanWalkOffLedges_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** If true, Character can walk off a ledge. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, Character can walk off a ledge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanWalkOffLedgesWhenCrouching_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** If true, Character can walk off a ledge when crouching. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, Character can walk off a ledge when crouching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetworkSkipProxyPredictionOnNetUpdate_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "Comment", "/**\n\x09 * Whether we skip prediction on frames where a proxy receives a network update. This can avoid expensive prediction on those frames,\n\x09 * with the side-effect of predicting with a frame of additional latency.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Whether we skip prediction on frames where a proxy receives a network update. This can avoid expensive prediction on those frames,\nwith the side-effect of predicting with a frame of additional latency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetworkAlwaysReplicateTransformUpdateTimestamp_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "Comment", "/**\n\x09 * Flag used on the server to determine whether to always replicate ReplicatedServerLastTransformUpdateTimeStamp to clients.\n\x09 * Normally this is only sent when the network smoothing mode on character movement is set to Linear smoothing (on the server), to save bandwidth.\n\x09 * Setting this to true will force the timestamp to replicate regardless, in case the server doesn't know about the smoothing mode, or if the timestamp is used for another purpose.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Flag used on the server to determine whether to always replicate ReplicatedServerLastTransformUpdateTimeStamp to clients.\nNormally this is only sent when the network smoothing mode on character movement is set to Linear smoothing (on the server), to save bandwidth.\nSetting this to true will force the timestamp to replicate regardless, in case the server doesn't know about the smoothing mode, or if the timestamp is used for another purpose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeferUpdateMoveComponent_MetaData[] = {
		{ "Comment", "/** true to update CharacterOwner and UpdatedComponent after movement ends */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "true to update CharacterOwner and UpdatedComponent after movement ends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsInteraction_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** If enabled, the player will interact with physics objects when walking into them. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If enabled, the player will interact with physics objects when walking into them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTouchForceScaledToMass_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** If enabled, the TouchForceFactor is applied per kg mass of the affected object. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If enabled, the TouchForceFactor is applied per kg mass of the affected object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPushForceScaledToMass_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** If enabled, the PushForceFactor is applied per kg mass of the affected object. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If enabled, the PushForceFactor is applied per kg mass of the affected object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPushForceUsingZOffset_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** If enabled, the PushForce location is moved using PushForcePointZOffsetFactor. Otherwise simply use the impact point. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If enabled, the PushForce location is moved using PushForcePointZOffsetFactor. Otherwise simply use the impact point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScalePushForceToVelocity_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** If enabled, the applied push force will try to get the physics object to the same velocity than the player, not faster. This will only\n\x09\x09scale the force down, it will never apply more force than defined by PushForceFactor. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If enabled, the applied push force will try to get the physics object to the same velocity than the player, not faster. This will only\n              scale the force down, it will never apply more force than defined by PushForceFactor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeferredUpdatedMoveComponent_MetaData[] = {
		{ "Comment", "/** What to update CharacterOwner and UpdatedComponent after movement ends */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "What to update CharacterOwner and UpdatedComponent after movement ends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxOutOfWaterStepHeight_MetaData[] = {
		{ "Category", "Character Movement: Swimming" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum step height for getting out of water */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Maximum step height for getting out of water" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutofWaterZ_MetaData[] = {
		{ "Category", "Character Movement: Swimming" },
		{ "Comment", "/** Z velocity applied when pawn tries to get out of water */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Z velocity applied when pawn tries to get out of water" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Mass of pawn (for when momentum is imparted to it). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Mass of pawn (for when momentum is imparted to it)." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandingDownwardForceScale_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** Force applied to objects we stand on (due to Mass and Gravity) is scaled by this amount. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Force applied to objects we stand on (due to Mass and Gravity) is scaled by this amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPushForceFactor_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** Initial impulse force to apply when the player bounces into a blocking physics object. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Initial impulse force to apply when the player bounces into a blocking physics object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PushForceFactor_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** Force to apply when the player collides with a blocking physics object. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Force to apply when the player collides with a blocking physics object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PushForcePointZOffsetFactor_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** Z-Offset for the position the force is applied to. 0.0f is the center of the physics object, 1.0f is the top and -1.0f is the bottom of the object. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Z-Offset for the position the force is applied to. 0.0f is the center of the physics object, 1.0f is the top and -1.0f is the bottom of the object." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchForceFactor_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** Force to apply to physics objects that are touched by the player. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Force to apply to physics objects that are touched by the player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTouchForce_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** Minimum Force applied to touched physics objects. If < 0.0f, there is no minimum. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Minimum Force applied to touched physics objects. If < 0.0f, there is no minimum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTouchForce_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** Maximum force applied to touched physics objects. If < 0.0f, there is no maximum. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Maximum force applied to touched physics objects. If < 0.0f, there is no maximum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepulsionForce_MetaData[] = {
		{ "Category", "Character Movement: Physics Interaction" },
		{ "Comment", "/** Force per kg applied constantly to all overlapping components. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Force per kg applied constantly to all overlapping components." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceBraking_MetaData[] = {
		{ "Comment", "// Deprecated properties\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Deprecated properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchedSpeedMultiplier_MetaData[] = {
		{ "Comment", "/** Multiplier to max ground speed to use when crouched */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier to max ground speed to use when crouched" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperImpactNormalScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Comment", "/**\n\x09 * Current acceleration vector (with magnitude).\n\x09 * This is calculated each update based on the input vector and the constraints of MaxAcceleration and the current movement mode.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Current acceleration vector (with magnitude).\nThis is calculated each update based on the input vector and the constraints of MaxAcceleration and the current movement mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateRotation_MetaData[] = {
		{ "Comment", "/**\n\x09 * Rotation after last PerformMovement or SimulateMovement update.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Rotation after last PerformMovement or SimulateMovement update." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateLocation_MetaData[] = {
		{ "Comment", "/**\n\x09 * Location after last PerformMovement or SimulateMovement update. Used internally to detect changes in position from outside character movement to try to validate the current floor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Location after last PerformMovement or SimulateMovement update. Used internally to detect changes in position from outside character movement to try to validate the current floor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateVelocity_MetaData[] = {
		{ "Comment", "/**\n\x09 * Velocity after last PerformMovement or SimulateMovement update. Used internally to detect changes in velocity from external sources.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Velocity after last PerformMovement or SimulateMovement update. Used internally to detect changes in velocity from external sources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerLastTransformUpdateTimeStamp_MetaData[] = {
		{ "Comment", "/** Timestamp when location or rotation last changed during an update. Only valid on the server. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Timestamp when location or rotation last changed during an update. Only valid on the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerLastClientGoodMoveAckTime_MetaData[] = {
		{ "Comment", "/** Timestamp of last client adjustment sent. See NetworkMinTimeBetweenClientAdjustments. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Timestamp of last client adjustment sent. See NetworkMinTimeBetweenClientAdjustments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerLastClientAdjustmentTime_MetaData[] = {
		{ "Comment", "/** Timestamp of last client adjustment sent. See NetworkMinTimeBetweenClientAdjustments. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Timestamp of last client adjustment sent. See NetworkMinTimeBetweenClientAdjustments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingImpulseToApply_MetaData[] = {
		{ "Comment", "/** Accumulated impulse to be added next tick. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Accumulated impulse to be added next tick." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingForceToApply_MetaData[] = {
		{ "Comment", "/** Accumulated force to be added next tick. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Accumulated force to be added next tick." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnalogInputModifier_MetaData[] = {
		{ "Comment", "/**\n\x09 * Modifier to applied to values such as acceleration and max speed due to analog input.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Modifier to applied to values such as acceleration and max speed due to analog input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimulationTimeStep_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMax", "0.50" },
		{ "ClampMin", "0.0166" },
		{ "Comment", "/**\n\x09 * Max time delta for each discrete simulation step.\n\x09 * Used primarily in the the more advanced movement modes that break up larger time steps (usually those applying gravity such as falling and walking).\n\x09 * Lowering this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\x09 *\n\x09 * WARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n\x09 * @see MaxSimulationIterations\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Max time delta for each discrete simulation step.\nUsed primarily in the the more advanced movement modes that break up larger time steps (usually those applying gravity such as falling and walking).\nLowering this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\nWARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n@see MaxSimulationIterations" },
		{ "UIMax", "0.50" },
		{ "UIMin", "0.0166" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimulationIterations_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * Max number of iterations used for each discrete simulation step.\n\x09 * Used primarily in the the more advanced movement modes that break up larger time steps (usually those applying gravity such as falling and walking).\n\x09 * Increasing this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\x09 *\n\x09 * WARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n\x09 * @see MaxSimulationTimeStep\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Max number of iterations used for each discrete simulation step.\nUsed primarily in the the more advanced movement modes that break up larger time steps (usually those applying gravity such as falling and walking).\nIncreasing this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\nWARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n@see MaxSimulationTimeStep" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxJumpApexAttemptsPerSimulation_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMax", "4" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * Max number of attempts per simulation to attempt to exactly reach the jump apex when falling movement reaches the top of the arc.\n\x09 * Limiting this prevents deep recursion when special cases cause collision or other conditions which reactivate the apex condition.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Max number of attempts per simulation to attempt to exactly reach the jump apex when falling movement reaches the top of the arc.\nLimiting this prevents deep recursion when special cases cause collision or other conditions which reactivate the apex condition." },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationWithGeometry_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Max distance we allow simulated proxies to depenetrate when moving out of anything but Pawns.\n\x09* This is generally more tolerant than with Pawns, because other geometry is either not moving, or is moving predictably with a bit of delay compared to on the server.\n\x09* @see MaxDepenetrationWithGeometryAsProxy, MaxDepenetrationWithPawn, MaxDepenetrationWithPawnAsProxy\n\x09*/" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Max distance we allow simulated proxies to depenetrate when moving out of anything but Pawns.\nThis is generally more tolerant than with Pawns, because other geometry is either not moving, or is moving predictably with a bit of delay compared to on the server.\n@see MaxDepenetrationWithGeometryAsProxy, MaxDepenetrationWithPawn, MaxDepenetrationWithPawnAsProxy" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationWithGeometryAsProxy_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Max distance we allow simulated proxies to depenetrate when moving out of anything but Pawns.\n\x09* This is generally more tolerant than with Pawns, because other geometry is either not moving, or is moving predictably with a bit of delay compared to on the server.\n\x09* @see MaxDepenetrationWithGeometry, MaxDepenetrationWithPawn, MaxDepenetrationWithPawnAsProxy\n\x09*/" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Max distance we allow simulated proxies to depenetrate when moving out of anything but Pawns.\nThis is generally more tolerant than with Pawns, because other geometry is either not moving, or is moving predictably with a bit of delay compared to on the server.\n@see MaxDepenetrationWithGeometry, MaxDepenetrationWithPawn, MaxDepenetrationWithPawnAsProxy" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationWithPawn_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Max distance we are allowed to depenetrate when moving out of other Pawns.\n\x09* @see MaxDepenetrationWithGeometry, MaxDepenetrationWithGeometryAsProxy, MaxDepenetrationWithPawnAsProxy\n\x09*/" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Max distance we are allowed to depenetrate when moving out of other Pawns.\n@see MaxDepenetrationWithGeometry, MaxDepenetrationWithGeometryAsProxy, MaxDepenetrationWithPawnAsProxy" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationWithPawnAsProxy_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Max distance we allow simulated proxies to depenetrate when moving out of other Pawns.\n\x09 * Typically we don't want a large value, because we receive a server authoritative position that we should not then ignore by pushing them out of the local player.\n\x09 * @see MaxDepenetrationWithGeometry, MaxDepenetrationWithGeometryAsProxy, MaxDepenetrationWithPawn\n\x09 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Max distance we allow simulated proxies to depenetrate when moving out of other Pawns.\nTypically we don't want a large value, because we receive a server authoritative position that we should not then ignore by pushing them out of the local player.\n@see MaxDepenetrationWithGeometry, MaxDepenetrationWithGeometryAsProxy, MaxDepenetrationWithPawn" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkSimulatedSmoothLocationTime_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * How long to take to smoothly interpolate from the old pawn position on the client to the corrected one sent by the server. Not used by Linear smoothing.\n\x09 */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "How long to take to smoothly interpolate from the old pawn position on the client to the corrected one sent by the server. Not used by Linear smoothing." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkSimulatedSmoothRotationTime_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * How long to take to smoothly interpolate from the old pawn rotation on the client to the corrected one sent by the server. Not used by Linear smoothing.\n\x09 */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "How long to take to smoothly interpolate from the old pawn rotation on the client to the corrected one sent by the server. Not used by Linear smoothing." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListenServerNetworkSimulatedSmoothLocationTime_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Similar setting as NetworkSimulatedSmoothLocationTime but only used on Listen servers.\n\x09*/" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Similar setting as NetworkSimulatedSmoothLocationTime but only used on Listen servers." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListenServerNetworkSimulatedSmoothRotationTime_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Similar setting as NetworkSimulatedSmoothRotationTime but only used on Listen servers.\n\x09*/" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Similar setting as NetworkSimulatedSmoothRotationTime but only used on Listen servers." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetProxyShrinkRadius_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Shrink simulated proxy capsule radius by this amount, to account for network rounding that may cause encroachment. Changing during gameplay is not supported.\n\x09 * @see AdjustProxyCapsuleSize()\n\x09 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Shrink simulated proxy capsule radius by this amount, to account for network rounding that may cause encroachment. Changing during gameplay is not supported.\n@see AdjustProxyCapsuleSize()" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetProxyShrinkHalfHeight_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Shrink simulated proxy capsule half height by this amount, to account for network rounding that may cause encroachment. Changing during gameplay is not supported.\n\x09 * @see AdjustProxyCapsuleSize()\n\x09 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Shrink simulated proxy capsule half height by this amount, to account for network rounding that may cause encroachment. Changing during gameplay is not supported.\n@see AdjustProxyCapsuleSize()" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkMaxSmoothUpdateDistance_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum distance character is allowed to lag behind server location when interpolating between updates. */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Maximum distance character is allowed to lag behind server location when interpolating between updates." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkNoSmoothUpdateDistance_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Maximum distance beyond which character is teleported to the new server location without any smoothing.\n\x09 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Maximum distance beyond which character is teleported to the new server location without any smoothing." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkMinTimeBetweenClientAckGoodMoves_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Minimum time on the server between acknowledging good client moves. This can save on bandwidth. Set to 0 to disable throttling.\n\x09 */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Minimum time on the server between acknowledging good client moves. This can save on bandwidth. Set to 0 to disable throttling." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkMinTimeBetweenClientAdjustments_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Minimum time on the server between sending client adjustments when client has exceeded allowable position error.\n\x09 * Should be >= NetworkMinTimeBetweenClientAdjustmentsLargeCorrection (the larger value is used regardless).\n  \x09 * This can save on bandwidth. Set to 0 to disable throttling.\n\x09 * @see ServerLastClientAdjustmentTime\n\x09 */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Minimum time on the server between sending client adjustments when client has exceeded allowable position error.\nShould be >= NetworkMinTimeBetweenClientAdjustmentsLargeCorrection (the larger value is used regardless).\nThis can save on bandwidth. Set to 0 to disable throttling.\n@see ServerLastClientAdjustmentTime" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkMinTimeBetweenClientAdjustmentsLargeCorrection_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Minimum time on the server between sending client adjustments when client has exceeded allowable position error by a large amount (NetworkLargeClientCorrectionDistance).\n\x09* Should be <= NetworkMinTimeBetweenClientAdjustments (the smaller value is used regardless).\n\x09* @see NetworkMinTimeBetweenClientAdjustments\n\x09*/" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Minimum time on the server between sending client adjustments when client has exceeded allowable position error by a large amount (NetworkLargeClientCorrectionDistance).\nShould be <= NetworkMinTimeBetweenClientAdjustments (the smaller value is used regardless).\n@see NetworkMinTimeBetweenClientAdjustments" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkLargeClientCorrectionDistance_MetaData[] = {
		{ "Category", "Character Movement (Networking)" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* If client error is larger than this, sets bNetworkLargeClientCorrection to reduce delay between client adjustments.\n\x09* @see NetworkMinTimeBetweenClientAdjustments, NetworkMinTimeBetweenClientAdjustmentsLargeCorrection\n\x09*/" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If client error is larger than this, sets bNetworkLargeClientCorrection to reduce delay between client adjustments.\n@see NetworkMinTimeBetweenClientAdjustments, NetworkMinTimeBetweenClientAdjustmentsLargeCorrection" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeCheckThreshold_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** Used in determining if pawn is going off ledge.  If the ledge is \"shorter\" than this value then the pawn will be able to walk off it. **/" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Used in determining if pawn is going off ledge.  If the ledge is \"shorter\" than this value then the pawn will be able to walk off it. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpOutOfWaterPitch_MetaData[] = {
		{ "Category", "Character Movement: Swimming" },
		{ "Comment", "/** When exiting water, jump if control pitch angle is this high or above. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "When exiting water, jump if control pitch angle is this high or above." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFloor_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** Information about the floor the Character is standing on (updated only during walking movement). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Information about the floor the Character is standing on (updated only during walking movement)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLandMovementMode_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/**\n\x09 * Default movement mode when not in water. Used at player startup or when teleported.\n\x09 * @see DefaultWaterMovementMode\n\x09 * @see bRunPhysicsWithNoController\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Default movement mode when not in water. Used at player startup or when teleported.\n@see DefaultWaterMovementMode\n@see bRunPhysicsWithNoController" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWaterMovementMode_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/**\n\x09 * Default movement mode when in water. Used at player startup or when teleported.\n\x09 * @see DefaultLandMovementMode\n\x09 * @see bRunPhysicsWithNoController\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Default movement mode when in water. Used at player startup or when teleported.\n@see DefaultLandMovementMode\n@see bRunPhysicsWithNoController" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundMovementMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * Ground movement mode to switch to after falling and resuming ground movement.\n\x09 * Only allowed values are: MOVE_Walking, MOVE_NavWalking.\n\x09 * @see SetGroundMovementMode(), GetGroundMovementMode()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Ground movement mode to switch to after falling and resuming ground movement.\nOnly allowed values are: MOVE_Walking, MOVE_NavWalking.\n@see SetGroundMovementMode(), GetGroundMovementMode()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainHorizontalGroundVelocity_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/**\n\x09 * If true, walking movement always maintains horizontal velocity when moving up ramps, which causes movement up ramps to be faster parallel to the ramp surface.\n\x09 * If false, then walking movement maintains velocity magnitude parallel to the ramp surface.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, walking movement always maintains horizontal velocity when moving up ramps, which causes movement up ramps to be faster parallel to the ramp surface.\nIf false, then walking movement maintains velocity magnitude parallel to the ramp surface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImpartBaseVelocityX_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "Comment", "/** If true, impart the base actor's X velocity when falling off it (which includes jumping) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, impart the base actor's X velocity when falling off it (which includes jumping)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImpartBaseVelocityY_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "Comment", "/** If true, impart the base actor's Y velocity when falling off it (which includes jumping) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, impart the base actor's Y velocity when falling off it (which includes jumping)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImpartBaseVelocityZ_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "Comment", "/** If true, impart the base actor's Z velocity when falling off it (which includes jumping) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, impart the base actor's Z velocity when falling off it (which includes jumping)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImpartBaseAngularVelocity_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "Comment", "/**\n\x09 * If true, impart the base component's tangential components of angular velocity when jumping or falling off it.\n\x09 * Only those components of the velocity allowed by the separate component settings (bImpartBaseVelocityX etc) will be applied.\n\x09 * @see bImpartBaseVelocityX, bImpartBaseVelocityY, bImpartBaseVelocityZ\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, impart the base component's tangential components of angular velocity when jumping or falling off it.\nOnly those components of the velocity allowed by the separate component settings (bImpartBaseVelocityX etc) will be applied.\n@see bImpartBaseVelocityX, bImpartBaseVelocityY, bImpartBaseVelocityZ" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bJustTeleported_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/** Used by movement code to determine if a change in position is based on normal movement or a teleport. If not a teleport, velocity can be recomputed based on the change in position. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Used by movement code to determine if a change in position is based on normal movement or a teleport. If not a teleport, velocity can be recomputed based on the change in position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetworkUpdateReceived_MetaData[] = {
		{ "Comment", "/** True when a network replication update is received for simulated proxies. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "True when a network replication update is received for simulated proxies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetworkMovementModeChanged_MetaData[] = {
		{ "Comment", "/** True when the networked movement mode has been replicated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "True when the networked movement mode has been replicated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNetworkGravityDirectionChanged_MetaData[] = {
		{ "Comment", "/** True when the networked gravity direction has been replicated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "True when the networked gravity direction has been replicated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreClientMovementErrorChecksAndCorrection_MetaData[] = {
		{ "Category", "Character Movement" },
		{ "Comment", "/** \n\x09 * If true, we should ignore server location difference checks for client error on this movement component.\n\x09 * This can be useful when character is moving at extreme speeds for a duration and you need it to look\n\x09 * smooth on clients without the server correcting the client. Make sure to disable when done, as this would\n\x09 * break this character's server-client movement correction.\n\x09 * @see bServerAcceptClientAuthoritativePosition, ServerCheckClientError()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, we should ignore server location difference checks for client error on this movement component.\nThis can be useful when character is moving at extreme speeds for a duration and you need it to look\nsmooth on clients without the server correcting the client. Make sure to disable when done, as this would\nbreak this character's server-client movement correction.\n@see bServerAcceptClientAuthoritativePosition, ServerCheckClientError()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bServerAcceptClientAuthoritativePosition_MetaData[] = {
		{ "Category", "Character Movement" },
		{ "Comment", "/**\n\x09 * If true, and server does not detect client position error, server will copy the client movement location/velocity/etc after simulating the move.\n\x09 * This can be useful for short bursts of movement that are difficult to sync over the network.\n\x09 * Note that if bIgnoreClientMovementErrorChecksAndCorrection is used, this means the server will not detect an error.\n\x09 * Also see GameNetworkManager->ClientAuthorativePosition which permanently enables this behavior.\n\x09 * @see bIgnoreClientMovementErrorChecksAndCorrection, ServerShouldUseAuthoritativePosition()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, and server does not detect client position error, server will copy the client movement location/velocity/etc after simulating the move.\nThis can be useful for short bursts of movement that are difficult to sync over the network.\nNote that if bIgnoreClientMovementErrorChecksAndCorrection is used, this means the server will not detect an error.\nAlso see GameNetworkManager->ClientAuthorativePosition which permanently enables this behavior.\n@see bIgnoreClientMovementErrorChecksAndCorrection, ServerShouldUseAuthoritativePosition()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyApex_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "Comment", "/**\n\x09 * If true, event NotifyJumpApex() to CharacterOwner's controller when at apex of jump. Is cleared when event is triggered.\n\x09 * By default this is off, and if you want the event to fire you typically set it to true when movement mode changes to \"Falling\" from another mode (see OnMovementModeChanged).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, event NotifyJumpApex() to CharacterOwner's controller when at apex of jump. Is cleared when event is triggered.\nBy default this is off, and if you want the event to fire you typically set it to true when movement mode changes to \"Falling\" from another mode (see OnMovementModeChanged)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheatFlying_MetaData[] = {
		{ "Comment", "/** Instantly stop when in flying mode and no acceleration is being applied. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Instantly stop when in flying mode and no acceleration is being applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToCrouch_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/** If true, try to crouch (or keep crouching) on next update. If false, try to stop crouching on next update. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, try to crouch (or keep crouching) on next update. If false, try to stop crouching on next update." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCrouchMaintainsBaseLocation_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/**\n\x09 * If true, crouching should keep the base of the capsule in place by lowering the center of the shrunken capsule. If false, the base of the capsule moves up and the center stays in place.\n\x09 * The same behavior applies when the character uncrouches: if true, the base is kept in the same location and the center moves up. If false, the capsule grows and only moves up if the base impacts something.\n\x09 * By default this variable is set when the movement mode changes: set to true when walking and false otherwise. Feel free to override the behavior when the movement mode changes.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If true, crouching should keep the base of the capsule in place by lowering the center of the shrunken capsule. If false, the base of the capsule moves up and the center stays in place.\nThe same behavior applies when the character uncrouches: if true, the base is kept in the same location and the center moves up. If false, the capsule grows and only moves up if the base impacts something.\nBy default this variable is set when the movement mode changes: set to true when walking and false otherwise. Feel free to override the behavior when the movement mode changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreBaseRotation_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/**\n\x09 * Whether the character ignores changes in rotation of the base it is standing on.\n\x09 * If true, the character maintains current world rotation.\n\x09 * If false, the character rotates with the moving base.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Whether the character ignores changes in rotation of the base it is standing on.\nIf true, the character maintains current world rotation.\nIf false, the character rotates with the moving base." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFastAttachedMove_MetaData[] = {
		{ "Comment", "/** \n\x09 * Set this to true if riding on a moving base that you know is clear from non-moving world obstructions.\n\x09 * Optimization to avoid sweeps during based movement, use with care.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Set this to true if riding on a moving base that you know is clear from non-moving world obstructions.\nOptimization to avoid sweeps during based movement, use with care." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysCheckFloor_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/**\n\x09 * Whether we always force floor checks for stationary Characters while walking.\n\x09 * Normally floor checks are avoided if possible when not moving, but this can be used to force them if there are use-cases where they are being skipped erroneously\n\x09 * (such as objects moving up into the character from below).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Whether we always force floor checks for stationary Characters while walking.\nNormally floor checks are avoided if possible when not moving, but this can be used to force them if there are use-cases where they are being skipped erroneously\n(such as objects moving up into the character from below)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFlatBaseForFloorChecks_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/**\n\x09 * Performs floor checks as if the character is using a shape with a flat base.\n\x09 * This avoids the situation where characters slowly lower off the side of a ledge (as their capsule 'balances' on the edge).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Performs floor checks as if the character is using a shape with a flat base.\nThis avoids the situation where characters slowly lower off the side of a ledge (as their capsule 'balances' on the edge)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformingJumpOff_MetaData[] = {
		{ "Comment", "/** Used to prevent reentry of JumpOff() */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Used to prevent reentry of JumpOff()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToLeaveNavWalking_MetaData[] = {
		{ "Comment", "/** Used to safely leave NavWalking movement mode */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Used to safely leave NavWalking movement mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRVOAvoidance_MetaData[] = {
		{ "Category", "Character Movement: Avoidance" },
		{ "Comment", "/** If set, component will use RVO avoidance. This only runs on the server. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "If set, component will use RVO avoidance. This only runs on the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequestedMoveUseAcceleration_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/**\n\x09 * Should use acceleration for path following?\n\x09 * If true, acceleration is applied when path following to reach the target velocity.\n\x09 * If false, path following velocity is set directly, disregarding acceleration.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Should use acceleration for path following?\nIf true, acceleration is applied when path following to reach the target velocity.\nIf false, path following velocity is set directly, disregarding acceleration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasSimulatingRootMotion_MetaData[] = {
		{ "Comment", "/** True when SimulatedProxies are simulating RootMotion */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "True when SimulatedProxies are simulating RootMotion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPhysicsRotationDuringAnimRootMotion_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormerBaseVelocityDecayHalfLife_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/**\n\x09 * When applying a root motion override while falling off a moving object, this controls how long it takes to lose half the former base's velocity (in seconds).\n\x09 * Set to 0 to ignore former bases (default).\n\x09 * Set to -1 for no decay.\n\x09 * Any other positive value sets the half-life for exponential decay.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "When applying a root motion override while falling off a moving object, this controls how long it takes to lose half the former base's velocity (in seconds).\nSet to 0 to ignore former bases (default).\nSet to -1 for no decay.\nAny other positive value sets the half-life for exponential decay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasRequestedVelocity_MetaData[] = {
		{ "Comment", "/** Was velocity requested by path following? */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Was velocity requested by path following?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequestedMoveWithMaxSpeed_MetaData[] = {
		{ "Comment", "/** Was acceleration requested to be always max speed? */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Was acceleration requested to be always max speed?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasAvoidanceUpdated_MetaData[] = {
		{ "Comment", "/** Was avoidance updated in this frame? */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Was avoidance updated in this frame?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectNavMeshWalking_MetaData[] = {
		{ "Category", "Character Movement: NavMesh Movement" },
		{ "Comment", "/** Whether to raycast to underlying geometry to better conform navmesh-walking characters */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Whether to raycast to underlying geometry to better conform navmesh-walking characters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectNavMeshOnBothWorldChannels_MetaData[] = {
		{ "Category", "Character Movement: NavMesh Movement" },
		{ "Comment", "/** Use both WorldStatic and WorldDynamic channels for NavWalking geometry conforming */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Use both WorldStatic and WorldDynamic channels for NavWalking geometry conforming" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceConsiderationRadius_MetaData[] = {
		{ "Category", "Character Movement: Avoidance" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedVelocity_MetaData[] = {
		{ "Comment", "/**\n\x09 * Velocity requested by path following.\n\x09 * @see RequestDirectMove()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Velocity requested by path following.\n@see RequestDirectMove()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateRequestedVelocity_MetaData[] = {
		{ "Comment", "/**\n\x09 * Velocity requested by path following during last Update\n\x09 * Updated when we consume the value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Velocity requested by path following during last Update\nUpdated when we consume the value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceUID_MetaData[] = {
		{ "Category", "Character Movement: Avoidance" },
		{ "Comment", "/** No default value, for now it's assumed to be valid if GetAvoidanceManager() returns non-NULL. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "No default value, for now it's assumed to be valid if GetAvoidanceManager() returns non-NULL." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceGroup_MetaData[] = {
		{ "Category", "Character Movement: Avoidance" },
		{ "Comment", "/** Moving actor's group mask */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Moving actor's group mask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupsToAvoid_MetaData[] = {
		{ "Category", "Character Movement: Avoidance" },
		{ "Comment", "/** Will avoid other agents if they are in one of specified groups */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Will avoid other agents if they are in one of specified groups" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupsToIgnore_MetaData[] = {
		{ "Category", "Character Movement: Avoidance" },
		{ "Comment", "/** Will NOT avoid other agents if they are in one of specified groups, higher priority than GroupsToAvoid */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Will NOT avoid other agents if they are in one of specified groups, higher priority than GroupsToAvoid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidanceWeight_MetaData[] = {
		{ "Category", "Character Movement: Avoidance" },
		{ "Comment", "/** De facto default value 0.5 (due to that being the default in the avoidance registration function), indicates RVO behavior. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "De facto default value 0.5 (due to that being the default in the avoidance registration function), indicates RVO behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingLaunchVelocity_MetaData[] = {
		{ "Comment", "/** Temporarily holds launch velocity when pawn is to be launched so it happens at end of movement. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Temporarily holds launch velocity when pawn is to be launched so it happens at end of movement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionInterval_MetaData[] = {
		{ "Category", "Character Movement: NavMesh Movement" },
		{ "Comment", "/** How often we should raycast to project from navmesh to underlying geometry */" },
		{ "editcondition", "bProjectNavMeshWalking" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "How often we should raycast to project from navmesh to underlying geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionTimer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionInterpSpeed_MetaData[] = {
		{ "Category", "Character Movement: NavMesh Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed at which to interpolate agent navmesh offset between traces. 0: Instant (no interp) > 0: Interp speed\") */" },
		{ "editcondition", "bProjectNavMeshWalking" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Speed at which to interpolate agent navmesh offset between traces. 0: Instant (no interp) > 0: Interp speed\")" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionHeightScaleUp_MetaData[] = {
		{ "Category", "Character Movement: NavMesh Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Scale of the total capsule height to use for projection from navmesh to underlying geometry in the upward direction.\n\x09 * In other words, start the trace at [CapsuleHeight * NavMeshProjectionHeightScaleUp] above nav mesh.\n\x09 */" },
		{ "editcondition", "bProjectNavMeshWalking" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Scale of the total capsule height to use for projection from navmesh to underlying geometry in the upward direction.\nIn other words, start the trace at [CapsuleHeight * NavMeshProjectionHeightScaleUp] above nav mesh." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionHeightScaleDown_MetaData[] = {
		{ "Category", "Character Movement: NavMesh Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Scale of the total capsule height to use for projection from navmesh to underlying geometry in the downward direction.\n\x09 * In other words, trace down to [CapsuleHeight * NavMeshProjectionHeightScaleDown] below nav mesh.\n\x09 */" },
		{ "editcondition", "bProjectNavMeshWalking" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Scale of the total capsule height to use for projection from navmesh to underlying geometry in the downward direction.\nIn other words, trace down to [CapsuleHeight * NavMeshProjectionHeightScaleDown] below nav mesh." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavWalkingFloorDistTolerance_MetaData[] = {
		{ "Category", "Character Movement: NavMesh Movement" },
		{ "Comment", "/** Ignore small differences in ground height between server and client data during NavWalking mode */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Ignore small differences in ground height between server and client data during NavWalking mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBasedMovementIgnorePhysicsBase_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/** Property to set if UpdateBasedMovement should ignore collision with actors part of the current MovementBase, if the base is simulated by physics */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Property to set if UpdateBasedMovement should ignore collision with actors part of the current MovementBase, if the base is simulated by physics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStayBasedInAir_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "Comment", "/** Property to set if characters should stay based on objects while jumping */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Property to set if characters should stay based on objects while jumping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StayBasedInAirHeight_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "Comment", "/** Property used to set how high above base characters should stay based on objects while jumping if bStayBasedInAir is set */" },
		{ "editcondition", "bStayBasedInAir" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Property used to set how high above base characters should stay based on objects while jumping if bStayBasedInAir is set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostPhysicsTickFunction_MetaData[] = {
		{ "Comment", "/** Post-physics tick function for this character */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Post-physics tick function for this character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTimeBetweenTimeStampResets_MetaData[] = {
		{ "Comment", "/** Minimum time between client TimeStamp resets.\n\x09 !! This has to be large enough so that we don't confuse the server if the client can stall or timeout.\n\x09 We do this as we use floats for TimeStamps, and server derives DeltaTime from two TimeStamps. \n\x09 As time goes on, accuracy decreases from those floating point numbers.\n\x09 So we trigger a TimeStamp reset at regular intervals to maintain a high level of accuracy. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Minimum time between client TimeStamp resets.\n       !! This has to be large enough so that we don't confuse the server if the client can stall or timeout.\n       We do this as we use floats for TimeStamps, and server derives DeltaTime from two TimeStamps.\n       As time goes on, accuracy decreases from those floating point numbers.\n       So we trigger a TimeStamp reset at regular intervals to maintain a high level of accuracy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRootMotion_MetaData[] = {
		{ "Comment", "/** Root Motion Group containing active root motion sources being applied to movement */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Root Motion Group containing active root motion sources being applied to movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCorrectionRootMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionParams_MetaData[] = {
		{ "Comment", "/** Root Motion movement params. Holds result of anim montage root motion during PerformMovement(), and is overridden\n\x09*   during autonomous move playback to force historical root motion for MoveAutonomous() calls */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Root Motion movement params. Holds result of anim montage root motion during PerformMovement(), and is overridden\n during autonomous move playback to force historical root motion for MoveAutonomous() calls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionVelocity_MetaData[] = {
		{ "Comment", "/** Velocity extracted from RootMotionParams when there is anim root motion active. Invalid to use when HasAnimRootMotion() returns false. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementComponent.h" },
		{ "ToolTip", "Velocity extracted from RootMotionParams when there is anim root motion active. Invalid to use when HasAnimRootMotion() returns false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStepHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpZVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpOffJumpZFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkableFloorAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkableFloorZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldToGravityTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityToWorldTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NetworkSmoothingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NetworkSmoothingMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeedCrouched;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSwimSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFlySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCustomMovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAnalogWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingFrictionFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingSubStepTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationWalking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationFalling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationSwimming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationFlying;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirControlBoostMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirControlBoostVelocityThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallingLateralFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchedHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Buoyancy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerchRadiusThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerchAdditionalHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
	static void NewProp_bUseSeparateBrakingFriction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSeparateBrakingFriction;
	static void NewProp_bApplyGravityWhileJumping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyGravityWhileJumping;
	static void NewProp_bUseControllerDesiredRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerDesiredRotation;
	static void NewProp_bOrientRotationToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientRotationToMovement;
	static void NewProp_bSweepWhileNavWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweepWhileNavWalking;
	static void NewProp_bMovementInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovementInProgress;
	static void NewProp_bEnableScopedMovementUpdates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableScopedMovementUpdates;
	static void NewProp_bEnableServerDualMoveScopedMovementUpdates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableServerDualMoveScopedMovementUpdates;
	static void NewProp_bForceMaxAccel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMaxAccel;
	static void NewProp_bRunPhysicsWithNoController_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunPhysicsWithNoController;
	static void NewProp_bForceNextFloorCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNextFloorCheck;
	static void NewProp_bShrinkProxyCapsule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShrinkProxyCapsule;
	static void NewProp_bCanWalkOffLedges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanWalkOffLedges;
	static void NewProp_bCanWalkOffLedgesWhenCrouching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanWalkOffLedgesWhenCrouching;
	static void NewProp_bNetworkSkipProxyPredictionOnNetUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetworkSkipProxyPredictionOnNetUpdate;
	static void NewProp_bNetworkAlwaysReplicateTransformUpdateTimestamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetworkAlwaysReplicateTransformUpdateTimestamp;
	static void NewProp_bDeferUpdateMoveComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferUpdateMoveComponent;
	static void NewProp_bEnablePhysicsInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsInteraction;
	static void NewProp_bTouchForceScaledToMass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTouchForceScaledToMass;
	static void NewProp_bPushForceScaledToMass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPushForceScaledToMass;
	static void NewProp_bPushForceUsingZOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPushForceUsingZOffset;
	static void NewProp_bScalePushForceToVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScalePushForceToVelocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeferredUpdatedMoveComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOutOfWaterStepHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutofWaterZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandingDownwardForceScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialPushForceFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PushForceFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PushForcePointZOffsetFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TouchForceFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTouchForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTouchForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepulsionForce;
#if WITH_EDITORONLY_DATA
	static void NewProp_bForceBraking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceBraking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchedSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperImpactNormalScale;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastUpdateRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastUpdateLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastUpdateVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerLastTransformUpdateTimeStamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerLastClientGoodMoveAckTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerLastClientAdjustmentTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingImpulseToApply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingForceToApply;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalogInputModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSimulationTimeStep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSimulationIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxJumpApexAttemptsPerSimulation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationWithGeometry;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationWithGeometryAsProxy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationWithPawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationWithPawnAsProxy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkSimulatedSmoothLocationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkSimulatedSmoothRotationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ListenServerNetworkSimulatedSmoothLocationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ListenServerNetworkSimulatedSmoothRotationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetProxyShrinkRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetProxyShrinkHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkMaxSmoothUpdateDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkNoSmoothUpdateDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkMinTimeBetweenClientAckGoodMoves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkMinTimeBetweenClientAdjustments;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkMinTimeBetweenClientAdjustmentsLargeCorrection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetworkLargeClientCorrectionDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeCheckThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpOutOfWaterPitch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentFloor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultLandMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultWaterMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroundMovementMode;
	static void NewProp_bMaintainHorizontalGroundVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainHorizontalGroundVelocity;
	static void NewProp_bImpartBaseVelocityX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImpartBaseVelocityX;
	static void NewProp_bImpartBaseVelocityY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImpartBaseVelocityY;
	static void NewProp_bImpartBaseVelocityZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImpartBaseVelocityZ;
	static void NewProp_bImpartBaseAngularVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImpartBaseAngularVelocity;
	static void NewProp_bJustTeleported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bJustTeleported;
	static void NewProp_bNetworkUpdateReceived_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetworkUpdateReceived;
	static void NewProp_bNetworkMovementModeChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetworkMovementModeChanged;
	static void NewProp_bNetworkGravityDirectionChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetworkGravityDirectionChanged;
	static void NewProp_bIgnoreClientMovementErrorChecksAndCorrection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreClientMovementErrorChecksAndCorrection;
	static void NewProp_bServerAcceptClientAuthoritativePosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerAcceptClientAuthoritativePosition;
	static void NewProp_bNotifyApex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyApex;
	static void NewProp_bCheatFlying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheatFlying;
	static void NewProp_bWantsToCrouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToCrouch;
	static void NewProp_bCrouchMaintainsBaseLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouchMaintainsBaseLocation;
	static void NewProp_bIgnoreBaseRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreBaseRotation;
	static void NewProp_bFastAttachedMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFastAttachedMove;
	static void NewProp_bAlwaysCheckFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysCheckFloor;
	static void NewProp_bUseFlatBaseForFloorChecks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFlatBaseForFloorChecks;
	static void NewProp_bPerformingJumpOff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformingJumpOff;
	static void NewProp_bWantsToLeaveNavWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToLeaveNavWalking;
	static void NewProp_bUseRVOAvoidance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRVOAvoidance;
	static void NewProp_bRequestedMoveUseAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestedMoveUseAcceleration;
	static void NewProp_bWasSimulatingRootMotion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSimulatingRootMotion;
	static void NewProp_bAllowPhysicsRotationDuringAnimRootMotion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPhysicsRotationDuringAnimRootMotion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FormerBaseVelocityDecayHalfLife;
	static void NewProp_bHasRequestedVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRequestedVelocity;
	static void NewProp_bRequestedMoveWithMaxSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestedMoveWithMaxSpeed;
	static void NewProp_bWasAvoidanceUpdated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasAvoidanceUpdated;
	static void NewProp_bProjectNavMeshWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectNavMeshWalking;
	static void NewProp_bProjectNavMeshOnBothWorldChannels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectNavMeshOnBothWorldChannels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AvoidanceConsiderationRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestedVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastUpdateRequestedVelocity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvoidanceUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvoidanceGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupsToAvoid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupsToIgnore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AvoidanceWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingLaunchVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionHeightScaleUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionHeightScaleDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavWalkingFloorDistTolerance;
	static void NewProp_bBasedMovementIgnorePhysicsBase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBasedMovementIgnorePhysicsBase;
	static void NewProp_bStayBasedInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStayBasedInAir;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StayBasedInAirHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostPhysicsTickFunction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTimeBetweenTimeStampResets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRootMotion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerCorrectionRootMotion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimRootMotionVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterMovementComponent_AddForce, "AddForce" }, // 4180765242
		{ &Z_Construct_UFunction_UCharacterMovementComponent_AddImpulse, "AddImpulse" }, // 728241047
		{ &Z_Construct_UFunction_UCharacterMovementComponent_CalcVelocity, "CalcVelocity" }, // 2568027060
		{ &Z_Construct_UFunction_UCharacterMovementComponent_CapsuleTouched, "CapsuleTouched" }, // 15974577
		{ &Z_Construct_UFunction_UCharacterMovementComponent_ClearAccumulatedForces, "ClearAccumulatedForces" }, // 2560077526
		{ &Z_Construct_UFunction_UCharacterMovementComponent_DisableMovement, "DisableMovement" }, // 2764343354
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetAnalogInputModifier, "GetAnalogInputModifier" }, // 2920153150
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetCharacterOwner, "GetCharacterOwner" }, // 3225983887
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetCrouchedHalfHeight, "GetCrouchedHalfHeight" }, // 3872590521
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetCurrentAcceleration, "GetCurrentAcceleration" }, // 4114650137
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetGravityDirection, "GetGravityDirection" }, // 3634179988
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetImpartedMovementBaseVelocity, "GetImpartedMovementBaseVelocity" }, // 665495937
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateLocation, "GetLastUpdateLocation" }, // 3504212880
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRequestedVelocity, "GetLastUpdateRequestedVelocity" }, // 3113022910
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateRotation, "GetLastUpdateRotation" }, // 686623538
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetLastUpdateVelocity, "GetLastUpdateVelocity" }, // 3117871067
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetMaxAcceleration, "GetMaxAcceleration" }, // 4195882523
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetMaxBrakingDeceleration, "GetMaxBrakingDeceleration" }, // 3486554922
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeight, "GetMaxJumpHeight" }, // 1384688385
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetMaxJumpHeightWithJumpTime, "GetMaxJumpHeightWithJumpTime" }, // 2036801829
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetMinAnalogSpeed, "GetMinAnalogSpeed" }, // 1600447619
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetMovementBase, "GetMovementBase" }, // 1985940758
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetPerchRadiusThreshold, "GetPerchRadiusThreshold" }, // 103084414
		{ &Z_Construct_UFunction_UCharacterMovementComponent_GetValidPerchRadius, "GetValidPerchRadius" }, // 2255495618
		{ &Z_Construct_UFunction_UCharacterMovementComponent_HasCustomGravity, "HasCustomGravity" }, // 3000318921
		{ &Z_Construct_UFunction_UCharacterMovementComponent_IsWalkable, "IsWalkable" }, // 794225519
		{ &Z_Construct_UFunction_UCharacterMovementComponent_IsWalking, "IsWalking" }, // 1447430392
		{ &Z_Construct_UFunction_UCharacterMovementComponent_K2_ComputeFloorDist, "K2_ComputeFloorDist" }, // 29766621
		{ &Z_Construct_UFunction_UCharacterMovementComponent_K2_FindFloor, "K2_FindFloor" }, // 2744629371
		{ &Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorAngle, "K2_GetWalkableFloorAngle" }, // 285231705
		{ &Z_Construct_UFunction_UCharacterMovementComponent_K2_GetWalkableFloorZ, "K2_GetWalkableFloorZ" }, // 3029751908
		{ &Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceEnabled, "SetAvoidanceEnabled" }, // 3886716183
		{ &Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroup, "SetAvoidanceGroup" }, // 2329975051
		{ &Z_Construct_UFunction_UCharacterMovementComponent_SetAvoidanceGroupMask, "SetAvoidanceGroupMask" }, // 2869137253
		{ &Z_Construct_UFunction_UCharacterMovementComponent_SetCrouchedHalfHeight, "SetCrouchedHalfHeight" }, // 887787142
		{ &Z_Construct_UFunction_UCharacterMovementComponent_SetGravityDirection, "SetGravityDirection" }, // 2104220794
		{ &Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoid, "SetGroupsToAvoid" }, // 2745879083
		{ &Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToAvoidMask, "SetGroupsToAvoidMask" }, // 2767850931
		{ &Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnore, "SetGroupsToIgnore" }, // 1065332785
		{ &Z_Construct_UFunction_UCharacterMovementComponent_SetGroupsToIgnoreMask, "SetGroupsToIgnoreMask" }, // 950545623
		{ &Z_Construct_UFunction_UCharacterMovementComponent_SetMovementMode, "SetMovementMode" }, // 3677694580
		{ &Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorAngle, "SetWalkableFloorAngle" }, // 3560277070
		{ &Z_Construct_UFunction_UCharacterMovementComponent_SetWalkableFloorZ, "SetWalkableFloorZ" }, // 1633839290
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0124080000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, CharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOwner_MetaData), NewProp_CharacterOwner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScale_MetaData), NewProp_GravityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxStepHeight = { "MaxStepHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxStepHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStepHeight_MetaData), NewProp_MaxStepHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_JumpZVelocity = { "JumpZVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, JumpZVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpZVelocity_MetaData), NewProp_JumpZVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_JumpOffJumpZFactor = { "JumpOffJumpZFactor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, JumpOffJumpZFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpOffJumpZFactor_MetaData), NewProp_JumpOffJumpZFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_WalkableFloorAngle = { "WalkableFloorAngle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, WalkableFloorAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkableFloorAngle_MetaData), NewProp_WalkableFloorAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_WalkableFloorZ = { "WalkableFloorZ", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, WalkableFloorZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkableFloorZ_MetaData), NewProp_WalkableFloorZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GravityDirection = { "GravityDirection", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, GravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityDirection_MetaData), NewProp_GravityDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_WorldToGravityTransform = { "WorldToGravityTransform", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, WorldToGravityTransform), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldToGravityTransform_MetaData), NewProp_WorldToGravityTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GravityToWorldTransform = { "GravityToWorldTransform", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, GravityToWorldTransform), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityToWorldTransform_MetaData), NewProp_GravityToWorldTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementMode_MetaData), NewProp_MovementMode_MetaData) }; // 1967555749
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_CustomMovementMode = { "CustomMovementMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, CustomMovementMode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMovementMode_MetaData), NewProp_CustomMovementMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkSmoothingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkSmoothingMode = { "NetworkSmoothingMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NetworkSmoothingMode), Z_Construct_UEnum_Engine_ENetworkSmoothingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkSmoothingMode_MetaData), NewProp_NetworkSmoothingMode_MetaData) }; // 2944927267
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GroundFriction = { "GroundFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, GroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundFriction_MetaData), NewProp_GroundFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxWalkSpeed = { "MaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkSpeed_MetaData), NewProp_MaxWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedCrouched = { "MaxWalkSpeedCrouched", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxWalkSpeedCrouched), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkSpeedCrouched_MetaData), NewProp_MaxWalkSpeedCrouched_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxSwimSpeed = { "MaxSwimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxSwimSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSwimSpeed_MetaData), NewProp_MaxSwimSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxFlySpeed = { "MaxFlySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxFlySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFlySpeed_MetaData), NewProp_MaxFlySpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxCustomMovementSpeed = { "MaxCustomMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxCustomMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCustomMovementSpeed_MetaData), NewProp_MaxCustomMovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAcceleration_MetaData), NewProp_MaxAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MinAnalogWalkSpeed = { "MinAnalogWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MinAnalogWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAnalogWalkSpeed_MetaData), NewProp_MinAnalogWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingFrictionFactor = { "BrakingFrictionFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, BrakingFrictionFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingFrictionFactor_MetaData), NewProp_BrakingFrictionFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingFriction = { "BrakingFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, BrakingFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingFriction_MetaData), NewProp_BrakingFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingSubStepTime = { "BrakingSubStepTime", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, BrakingSubStepTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingSubStepTime_MetaData), NewProp_BrakingSubStepTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingDecelerationWalking = { "BrakingDecelerationWalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, BrakingDecelerationWalking), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingDecelerationWalking_MetaData), NewProp_BrakingDecelerationWalking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingDecelerationFalling = { "BrakingDecelerationFalling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, BrakingDecelerationFalling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingDecelerationFalling_MetaData), NewProp_BrakingDecelerationFalling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingDecelerationSwimming = { "BrakingDecelerationSwimming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, BrakingDecelerationSwimming), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingDecelerationSwimming_MetaData), NewProp_BrakingDecelerationSwimming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingDecelerationFlying = { "BrakingDecelerationFlying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, BrakingDecelerationFlying), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingDecelerationFlying_MetaData), NewProp_BrakingDecelerationFlying_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AirControl = { "AirControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, AirControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirControl_MetaData), NewProp_AirControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AirControlBoostMultiplier = { "AirControlBoostMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, AirControlBoostMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirControlBoostMultiplier_MetaData), NewProp_AirControlBoostMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AirControlBoostVelocityThreshold = { "AirControlBoostVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, AirControlBoostVelocityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirControlBoostVelocityThreshold_MetaData), NewProp_AirControlBoostVelocityThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_FallingLateralFriction = { "FallingLateralFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, FallingLateralFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallingLateralFriction_MetaData), NewProp_FallingLateralFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_CrouchedHalfHeight = { "CrouchedHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, CrouchedHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchedHalfHeight_MetaData), NewProp_CrouchedHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_Buoyancy = { "Buoyancy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, Buoyancy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buoyancy_MetaData), NewProp_Buoyancy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PerchRadiusThreshold = { "PerchRadiusThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, PerchRadiusThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerchRadiusThreshold_MetaData), NewProp_PerchRadiusThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PerchAdditionalHeight = { "PerchAdditionalHeight", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, PerchAdditionalHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerchAdditionalHeight_MetaData), NewProp_PerchAdditionalHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseSeparateBrakingFriction_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bUseSeparateBrakingFriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseSeparateBrakingFriction = { "bUseSeparateBrakingFriction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseSeparateBrakingFriction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSeparateBrakingFriction_MetaData), NewProp_bUseSeparateBrakingFriction_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bApplyGravityWhileJumping_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bApplyGravityWhileJumping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bApplyGravityWhileJumping = { "bApplyGravityWhileJumping", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bApplyGravityWhileJumping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyGravityWhileJumping_MetaData), NewProp_bApplyGravityWhileJumping_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseControllerDesiredRotation_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bUseControllerDesiredRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseControllerDesiredRotation = { "bUseControllerDesiredRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseControllerDesiredRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseControllerDesiredRotation_MetaData), NewProp_bUseControllerDesiredRotation_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bOrientRotationToMovement_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bOrientRotationToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bOrientRotationToMovement = { "bOrientRotationToMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bOrientRotationToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientRotationToMovement_MetaData), NewProp_bOrientRotationToMovement_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bSweepWhileNavWalking_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bSweepWhileNavWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bSweepWhileNavWalking = { "bSweepWhileNavWalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bSweepWhileNavWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSweepWhileNavWalking_MetaData), NewProp_bSweepWhileNavWalking_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bMovementInProgress_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bMovementInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bMovementInProgress = { "bMovementInProgress", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bMovementInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMovementInProgress_MetaData), NewProp_bMovementInProgress_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bEnableScopedMovementUpdates_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bEnableScopedMovementUpdates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bEnableScopedMovementUpdates = { "bEnableScopedMovementUpdates", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bEnableScopedMovementUpdates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableScopedMovementUpdates_MetaData), NewProp_bEnableScopedMovementUpdates_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bEnableServerDualMoveScopedMovementUpdates_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bEnableServerDualMoveScopedMovementUpdates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bEnableServerDualMoveScopedMovementUpdates = { "bEnableServerDualMoveScopedMovementUpdates", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bEnableServerDualMoveScopedMovementUpdates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableServerDualMoveScopedMovementUpdates_MetaData), NewProp_bEnableServerDualMoveScopedMovementUpdates_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bForceMaxAccel_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bForceMaxAccel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bForceMaxAccel = { "bForceMaxAccel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bForceMaxAccel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceMaxAccel_MetaData), NewProp_bForceMaxAccel_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bRunPhysicsWithNoController_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bRunPhysicsWithNoController = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bRunPhysicsWithNoController = { "bRunPhysicsWithNoController", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bRunPhysicsWithNoController_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunPhysicsWithNoController_MetaData), NewProp_bRunPhysicsWithNoController_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bForceNextFloorCheck_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bForceNextFloorCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bForceNextFloorCheck = { "bForceNextFloorCheck", nullptr, (EPropertyFlags)0x0010040000020805, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bForceNextFloorCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNextFloorCheck_MetaData), NewProp_bForceNextFloorCheck_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bShrinkProxyCapsule_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bShrinkProxyCapsule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bShrinkProxyCapsule = { "bShrinkProxyCapsule", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bShrinkProxyCapsule_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShrinkProxyCapsule_MetaData), NewProp_bShrinkProxyCapsule_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCanWalkOffLedges_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bCanWalkOffLedges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCanWalkOffLedges = { "bCanWalkOffLedges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCanWalkOffLedges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanWalkOffLedges_MetaData), NewProp_bCanWalkOffLedges_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCanWalkOffLedgesWhenCrouching_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bCanWalkOffLedgesWhenCrouching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCanWalkOffLedgesWhenCrouching = { "bCanWalkOffLedgesWhenCrouching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCanWalkOffLedgesWhenCrouching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanWalkOffLedgesWhenCrouching_MetaData), NewProp_bCanWalkOffLedgesWhenCrouching_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkSkipProxyPredictionOnNetUpdate_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bNetworkSkipProxyPredictionOnNetUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkSkipProxyPredictionOnNetUpdate = { "bNetworkSkipProxyPredictionOnNetUpdate", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkSkipProxyPredictionOnNetUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetworkSkipProxyPredictionOnNetUpdate_MetaData), NewProp_bNetworkSkipProxyPredictionOnNetUpdate_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkAlwaysReplicateTransformUpdateTimestamp_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bNetworkAlwaysReplicateTransformUpdateTimestamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkAlwaysReplicateTransformUpdateTimestamp = { "bNetworkAlwaysReplicateTransformUpdateTimestamp", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkAlwaysReplicateTransformUpdateTimestamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetworkAlwaysReplicateTransformUpdateTimestamp_MetaData), NewProp_bNetworkAlwaysReplicateTransformUpdateTimestamp_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bDeferUpdateMoveComponent_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bDeferUpdateMoveComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bDeferUpdateMoveComponent = { "bDeferUpdateMoveComponent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bDeferUpdateMoveComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeferUpdateMoveComponent_MetaData), NewProp_bDeferUpdateMoveComponent_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bEnablePhysicsInteraction_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bEnablePhysicsInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bEnablePhysicsInteraction = { "bEnablePhysicsInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bEnablePhysicsInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePhysicsInteraction_MetaData), NewProp_bEnablePhysicsInteraction_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bTouchForceScaledToMass_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bTouchForceScaledToMass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bTouchForceScaledToMass = { "bTouchForceScaledToMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bTouchForceScaledToMass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTouchForceScaledToMass_MetaData), NewProp_bTouchForceScaledToMass_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bPushForceScaledToMass_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bPushForceScaledToMass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bPushForceScaledToMass = { "bPushForceScaledToMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bPushForceScaledToMass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPushForceScaledToMass_MetaData), NewProp_bPushForceScaledToMass_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bPushForceUsingZOffset_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bPushForceUsingZOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bPushForceUsingZOffset = { "bPushForceUsingZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bPushForceUsingZOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPushForceUsingZOffset_MetaData), NewProp_bPushForceUsingZOffset_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bScalePushForceToVelocity_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bScalePushForceToVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bScalePushForceToVelocity = { "bScalePushForceToVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bScalePushForceToVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScalePushForceToVelocity_MetaData), NewProp_bScalePushForceToVelocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_DeferredUpdatedMoveComponent = { "DeferredUpdatedMoveComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, DeferredUpdatedMoveComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeferredUpdatedMoveComponent_MetaData), NewProp_DeferredUpdatedMoveComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxOutOfWaterStepHeight = { "MaxOutOfWaterStepHeight", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxOutOfWaterStepHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxOutOfWaterStepHeight_MetaData), NewProp_MaxOutOfWaterStepHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_OutofWaterZ = { "OutofWaterZ", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, OutofWaterZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutofWaterZ_MetaData), NewProp_OutofWaterZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_StandingDownwardForceScale = { "StandingDownwardForceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, StandingDownwardForceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandingDownwardForceScale_MetaData), NewProp_StandingDownwardForceScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_InitialPushForceFactor = { "InitialPushForceFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, InitialPushForceFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPushForceFactor_MetaData), NewProp_InitialPushForceFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PushForceFactor = { "PushForceFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, PushForceFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PushForceFactor_MetaData), NewProp_PushForceFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PushForcePointZOffsetFactor = { "PushForcePointZOffsetFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, PushForcePointZOffsetFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PushForcePointZOffsetFactor_MetaData), NewProp_PushForcePointZOffsetFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_TouchForceFactor = { "TouchForceFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, TouchForceFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchForceFactor_MetaData), NewProp_TouchForceFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MinTouchForce = { "MinTouchForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MinTouchForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTouchForce_MetaData), NewProp_MinTouchForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxTouchForce = { "MaxTouchForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxTouchForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTouchForce_MetaData), NewProp_MaxTouchForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_RepulsionForce = { "RepulsionForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, RepulsionForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepulsionForce_MetaData), NewProp_RepulsionForce_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bForceBraking_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bForceBraking_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bForceBraking = { "bForceBraking", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bForceBraking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceBraking_MetaData), NewProp_bForceBraking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_CrouchedSpeedMultiplier = { "CrouchedSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, CrouchedSpeedMultiplier_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchedSpeedMultiplier_MetaData), NewProp_CrouchedSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_UpperImpactNormalScale = { "UpperImpactNormalScale", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, UpperImpactNormalScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperImpactNormalScale_MetaData), NewProp_UpperImpactNormalScale_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_LastUpdateRotation = { "LastUpdateRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdateRotation_MetaData), NewProp_LastUpdateRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_LastUpdateLocation = { "LastUpdateLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdateLocation_MetaData), NewProp_LastUpdateLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_LastUpdateVelocity = { "LastUpdateVelocity", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdateVelocity_MetaData), NewProp_LastUpdateVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_ServerLastTransformUpdateTimeStamp = { "ServerLastTransformUpdateTimeStamp", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, ServerLastTransformUpdateTimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerLastTransformUpdateTimeStamp_MetaData), NewProp_ServerLastTransformUpdateTimeStamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_ServerLastClientGoodMoveAckTime = { "ServerLastClientGoodMoveAckTime", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, ServerLastClientGoodMoveAckTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerLastClientGoodMoveAckTime_MetaData), NewProp_ServerLastClientGoodMoveAckTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_ServerLastClientAdjustmentTime = { "ServerLastClientAdjustmentTime", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, ServerLastClientAdjustmentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerLastClientAdjustmentTime_MetaData), NewProp_ServerLastClientAdjustmentTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PendingImpulseToApply = { "PendingImpulseToApply", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, PendingImpulseToApply), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingImpulseToApply_MetaData), NewProp_PendingImpulseToApply_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PendingForceToApply = { "PendingForceToApply", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, PendingForceToApply), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingForceToApply_MetaData), NewProp_PendingForceToApply_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AnalogInputModifier = { "AnalogInputModifier", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, AnalogInputModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnalogInputModifier_MetaData), NewProp_AnalogInputModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxSimulationTimeStep = { "MaxSimulationTimeStep", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxSimulationTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimulationTimeStep_MetaData), NewProp_MaxSimulationTimeStep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxSimulationIterations = { "MaxSimulationIterations", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxSimulationIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimulationIterations_MetaData), NewProp_MaxSimulationIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxJumpApexAttemptsPerSimulation = { "MaxJumpApexAttemptsPerSimulation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxJumpApexAttemptsPerSimulation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxJumpApexAttemptsPerSimulation_MetaData), NewProp_MaxJumpApexAttemptsPerSimulation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxDepenetrationWithGeometry = { "MaxDepenetrationWithGeometry", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxDepenetrationWithGeometry), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDepenetrationWithGeometry_MetaData), NewProp_MaxDepenetrationWithGeometry_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxDepenetrationWithGeometryAsProxy = { "MaxDepenetrationWithGeometryAsProxy", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxDepenetrationWithGeometryAsProxy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDepenetrationWithGeometryAsProxy_MetaData), NewProp_MaxDepenetrationWithGeometryAsProxy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxDepenetrationWithPawn = { "MaxDepenetrationWithPawn", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxDepenetrationWithPawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDepenetrationWithPawn_MetaData), NewProp_MaxDepenetrationWithPawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxDepenetrationWithPawnAsProxy = { "MaxDepenetrationWithPawnAsProxy", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MaxDepenetrationWithPawnAsProxy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDepenetrationWithPawnAsProxy_MetaData), NewProp_MaxDepenetrationWithPawnAsProxy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkSimulatedSmoothLocationTime = { "NetworkSimulatedSmoothLocationTime", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NetworkSimulatedSmoothLocationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkSimulatedSmoothLocationTime_MetaData), NewProp_NetworkSimulatedSmoothLocationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkSimulatedSmoothRotationTime = { "NetworkSimulatedSmoothRotationTime", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NetworkSimulatedSmoothRotationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkSimulatedSmoothRotationTime_MetaData), NewProp_NetworkSimulatedSmoothRotationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_ListenServerNetworkSimulatedSmoothLocationTime = { "ListenServerNetworkSimulatedSmoothLocationTime", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, ListenServerNetworkSimulatedSmoothLocationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListenServerNetworkSimulatedSmoothLocationTime_MetaData), NewProp_ListenServerNetworkSimulatedSmoothLocationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_ListenServerNetworkSimulatedSmoothRotationTime = { "ListenServerNetworkSimulatedSmoothRotationTime", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, ListenServerNetworkSimulatedSmoothRotationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListenServerNetworkSimulatedSmoothRotationTime_MetaData), NewProp_ListenServerNetworkSimulatedSmoothRotationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetProxyShrinkRadius = { "NetProxyShrinkRadius", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NetProxyShrinkRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetProxyShrinkRadius_MetaData), NewProp_NetProxyShrinkRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetProxyShrinkHalfHeight = { "NetProxyShrinkHalfHeight", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NetProxyShrinkHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetProxyShrinkHalfHeight_MetaData), NewProp_NetProxyShrinkHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkMaxSmoothUpdateDistance = { "NetworkMaxSmoothUpdateDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NetworkMaxSmoothUpdateDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkMaxSmoothUpdateDistance_MetaData), NewProp_NetworkMaxSmoothUpdateDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkNoSmoothUpdateDistance = { "NetworkNoSmoothUpdateDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NetworkNoSmoothUpdateDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkNoSmoothUpdateDistance_MetaData), NewProp_NetworkNoSmoothUpdateDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkMinTimeBetweenClientAckGoodMoves = { "NetworkMinTimeBetweenClientAckGoodMoves", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NetworkMinTimeBetweenClientAckGoodMoves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkMinTimeBetweenClientAckGoodMoves_MetaData), NewProp_NetworkMinTimeBetweenClientAckGoodMoves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkMinTimeBetweenClientAdjustments = { "NetworkMinTimeBetweenClientAdjustments", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NetworkMinTimeBetweenClientAdjustments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkMinTimeBetweenClientAdjustments_MetaData), NewProp_NetworkMinTimeBetweenClientAdjustments_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkMinTimeBetweenClientAdjustmentsLargeCorrection = { "NetworkMinTimeBetweenClientAdjustmentsLargeCorrection", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NetworkMinTimeBetweenClientAdjustmentsLargeCorrection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkMinTimeBetweenClientAdjustmentsLargeCorrection_MetaData), NewProp_NetworkMinTimeBetweenClientAdjustmentsLargeCorrection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkLargeClientCorrectionDistance = { "NetworkLargeClientCorrectionDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NetworkLargeClientCorrectionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkLargeClientCorrectionDistance_MetaData), NewProp_NetworkLargeClientCorrectionDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_LedgeCheckThreshold = { "LedgeCheckThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, LedgeCheckThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeCheckThreshold_MetaData), NewProp_LedgeCheckThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_JumpOutOfWaterPitch = { "JumpOutOfWaterPitch", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, JumpOutOfWaterPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpOutOfWaterPitch_MetaData), NewProp_JumpOutOfWaterPitch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_CurrentFloor = { "CurrentFloor", nullptr, (EPropertyFlags)0x0010008000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, CurrentFloor), Z_Construct_UScriptStruct_FFindFloorResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFloor_MetaData), NewProp_CurrentFloor_MetaData) }; // 3134433334
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_DefaultLandMovementMode = { "DefaultLandMovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, DefaultLandMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLandMovementMode_MetaData), NewProp_DefaultLandMovementMode_MetaData) }; // 1967555749
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_DefaultWaterMovementMode = { "DefaultWaterMovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, DefaultWaterMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWaterMovementMode_MetaData), NewProp_DefaultWaterMovementMode_MetaData) }; // 1967555749
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GroundMovementMode = { "GroundMovementMode", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, GroundMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundMovementMode_MetaData), NewProp_GroundMovementMode_MetaData) }; // 1967555749
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bMaintainHorizontalGroundVelocity_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bMaintainHorizontalGroundVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bMaintainHorizontalGroundVelocity = { "bMaintainHorizontalGroundVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bMaintainHorizontalGroundVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainHorizontalGroundVelocity_MetaData), NewProp_bMaintainHorizontalGroundVelocity_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseVelocityX_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bImpartBaseVelocityX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseVelocityX = { "bImpartBaseVelocityX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseVelocityX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImpartBaseVelocityX_MetaData), NewProp_bImpartBaseVelocityX_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseVelocityY_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bImpartBaseVelocityY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseVelocityY = { "bImpartBaseVelocityY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseVelocityY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImpartBaseVelocityY_MetaData), NewProp_bImpartBaseVelocityY_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseVelocityZ_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bImpartBaseVelocityZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseVelocityZ = { "bImpartBaseVelocityZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseVelocityZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImpartBaseVelocityZ_MetaData), NewProp_bImpartBaseVelocityZ_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseAngularVelocity_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bImpartBaseAngularVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseAngularVelocity = { "bImpartBaseAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseAngularVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImpartBaseAngularVelocity_MetaData), NewProp_bImpartBaseAngularVelocity_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bJustTeleported_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bJustTeleported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bJustTeleported = { "bJustTeleported", nullptr, (EPropertyFlags)0x0010000000022805, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bJustTeleported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bJustTeleported_MetaData), NewProp_bJustTeleported_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkUpdateReceived_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bNetworkUpdateReceived = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkUpdateReceived = { "bNetworkUpdateReceived", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkUpdateReceived_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetworkUpdateReceived_MetaData), NewProp_bNetworkUpdateReceived_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkMovementModeChanged_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bNetworkMovementModeChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkMovementModeChanged = { "bNetworkMovementModeChanged", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkMovementModeChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetworkMovementModeChanged_MetaData), NewProp_bNetworkMovementModeChanged_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkGravityDirectionChanged_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bNetworkGravityDirectionChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkGravityDirectionChanged = { "bNetworkGravityDirectionChanged", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkGravityDirectionChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNetworkGravityDirectionChanged_MetaData), NewProp_bNetworkGravityDirectionChanged_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bIgnoreClientMovementErrorChecksAndCorrection_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bIgnoreClientMovementErrorChecksAndCorrection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bIgnoreClientMovementErrorChecksAndCorrection = { "bIgnoreClientMovementErrorChecksAndCorrection", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bIgnoreClientMovementErrorChecksAndCorrection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreClientMovementErrorChecksAndCorrection_MetaData), NewProp_bIgnoreClientMovementErrorChecksAndCorrection_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bServerAcceptClientAuthoritativePosition_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bServerAcceptClientAuthoritativePosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bServerAcceptClientAuthoritativePosition = { "bServerAcceptClientAuthoritativePosition", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bServerAcceptClientAuthoritativePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bServerAcceptClientAuthoritativePosition_MetaData), NewProp_bServerAcceptClientAuthoritativePosition_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNotifyApex_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bNotifyApex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNotifyApex = { "bNotifyApex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNotifyApex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyApex_MetaData), NewProp_bNotifyApex_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCheatFlying_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bCheatFlying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCheatFlying = { "bCheatFlying", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCheatFlying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheatFlying_MetaData), NewProp_bCheatFlying_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWantsToCrouch_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bWantsToCrouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWantsToCrouch = { "bWantsToCrouch", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWantsToCrouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsToCrouch_MetaData), NewProp_bWantsToCrouch_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCrouchMaintainsBaseLocation_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bCrouchMaintainsBaseLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCrouchMaintainsBaseLocation = { "bCrouchMaintainsBaseLocation", nullptr, (EPropertyFlags)0x0010040000020805, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCrouchMaintainsBaseLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCrouchMaintainsBaseLocation_MetaData), NewProp_bCrouchMaintainsBaseLocation_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bIgnoreBaseRotation_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bIgnoreBaseRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bIgnoreBaseRotation = { "bIgnoreBaseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bIgnoreBaseRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreBaseRotation_MetaData), NewProp_bIgnoreBaseRotation_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bFastAttachedMove_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bFastAttachedMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bFastAttachedMove = { "bFastAttachedMove", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bFastAttachedMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFastAttachedMove_MetaData), NewProp_bFastAttachedMove_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bAlwaysCheckFloor_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bAlwaysCheckFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bAlwaysCheckFloor = { "bAlwaysCheckFloor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bAlwaysCheckFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysCheckFloor_MetaData), NewProp_bAlwaysCheckFloor_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseFlatBaseForFloorChecks_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bUseFlatBaseForFloorChecks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseFlatBaseForFloorChecks = { "bUseFlatBaseForFloorChecks", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseFlatBaseForFloorChecks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFlatBaseForFloorChecks_MetaData), NewProp_bUseFlatBaseForFloorChecks_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bPerformingJumpOff_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bPerformingJumpOff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bPerformingJumpOff = { "bPerformingJumpOff", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bPerformingJumpOff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformingJumpOff_MetaData), NewProp_bPerformingJumpOff_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWantsToLeaveNavWalking_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bWantsToLeaveNavWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWantsToLeaveNavWalking = { "bWantsToLeaveNavWalking", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWantsToLeaveNavWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsToLeaveNavWalking_MetaData), NewProp_bWantsToLeaveNavWalking_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseRVOAvoidance_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bUseRVOAvoidance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseRVOAvoidance = { "bUseRVOAvoidance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseRVOAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRVOAvoidance_MetaData), NewProp_bUseRVOAvoidance_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bRequestedMoveUseAcceleration_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bRequestedMoveUseAcceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bRequestedMoveUseAcceleration = { "bRequestedMoveUseAcceleration", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bRequestedMoveUseAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequestedMoveUseAcceleration_MetaData), NewProp_bRequestedMoveUseAcceleration_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWasSimulatingRootMotion_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bWasSimulatingRootMotion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWasSimulatingRootMotion = { "bWasSimulatingRootMotion", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWasSimulatingRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasSimulatingRootMotion_MetaData), NewProp_bWasSimulatingRootMotion_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bAllowPhysicsRotationDuringAnimRootMotion_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bAllowPhysicsRotationDuringAnimRootMotion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bAllowPhysicsRotationDuringAnimRootMotion = { "bAllowPhysicsRotationDuringAnimRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bAllowPhysicsRotationDuringAnimRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPhysicsRotationDuringAnimRootMotion_MetaData), NewProp_bAllowPhysicsRotationDuringAnimRootMotion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_FormerBaseVelocityDecayHalfLife = { "FormerBaseVelocityDecayHalfLife", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, FormerBaseVelocityDecayHalfLife), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormerBaseVelocityDecayHalfLife_MetaData), NewProp_FormerBaseVelocityDecayHalfLife_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bHasRequestedVelocity_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bHasRequestedVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bHasRequestedVelocity = { "bHasRequestedVelocity", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bHasRequestedVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasRequestedVelocity_MetaData), NewProp_bHasRequestedVelocity_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bRequestedMoveWithMaxSpeed_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bRequestedMoveWithMaxSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bRequestedMoveWithMaxSpeed = { "bRequestedMoveWithMaxSpeed", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bRequestedMoveWithMaxSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequestedMoveWithMaxSpeed_MetaData), NewProp_bRequestedMoveWithMaxSpeed_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWasAvoidanceUpdated_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bWasAvoidanceUpdated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWasAvoidanceUpdated = { "bWasAvoidanceUpdated", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWasAvoidanceUpdated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasAvoidanceUpdated_MetaData), NewProp_bWasAvoidanceUpdated_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bProjectNavMeshWalking_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bProjectNavMeshWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bProjectNavMeshWalking = { "bProjectNavMeshWalking", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bProjectNavMeshWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectNavMeshWalking_MetaData), NewProp_bProjectNavMeshWalking_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bProjectNavMeshOnBothWorldChannels_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bProjectNavMeshOnBothWorldChannels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bProjectNavMeshOnBothWorldChannels = { "bProjectNavMeshOnBothWorldChannels", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bProjectNavMeshOnBothWorldChannels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectNavMeshOnBothWorldChannels_MetaData), NewProp_bProjectNavMeshOnBothWorldChannels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AvoidanceConsiderationRadius = { "AvoidanceConsiderationRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, AvoidanceConsiderationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidanceConsiderationRadius_MetaData), NewProp_AvoidanceConsiderationRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_RequestedVelocity = { "RequestedVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, RequestedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedVelocity_MetaData), NewProp_RequestedVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_LastUpdateRequestedVelocity = { "LastUpdateRequestedVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateRequestedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdateRequestedVelocity_MetaData), NewProp_LastUpdateRequestedVelocity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AvoidanceUID = { "AvoidanceUID", nullptr, (EPropertyFlags)0x0010040000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, AvoidanceUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidanceUID_MetaData), NewProp_AvoidanceUID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AvoidanceGroup = { "AvoidanceGroup", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, AvoidanceGroup), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidanceGroup_MetaData), NewProp_AvoidanceGroup_MetaData) }; // 2868412061
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GroupsToAvoid = { "GroupsToAvoid", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, GroupsToAvoid), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupsToAvoid_MetaData), NewProp_GroupsToAvoid_MetaData) }; // 2868412061
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GroupsToIgnore = { "GroupsToIgnore", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, GroupsToIgnore), Z_Construct_UScriptStruct_FNavAvoidanceMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupsToIgnore_MetaData), NewProp_GroupsToIgnore_MetaData) }; // 2868412061
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AvoidanceWeight = { "AvoidanceWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, AvoidanceWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidanceWeight_MetaData), NewProp_AvoidanceWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PendingLaunchVelocity = { "PendingLaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, PendingLaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingLaunchVelocity_MetaData), NewProp_PendingLaunchVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NavMeshProjectionInterval = { "NavMeshProjectionInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NavMeshProjectionInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionInterval_MetaData), NewProp_NavMeshProjectionInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NavMeshProjectionTimer = { "NavMeshProjectionTimer", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NavMeshProjectionTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionTimer_MetaData), NewProp_NavMeshProjectionTimer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NavMeshProjectionInterpSpeed = { "NavMeshProjectionInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NavMeshProjectionInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionInterpSpeed_MetaData), NewProp_NavMeshProjectionInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NavMeshProjectionHeightScaleUp = { "NavMeshProjectionHeightScaleUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NavMeshProjectionHeightScaleUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionHeightScaleUp_MetaData), NewProp_NavMeshProjectionHeightScaleUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NavMeshProjectionHeightScaleDown = { "NavMeshProjectionHeightScaleDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NavMeshProjectionHeightScaleDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionHeightScaleDown_MetaData), NewProp_NavMeshProjectionHeightScaleDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NavWalkingFloorDistTolerance = { "NavWalkingFloorDistTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, NavWalkingFloorDistTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavWalkingFloorDistTolerance_MetaData), NewProp_NavWalkingFloorDistTolerance_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bBasedMovementIgnorePhysicsBase_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bBasedMovementIgnorePhysicsBase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bBasedMovementIgnorePhysicsBase = { "bBasedMovementIgnorePhysicsBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bBasedMovementIgnorePhysicsBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBasedMovementIgnorePhysicsBase_MetaData), NewProp_bBasedMovementIgnorePhysicsBase_MetaData) };
void Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bStayBasedInAir_SetBit(void* Obj)
{
	((UCharacterMovementComponent*)Obj)->bStayBasedInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bStayBasedInAir = { "bStayBasedInAir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterMovementComponent), &Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bStayBasedInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStayBasedInAir_MetaData), NewProp_bStayBasedInAir_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_StayBasedInAirHeight = { "StayBasedInAirHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, StayBasedInAirHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StayBasedInAirHeight_MetaData), NewProp_StayBasedInAirHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PostPhysicsTickFunction = { "PostPhysicsTickFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, PostPhysicsTickFunction), Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostPhysicsTickFunction_MetaData), NewProp_PostPhysicsTickFunction_MetaData) }; // 969518137
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MinTimeBetweenTimeStampResets = { "MinTimeBetweenTimeStampResets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, MinTimeBetweenTimeStampResets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTimeBetweenTimeStampResets_MetaData), NewProp_MinTimeBetweenTimeStampResets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_CurrentRootMotion = { "CurrentRootMotion", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, CurrentRootMotion), Z_Construct_UScriptStruct_FRootMotionSourceGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRootMotion_MetaData), NewProp_CurrentRootMotion_MetaData) }; // 440215642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_ServerCorrectionRootMotion = { "ServerCorrectionRootMotion", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, ServerCorrectionRootMotion), Z_Construct_UScriptStruct_FRootMotionSourceGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCorrectionRootMotion_MetaData), NewProp_ServerCorrectionRootMotion_MetaData) }; // 440215642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_RootMotionParams = { "RootMotionParams", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, RootMotionParams), Z_Construct_UScriptStruct_FRootMotionMovementParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMotionParams_MetaData), NewProp_RootMotionParams_MetaData) }; // 4025040720
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AnimRootMotionVelocity = { "AnimRootMotionVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMovementComponent, AnimRootMotionVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimRootMotionVelocity_MetaData), NewProp_AnimRootMotionVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_CharacterOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxStepHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_JumpZVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_JumpOffJumpZFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_WalkableFloorAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_WalkableFloorZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GravityDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_WorldToGravityTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GravityToWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_CustomMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkSmoothingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkSmoothingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GroundFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxWalkSpeedCrouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxSwimSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxFlySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxCustomMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MinAnalogWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingFrictionFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingSubStepTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingDecelerationWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingDecelerationFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingDecelerationSwimming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_BrakingDecelerationFlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AirControlBoostMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AirControlBoostVelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_FallingLateralFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_CrouchedHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_Buoyancy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PerchRadiusThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PerchAdditionalHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_RotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseSeparateBrakingFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bApplyGravityWhileJumping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseControllerDesiredRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bOrientRotationToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bSweepWhileNavWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bMovementInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bEnableScopedMovementUpdates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bEnableServerDualMoveScopedMovementUpdates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bForceMaxAccel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bRunPhysicsWithNoController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bForceNextFloorCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bShrinkProxyCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCanWalkOffLedges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCanWalkOffLedgesWhenCrouching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkSkipProxyPredictionOnNetUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkAlwaysReplicateTransformUpdateTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bDeferUpdateMoveComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bEnablePhysicsInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bTouchForceScaledToMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bPushForceScaledToMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bPushForceUsingZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bScalePushForceToVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_DeferredUpdatedMoveComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxOutOfWaterStepHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_OutofWaterZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_StandingDownwardForceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_InitialPushForceFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PushForceFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PushForcePointZOffsetFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_TouchForceFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MinTouchForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxTouchForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_RepulsionForce,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bForceBraking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_CrouchedSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_UpperImpactNormalScale,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_LastUpdateRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_LastUpdateLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_LastUpdateVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_ServerLastTransformUpdateTimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_ServerLastClientGoodMoveAckTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_ServerLastClientAdjustmentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PendingImpulseToApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PendingForceToApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AnalogInputModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxSimulationTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxSimulationIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxJumpApexAttemptsPerSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxDepenetrationWithGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxDepenetrationWithGeometryAsProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxDepenetrationWithPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MaxDepenetrationWithPawnAsProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkSimulatedSmoothLocationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkSimulatedSmoothRotationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_ListenServerNetworkSimulatedSmoothLocationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_ListenServerNetworkSimulatedSmoothRotationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetProxyShrinkRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetProxyShrinkHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkMaxSmoothUpdateDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkNoSmoothUpdateDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkMinTimeBetweenClientAckGoodMoves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkMinTimeBetweenClientAdjustments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkMinTimeBetweenClientAdjustmentsLargeCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NetworkLargeClientCorrectionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_LedgeCheckThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_JumpOutOfWaterPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_CurrentFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_DefaultLandMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_DefaultWaterMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GroundMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bMaintainHorizontalGroundVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseVelocityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseVelocityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseVelocityZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bImpartBaseAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bJustTeleported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkUpdateReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkMovementModeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNetworkGravityDirectionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bIgnoreClientMovementErrorChecksAndCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bServerAcceptClientAuthoritativePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bNotifyApex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCheatFlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWantsToCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bCrouchMaintainsBaseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bIgnoreBaseRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bFastAttachedMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bAlwaysCheckFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseFlatBaseForFloorChecks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bPerformingJumpOff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWantsToLeaveNavWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bUseRVOAvoidance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bRequestedMoveUseAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWasSimulatingRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bAllowPhysicsRotationDuringAnimRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_FormerBaseVelocityDecayHalfLife,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bHasRequestedVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bRequestedMoveWithMaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bWasAvoidanceUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bProjectNavMeshWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bProjectNavMeshOnBothWorldChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AvoidanceConsiderationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_RequestedVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_LastUpdateRequestedVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AvoidanceUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AvoidanceGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GroupsToAvoid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_GroupsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AvoidanceWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PendingLaunchVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NavMeshProjectionInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NavMeshProjectionTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NavMeshProjectionInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NavMeshProjectionHeightScaleUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NavMeshProjectionHeightScaleDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_NavWalkingFloorDistTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bBasedMovementIgnorePhysicsBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_bStayBasedInAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_StayBasedInAirHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_PostPhysicsTickFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_MinTimeBetweenTimeStampResets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_CurrentRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_ServerCorrectionRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_RootMotionParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementComponent_Statics::NewProp_AnimRootMotionVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCharacterMovementComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_URVOAvoidanceInterface_NoRegister, (int32)VTABLE_OFFSET(UCharacterMovementComponent, IRVOAvoidanceInterface), false },  // 3824057647
	{ Z_Construct_UClass_UNetworkPredictionInterface_NoRegister, (int32)VTABLE_OFFSET(UCharacterMovementComponent, INetworkPredictionInterface), false },  // 2777829055
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterMovementComponent_Statics::ClassParams = {
	&UCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterMovementComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterMovementComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCharacterMovementComponent>()
{
	return UCharacterMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterMovementComponent);
UCharacterMovementComponent::~UCharacterMovementComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCharacterMovementComponent)
// End Class UCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterMovementComponentPostPhysicsTickFunction::StaticStruct, Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_Statics::NewStructOps, TEXT("CharacterMovementComponentPostPhysicsTickFunction"), &Z_Registration_Info_UScriptStruct_CharacterMovementComponentPostPhysicsTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterMovementComponentPostPhysicsTickFunction), 969518137U) },
		{ FCharacterMovementComponentPrePhysicsTickFunction::StaticStruct, Z_Construct_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction_Statics::NewStructOps, TEXT("CharacterMovementComponentPrePhysicsTickFunction"), &Z_Registration_Info_UScriptStruct_CharacterMovementComponentPrePhysicsTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterMovementComponentPrePhysicsTickFunction), 2832638286U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterMovementComponent, UCharacterMovementComponent::StaticClass, TEXT("UCharacterMovementComponent"), &Z_Registration_Info_UClass_UCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterMovementComponent), 1387652400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_3730683550(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
