// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeCommon/Public/ClothConfig_Legacy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothConfig_Legacy() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy();
CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothConfig_Legacy();
CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
// End Cross Module References

// Begin Enum EClothingWindMethod_Legacy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClothingWindMethod_Legacy;
static UEnum* EClothingWindMethod_Legacy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("EClothingWindMethod_Legacy"));
	}
	return Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* StaticEnum<EClothingWindMethod_Legacy>()
{
	return EClothingWindMethod_Legacy_StaticEnum();
}
struct Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Accurate.Comment", "// Use updated wind calculation for NvCloth based solved taking into account\n// drag and lift, this will require those properties to be correctly set in\n// the clothing configuration\n" },
		{ "Accurate.Name", "EClothingWindMethod_Legacy::Accurate" },
		{ "Accurate.ToolTip", "Use updated wind calculation for NvCloth based solved taking into account\ndrag and lift, this will require those properties to be correctly set in\nthe clothing configuration" },
		{ "Comment", "/**\n * Deprecated, legacy definition kept for backward compatibility only.\n * Use EClothingWindMethodNv instead.\n * Redirected from the now defunct ClothingSystemRuntime module.\n */" },
		{ "Legacy.Comment", "// Use legacy wind mode, where accelerations are modified directly by the simulation\n// with no regard for drag or lift\n" },
		{ "Legacy.Name", "EClothingWindMethod_Legacy::Legacy" },
		{ "Legacy.ToolTip", "Use legacy wind mode, where accelerations are modified directly by the simulation\nwith no regard for drag or lift" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Deprecated, legacy definition kept for backward compatibility only.\nUse EClothingWindMethodNv instead.\nRedirected from the now defunct ClothingSystemRuntime module." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClothingWindMethod_Legacy::Legacy", (int64)EClothingWindMethod_Legacy::Legacy },
		{ "EClothingWindMethod_Legacy::Accurate", (int64)EClothingWindMethod_Legacy::Accurate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	nullptr,
	"EClothingWindMethod_Legacy",
	"EClothingWindMethod_Legacy",
	Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy()
{
	if (!Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.InnerSingleton, Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClothingWindMethod_Legacy.InnerSingleton;
}
// End Enum EClothingWindMethod_Legacy

// Begin ScriptStruct FClothConstraintSetup_Legacy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy;
class UScriptStruct* FClothConstraintSetup_Legacy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothConstraintSetup_Legacy"));
	}
	return Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothConstraintSetup_Legacy>()
{
	return FClothConstraintSetup_Legacy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated, legacy definition kept for backward compatibility only.\n * Use FClothConstraintSetupNv instead.\n * Redirected from the now defunct ClothingSystemRuntime module.\n */" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Deprecated, legacy definition kept for backward compatibility only.\nUse FClothConstraintSetupNv instead.\nRedirected from the now defunct ClothingSystemRuntime module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "Comment", "// How stiff this constraint is, this affects how closely it will follow the desired position\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "How stiff this constraint is, this affects how closely it will follow the desired position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessMultiplier_MetaData[] = {
		{ "Comment", "// A multiplier affecting the above value\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "A multiplier affecting the above value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StretchLimit_MetaData[] = {
		{ "Comment", "// The hard limit on how far this constraint can stretch\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "The hard limit on how far this constraint can stretch" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionLimit_MetaData[] = {
		{ "Comment", "// The hard limit on how far this constraint can compress\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConstraintSetup_Legacy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConstraintSetup_Legacy, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StiffnessMultiplier = { "StiffnessMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConstraintSetup_Legacy, StiffnessMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StiffnessMultiplier_MetaData), NewProp_StiffnessMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StretchLimit = { "StretchLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConstraintSetup_Legacy, StretchLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StretchLimit_MetaData), NewProp_StretchLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_CompressionLimit = { "CompressionLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConstraintSetup_Legacy, CompressionLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionLimit_MetaData), NewProp_CompressionLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StiffnessMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_StretchLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewProp_CompressionLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	nullptr,
	&NewStructOps,
	"ClothConstraintSetup_Legacy",
	Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::PropPointers),
	sizeof(FClothConstraintSetup_Legacy),
	alignof(FClothConstraintSetup_Legacy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy()
{
	if (!Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy.InnerSingleton, Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy.InnerSingleton;
}
// End ScriptStruct FClothConstraintSetup_Legacy

// Begin ScriptStruct FClothConfig_Legacy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothConfig_Legacy;
class UScriptStruct* FClothConfig_Legacy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothConfig_Legacy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothConfig_Legacy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConfig_Legacy, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothConfig_Legacy"));
	}
	return Z_Registration_Info_UScriptStruct_ClothConfig_Legacy.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothConfig_Legacy>()
{
	return FClothConfig_Legacy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated, legacy definition kept for backward compatibility only.\n * Inherit new config class from UClothConfigCommon instead.\n * Redirected from the now defunct ClothingSystemRuntime module.\n */" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Deprecated, legacy definition kept for backward compatibility only.\nInherit new config class from UClothConfigCommon instead.\nRedirected from the now defunct ClothingSystemRuntime module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindMethod_MetaData[] = {
		{ "Comment", "// How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "How wind should be processed, Accurate uses drag and lift to make the cloth react differently, legacy applies similar forces to all clothing without drag and lift (similar to APEX)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalConstraintConfig_MetaData[] = {
		{ "Comment", "// Constraint data for vertical constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Constraint data for vertical constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalConstraintConfig_MetaData[] = {
		{ "Comment", "// Constraint data for horizontal constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Constraint data for horizontal constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendConstraintConfig_MetaData[] = {
		{ "Comment", "// Constraint data for bend constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Constraint data for bend constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShearConstraintConfig_MetaData[] = {
		{ "Comment", "// Constraint data for shear constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Constraint data for shear constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionRadius_MetaData[] = {
		{ "Comment", "// Size of self collision spheres centered on each vert\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Size of self collision spheres centered on each vert" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionStiffness_MetaData[] = {
		{ "Comment", "// Stiffness of the spring force that will resolve self collisions\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Stiffness of the spring force that will resolve self collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionCullScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
		{ "Comment", "// Damping of particle motion per-axis\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Damping of particle motion per-axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "Comment", "// Friction of the surface when colliding\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Friction of the surface when colliding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindDragCoefficient_MetaData[] = {
		{ "Comment", "// Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Drag coefficient for wind calculations, higher values mean wind has more lateral effect on cloth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindLiftCoefficient_MetaData[] = {
		{ "Comment", "// Lift coefficient for wind calculations, higher values make cloth rise easier in wind\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Lift coefficient for wind calculations, higher values make cloth rise easier in wind" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDrag_MetaData[] = {
		{ "Comment", "// Drag applied to linear particle movement per-axis\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Drag applied to linear particle movement per-axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDrag_MetaData[] = {
		{ "Comment", "// Drag applied to angular particle movement, higher values should limit material bending (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Drag applied to angular particle movement, higher values should limit material bending (per-axis)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearInertiaScale_MetaData[] = {
		{ "Comment", "// Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for linear particle inertia, how much movement should translate to linear motion (per-axis)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularInertiaScale_MetaData[] = {
		{ "Comment", "// Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for angular particle inertia, how much movement should translate to angular motion (per-axis)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CentrifugalInertiaScale_MetaData[] = {
		{ "Comment", "// Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for centrifugal particle inertia, how much movement should translate to angular motion (per-axis)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverFrequency_MetaData[] = {
		{ "Comment", "// Frequency of the position solver, lower values will lead to stretchier, bouncier cloth\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Frequency of the position solver, lower values will lead to stretchier, bouncier cloth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessFrequency_MetaData[] = {
		{ "Comment", "// Frequency for stiffness calculations, lower values will degrade stiffness of constraints\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Frequency for stiffness calculations, lower values will degrade stiffness of constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
		{ "Comment", "// Scale of gravity effect on particles\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale of gravity effect on particles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityOverride_MetaData[] = {
		{ "Comment", "// Direct gravity override value\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Direct gravity override value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[] = {
		{ "Comment", "// Use gravity override value vs gravity scale \n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Use gravity override value vs gravity scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[] = {
		{ "Comment", "// Scale for stiffness of particle tethers between each other\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for stiffness of particle tethers between each other" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TetherLimit_MetaData[] = {
		{ "Comment", "// Scale for the limit of particle tethers (how far they can separate)\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Scale for the limit of particle tethers (how far they can separate)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[] = {
		{ "Comment", "// 'Thickness' of the simulated cloth, used to adjust collisions\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "'Thickness' of the simulated cloth, used to adjust collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimDriveSpringStiffness_MetaData[] = {
		{ "Comment", "// Default spring stiffness for anim drive if an anim drive is in use\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Default spring stiffness for anim drive if an anim drive is in use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimDriveDamperStiffness_MetaData[] = {
		{ "Comment", "// Default damper stiffness for anim drive if an anim drive is in use\n" },
		{ "ModuleRelativePath", "Public/ClothConfig_Legacy.h" },
		{ "ToolTip", "Default damper stiffness for anim drive if an anim drive is in use" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WindMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalConstraintConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalConstraintConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BendConstraintConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShearConstraintConfig;
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConfig_Legacy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod = { "WindMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, WindMethod), Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindMethod_MetaData), NewProp_WindMethod_MetaData) }; // 1950285325
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_VerticalConstraintConfig = { "VerticalConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, VerticalConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalConstraintConfig_MetaData), NewProp_VerticalConstraintConfig_MetaData) }; // 3484848137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_HorizontalConstraintConfig = { "HorizontalConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, HorizontalConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalConstraintConfig_MetaData), NewProp_HorizontalConstraintConfig_MetaData) }; // 3484848137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_BendConstraintConfig = { "BendConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, BendConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendConstraintConfig_MetaData), NewProp_BendConstraintConfig_MetaData) }; // 3484848137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_ShearConstraintConfig = { "ShearConstraintConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, ShearConstraintConfig), Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShearConstraintConfig_MetaData), NewProp_ShearConstraintConfig_MetaData) }; // 3484848137
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionRadius = { "SelfCollisionRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, SelfCollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCollisionRadius_MetaData), NewProp_SelfCollisionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionStiffness = { "SelfCollisionStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, SelfCollisionStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCollisionStiffness_MetaData), NewProp_SelfCollisionStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionCullScale = { "SelfCollisionCullScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, SelfCollisionCullScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCollisionCullScale_MetaData), NewProp_SelfCollisionCullScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, Damping), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damping_MetaData), NewProp_Damping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindDragCoefficient = { "WindDragCoefficient", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, WindDragCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindDragCoefficient_MetaData), NewProp_WindDragCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindLiftCoefficient = { "WindLiftCoefficient", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, WindLiftCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindLiftCoefficient_MetaData), NewProp_WindLiftCoefficient_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearDrag = { "LinearDrag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, LinearDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDrag_MetaData), NewProp_LinearDrag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularDrag = { "AngularDrag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, AngularDrag), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDrag_MetaData), NewProp_AngularDrag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearInertiaScale = { "LinearInertiaScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, LinearInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearInertiaScale_MetaData), NewProp_LinearInertiaScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularInertiaScale = { "AngularInertiaScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, AngularInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularInertiaScale_MetaData), NewProp_AngularInertiaScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CentrifugalInertiaScale = { "CentrifugalInertiaScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, CentrifugalInertiaScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CentrifugalInertiaScale_MetaData), NewProp_CentrifugalInertiaScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SolverFrequency = { "SolverFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, SolverFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverFrequency_MetaData), NewProp_SolverFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_StiffnessFrequency = { "StiffnessFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, StiffnessFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StiffnessFrequency_MetaData), NewProp_StiffnessFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScale_MetaData), NewProp_GravityScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityOverride = { "GravityOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, GravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityOverride_MetaData), NewProp_GravityOverride_MetaData) };
void Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
{
	((FClothConfig_Legacy*)Obj)->bUseGravityOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClothConfig_Legacy), &Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGravityOverride_MetaData), NewProp_bUseGravityOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, TetherStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherStiffness_MetaData), NewProp_TetherStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherLimit = { "TetherLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, TetherLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TetherLimit_MetaData), NewProp_TetherLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, CollisionThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionThickness_MetaData), NewProp_CollisionThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveSpringStiffness = { "AnimDriveSpringStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, AnimDriveSpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimDriveSpringStiffness_MetaData), NewProp_AnimDriveSpringStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveDamperStiffness = { "AnimDriveDamperStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothConfig_Legacy, AnimDriveDamperStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimDriveDamperStiffness_MetaData), NewProp_AnimDriveDamperStiffness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_VerticalConstraintConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_HorizontalConstraintConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_BendConstraintConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_ShearConstraintConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SelfCollisionCullScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Damping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindDragCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_WindLiftCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_LinearInertiaScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AngularInertiaScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CentrifugalInertiaScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_SolverFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_StiffnessFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_GravityOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_bUseGravityOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_TetherLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_CollisionThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveSpringStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewProp_AnimDriveDamperStiffness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	nullptr,
	&NewStructOps,
	"ClothConfig_Legacy",
	Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::PropPointers),
	sizeof(FClothConfig_Legacy),
	alignof(FClothConfig_Legacy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothConfig_Legacy()
{
	if (!Z_Registration_Info_UScriptStruct_ClothConfig_Legacy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothConfig_Legacy.InnerSingleton, Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothConfig_Legacy.InnerSingleton;
}
// End ScriptStruct FClothConfig_Legacy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClothingWindMethod_Legacy_StaticEnum, TEXT("EClothingWindMethod_Legacy"), &Z_Registration_Info_UEnum_EClothingWindMethod_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1950285325U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClothConstraintSetup_Legacy::StaticStruct, Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics::NewStructOps, TEXT("ClothConstraintSetup_Legacy"), &Z_Registration_Info_UScriptStruct_ClothConstraintSetup_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothConstraintSetup_Legacy), 3484848137U) },
		{ FClothConfig_Legacy::StaticStruct, Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics::NewStructOps, TEXT("ClothConfig_Legacy"), &Z_Registration_Info_UScriptStruct_ClothConfig_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothConfig_Legacy), 4043409176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_3743237273(TEXT("/Script/ClothingSystemRuntimeCommon"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
