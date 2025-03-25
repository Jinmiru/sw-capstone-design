// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Rig/Solvers/LimbSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLimbSolver() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FLimbLink();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FLimbSolver();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FLimbSolverSettings();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin ScriptStruct FLimbSolverSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LimbSolverSettings;
class UScriptStruct* FLimbSolverSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LimbSolverSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LimbSolverSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLimbSolverSettings, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("LimbSolverSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LimbSolverSettings.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FLimbSolverSettings>()
{
	return FLimbSolverSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLimbSolverSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachPrecision_MetaData[] = {
		{ "Category", "Limb Solver Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Precision (distance to the target) */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
		{ "ToolTip", "Precision (distance to the target)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HingeRotationAxis_MetaData[] = {
		{ "Category", "Limb Solver Settings|Two Bones" },
		{ "Comment", "/** Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot). */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
		{ "ToolTip", "Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Limb Solver Settings|FABRIK" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of Max Iterations to reach the target */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
		{ "ToolTip", "Number of Max Iterations to reach the target" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLimit_MetaData[] = {
		{ "Category", "Limb Solver Settings|FABRIK|Limits" },
		{ "Comment", "/** Enable/Disable rotational limits */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
		{ "ToolTip", "Enable/Disable rotational limits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRotationAngle_MetaData[] = {
		{ "Category", "Limb Solver Settings|FABRIK|Limits" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\n\x09* and forces at least this angle between Parent and Child bone. */" },
		{ "EditCondition", "bEnableLimit" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
		{ "ToolTip", "Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\nand forces at least this angle between Parent and Child bone." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAveragePull_MetaData[] = {
		{ "Category", "Limb Solver Settings|FABRIK|Pull Averaging" },
		{ "Comment", "/** Pull averaging only has a visual impact when we have more than 2 bones (3 links). */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
		{ "ToolTip", "Pull averaging only has a visual impact when we have more than 2 bones (3 links)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullDistribution_MetaData[] = {
		{ "Category", "Limb Solver Settings|FABRIK|Pull Averaging" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Re-position limb to distribute pull: 0 = foot, 0.5 = balanced, 1.f = hip */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
		{ "ToolTip", "Re-position limb to distribute pull: 0 = foot, 0.5 = balanced, 1.f = hip" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReachStepAlpha_MetaData[] = {
		{ "Category", "Limb Solver Settings|FABRIK|Pull Averaging" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Move end effector towards target. If we are compressing the chain, limit displacement.*/" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
		{ "ToolTip", "Move end effector towards target. If we are compressing the chain, limit displacement." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTwistCorrection_MetaData[] = {
		{ "Category", "Limb Solver Settings|Twist" },
		{ "Comment", "/** Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation. */" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
		{ "ToolTip", "Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndBoneForwardAxis_MetaData[] = {
		{ "Category", "Limb Solver Settings|Twist" },
		{ "Comment", "/** Forward Axis for Foot bone. */" },
		{ "EditCondition", "bEnableTwistCorrection" },
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
		{ "ToolTip", "Forward Axis for Foot bone." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachPrecision;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HingeRotationAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
	static void NewProp_bEnableLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRotationAngle;
	static void NewProp_bAveragePull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAveragePull;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PullDistribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachStepAlpha;
	static void NewProp_bEnableTwistCorrection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistCorrection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndBoneForwardAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLimbSolverSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachPrecision = { "ReachPrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimbSolverSettings, ReachPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachPrecision_MetaData), NewProp_ReachPrecision_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_HingeRotationAxis = { "HingeRotationAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimbSolverSettings, HingeRotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HingeRotationAxis_MetaData), NewProp_HingeRotationAxis_MetaData) }; // 342925220
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimbSolverSettings, MaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIterations_MetaData), NewProp_MaxIterations_MetaData) };
void Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableLimit_SetBit(void* Obj)
{
	((FLimbSolverSettings*)Obj)->bEnableLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableLimit = { "bEnableLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLimbSolverSettings), &Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLimit_MetaData), NewProp_bEnableLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MinRotationAngle = { "MinRotationAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimbSolverSettings, MinRotationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRotationAngle_MetaData), NewProp_MinRotationAngle_MetaData) };
void Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bAveragePull_SetBit(void* Obj)
{
	((FLimbSolverSettings*)Obj)->bAveragePull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bAveragePull = { "bAveragePull", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLimbSolverSettings), &Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bAveragePull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAveragePull_MetaData), NewProp_bAveragePull_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_PullDistribution = { "PullDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimbSolverSettings, PullDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullDistribution_MetaData), NewProp_PullDistribution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachStepAlpha = { "ReachStepAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimbSolverSettings, ReachStepAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReachStepAlpha_MetaData), NewProp_ReachStepAlpha_MetaData) };
void Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableTwistCorrection_SetBit(void* Obj)
{
	((FLimbSolverSettings*)Obj)->bEnableTwistCorrection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableTwistCorrection = { "bEnableTwistCorrection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLimbSolverSettings), &Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableTwistCorrection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTwistCorrection_MetaData), NewProp_bEnableTwistCorrection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_EndBoneForwardAxis = { "EndBoneForwardAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimbSolverSettings, EndBoneForwardAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndBoneForwardAxis_MetaData), NewProp_EndBoneForwardAxis_MetaData) }; // 342925220
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_HingeRotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_MinRotationAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bAveragePull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_PullDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_ReachStepAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_bEnableTwistCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewProp_EndBoneForwardAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"LimbSolverSettings",
	Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::PropPointers),
	sizeof(FLimbSolverSettings),
	alignof(FLimbSolverSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLimbSolverSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LimbSolverSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LimbSolverSettings.InnerSingleton, Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LimbSolverSettings.InnerSingleton;
}
// End ScriptStruct FLimbSolverSettings

// Begin ScriptStruct FLimbLink
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LimbLink;
class UScriptStruct* FLimbLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LimbLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LimbLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLimbLink, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("LimbLink"));
	}
	return Z_Registration_Info_UScriptStruct_LimbLink.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FLimbLink>()
{
	return FLimbLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLimbLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLimbLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLimbLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"LimbLink",
	nullptr,
	0,
	sizeof(FLimbLink),
	alignof(FLimbLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLimbLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLimbLink()
{
	if (!Z_Registration_Info_UScriptStruct_LimbLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LimbLink.InnerSingleton, Z_Construct_UScriptStruct_FLimbLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LimbLink.InnerSingleton;
}
// End ScriptStruct FLimbLink

// Begin ScriptStruct FLimbSolver
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LimbSolver;
class UScriptStruct* FLimbSolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LimbSolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LimbSolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLimbSolver, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("LimbSolver"));
	}
	return Z_Registration_Info_UScriptStruct_LimbSolver.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FLimbSolver>()
{
	return FLimbSolver::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLimbSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/Solvers/LimbSolver.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLimbSolver>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLimbSolver_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"LimbSolver",
	nullptr,
	0,
	sizeof(FLimbSolver),
	alignof(FLimbSolver),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbSolver_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLimbSolver_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLimbSolver()
{
	if (!Z_Registration_Info_UScriptStruct_LimbSolver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LimbSolver.InnerSingleton, Z_Construct_UScriptStruct_FLimbSolver_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LimbSolver.InnerSingleton;
}
// End ScriptStruct FLimbSolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_LimbSolver_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLimbSolverSettings::StaticStruct, Z_Construct_UScriptStruct_FLimbSolverSettings_Statics::NewStructOps, TEXT("LimbSolverSettings"), &Z_Registration_Info_UScriptStruct_LimbSolverSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLimbSolverSettings), 1238931503U) },
		{ FLimbLink::StaticStruct, Z_Construct_UScriptStruct_FLimbLink_Statics::NewStructOps, TEXT("LimbLink"), &Z_Registration_Info_UScriptStruct_LimbLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLimbLink), 680245033U) },
		{ FLimbSolver::StaticStruct, Z_Construct_UScriptStruct_FLimbSolver_Statics::NewStructOps, TEXT("LimbSolver"), &Z_Registration_Info_UScriptStruct_LimbSolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLimbSolver), 1914695842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_LimbSolver_h_3496128964(TEXT("/Script/IKRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_LimbSolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Rig_Solvers_LimbSolver_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
