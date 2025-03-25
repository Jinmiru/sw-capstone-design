// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicsStateAction();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EPhysicsStateAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsStateAction;
static UEnum* EPhysicsStateAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPhysicsStateAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPhysicsStateAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPhysicsStateAction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPhysicsStateAction"));
	}
	return Z_Registration_Info_UEnum_EPhysicsStateAction.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPhysicsStateAction>()
{
	return EPhysicsStateAction_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPhysicsStateAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AddAcceleration.Name", "EPhysicsStateAction::AddAcceleration" },
		{ "AddAngularImpulse.Name", "EPhysicsStateAction::AddAngularImpulse" },
		{ "AddAngularVelocity.Name", "EPhysicsStateAction::AddAngularVelocity" },
		{ "AddForce.Name", "EPhysicsStateAction::AddForce" },
		{ "AddForceAtPosition.Name", "EPhysicsStateAction::AddForceAtPosition" },
		{ "AddImpulseAtPosition.Name", "EPhysicsStateAction::AddImpulseAtPosition" },
		{ "AddLinearImpulse.Name", "EPhysicsStateAction::AddLinearImpulse" },
		{ "AddLinearVelocity.Name", "EPhysicsStateAction::AddLinearVelocity" },
		{ "AddTorque.Name", "EPhysicsStateAction::AddTorque" },
		{ "AddVelocityAtPosition.Name", "EPhysicsStateAction::AddVelocityAtPosition" },
		{ "Comment", "/**\n * Enumerates all the action types that could be applied to the physics state\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "NumActions.Name", "EPhysicsStateAction::NumActions" },
		{ "ToolTip", "Enumerates all the action types that could be applied to the physics state" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPhysicsStateAction::AddForce", (int64)EPhysicsStateAction::AddForce },
		{ "EPhysicsStateAction::AddTorque", (int64)EPhysicsStateAction::AddTorque },
		{ "EPhysicsStateAction::AddForceAtPosition", (int64)EPhysicsStateAction::AddForceAtPosition },
		{ "EPhysicsStateAction::AddLinearVelocity", (int64)EPhysicsStateAction::AddLinearVelocity },
		{ "EPhysicsStateAction::AddAngularVelocity", (int64)EPhysicsStateAction::AddAngularVelocity },
		{ "EPhysicsStateAction::AddVelocityAtPosition", (int64)EPhysicsStateAction::AddVelocityAtPosition },
		{ "EPhysicsStateAction::AddLinearImpulse", (int64)EPhysicsStateAction::AddLinearImpulse },
		{ "EPhysicsStateAction::AddAngularImpulse", (int64)EPhysicsStateAction::AddAngularImpulse },
		{ "EPhysicsStateAction::AddImpulseAtPosition", (int64)EPhysicsStateAction::AddImpulseAtPosition },
		{ "EPhysicsStateAction::AddAcceleration", (int64)EPhysicsStateAction::AddAcceleration },
		{ "EPhysicsStateAction::NumActions", (int64)EPhysicsStateAction::NumActions },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPhysicsStateAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPhysicsStateAction",
	"EPhysicsStateAction",
	Z_Construct_UEnum_Engine_EPhysicsStateAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPhysicsStateAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPhysicsStateAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPhysicsStateAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPhysicsStateAction()
{
	if (!Z_Registration_Info_UEnum_EPhysicsStateAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsStateAction.InnerSingleton, Z_Construct_UEnum_Engine_EPhysicsStateAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPhysicsStateAction.InnerSingleton;
}
// End Enum EPhysicsStateAction

// Begin Class UPawnMovementComponent Function AddInputVector
struct Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics
{
	struct PawnMovementComponent_eventAddInputVector_Parms
	{
		FVector WorldVector;
		bool bForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/**\n\x09 * Adds the given vector to the accumulated input in world space. Input vectors are usually between 0 and 1 in magnitude. \n\x09 * They are accumulated during a frame then applied as acceleration during the movement update.\n\x09 *\n\x09 * @param WorldVector\x09\x09""Direction in world space to apply input\n\x09 * @param bForce\x09\x09\x09If true always add the input, ignoring the result of IsMoveInputIgnored().\n\x09 * @see APawn::AddMovementInput()\n\x09 */" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Adds the given vector to the accumulated input in world space. Input vectors are usually between 0 and 1 in magnitude.\nThey are accumulated during a frame then applied as acceleration during the movement update.\n\n@param WorldVector           Direction in world space to apply input\n@param bForce                        If true always add the input, ignoring the result of IsMoveInputIgnored().\n@see APawn::AddMovementInput()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldVector;
	static void NewProp_bForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::NewProp_WorldVector = { "WorldVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventAddInputVector_Parms, WorldVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::NewProp_bForce_SetBit(void* Obj)
{
	((PawnMovementComponent_eventAddInputVector_Parms*)Obj)->bForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PawnMovementComponent_eventAddInputVector_Parms), &Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::NewProp_WorldVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::NewProp_bForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "AddInputVector", nullptr, nullptr, Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::PawnMovementComponent_eventAddInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::PawnMovementComponent_eventAddInputVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnMovementComponent_AddInputVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnMovementComponent::execAddInputVector)
{
	P_GET_STRUCT(FVector,Z_Param_WorldVector);
	P_GET_UBOOL(Z_Param_bForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInputVector(Z_Param_WorldVector,Z_Param_bForce);
	P_NATIVE_END;
}
// End Class UPawnMovementComponent Function AddInputVector

// Begin Class UPawnMovementComponent Function ConsumeInputVector
struct Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics
{
	struct PawnMovementComponent_eventConsumeInputVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/* Returns the pending input vector and resets it to zero.\n\x09 * This should be used during a movement update (by the Pawn or PawnMovementComponent) to prevent accumulation of control input between frames.\n\x09 * Copies the pending input vector to the saved input vector (GetLastMovementInputVector()).\n\x09 * @return The pending input vector.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Returns the pending input vector and resets it to zero.\n       * This should be used during a movement update (by the Pawn or PawnMovementComponent) to prevent accumulation of control input between frames.\n       * Copies the pending input vector to the saved input vector (GetLastMovementInputVector()).\n       * @return The pending input vector." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventConsumeInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "ConsumeInputVector", nullptr, nullptr, Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::PawnMovementComponent_eventConsumeInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::PawnMovementComponent_eventConsumeInputVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnMovementComponent::execConsumeInputVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->ConsumeInputVector();
	P_NATIVE_END;
}
// End Class UPawnMovementComponent Function ConsumeInputVector

// Begin Class UPawnMovementComponent Function GetLastInputVector
struct Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics
{
	struct PawnMovementComponent_eventGetLastInputVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/**\n\x09* Return the last input vector in world space that was processed by ConsumeInputVector(), which is usually done by the Pawn or PawnMovementComponent.\n\x09* Any user that needs to know about the input that last affected movement should use this function.\n\x09* @return The last input vector in world space that was processed by ConsumeInputVector().\n\x09* @see AddInputVector(), ConsumeInputVector(), GetPendingInputVector()\n\x09*/" },
		{ "Keywords", "GetInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Return the last input vector in world space that was processed by ConsumeInputVector(), which is usually done by the Pawn or PawnMovementComponent.\nAny user that needs to know about the input that last affected movement should use this function.\n@return The last input vector in world space that was processed by ConsumeInputVector().\n@see AddInputVector(), ConsumeInputVector(), GetPendingInputVector()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventGetLastInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "GetLastInputVector", nullptr, nullptr, Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::PawnMovementComponent_eventGetLastInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::PawnMovementComponent_eventGetLastInputVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnMovementComponent::execGetLastInputVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLastInputVector();
	P_NATIVE_END;
}
// End Class UPawnMovementComponent Function GetLastInputVector

// Begin Class UPawnMovementComponent Function GetPawnOwner
struct Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics
{
	struct PawnMovementComponent_eventGetPawnOwner_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/** Return the Pawn that owns UpdatedComponent. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Return the Pawn that owns UpdatedComponent." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventGetPawnOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "GetPawnOwner", nullptr, nullptr, Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::PawnMovementComponent_eventGetPawnOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::PawnMovementComponent_eventGetPawnOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnMovementComponent::execGetPawnOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetPawnOwner();
	P_NATIVE_END;
}
// End Class UPawnMovementComponent Function GetPawnOwner

// Begin Class UPawnMovementComponent Function GetPendingInputVector
struct Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics
{
	struct PawnMovementComponent_eventGetPendingInputVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/**\n\x09 * Return the pending input vector in world space. This is the most up-to-date value of the input vector, pending ConsumeMovementInputVector() which clears it.\n\x09 * PawnMovementComponents implementing movement usually want to use either this or ConsumeInputVector() as these functions represent the most recent state of input.\n\x09 * @return The pending input vector in world space.\n\x09 * @see AddInputVector(), ConsumeInputVector(), GetLastInputVector()\n\x09 */" },
		{ "Keywords", "GetInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Return the pending input vector in world space. This is the most up-to-date value of the input vector, pending ConsumeMovementInputVector() which clears it.\nPawnMovementComponents implementing movement usually want to use either this or ConsumeInputVector() as these functions represent the most recent state of input.\n@return The pending input vector in world space.\n@see AddInputVector(), ConsumeInputVector(), GetLastInputVector()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventGetPendingInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "GetPendingInputVector", nullptr, nullptr, Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::PawnMovementComponent_eventGetPendingInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::PawnMovementComponent_eventGetPendingInputVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnMovementComponent::execGetPendingInputVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPendingInputVector();
	P_NATIVE_END;
}
// End Class UPawnMovementComponent Function GetPendingInputVector

// Begin Class UPawnMovementComponent Function IsMoveInputIgnored
struct Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics
{
	struct PawnMovementComponent_eventIsMoveInputIgnored_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/** Helper to see if move input is ignored. If there is no Pawn or UpdatedComponent, returns true, otherwise defers to the Pawn's implementation of IsMoveInputIgnored(). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Helper to see if move input is ignored. If there is no Pawn or UpdatedComponent, returns true, otherwise defers to the Pawn's implementation of IsMoveInputIgnored()." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PawnMovementComponent_eventIsMoveInputIgnored_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PawnMovementComponent_eventIsMoveInputIgnored_Parms), &Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "IsMoveInputIgnored", nullptr, nullptr, Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::PawnMovementComponent_eventIsMoveInputIgnored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::PawnMovementComponent_eventIsMoveInputIgnored_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnMovementComponent::execIsMoveInputIgnored)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMoveInputIgnored();
	P_NATIVE_END;
}
// End Class UPawnMovementComponent Function IsMoveInputIgnored

// Begin Class UPawnMovementComponent Function MulticastAsyncPhysicsStateAction
struct PawnMovementComponent_eventMulticastAsyncPhysicsStateAction_Parms
{
	const UPrimitiveComponent* ActionComponent;
	FName BoneName;
	FAsyncPhysicsTimestamp Timestamp;
	EPhysicsStateAction ActionType;
	FVector ActionDatas;
	FVector ActionPosition;
};
static FName NAME_UPawnMovementComponent_MulticastAsyncPhysicsStateAction = FName(TEXT("MulticastAsyncPhysicsStateAction"));
void UPawnMovementComponent::MulticastAsyncPhysicsStateAction(const UPrimitiveComponent* ActionComponent, const FName BoneName, const FAsyncPhysicsTimestamp Timestamp, const EPhysicsStateAction ActionType, const FVector ActionDatas, const FVector ActionPosition)
{
	PawnMovementComponent_eventMulticastAsyncPhysicsStateAction_Parms Parms;
	Parms.ActionComponent=ActionComponent;
	Parms.BoneName=BoneName;
	Parms.Timestamp=Timestamp;
	Parms.ActionType=ActionType;
	Parms.ActionDatas=ActionDatas;
	Parms.ActionPosition=ActionPosition;
	ProcessEvent(FindFunctionChecked(NAME_UPawnMovementComponent_MulticastAsyncPhysicsStateAction),&Parms);
}
struct Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Dispatch back the physics command onto all the clients */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Dispatch back the physics command onto all the clients" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionDatas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_ActionComponent = { "ActionComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventMulticastAsyncPhysicsStateAction_Parms, ActionComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionComponent_MetaData), NewProp_ActionComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventMulticastAsyncPhysicsStateAction_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventMulticastAsyncPhysicsStateAction_Parms, Timestamp), Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) }; // 312180022
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventMulticastAsyncPhysicsStateAction_Parms, ActionType), Z_Construct_UEnum_Engine_EPhysicsStateAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionType_MetaData), NewProp_ActionType_MetaData) }; // 234545561
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_ActionDatas = { "ActionDatas", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventMulticastAsyncPhysicsStateAction_Parms, ActionDatas), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionDatas_MetaData), NewProp_ActionDatas_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_ActionPosition = { "ActionPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventMulticastAsyncPhysicsStateAction_Parms, ActionPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionPosition_MetaData), NewProp_ActionPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_ActionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_ActionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_ActionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_ActionDatas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::NewProp_ActionPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "MulticastAsyncPhysicsStateAction", nullptr, nullptr, Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::PropPointers), sizeof(PawnMovementComponent_eventMulticastAsyncPhysicsStateAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844CC3, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(PawnMovementComponent_eventMulticastAsyncPhysicsStateAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnMovementComponent::execMulticastAsyncPhysicsStateAction)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ActionComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FAsyncPhysicsTimestamp,Z_Param_Timestamp);
	P_GET_ENUM(EPhysicsStateAction,Z_Param_ActionType);
	P_GET_STRUCT(FVector,Z_Param_ActionDatas);
	P_GET_STRUCT(FVector,Z_Param_ActionPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastAsyncPhysicsStateAction_Implementation(Z_Param_ActionComponent,Z_Param_BoneName,Z_Param_Timestamp,EPhysicsStateAction(Z_Param_ActionType),Z_Param_ActionDatas,Z_Param_ActionPosition);
	P_NATIVE_END;
}
// End Class UPawnMovementComponent Function MulticastAsyncPhysicsStateAction

// Begin Class UPawnMovementComponent Function ServerAsyncPhysicsStateAction
struct PawnMovementComponent_eventServerAsyncPhysicsStateAction_Parms
{
	const UPrimitiveComponent* ActionComponent;
	FName BoneName;
	FAsyncPhysicsTimestamp Timestamp;
	EPhysicsStateAction ActionType;
	FVector ActionDatas;
	FVector ActionPosition;
};
static FName NAME_UPawnMovementComponent_ServerAsyncPhysicsStateAction = FName(TEXT("ServerAsyncPhysicsStateAction"));
void UPawnMovementComponent::ServerAsyncPhysicsStateAction(const UPrimitiveComponent* ActionComponent, const FName BoneName, const FAsyncPhysicsTimestamp Timestamp, const EPhysicsStateAction ActionType, const FVector ActionDatas, const FVector ActionPosition)
{
	PawnMovementComponent_eventServerAsyncPhysicsStateAction_Parms Parms;
	Parms.ActionComponent=ActionComponent;
	Parms.BoneName=BoneName;
	Parms.Timestamp=Timestamp;
	Parms.ActionType=ActionType;
	Parms.ActionDatas=ActionDatas;
	Parms.ActionPosition=ActionPosition;
	ProcessEvent(FindFunctionChecked(NAME_UPawnMovementComponent_ServerAsyncPhysicsStateAction),&Parms);
}
struct Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Send the physics command to execute to the server */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Send the physics command to execute to the server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionDatas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_ActionComponent = { "ActionComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventServerAsyncPhysicsStateAction_Parms, ActionComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionComponent_MetaData), NewProp_ActionComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventServerAsyncPhysicsStateAction_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventServerAsyncPhysicsStateAction_Parms, Timestamp), Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) }; // 312180022
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventServerAsyncPhysicsStateAction_Parms, ActionType), Z_Construct_UEnum_Engine_EPhysicsStateAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionType_MetaData), NewProp_ActionType_MetaData) }; // 234545561
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_ActionDatas = { "ActionDatas", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventServerAsyncPhysicsStateAction_Parms, ActionDatas), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionDatas_MetaData), NewProp_ActionDatas_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_ActionPosition = { "ActionPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnMovementComponent_eventServerAsyncPhysicsStateAction_Parms, ActionPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionPosition_MetaData), NewProp_ActionPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_ActionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_ActionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_ActionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_ActionDatas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::NewProp_ActionPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "ServerAsyncPhysicsStateAction", nullptr, nullptr, Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::PropPointers), sizeof(PawnMovementComponent_eventServerAsyncPhysicsStateAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A40CC3, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(PawnMovementComponent_eventServerAsyncPhysicsStateAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnMovementComponent::execServerAsyncPhysicsStateAction)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ActionComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FAsyncPhysicsTimestamp,Z_Param_Timestamp);
	P_GET_ENUM(EPhysicsStateAction,Z_Param_ActionType);
	P_GET_STRUCT(FVector,Z_Param_ActionDatas);
	P_GET_STRUCT(FVector,Z_Param_ActionPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerAsyncPhysicsStateAction_Implementation(Z_Param_ActionComponent,Z_Param_BoneName,Z_Param_Timestamp,EPhysicsStateAction(Z_Param_ActionType),Z_Param_ActionDatas,Z_Param_ActionPosition);
	P_NATIVE_END;
}
// End Class UPawnMovementComponent Function ServerAsyncPhysicsStateAction

// Begin Class UPawnMovementComponent
void UPawnMovementComponent::StaticRegisterNativesUPawnMovementComponent()
{
	UClass* Class = UPawnMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddInputVector", &UPawnMovementComponent::execAddInputVector },
		{ "ConsumeInputVector", &UPawnMovementComponent::execConsumeInputVector },
		{ "GetLastInputVector", &UPawnMovementComponent::execGetLastInputVector },
		{ "GetPawnOwner", &UPawnMovementComponent::execGetPawnOwner },
		{ "GetPendingInputVector", &UPawnMovementComponent::execGetPendingInputVector },
		{ "IsMoveInputIgnored", &UPawnMovementComponent::execIsMoveInputIgnored },
		{ "MulticastAsyncPhysicsStateAction", &UPawnMovementComponent::execMulticastAsyncPhysicsStateAction },
		{ "ServerAsyncPhysicsStateAction", &UPawnMovementComponent::execServerAsyncPhysicsStateAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnMovementComponent);
UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister()
{
	return UPawnMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UPawnMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * PawnMovementComponent can be used to update movement for an associated Pawn.\n * It also provides ways to accumulate and read directional input in a generic way (with AddInputVector(), ConsumeInputVector(), etc).\n * @see APawn\n */" },
		{ "IncludePath", "GameFramework/PawnMovementComponent.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "PawnMovementComponent can be used to update movement for an associated Pawn.\nIt also provides ways to accumulate and read directional input in a generic way (with AddInputVector(), ConsumeInputVector(), etc).\n@see APawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnOwner_MetaData[] = {
		{ "Comment", "/** Pawn that owns this component. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Pawn that owns this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnMovementComponent_AddInputVector, "AddInputVector" }, // 575170804
		{ &Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector, "ConsumeInputVector" }, // 1953888023
		{ &Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector, "GetLastInputVector" }, // 660478113
		{ &Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner, "GetPawnOwner" }, // 958236946
		{ &Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector, "GetPendingInputVector" }, // 2079273161
		{ &Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored, "IsMoveInputIgnored" }, // 3452386235
		{ &Z_Construct_UFunction_UPawnMovementComponent_MulticastAsyncPhysicsStateAction, "MulticastAsyncPhysicsStateAction" }, // 767426162
		{ &Z_Construct_UFunction_UPawnMovementComponent_ServerAsyncPhysicsStateAction, "ServerAsyncPhysicsStateAction" }, // 881550531
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnMovementComponent_Statics::NewProp_PawnOwner = { "PawnOwner", nullptr, (EPropertyFlags)0x0124080000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnMovementComponent, PawnOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnOwner_MetaData), NewProp_PawnOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnMovementComponent_Statics::NewProp_PawnOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPawnMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnMovementComponent_Statics::ClassParams = {
	&UPawnMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPawnMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPawnMovementComponent_Statics::PropPointers),
	0,
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnMovementComponent()
{
	if (!Z_Registration_Info_UClass_UPawnMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnMovementComponent.OuterSingleton, Z_Construct_UClass_UPawnMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnMovementComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPawnMovementComponent>()
{
	return UPawnMovementComponent::StaticClass();
}
UPawnMovementComponent::UPawnMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnMovementComponent);
UPawnMovementComponent::~UPawnMovementComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPawnMovementComponent)
// End Class UPawnMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPhysicsStateAction_StaticEnum, TEXT("EPhysicsStateAction"), &Z_Registration_Info_UEnum_EPhysicsStateAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 234545561U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnMovementComponent, UPawnMovementComponent::StaticClass, TEXT("UPawnMovementComponent"), &Z_Registration_Info_UClass_UPawnMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnMovementComponent), 1636693846U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_1611023253(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
