// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ADefaultPawn Function LookUpAtRate
struct Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics
{
	struct DefaultPawn_eventLookUpAtRate_Parms
	{
		float Rate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09* Called via input to look up at a given rate (or down if Rate is negative).\n\x09* @param Rate\x09This is a normalized rate, i.e. 1.0 means 100% of desired turn rate\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Called via input to look up at a given rate (or down if Rate is negative).\n@param Rate   This is a normalized rate, i.e. 1.0 means 100% of desired turn rate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefaultPawn_eventLookUpAtRate_Parms, Rate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::NewProp_Rate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, nullptr, "LookUpAtRate", nullptr, nullptr, Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::DefaultPawn_eventLookUpAtRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::DefaultPawn_eventLookUpAtRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefaultPawn_LookUpAtRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefaultPawn::execLookUpAtRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LookUpAtRate(Z_Param_Rate);
	P_NATIVE_END;
}
// End Class ADefaultPawn Function LookUpAtRate

// Begin Class ADefaultPawn Function MoveForward
struct Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics
{
	struct DefaultPawn_eventMoveForward_Parms
	{
		float Val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Input callback to move forward in local space (or backward if Val is negative).\n\x09 * @param Val Amount of movement in the forward direction (or backward if negative).\n\x09 * @see APawn::AddMovementInput()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Input callback to move forward in local space (or backward if Val is negative).\n@param Val Amount of movement in the forward direction (or backward if negative).\n@see APawn::AddMovementInput()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefaultPawn_eventMoveForward_Parms, Val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::NewProp_Val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::DefaultPawn_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::DefaultPawn_eventMoveForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefaultPawn_MoveForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefaultPawn::execMoveForward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveForward(Z_Param_Val);
	P_NATIVE_END;
}
// End Class ADefaultPawn Function MoveForward

// Begin Class ADefaultPawn Function MoveRight
struct Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics
{
	struct DefaultPawn_eventMoveRight_Parms
	{
		float Val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Input callback to strafe right in local space (or left if Val is negative).\n\x09 * @param Val Amount of movement in the right direction (or left if negative).\n\x09 * @see APawn::AddMovementInput()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Input callback to strafe right in local space (or left if Val is negative).\n@param Val Amount of movement in the right direction (or left if negative).\n@see APawn::AddMovementInput()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefaultPawn_eventMoveRight_Parms, Val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::NewProp_Val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, nullptr, "MoveRight", nullptr, nullptr, Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::DefaultPawn_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::DefaultPawn_eventMoveRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefaultPawn_MoveRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefaultPawn::execMoveRight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveRight(Z_Param_Val);
	P_NATIVE_END;
}
// End Class ADefaultPawn Function MoveRight

// Begin Class ADefaultPawn Function MoveUp_World
struct Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics
{
	struct DefaultPawn_eventMoveUp_World_Parms
	{
		float Val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Input callback to move up in world space (or down if Val is negative).\n\x09 * @param Val Amount of movement in the world up direction (or down if negative).\n\x09 * @see APawn::AddMovementInput()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Input callback to move up in world space (or down if Val is negative).\n@param Val Amount of movement in the world up direction (or down if negative).\n@see APawn::AddMovementInput()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefaultPawn_eventMoveUp_World_Parms, Val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::NewProp_Val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, nullptr, "MoveUp_World", nullptr, nullptr, Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::DefaultPawn_eventMoveUp_World_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::DefaultPawn_eventMoveUp_World_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefaultPawn_MoveUp_World()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefaultPawn::execMoveUp_World)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveUp_World(Z_Param_Val);
	P_NATIVE_END;
}
// End Class ADefaultPawn Function MoveUp_World

// Begin Class ADefaultPawn Function TurnAtRate
struct Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics
{
	struct DefaultPawn_eventTurnAtRate_Parms
	{
		float Rate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Called via input to turn at a given rate.\n\x09 * @param Rate\x09This is a normalized rate, i.e. 1.0 means 100% of desired turn rate\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Called via input to turn at a given rate.\n@param Rate  This is a normalized rate, i.e. 1.0 means 100% of desired turn rate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefaultPawn_eventTurnAtRate_Parms, Rate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::NewProp_Rate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, nullptr, "TurnAtRate", nullptr, nullptr, Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::DefaultPawn_eventTurnAtRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::DefaultPawn_eventTurnAtRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefaultPawn_TurnAtRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefaultPawn::execTurnAtRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TurnAtRate(Z_Param_Rate);
	P_NATIVE_END;
}
// End Class ADefaultPawn Function TurnAtRate

// Begin Class ADefaultPawn
void ADefaultPawn::StaticRegisterNativesADefaultPawn()
{
	UClass* Class = ADefaultPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LookUpAtRate", &ADefaultPawn::execLookUpAtRate },
		{ "MoveForward", &ADefaultPawn::execMoveForward },
		{ "MoveRight", &ADefaultPawn::execMoveRight },
		{ "MoveUp_World", &ADefaultPawn::execMoveUp_World },
		{ "TurnAtRate", &ADefaultPawn::execTurnAtRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultPawn);
UClass* Z_Construct_UClass_ADefaultPawn_NoRegister()
{
	return ADefaultPawn::StaticClass();
}
struct Z_Construct_UClass_ADefaultPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * DefaultPawn implements a simple Pawn with spherical collision and built-in flying movement.\n * @see UFloatingPawnMovement\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameFramework/DefaultPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "DefaultPawn implements a simple Pawn with spherical collision and built-in flying movement.\n@see UFloatingPawnMovement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Base lookup rate, in deg/sec. Other scaling may affect final lookup rate. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Base lookup rate, in deg/sec. Other scaling may affect final lookup rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "Comment", "/** DefaultPawn movement component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "DefaultPawn movement component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "Comment", "/** DefaultPawn collision component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "DefaultPawn collision component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "Comment", "/** The mesh associated with this Pawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "The mesh associated with this Pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddDefaultMovementBindings_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** If true, adds default input bindings for movement and camera look. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "If true, adds default input bindings for movement and camera look." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static void NewProp_bAddDefaultMovementBindings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddDefaultMovementBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultPawn_LookUpAtRate, "LookUpAtRate" }, // 4190285969
		{ &Z_Construct_UFunction_ADefaultPawn_MoveForward, "MoveForward" }, // 4527582
		{ &Z_Construct_UFunction_ADefaultPawn_MoveRight, "MoveRight" }, // 1829018533
		{ &Z_Construct_UFunction_ADefaultPawn_MoveUp_World, "MoveUp_World" }, // 3839741157
		{ &Z_Construct_UFunction_ADefaultPawn_TurnAtRate, "TurnAtRate" }, // 3752852534
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultPawn, BaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTurnRate_MetaData), NewProp_BaseTurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultPawn, BaseLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData), NewProp_BaseLookUpRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultPawn, MovementComponent), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultPawn_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultPawn, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefaultPawn, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
void Z_Construct_UClass_ADefaultPawn_Statics::NewProp_bAddDefaultMovementBindings_SetBit(void* Obj)
{
	((ADefaultPawn*)Obj)->bAddDefaultMovementBindings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefaultPawn_Statics::NewProp_bAddDefaultMovementBindings = { "bAddDefaultMovementBindings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ADefaultPawn), &Z_Construct_UClass_ADefaultPawn_Statics::NewProp_bAddDefaultMovementBindings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddDefaultMovementBindings_MetaData), NewProp_bAddDefaultMovementBindings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseLookUpRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPawn_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPawn_Statics::NewProp_bAddDefaultMovementBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADefaultPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultPawn_Statics::ClassParams = {
	&ADefaultPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADefaultPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPawn_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefaultPawn()
{
	if (!Z_Registration_Info_UClass_ADefaultPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultPawn.OuterSingleton, Z_Construct_UClass_ADefaultPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefaultPawn.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ADefaultPawn>()
{
	return ADefaultPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultPawn);
ADefaultPawn::~ADefaultPawn() {}
// End Class ADefaultPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultPawn, ADefaultPawn::StaticClass, TEXT("ADefaultPawn"), &Z_Registration_Info_UClass_ADefaultPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultPawn), 1045481999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_1636059547(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
