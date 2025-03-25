// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAngularDriveConstraint();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConeConstraint();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceAccessor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintProfileProperties();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearConstraint();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearDriveConstraint();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTwistConstraint();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EConstraintTransformComponentFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConstraintTransformComponentFlags;
static UEnum* EConstraintTransformComponentFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConstraintTransformComponentFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConstraintTransformComponentFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EConstraintTransformComponentFlags"));
	}
	return Z_Registration_Info_UEnum_EConstraintTransformComponentFlags.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EConstraintTransformComponentFlags>()
{
	return EConstraintTransformComponentFlags_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Name", "EConstraintTransformComponentFlags::All" },
		{ "AllChild.Name", "EConstraintTransformComponentFlags::AllChild" },
		{ "AllParent.Name", "EConstraintTransformComponentFlags::AllParent" },
		{ "AllPosition.Name", "EConstraintTransformComponentFlags::AllPosition" },
		{ "AllRotation.Name", "EConstraintTransformComponentFlags::AllRotation" },
		{ "ChildPosition.Name", "EConstraintTransformComponentFlags::ChildPosition" },
		{ "ChildRotation.Name", "EConstraintTransformComponentFlags::ChildRotation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "None.Name", "EConstraintTransformComponentFlags::None" },
		{ "ParentPosition.Name", "EConstraintTransformComponentFlags::ParentPosition" },
		{ "ParentRotation.Name", "EConstraintTransformComponentFlags::ParentRotation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConstraintTransformComponentFlags::None", (int64)EConstraintTransformComponentFlags::None },
		{ "EConstraintTransformComponentFlags::ChildPosition", (int64)EConstraintTransformComponentFlags::ChildPosition },
		{ "EConstraintTransformComponentFlags::ChildRotation", (int64)EConstraintTransformComponentFlags::ChildRotation },
		{ "EConstraintTransformComponentFlags::ParentPosition", (int64)EConstraintTransformComponentFlags::ParentPosition },
		{ "EConstraintTransformComponentFlags::ParentRotation", (int64)EConstraintTransformComponentFlags::ParentRotation },
		{ "EConstraintTransformComponentFlags::AllChild", (int64)EConstraintTransformComponentFlags::AllChild },
		{ "EConstraintTransformComponentFlags::AllParent", (int64)EConstraintTransformComponentFlags::AllParent },
		{ "EConstraintTransformComponentFlags::AllPosition", (int64)EConstraintTransformComponentFlags::AllPosition },
		{ "EConstraintTransformComponentFlags::AllRotation", (int64)EConstraintTransformComponentFlags::AllRotation },
		{ "EConstraintTransformComponentFlags::All", (int64)EConstraintTransformComponentFlags::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EConstraintTransformComponentFlags",
	"EConstraintTransformComponentFlags",
	Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags()
{
	if (!Z_Registration_Info_UEnum_EConstraintTransformComponentFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConstraintTransformComponentFlags.InnerSingleton, Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConstraintTransformComponentFlags.InnerSingleton;
}
// End Enum EConstraintTransformComponentFlags

// Begin ScriptStruct FConstraintProfileProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintProfileProperties;
class UScriptStruct* FConstraintProfileProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintProfileProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintProfileProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintProfileProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintProfileProperties"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintProfileProperties.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintProfileProperties>()
{
	return FConstraintProfileProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Container for properties of a physics constraint that can be easily swapped at runtime. This is useful for switching different setups when going from ragdoll to standup for example */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Container for properties of a physics constraint that can be easily swapped at runtime. This is useful for switching different setups when going from ragdoll to standup for example" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionLinearTolerance_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If the joint error is above this distance after the solve phase, the child body will be teleported to fix the error. Only used if bEnableProjection is true. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "If the joint error is above this distance after the solve phase, the child body will be teleported to fix the error. Only used if bEnableProjection is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngularTolerance_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If the joint error is above this distance after the solve phase, the child body will be teleported to fix the error. Only used if bEnableProjection is true. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "If the joint error is above this distance after the solve phase, the child body will be teleported to fix the error. Only used if bEnableProjection is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionLinearAlpha_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**  How much semi-physical linear projection correction to apply [0-1]. Only used if bEnableProjection is true and if hard limits are used. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "How much semi-physical linear projection correction to apply [0-1]. Only used if bEnableProjection is true and if hard limits are used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngularAlpha_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much semi-physical angular projection correction to apply [0-1]. Only used if bEnableProjection is true and if hard limits are used. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "How much semi-physical angular projection correction to apply [0-1]. Only used if bEnableProjection is true and if hard limits are used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShockPropagationAlpha_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** \n\x09 * How much shock propagation to apply [0-1]. Shock propagation increases the mass of the parent body for the last iteration of the\n\x09 * position and velocity solve phases. This can help stiffen up joint chains, but is also prone to introducing energy down the chain\n\x09 * especially at high alpha. Only used in bEnableShockPropagation is true.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "How much shock propagation to apply [0-1]. Shock propagation increases the mass of the parent body for the last iteration of the\nposition and velocity solve phases. This can help stiffen up joint chains, but is also prone to introducing energy down the chain\nespecially at high alpha. Only used in bEnableShockPropagation is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearBreakThreshold_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Force needed to break the distance constraint. */" },
		{ "editcondition", "bLinearBreakable" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Force needed to break the distance constraint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearPlasticityThreshold_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** [Chaos Only] Percent threshold from center of mass distance needed to reset the linear drive position target. This value can be greater than 1. */" },
		{ "editcondition", "bLinearPlasticity" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "[Chaos Only] Percent threshold from center of mass distance needed to reset the linear drive position target. This value can be greater than 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularBreakThreshold_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Torque needed to break the joint. */" },
		{ "editcondition", "bAngularBreakable" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Torque needed to break the joint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularPlasticityThreshold_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** [Chaos Only] Degree threshold from target angle needed to reset the target angle.*/" },
		{ "editcondition", "bAngularPlasticity" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "[Chaos Only] Degree threshold from target angle needed to reset the target angle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactTransferScale_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** [Chaos Only] Colliison transfer on parent from the joints child. Range is 0.0-MAX*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "[Chaos Only] Colliison transfer on parent from the joints child. Range is 0.0-MAX" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearLimit_MetaData[] = {
		{ "Category", "Linear" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeLimit_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimit_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// Disable collision between bodies joined by this constraint.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Disable collision between bodies joined by this constraint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParentDominates_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// When set, the parent body in a constraint will not be affected by the motion of the child\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "When set, the parent body in a constraint will not be affected by the motion of the child" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableShockPropagation_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/**\n\x09 * Shock propagation increases the mass of the parent body for the last iteration of the position and velocity solve phases. \n\x09 * This can help stiffen up joint chains, but is also prone to introducing energy down the chain especially at high alpha.\n\x09 * It also does not work well if there are collisions on the bodies preventing the joints from correctly resolving - this \n\x09 * can lead to jitter, especially if collision shock propagation is also enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Shock propagation increases the mass of the parent body for the last iteration of the position and velocity solve phases.\nThis can help stiffen up joint chains, but is also prone to introducing energy down the chain especially at high alpha.\nIt also does not work well if there are collisions on the bodies preventing the joints from correctly resolving - this\ncan lead to jitter, especially if collision shock propagation is also enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProjection_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/**\n\x09* Projection is a post-solve position and angular fixup consisting of two correction procedures. First, if the constraint limits are exceeded\n\x09* by more that the Linear or Angular Tolerance, the bodies are teleported to eliminate the error. Second, if the constraint limits are exceeded\n\x09* by less than the tolerance, a semi-physical correction is applied,  with the parent body in the constraint is treated as having infinite mass.\n\x09* The teleport tolerance are controlled by ProjectionLinearTolerance and ProjectionAngularTolerance. The semi-physical correction is controlled\n\x09* by ProjectionLinearAlpha and ProjectionAnguilarAlpha. You may have one, none, or both systems enabled at the same time.\n\x09*\n\x09* Projection only works well if the chain is not interacting with other objects (e.g., through collisions) because the projection of the bodies in\n\x09* the chain will cause other constraints to be violated. Likewise, if a body is influenced by multiple constraints, then enabling projection on more\n\x09* than one constraint may lead to unexpected results - the  \"last\" constraint would win but the order in which constraints are solved cannot be directly controlled.\n\x09*\n\x09* Note that the semi-physical projection (ProjectionLinearAlpha and ProjectionAngularAlpha) is only applied to hard-limit constraints and not those with\n\x09* soft limits because the soft limit is the point at which the soft-constraint (spring) kicks in, and not really a limit on how far the joint can be separated.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Projection is a post-solve position and angular fixup consisting of two correction procedures. First, if the constraint limits are exceeded\nby more that the Linear or Angular Tolerance, the bodies are teleported to eliminate the error. Second, if the constraint limits are exceeded\nby less than the tolerance, a semi-physical correction is applied,  with the parent body in the constraint is treated as having infinite mass.\nThe teleport tolerance are controlled by ProjectionLinearTolerance and ProjectionAngularTolerance. The semi-physical correction is controlled\nby ProjectionLinearAlpha and ProjectionAnguilarAlpha. You may have one, none, or both systems enabled at the same time.\n\nProjection only works well if the chain is not interacting with other objects (e.g., through collisions) because the projection of the bodies in\nthe chain will cause other constraints to be violated. Likewise, if a body is influenced by multiple constraints, then enabling projection on more\nthan one constraint may lead to unexpected results - the  \"last\" constraint would win but the order in which constraints are solved cannot be directly controlled.\n\nNote that the semi-physical projection (ProjectionLinearAlpha and ProjectionAngularAlpha) is only applied to hard-limit constraints and not those with\nsoft limits because the soft limit is the point at which the soft-constraint (spring) kicks in, and not really a limit on how far the joint can be separated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMassConditioning_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** \n\x09 * Whether mass conditioning is enabled for this joint. Mass conditioning applies a non-physical scale to the mass and inertia of the two\n\x09 * bodies that only affects this joint, so that the mass and inertia ratios are smaller. This helps stabilize joints where the bodies\n\x09 * are very different sizes, and especially when the parent body is heavier than the child. However, it can lead to unrealistic\n\x09 * behaviour, especially when collisions are involved.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether mass conditioning is enabled for this joint. Mass conditioning applies a non-physical scale to the mass and inertia of the two\nbodies that only affects this joint, so that the mass and inertia ratios are smaller. This helps stabilize joints where the bodies\nare very different sizes, and especially when the parent body is heavier than the child. However, it can lead to unrealistic\nbehaviour, especially when collisions are involved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularBreakable_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Whether it is possible to break the joint with angular force. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether it is possible to break the joint with angular force." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularPlasticity_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Whether it is possible to reset target rotations from the angular displacement. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether it is possible to reset target rotations from the angular displacement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearBreakable_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Whether it is possible to break the joint with linear force. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether it is possible to break the joint with linear force." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearPlasticity_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Whether it is possible to reset spring rest length from the linear deformation. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether it is possible to reset spring rest length from the linear deformation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDrive_MetaData[] = {
		{ "Category", "Linear" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDrive_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearPlasticityType_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Whether linear plasticity has a operation mode [free]*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether linear plasticity has a operation mode [free]" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShockPropagationAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearPlasticityThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularPlasticityThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactTransferScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConeLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TwistLimit;
	static void NewProp_bDisableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
	static void NewProp_bParentDominates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentDominates;
	static void NewProp_bEnableShockPropagation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableShockPropagation;
	static void NewProp_bEnableProjection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProjection;
	static void NewProp_bEnableMassConditioning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMassConditioning;
	static void NewProp_bAngularBreakable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
	static void NewProp_bAngularPlasticity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularPlasticity;
	static void NewProp_bLinearBreakable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
	static void NewProp_bLinearPlasticity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearPlasticity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearDrive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularDrive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinearPlasticityType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintProfileProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearTolerance = { "ProjectionLinearTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, ProjectionLinearTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionLinearTolerance_MetaData), NewProp_ProjectionLinearTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularTolerance = { "ProjectionAngularTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, ProjectionAngularTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionAngularTolerance_MetaData), NewProp_ProjectionAngularTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearAlpha = { "ProjectionLinearAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, ProjectionLinearAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionLinearAlpha_MetaData), NewProp_ProjectionLinearAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularAlpha = { "ProjectionAngularAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, ProjectionAngularAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionAngularAlpha_MetaData), NewProp_ProjectionAngularAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ShockPropagationAlpha = { "ShockPropagationAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, ShockPropagationAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShockPropagationAlpha_MetaData), NewProp_ShockPropagationAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearBreakThreshold = { "LinearBreakThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearBreakThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearBreakThreshold_MetaData), NewProp_LinearBreakThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityThreshold = { "LinearPlasticityThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearPlasticityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearPlasticityThreshold_MetaData), NewProp_LinearPlasticityThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularBreakThreshold = { "AngularBreakThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, AngularBreakThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularBreakThreshold_MetaData), NewProp_AngularBreakThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularPlasticityThreshold = { "AngularPlasticityThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, AngularPlasticityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularPlasticityThreshold_MetaData), NewProp_AngularPlasticityThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ContactTransferScale = { "ContactTransferScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, ContactTransferScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactTransferScale_MetaData), NewProp_ContactTransferScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearLimit = { "LinearLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearLimit), Z_Construct_UScriptStruct_FLinearConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearLimit_MetaData), NewProp_LinearLimit_MetaData) }; // 3157075599
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ConeLimit = { "ConeLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, ConeLimit), Z_Construct_UScriptStruct_FConeConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeLimit_MetaData), NewProp_ConeLimit_MetaData) }; // 3650821860
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_TwistLimit = { "TwistLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, TwistLimit), Z_Construct_UScriptStruct_FTwistConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistLimit_MetaData), NewProp_TwistLimit_MetaData) }; // 2903573168
void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
{
	((FConstraintProfileProperties*)Obj)->bDisableCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableCollision_MetaData), NewProp_bDisableCollision_MetaData) };
void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates_SetBit(void* Obj)
{
	((FConstraintProfileProperties*)Obj)->bParentDominates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates = { "bParentDominates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParentDominates_MetaData), NewProp_bParentDominates_MetaData) };
void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableShockPropagation_SetBit(void* Obj)
{
	((FConstraintProfileProperties*)Obj)->bEnableShockPropagation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableShockPropagation = { "bEnableShockPropagation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableShockPropagation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableShockPropagation_MetaData), NewProp_bEnableShockPropagation_MetaData) };
void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection_SetBit(void* Obj)
{
	((FConstraintProfileProperties*)Obj)->bEnableProjection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection = { "bEnableProjection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProjection_MetaData), NewProp_bEnableProjection_MetaData) };
void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableMassConditioning_SetBit(void* Obj)
{
	((FConstraintProfileProperties*)Obj)->bEnableMassConditioning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableMassConditioning = { "bEnableMassConditioning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableMassConditioning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMassConditioning_MetaData), NewProp_bEnableMassConditioning_MetaData) };
void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
{
	((FConstraintProfileProperties*)Obj)->bAngularBreakable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable = { "bAngularBreakable", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularBreakable_MetaData), NewProp_bAngularBreakable_MetaData) };
void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularPlasticity_SetBit(void* Obj)
{
	((FConstraintProfileProperties*)Obj)->bAngularPlasticity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularPlasticity = { "bAngularPlasticity", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularPlasticity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularPlasticity_MetaData), NewProp_bAngularPlasticity_MetaData) };
void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
{
	((FConstraintProfileProperties*)Obj)->bLinearBreakable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable = { "bLinearBreakable", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearBreakable_MetaData), NewProp_bLinearBreakable_MetaData) };
void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearPlasticity_SetBit(void* Obj)
{
	((FConstraintProfileProperties*)Obj)->bLinearPlasticity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearPlasticity = { "bLinearPlasticity", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearPlasticity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearPlasticity_MetaData), NewProp_bLinearPlasticity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearDrive = { "LinearDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearDrive), Z_Construct_UScriptStruct_FLinearDriveConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDrive_MetaData), NewProp_LinearDrive_MetaData) }; // 4275693197
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularDrive = { "AngularDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, AngularDrive), Z_Construct_UScriptStruct_FAngularDriveConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDrive_MetaData), NewProp_AngularDrive_MetaData) }; // 1418170016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityType = { "LinearPlasticityType", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearPlasticityType), Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearPlasticityType_MetaData), NewProp_LinearPlasticityType_MetaData) }; // 3475654961
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ShockPropagationAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearBreakThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularBreakThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularPlasticityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ContactTransferScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ConeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_TwistLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableShockPropagation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableMassConditioning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularPlasticity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearPlasticity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ConstraintProfileProperties",
	Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::PropPointers),
	sizeof(FConstraintProfileProperties),
	alignof(FConstraintProfileProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintProfileProperties()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintProfileProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintProfileProperties.InnerSingleton, Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintProfileProperties.InnerSingleton;
}
// End ScriptStruct FConstraintProfileProperties

// Begin ScriptStruct FConstraintInstanceBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintInstanceBase;
class UScriptStruct* FConstraintInstanceBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintInstanceBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintInstanceBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintInstanceBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintInstanceBase"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintInstanceBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintInstanceBase>()
{
	return FConstraintInstanceBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintInstanceBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ConstraintInstanceBase",
	nullptr,
	0,
	sizeof(FConstraintInstanceBase),
	alignof(FConstraintInstanceBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceBase()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintInstanceBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintInstanceBase.InnerSingleton, Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintInstanceBase.InnerSingleton;
}
// End ScriptStruct FConstraintInstanceBase

// Begin ScriptStruct FConstraintInstance
static_assert(std::is_polymorphic<FConstraintInstance>() == std::is_polymorphic<FConstraintInstanceBase>(), "USTRUCT FConstraintInstance cannot be polymorphic unless super FConstraintInstanceBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintInstance;
class UScriptStruct* FConstraintInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintInstance"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintInstance>()
{
	return FConstraintInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Container for a physics representation of an object. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Container for a physics representation of an object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointName_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Name of bone that this joint is associated with. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Name of bone that this joint is associated with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** \n\x09 *\x09Name of first bone (body) that this constraint is connecting. \n\x09 *\x09This will be the 'child' bone in a PhysicsAsset.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Name of first bone (body) that this constraint is connecting.\nThis will be the 'child' bone in a PhysicsAsset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** \n\x09 *\x09Name of second bone (body) that this constraint is connecting. \n\x09 *\x09This will be the 'parent' bone in a PhysicsAset.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Name of second bone (body) that this constraint is connecting.\nThis will be the 'parent' bone in a PhysicsAset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pos1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Location of constraint in Body1 reference frame (usually the \"child\" body for skeletal meshes). */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Location of constraint in Body1 reference frame (usually the \"child\" body for skeletal meshes)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriAxis1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Primary (twist) axis in Body1 reference frame. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Primary (twist) axis in Body1 reference frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecAxis1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Secondary axis in Body1 reference frame. Orthogonal to PriAxis1. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Secondary axis in Body1 reference frame. Orthogonal to PriAxis1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pos2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Location of constraint in Body2 reference frame (usually the \"parent\" body for skeletal meshes). */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Location of constraint in Body2 reference frame (usually the \"parent\" body for skeletal meshes)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriAxis2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Primary (twist) axis in Body2 reference frame. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Primary (twist) axis in Body2 reference frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecAxis2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Secondary axis in Body2 reference frame. Orthogonal to PriAxis2. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Secondary axis in Body2 reference frame. Orthogonal to PriAxis2." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularRotationOffset_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Specifies the angular offset between the two frames of reference. By default limit goes from (-Angle, +Angle)\n\x09* This allows you to bias the limit for swing1 swing2 and twist. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Specifies the angular offset between the two frames of reference. By default limit goes from (-Angle, +Angle)\nThis allows you to bias the limit for swing1 swing2 and twist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleLinearLimits_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** If true, linear limits scale using the absolute min of the 3d scale of the owning component */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "If true, linear limits scale using the absolute min of the 3d scale of the owning component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileInstance_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "//Constraint Data (properties easily swapped at runtime based on different constraint profiles)\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Constraint Data (properties easily swapped at runtime based on different constraint profiles)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProjection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionLinearTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngularTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearXMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearYMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearZMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearLimitSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearBreakable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearBreakThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularSwing1Motion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularTwistMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularSwing2Motion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSwingLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTwistLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing1LimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Swing2LimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularBreakable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularBreakThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearXPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearXVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearYPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearYVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearZPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearZVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinearVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearPositionTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocityTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveSpring_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveForceLimit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSwingPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSwingVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTwistPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTwistVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularSlerpDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularOrientationDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSwingDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTwistDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAngularVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularPositionTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularOrientationTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveSpring_MetaData[] = {
		{ "Comment", "// Revolutions per second\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Revolutions per second" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveForceLimit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_JointName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintBone1;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintBone2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PriAxis1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecAxis1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PriAxis2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecAxis2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularRotationOffset;
	static void NewProp_bScaleLinearLimits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleLinearLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileInstance;
#if WITH_EDITORONLY_DATA
	static void NewProp_bDisableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
	static void NewProp_bEnableProjection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProjection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularTolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinearXMotion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinearYMotion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinearZMotion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitSize;
	static void NewProp_bLinearLimitSoft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearLimitSoft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitDamping;
	static void NewProp_bLinearBreakable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AngularSwing1Motion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AngularTwistMotion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AngularSwing2Motion;
	static void NewProp_bSwingLimitSoft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwingLimitSoft;
	static void NewProp_bTwistLimitSoft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwistLimitSoft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitDamping;
	static void NewProp_bAngularBreakable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
	static void NewProp_bLinearXPositionDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearXPositionDrive;
	static void NewProp_bLinearXVelocityDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearXVelocityDrive;
	static void NewProp_bLinearYPositionDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearYPositionDrive;
	static void NewProp_bLinearYVelocityDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearYVelocityDrive;
	static void NewProp_bLinearZPositionDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearZPositionDrive;
	static void NewProp_bLinearZVelocityDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearZVelocityDrive;
	static void NewProp_bLinearPositionDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearPositionDrive;
	static void NewProp_bLinearVelocityDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearVelocityDrive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearPositionTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocityTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDriveSpring;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDriveDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDriveForceLimit;
	static void NewProp_bSwingPositionDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwingPositionDrive;
	static void NewProp_bSwingVelocityDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwingVelocityDrive;
	static void NewProp_bTwistPositionDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwistPositionDrive;
	static void NewProp_bTwistVelocityDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwistVelocityDrive;
	static void NewProp_bAngularSlerpDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularSlerpDrive;
	static void NewProp_bAngularOrientationDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularOrientationDrive;
	static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
	static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
	static void NewProp_bAngularVelocityDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularVelocityDrive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularPositionTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AngularDriveMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularOrientationTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocityTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDriveSpring;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDriveDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDriveForceLimit;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_JointName = { "JointName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, JointName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointName_MetaData), NewProp_JointName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone1 = { "ConstraintBone1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, ConstraintBone1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintBone1_MetaData), NewProp_ConstraintBone1_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone2 = { "ConstraintBone2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, ConstraintBone2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintBone2_MetaData), NewProp_ConstraintBone2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos1 = { "Pos1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, Pos1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pos1_MetaData), NewProp_Pos1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis1 = { "PriAxis1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, PriAxis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriAxis1_MetaData), NewProp_PriAxis1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis1 = { "SecAxis1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, SecAxis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecAxis1_MetaData), NewProp_SecAxis1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos2 = { "Pos2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, Pos2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pos2_MetaData), NewProp_Pos2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis2 = { "PriAxis2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, PriAxis2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriAxis2_MetaData), NewProp_PriAxis2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis2 = { "SecAxis2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, SecAxis2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecAxis2_MetaData), NewProp_SecAxis2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularRotationOffset = { "AngularRotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, AngularRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularRotationOffset_MetaData), NewProp_AngularRotationOffset_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bScaleLinearLimits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits = { "bScaleLinearLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleLinearLimits_MetaData), NewProp_bScaleLinearLimits_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProfileInstance = { "ProfileInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, ProfileInstance), Z_Construct_UScriptStruct_FConstraintProfileProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileInstance_MetaData), NewProp_ProfileInstance_MetaData) }; // 1355336354
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bDisableCollision_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableCollision_MetaData), NewProp_bDisableCollision_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bEnableProjection_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection = { "bEnableProjection", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableProjection_MetaData), NewProp_bEnableProjection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionLinearTolerance = { "ProjectionLinearTolerance", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, ProjectionLinearTolerance_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionLinearTolerance_MetaData), NewProp_ProjectionLinearTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionAngularTolerance = { "ProjectionAngularTolerance", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, ProjectionAngularTolerance_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionAngularTolerance_MetaData), NewProp_ProjectionAngularTolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearXMotion = { "LinearXMotion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, LinearXMotion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearXMotion_MetaData), NewProp_LinearXMotion_MetaData) }; // 2172304196
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearYMotion = { "LinearYMotion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, LinearYMotion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearYMotion_MetaData), NewProp_LinearYMotion_MetaData) }; // 2172304196
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearZMotion = { "LinearZMotion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, LinearZMotion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearZMotion_MetaData), NewProp_LinearZMotion_MetaData) }; // 2172304196
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitSize = { "LinearLimitSize", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, LinearLimitSize_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearLimitSize_MetaData), NewProp_LinearLimitSize_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bLinearLimitSoft_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft = { "bLinearLimitSoft", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearLimitSoft_MetaData), NewProp_bLinearLimitSoft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitStiffness = { "LinearLimitStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, LinearLimitStiffness_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearLimitStiffness_MetaData), NewProp_LinearLimitStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitDamping = { "LinearLimitDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, LinearLimitDamping_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearLimitDamping_MetaData), NewProp_LinearLimitDamping_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bLinearBreakable_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable = { "bLinearBreakable", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearBreakable_MetaData), NewProp_bLinearBreakable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearBreakThreshold = { "LinearBreakThreshold", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, LinearBreakThreshold_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearBreakThreshold_MetaData), NewProp_LinearBreakThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing1Motion = { "AngularSwing1Motion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, AngularSwing1Motion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularSwing1Motion_MetaData), NewProp_AngularSwing1Motion_MetaData) }; // 2222529340
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularTwistMotion = { "AngularTwistMotion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, AngularTwistMotion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularTwistMotion_MetaData), NewProp_AngularTwistMotion_MetaData) }; // 2222529340
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing2Motion = { "AngularSwing2Motion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, AngularSwing2Motion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularSwing2Motion_MetaData), NewProp_AngularSwing2Motion_MetaData) }; // 2222529340
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bSwingLimitSoft_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft = { "bSwingLimitSoft", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSwingLimitSoft_MetaData), NewProp_bSwingLimitSoft_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bTwistLimitSoft_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft = { "bTwistLimitSoft", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTwistLimitSoft_MetaData), NewProp_bTwistLimitSoft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing1LimitAngle = { "Swing1LimitAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, Swing1LimitAngle_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing1LimitAngle_MetaData), NewProp_Swing1LimitAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitAngle = { "TwistLimitAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, TwistLimitAngle_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistLimitAngle_MetaData), NewProp_TwistLimitAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing2LimitAngle = { "Swing2LimitAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, Swing2LimitAngle_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Swing2LimitAngle_MetaData), NewProp_Swing2LimitAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitStiffness = { "SwingLimitStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, SwingLimitStiffness_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingLimitStiffness_MetaData), NewProp_SwingLimitStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitDamping = { "SwingLimitDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, SwingLimitDamping_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingLimitDamping_MetaData), NewProp_SwingLimitDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitStiffness = { "TwistLimitStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, TwistLimitStiffness_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistLimitStiffness_MetaData), NewProp_TwistLimitStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitDamping = { "TwistLimitDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, TwistLimitDamping_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistLimitDamping_MetaData), NewProp_TwistLimitDamping_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bAngularBreakable_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable = { "bAngularBreakable", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularBreakable_MetaData), NewProp_bAngularBreakable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularBreakThreshold = { "AngularBreakThreshold", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, AngularBreakThreshold_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularBreakThreshold_MetaData), NewProp_AngularBreakThreshold_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bLinearXPositionDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive = { "bLinearXPositionDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearXPositionDrive_MetaData), NewProp_bLinearXPositionDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bLinearXVelocityDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive = { "bLinearXVelocityDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearXVelocityDrive_MetaData), NewProp_bLinearXVelocityDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bLinearYPositionDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive = { "bLinearYPositionDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearYPositionDrive_MetaData), NewProp_bLinearYPositionDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bLinearYVelocityDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive = { "bLinearYVelocityDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearYVelocityDrive_MetaData), NewProp_bLinearYVelocityDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bLinearZPositionDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive = { "bLinearZPositionDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearZPositionDrive_MetaData), NewProp_bLinearZPositionDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bLinearZVelocityDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive = { "bLinearZVelocityDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearZVelocityDrive_MetaData), NewProp_bLinearZVelocityDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bLinearPositionDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive = { "bLinearPositionDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearPositionDrive_MetaData), NewProp_bLinearPositionDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bLinearVelocityDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive = { "bLinearVelocityDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinearVelocityDrive_MetaData), NewProp_bLinearVelocityDrive_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearPositionTarget = { "LinearPositionTarget", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, LinearPositionTarget_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearPositionTarget_MetaData), NewProp_LinearPositionTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearVelocityTarget = { "LinearVelocityTarget", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, LinearVelocityTarget_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocityTarget_MetaData), NewProp_LinearVelocityTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveSpring = { "LinearDriveSpring", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, LinearDriveSpring_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDriveSpring_MetaData), NewProp_LinearDriveSpring_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveDamping = { "LinearDriveDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, LinearDriveDamping_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDriveDamping_MetaData), NewProp_LinearDriveDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveForceLimit = { "LinearDriveForceLimit", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, LinearDriveForceLimit_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDriveForceLimit_MetaData), NewProp_LinearDriveForceLimit_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bSwingPositionDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive = { "bSwingPositionDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSwingPositionDrive_MetaData), NewProp_bSwingPositionDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bSwingVelocityDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive = { "bSwingVelocityDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSwingVelocityDrive_MetaData), NewProp_bSwingVelocityDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bTwistPositionDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive = { "bTwistPositionDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTwistPositionDrive_MetaData), NewProp_bTwistPositionDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bTwistVelocityDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive = { "bTwistVelocityDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTwistVelocityDrive_MetaData), NewProp_bTwistVelocityDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bAngularSlerpDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive = { "bAngularSlerpDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularSlerpDrive_MetaData), NewProp_bAngularSlerpDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bAngularOrientationDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive = { "bAngularOrientationDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularOrientationDrive_MetaData), NewProp_bAngularOrientationDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bEnableSwingDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSwingDrive_MetaData), NewProp_bEnableSwingDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bEnableTwistDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTwistDrive_MetaData), NewProp_bEnableTwistDrive_MetaData) };
void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive_SetBit(void* Obj)
{
	((FConstraintInstance*)Obj)->bAngularVelocityDrive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive = { "bAngularVelocityDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAngularVelocityDrive_MetaData), NewProp_bAngularVelocityDrive_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularPositionTarget = { "AngularPositionTarget", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, AngularPositionTarget_DEPRECATED), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularPositionTarget_MetaData), NewProp_AngularPositionTarget_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveMode = { "AngularDriveMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, AngularDriveMode_DEPRECATED), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveMode_MetaData), NewProp_AngularDriveMode_MetaData) }; // 3334632269
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularOrientationTarget = { "AngularOrientationTarget", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, AngularOrientationTarget_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularOrientationTarget_MetaData), NewProp_AngularOrientationTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularVelocityTarget = { "AngularVelocityTarget", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, AngularVelocityTarget_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocityTarget_MetaData), NewProp_AngularVelocityTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveSpring = { "AngularDriveSpring", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, AngularDriveSpring_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveSpring_MetaData), NewProp_AngularDriveSpring_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveDamping = { "AngularDriveDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, AngularDriveDamping_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveDamping_MetaData), NewProp_AngularDriveDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveForceLimit = { "AngularDriveForceLimit", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstance, AngularDriveForceLimit_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveForceLimit_MetaData), NewProp_AngularDriveForceLimit_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_JointName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProfileInstance,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionLinearTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionAngularTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearXMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearYMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearZMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearBreakThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing1Motion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularTwistMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing2Motion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing1LimitAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing2LimitAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularBreakThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearPositionTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearVelocityTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveSpring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveForceLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularPositionTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularOrientationTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularVelocityTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveSpring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveForceLimit,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FConstraintInstanceBase,
	&NewStructOps,
	"ConstraintInstance",
	Z_Construct_UScriptStruct_FConstraintInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::PropPointers),
	sizeof(FConstraintInstance),
	alignof(FConstraintInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintInstance.InnerSingleton, Z_Construct_UScriptStruct_FConstraintInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintInstance.InnerSingleton;
}
// End ScriptStruct FConstraintInstance

// Begin ScriptStruct FConstraintInstanceAccessor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor;
class UScriptStruct* FConstraintInstanceAccessor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintInstanceAccessor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintInstanceAccessor"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintInstanceAccessor>()
{
	return FConstraintInstanceAccessor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Wrapping type around instance pointer to be returned per value in Blueprints\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Wrapping type around instance pointer to be returned per value in Blueprints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintInstanceAccessor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstanceAccessor, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintInstanceAccessor, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ConstraintInstanceAccessor",
	Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::PropPointers),
	sizeof(FConstraintInstanceAccessor),
	alignof(FConstraintInstanceAccessor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceAccessor()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor.InnerSingleton, Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor.InnerSingleton;
}
// End ScriptStruct FConstraintInstanceAccessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EConstraintTransformComponentFlags_StaticEnum, TEXT("EConstraintTransformComponentFlags"), &Z_Registration_Info_UEnum_EConstraintTransformComponentFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4294509821U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConstraintProfileProperties::StaticStruct, Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewStructOps, TEXT("ConstraintProfileProperties"), &Z_Registration_Info_UScriptStruct_ConstraintProfileProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintProfileProperties), 1355336354U) },
		{ FConstraintInstanceBase::StaticStruct, Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics::NewStructOps, TEXT("ConstraintInstanceBase"), &Z_Registration_Info_UScriptStruct_ConstraintInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintInstanceBase), 3819535329U) },
		{ FConstraintInstance::StaticStruct, Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewStructOps, TEXT("ConstraintInstance"), &Z_Registration_Info_UScriptStruct_ConstraintInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintInstance), 2267981824U) },
		{ FConstraintInstanceAccessor::StaticStruct, Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewStructOps, TEXT("ConstraintInstanceAccessor"), &Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintInstanceAccessor), 1862825663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_4190472650(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
