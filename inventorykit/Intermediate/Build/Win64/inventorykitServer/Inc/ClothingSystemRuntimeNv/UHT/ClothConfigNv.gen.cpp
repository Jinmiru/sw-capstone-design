// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothConfigNv.h"
#include "Runtime/ClothingSystemRuntimeCommon/Public/ClothConfig_Legacy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothConfigNv() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothConfigCommon();
CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy();
CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy();
CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothConfigNv();
CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothConfigNv_NoRegister();
CLOTHINGSYSTEMRUNTIMENV_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv();
CLOTHINGSYSTEMRUNTIMENV_API UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetupNv();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
// End Cross Module References

// Begin ScriptStruct FClothConstraintSetupNv
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv;
class UScriptStruct* FClothConstraintSetupNv::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConstraintSetupNv, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeNv(), TEXT("ClothConstraintSetupNv"));
	}
	return Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMENV_API UScriptStruct* StaticStruct<FClothConstraintSetupNv>()
{
	return FClothConstraintSetupNv::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Container for a constraint setup, these can be horizontal, vertical, shear and bend. */" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Container for a constraint setup, these can be horizontal, vertical, shear and bend." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// How stiff this constraint is, this affects how closely it will follow the desired position\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "How stiff this constraint is, this affects how closely it will follow the desired position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessMultiplier_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// A multiplier affecting the above value\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "A multiplier affecting the above value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StretchLimit_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// The hard limit on how far this constraint can stretch\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "The hard limit on how far this constraint can stretch" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionLimit_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// The hard limit on how far this constraint can compress\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "The hard limit on how far this constraint can compress" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StiffnessMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressionLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConstraintSetupNv>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConstraintSetupNv, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StiffnessMultiplier = { "StiffnessMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConstraintSetupNv, StiffnessMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StiffnessMultiplier_MetaData), NewProp_StiffnessMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StretchLimit = { "StretchLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConstraintSetupNv, StretchLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StretchLimit_MetaData), NewProp_StretchLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_CompressionLimit = { "CompressionLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConstraintSetupNv, CompressionLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionLimit_MetaData), NewProp_CompressionLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StiffnessMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_StretchLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewProp_CompressionLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
	nullptr,
	&NewStructOps,
	"ClothConstraintSetupNv",
	Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::PropPointers),
	sizeof(FClothConstraintSetupNv),
	alignof(FClothConstraintSetupNv),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetupNv()
{
	if (!Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv.InnerSingleton, Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv.InnerSingleton;
}
// End ScriptStruct FClothConstraintSetupNv

// Begin Enum EClothingWindMethodNv
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClothingWindMethodNv;
static UEnum* EClothingWindMethodNv_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClothingWindMethodNv.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClothingWindMethodNv.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeNv(), TEXT("EClothingWindMethodNv"));
	}
	return Z_Registration_Info_UEnum_EClothingWindMethodNv.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMENV_API UEnum* StaticEnum<EClothingWindMethodNv>()
{
	return EClothingWindMethodNv_StaticEnum();
}
struct Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Accurate.Comment", "// Use updated wind calculation for NvCloth based solved taking into account\n// drag and lift, this will require those properties to be correctly set in\n// the clothing configuration\n" },
		{ "Accurate.Name", "EClothingWindMethodNv::Accurate" },
		{ "Accurate.ToolTip", "Use updated wind calculation for NvCloth based solved taking into account\ndrag and lift, this will require those properties to be correctly set in\nthe clothing configuration" },
		{ "Comment", "/** Cloth wind method. */" },
		{ "Legacy.Comment", "// Use legacy wind mode, where accelerations are modified directly by the simulation\n// with no regard for drag or lift\n" },
		{ "Legacy.Name", "EClothingWindMethodNv::Legacy" },
		{ "Legacy.ToolTip", "Use legacy wind mode, where accelerations are modified directly by the simulation\nwith no regard for drag or lift" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Cloth wind method." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClothingWindMethodNv::Legacy", (int64)EClothingWindMethodNv::Legacy },
		{ "EClothingWindMethodNv::Accurate", (int64)EClothingWindMethodNv::Accurate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
	nullptr,
	"EClothingWindMethodNv",
	"EClothingWindMethodNv",
	Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv()
{
	if (!Z_Registration_Info_UEnum_EClothingWindMethodNv.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClothingWindMethodNv.InnerSingleton, Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClothingWindMethodNv.InnerSingleton;
}
// End Enum EClothingWindMethodNv

// Begin Class UClothConfigNv
void UClothConfigNv::StaticRegisterNativesUClothConfigNv()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothConfigNv);
UClass* Z_Construct_UClass_UClothConfigNv_NoRegister()
{
	return UClothConfigNv::StaticClass();
}
struct Z_Construct_UClass_UClothConfigNv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ClothConfigNv.h" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothingWindMethod_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalConstraint_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Constraint data for vertical constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Constraint data for vertical constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalConstraint_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Constraint data for horizontal constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Constraint data for horizontal constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendConstraint_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Constraint data for bend constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Constraint data for bend constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShearConstraint_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Constraint data for shear constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Constraint data for shear constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionRadius_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Size of self collision spheres centered on each vert\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Size of self collision spheres centered on each vert" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Stiffness of the spring force that will resolve self collisions\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Stiffness of the spring force that will resolve self collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionCullScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09 * Scale to use for the radius of the culling checks for self collisions.\n\x09 * Any other self collision body within the radius of this check will be culled.\n\x09 * This helps performance with higher resolution meshes by reducing the number\n\x09 * of colliding bodies within the cloth. Reducing this will have a negative\n\x09 * effect on performance!\n\x09 */" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale to use for the radius of the culling checks for self collisions.\nAny other self collision body within the radius of this check will be culled.\nThis helps performance with higher resolution meshes by reducing the number\nof colliding bodies within the cloth. Reducing this will have a negative\neffect on performance!" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Damping of particle motion per-axis\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Damping of particle motion per-axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Friction of the surface when colliding\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Friction of the surface when colliding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindDragCoefficient_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindLiftCoefficient_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Lift coefficient for wind calculations, higher values make cloth rise easier in wind\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Lift coefficient for wind calculations, higher values make cloth rise easier in wind" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDrag_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Drag applied to linear particle movement per-axis\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Drag applied to linear particle movement per-axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDrag_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Drag applied to angular particle movement, higher values should limit material bending (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Drag applied to angular particle movement, higher values should limit material bending (per-axis)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearInertiaScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularInertiaScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CentrifugalInertiaScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverFrequency_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "30" },
		{ "Comment", "// Frequency of the position solver, lower values will lead to stretchier, bouncier cloth\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Frequency of the position solver, lower values will lead to stretchier, bouncier cloth" },
		{ "UIMax", "240" },
		{ "UIMin", "30" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessFrequency_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Frequency for stiffness calculations, lower values will degrade stiffness of constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Frequency for stiffness calculations, lower values will degrade stiffness of constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Scale of gravity effect on particles\n" },
		{ "EditCondition", "!bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale of gravity effect on particles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityOverride_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Direct gravity override value\n" },
		{ "EditCondition", "bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Direct gravity override value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "/** Use gravity override value vs gravity scale */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Use gravity override value vs gravity scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Scale for stiffness of particle tethers between each other\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for stiffness of particle tethers between each other" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherLimit_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Scale for the limit of particle tethers (how far they can separate)\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Scale for the limit of particle tethers (how far they can separate)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// 'Thickness' of the simulated cloth, used to adjust collisions\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "'Thickness' of the simulated cloth, used to adjust collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimDriveSpringStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Default spring stiffness for anim drive if an anim drive is in use\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Default spring stiffness for anim drive if an anim drive is in use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimDriveDamperStiffness_MetaData[] = {
		{ "Category", "ClothConfig" },
		{ "Comment", "// Default damper stiffness for anim drive if an anim drive is in use\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Default damper stiffness for anim drive if an anim drive is in use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindMethod_MetaData[] = {
		{ "Comment", "// Deprecated properties using old legacy structure and enum that couldn't be redirected\n" },
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
		{ "ToolTip", "Deprecated properties using old legacy structure and enum that couldn't be redirected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalConstraintConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalConstraintConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendConstraintConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShearConstraintConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfigNv.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClothingWindMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClothingWindMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BendConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShearConstraint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionCullScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindDragCoefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindLiftCoefficient;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearDrag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularDrag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearInertiaScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularInertiaScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CentrifugalInertiaScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SolverFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StiffnessFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityOverride;
	static void NewProp_bUseGravityOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGravityOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimDriveSpringStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimDriveDamperStiffness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WindMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalConstraintConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalConstraintConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BendConstraintConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShearConstraintConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothConfigNv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod = { "ClothingWindMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, ClothingWindMethod), Z_Construct_UEnum_ClothingSystemRuntimeNv_EClothingWindMethodNv, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothingWindMethod_MetaData), NewProp_ClothingWindMethod_MetaData) }; // 1372591592
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraint = { "VerticalConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, VerticalConstraint), Z_Construct_UScriptStruct_FClothConstraintSetupNv, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalConstraint_MetaData), NewProp_VerticalConstraint_MetaData) }; // 448846296
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraint = { "HorizontalConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, HorizontalConstraint), Z_Construct_UScriptStruct_FClothConstraintSetupNv, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalConstraint_MetaData), NewProp_HorizontalConstraint_MetaData) }; // 448846296
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraint = { "BendConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, BendConstraint), Z_Construct_UScriptStruct_FClothConstraintSetupNv, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendConstraint_MetaData), NewProp_BendConstraint_MetaData) }; // 448846296
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraint = { "ShearConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, ShearConstraint), Z_Construct_UScriptStruct_FClothConstraintSetupNv, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShearConstraint_MetaData), NewProp_ShearConstraint_MetaData) }; // 448846296
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionRadius = { "SelfCollisionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, SelfCollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCollisionRadius_MetaData), NewProp_SelfCollisionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionStiffness = { "SelfCollisionStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, SelfCollisionStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCollisionStiffness_MetaData), NewProp_SelfCollisionStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionCullScale = { "SelfCollisionCullScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, SelfCollisionCullScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCollisionCullScale_MetaData), NewProp_SelfCollisionCullScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, Damping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damping_MetaData), NewProp_Damping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindDragCoefficient = { "WindDragCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, WindDragCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindDragCoefficient_MetaData), NewProp_WindDragCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindLiftCoefficient = { "WindLiftCoefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, WindLiftCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindLiftCoefficient_MetaData), NewProp_WindLiftCoefficient_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearDrag = { "LinearDrag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, LinearDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDrag_MetaData), NewProp_LinearDrag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularDrag = { "AngularDrag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, AngularDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDrag_MetaData), NewProp_AngularDrag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearInertiaScale = { "LinearInertiaScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, LinearInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearInertiaScale_MetaData), NewProp_LinearInertiaScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularInertiaScale = { "AngularInertiaScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, AngularInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularInertiaScale_MetaData), NewProp_AngularInertiaScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CentrifugalInertiaScale = { "CentrifugalInertiaScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, CentrifugalInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CentrifugalInertiaScale_MetaData), NewProp_CentrifugalInertiaScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SolverFrequency = { "SolverFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, SolverFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverFrequency_MetaData), NewProp_SolverFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_StiffnessFrequency = { "StiffnessFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, StiffnessFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StiffnessFrequency_MetaData), NewProp_StiffnessFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScale_MetaData), NewProp_GravityScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityOverride = { "GravityOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, GravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityOverride_MetaData), NewProp_GravityOverride_MetaData) };
void Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
{
	((UClothConfigNv*)Obj)->bUseGravityOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UClothConfigNv), &Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGravityOverride_MetaData), NewProp_bUseGravityOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, TetherStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherStiffness_MetaData), NewProp_TetherStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherLimit = { "TetherLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, TetherLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherLimit_MetaData), NewProp_TetherLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, CollisionThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionThickness_MetaData), NewProp_CollisionThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveSpringStiffness = { "AnimDriveSpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, AnimDriveSpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimDriveSpringStiffness_MetaData), NewProp_AnimDriveSpringStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveDamperStiffness = { "AnimDriveDamperStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, AnimDriveDamperStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimDriveDamperStiffness_MetaData), NewProp_AnimDriveDamperStiffness_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod = { "WindMethod", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, WindMethod_DEPRECATED), Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindMethod_MetaData), NewProp_WindMethod_MetaData) }; // 1950285325
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraintConfig = { "VerticalConstraintConfig", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, VerticalConstraintConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalConstraintConfig_MetaData), NewProp_VerticalConstraintConfig_MetaData) }; // 3484848137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraintConfig = { "HorizontalConstraintConfig", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, HorizontalConstraintConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalConstraintConfig_MetaData), NewProp_HorizontalConstraintConfig_MetaData) }; // 3484848137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraintConfig = { "BendConstraintConfig", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, BendConstraintConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendConstraintConfig_MetaData), NewProp_BendConstraintConfig_MetaData) }; // 3484848137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraintConfig = { "ShearConstraintConfig", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothConfigNv, ShearConstraintConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShearConstraintConfig_MetaData), NewProp_ShearConstraintConfig_MetaData) }; // 3484848137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothConfigNv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ClothingWindMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SelfCollisionCullScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Damping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindDragCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindLiftCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_LinearInertiaScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AngularInertiaScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CentrifugalInertiaScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_SolverFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_StiffnessFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_GravityOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_bUseGravityOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_TetherLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_CollisionThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveSpringStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_AnimDriveDamperStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_WindMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_VerticalConstraintConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_HorizontalConstraintConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_BendConstraintConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothConfigNv_Statics::NewProp_ShearConstraintConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UClothConfigNv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClothConfigCommon,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothConfigNv_Statics::ClassParams = {
	&UClothConfigNv::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UClothConfigNv_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigNv_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothConfigNv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothConfigNv()
{
	if (!Z_Registration_Info_UClass_UClothConfigNv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothConfigNv.OuterSingleton, Z_Construct_UClass_UClothConfigNv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothConfigNv.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMENV_API UClass* StaticClass<UClothConfigNv>()
{
	return UClothConfigNv::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothConfigNv);
UClothConfigNv::~UClothConfigNv() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UClothConfigNv)
// End Class UClothConfigNv

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClothingWindMethodNv_StaticEnum, TEXT("EClothingWindMethodNv"), &Z_Registration_Info_UEnum_EClothingWindMethodNv, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1372591592U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClothConstraintSetupNv::StaticStruct, Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics::NewStructOps, TEXT("ClothConstraintSetupNv"), &Z_Registration_Info_UScriptStruct_ClothConstraintSetupNv, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothConstraintSetupNv), 448846296U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClothConfigNv, UClothConfigNv::StaticClass, TEXT("UClothConfigNv"), &Z_Registration_Info_UClass_UClothConfigNv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothConfigNv), 1028910978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_1820808755(TEXT("/Script/ClothingSystemRuntimeNv"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
