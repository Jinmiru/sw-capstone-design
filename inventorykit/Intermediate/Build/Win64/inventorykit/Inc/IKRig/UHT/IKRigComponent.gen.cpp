// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/ActorComponents/IKRigComponent.h"
#include "IKRig/Public/Rig/IKRigDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
IKRIG_API UClass* Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRigComponent();
IKRIG_API UClass* Z_Construct_UClass_UIKRigComponent_NoRegister();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigGoal();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Class UIKRigComponent Function ClearAllGoals
struct Z_Construct_UFunction_UIKRigComponent_ClearAllGoals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IKRigGoals" },
		{ "Comment", "/** Remove all stored goals in this component. */" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigComponent.h" },
		{ "ToolTip", "Remove all stored goals in this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigComponent_ClearAllGoals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigComponent, nullptr, "ClearAllGoals", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_ClearAllGoals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRigComponent_ClearAllGoals_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIKRigComponent_ClearAllGoals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigComponent_ClearAllGoals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRigComponent::execClearAllGoals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllGoals();
	P_NATIVE_END;
}
// End Class UIKRigComponent Function ClearAllGoals

// Begin Class UIKRigComponent Function SetIKRigGoal
struct Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics
{
	struct IKRigComponent_eventSetIKRigGoal_Parms
	{
		FIKRigGoal Goal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IKRigGoals" },
		{ "Comment", "/** Apply a IKRigGoal and store it on this rig. Goal transform assumed in Component Space of Skeletal Mesh. */" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigComponent.h" },
		{ "ToolTip", "Apply a IKRigGoal and store it on this rig. Goal transform assumed in Component Space of Skeletal Mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoal_Parms, Goal), Z_Construct_UScriptStruct_FIKRigGoal, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) }; // 81720564
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigComponent, nullptr, "SetIKRigGoal", nullptr, nullptr, Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::IKRigComponent_eventSetIKRigGoal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::IKRigComponent_eventSetIKRigGoal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRigComponent::execSetIKRigGoal)
{
	P_GET_STRUCT_REF(FIKRigGoal,Z_Param_Out_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIKRigGoal(Z_Param_Out_Goal);
	P_NATIVE_END;
}
// End Class UIKRigComponent Function SetIKRigGoal

// Begin Class UIKRigComponent Function SetIKRigGoalPositionAndRotation
struct Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics
{
	struct IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms
	{
		FName GoalName;
		FVector Position;
		FQuat Rotation;
		float PositionAlpha;
		float RotationAlpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IKRigGoals" },
		{ "Comment", "/** Set an IK Rig Goal position and rotation (assumed in Component Space of Skeletal Mesh) with separate alpha values. */" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigComponent.h" },
		{ "ToolTip", "Set an IK Rig Goal position and rotation (assumed in Component Space of Skeletal Mesh) with separate alpha values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlpha_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms, GoalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalName_MetaData), NewProp_GoalName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_PositionAlpha = { "PositionAlpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms, PositionAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionAlpha_MetaData), NewProp_PositionAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms, RotationAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlpha_MetaData), NewProp_RotationAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_GoalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_PositionAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::NewProp_RotationAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigComponent, nullptr, "SetIKRigGoalPositionAndRotation", nullptr, nullptr, Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::IKRigComponent_eventSetIKRigGoalPositionAndRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRigComponent::execSetIKRigGoalPositionAndRotation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PositionAlpha);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RotationAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIKRigGoalPositionAndRotation(Z_Param_GoalName,Z_Param_Position,Z_Param_Rotation,Z_Param_PositionAlpha,Z_Param_RotationAlpha);
	P_NATIVE_END;
}
// End Class UIKRigComponent Function SetIKRigGoalPositionAndRotation

// Begin Class UIKRigComponent Function SetIKRigGoalTransform
struct Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics
{
	struct IKRigComponent_eventSetIKRigGoalTransform_Parms
	{
		FName GoalName;
		FTransform Transform;
		float PositionAlpha;
		float RotationAlpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IKRigGoals" },
		{ "Comment", "/** Set an IK Rig Goal transform (assumed in Component Space of Skeletal Mesh) with separate alpha values. */" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigComponent.h" },
		{ "ToolTip", "Set an IK Rig Goal transform (assumed in Component Space of Skeletal Mesh) with separate alpha values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlpha_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalTransform_Parms, GoalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalName_MetaData), NewProp_GoalName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_PositionAlpha = { "PositionAlpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalTransform_Parms, PositionAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionAlpha_MetaData), NewProp_PositionAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRigComponent_eventSetIKRigGoalTransform_Parms, RotationAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlpha_MetaData), NewProp_RotationAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_GoalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_PositionAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::NewProp_RotationAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigComponent, nullptr, "SetIKRigGoalTransform", nullptr, nullptr, Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::IKRigComponent_eventSetIKRigGoalTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::IKRigComponent_eventSetIKRigGoalTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRigComponent::execSetIKRigGoalTransform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PositionAlpha);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RotationAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIKRigGoalTransform(Z_Param_GoalName,Z_Param_Transform,Z_Param_PositionAlpha,Z_Param_RotationAlpha);
	P_NATIVE_END;
}
// End Class UIKRigComponent Function SetIKRigGoalTransform

// Begin Class UIKRigComponent
void UIKRigComponent::StaticRegisterNativesUIKRigComponent()
{
	UClass* Class = UIKRigComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAllGoals", &UIKRigComponent::execClearAllGoals },
		{ "SetIKRigGoal", &UIKRigComponent::execSetIKRigGoal },
		{ "SetIKRigGoalPositionAndRotation", &UIKRigComponent::execSetIKRigGoalPositionAndRotation },
		{ "SetIKRigGoalTransform", &UIKRigComponent::execSetIKRigGoalTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigComponent);
UClass* Z_Construct_UClass_UIKRigComponent_NoRegister()
{
	return UIKRigComponent::StaticClass();
}
struct Z_Construct_UClass_UIKRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "IKRig" },
		{ "IncludePath", "ActorComponents/IKRigComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIKRigComponent_ClearAllGoals, "ClearAllGoals" }, // 3377600603
		{ &Z_Construct_UFunction_UIKRigComponent_SetIKRigGoal, "SetIKRigGoal" }, // 2511719589
		{ &Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalPositionAndRotation, "SetIKRigGoalPositionAndRotation" }, // 4290318437
		{ &Z_Construct_UFunction_UIKRigComponent_SetIKRigGoalTransform, "SetIKRigGoalTransform" }, // 2302618855
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIKRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIKRigComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister, (int32)VTABLE_OFFSET(UIKRigComponent, IIKGoalCreatorInterface), false },  // 219931750
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigComponent_Statics::ClassParams = {
	&UIKRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRigComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRigComponent()
{
	if (!Z_Registration_Info_UClass_UIKRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigComponent.OuterSingleton, Z_Construct_UClass_UIKRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRigComponent.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRigComponent>()
{
	return UIKRigComponent::StaticClass();
}
UIKRigComponent::UIKRigComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigComponent);
UIKRigComponent::~UIKRigComponent() {}
// End Class UIKRigComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIKRigComponent, UIKRigComponent::StaticClass, TEXT("UIKRigComponent"), &Z_Registration_Info_UClass_UIKRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigComponent), 876308378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_3996997423(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
