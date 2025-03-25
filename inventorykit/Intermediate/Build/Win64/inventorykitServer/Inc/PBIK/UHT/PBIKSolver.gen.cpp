// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PBIK/Public/Core/PBIKSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBIKSolver() {}

// Begin Cross Module References
PBIK_API UEnum* Z_Construct_UEnum_PBIK_EPBIKRootBehavior();
PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolver();
PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolverSettings();
PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FRootPrePullSettings();
UPackage* Z_Construct_UPackage__Script_PBIK();
// End Cross Module References

// Begin Enum EPBIKRootBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPBIKRootBehavior;
static UEnum* EPBIKRootBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPBIKRootBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPBIKRootBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PBIK_EPBIKRootBehavior, (UObject*)Z_Construct_UPackage__Script_PBIK(), TEXT("EPBIKRootBehavior"));
	}
	return Z_Registration_Info_UEnum_EPBIKRootBehavior.OuterSingleton;
}
template<> PBIK_API UEnum* StaticEnum<EPBIKRootBehavior>()
{
	return EPBIKRootBehavior_StaticEnum();
}
struct Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace\n" },
		{ "Free.Name", "EPBIKRootBehavior::Free" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "PinToInput.Name", "EPBIKRootBehavior::PinToInput" },
		{ "PrePull.Name", "EPBIKRootBehavior::PrePull" },
		{ "ToolTip", "namespace" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPBIKRootBehavior::PrePull", (int64)EPBIKRootBehavior::PrePull },
		{ "EPBIKRootBehavior::PinToInput", (int64)EPBIKRootBehavior::PinToInput },
		{ "EPBIKRootBehavior::Free", (int64)EPBIKRootBehavior::Free },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PBIK,
	nullptr,
	"EPBIKRootBehavior",
	"EPBIKRootBehavior",
	Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PBIK_EPBIKRootBehavior()
{
	if (!Z_Registration_Info_UEnum_EPBIKRootBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPBIKRootBehavior.InnerSingleton, Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPBIKRootBehavior.InnerSingleton;
}
// End Enum EPBIKRootBehavior

// Begin ScriptStruct FRootPrePullSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootPrePullSettings;
class UScriptStruct* FRootPrePullSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootPrePullSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootPrePullSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootPrePullSettings, (UObject*)Z_Construct_UPackage__Script_PBIK(), TEXT("RootPrePullSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RootPrePullSettings.OuterSingleton;
}
template<> PBIK_API UScriptStruct* StaticStruct<FRootPrePullSettings>()
{
	return FRootPrePullSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootPrePullSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[] = {
		{ "Category", "RootRotation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 0. Apply a large scale rotation offset to the entire body prior to constraint solving.*/" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Range 0-1, default is 0. Apply a large scale rotation offset to the entire body prior to constraint solving." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlphaX_MetaData[] = {
		{ "Category", "RootRotation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1. Blend contribution to rotation offset in the X axis in component space.*/" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Range 0-1, default is 1. Blend contribution to rotation offset in the X axis in component space." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlphaY_MetaData[] = {
		{ "Category", "RootRotation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1. Blend contribution to rotation offset in the Y axis in component space.*/" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Range 0-1, default is 1. Blend contribution to rotation offset in the Y axis in component space." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlphaZ_MetaData[] = {
		{ "Category", "RootRotation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1. Blend contribution to rotation offset in the Z axis in component space.*/" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Range 0-1, default is 1. Blend contribution to rotation offset in the Z axis in component space." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlpha_MetaData[] = {
		{ "Category", "RootPosition" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1. Apply a large scale position offset to the entire body prior to constraint solving.*/" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Range 0-1, default is 1. Apply a large scale position offset to the entire body prior to constraint solving." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlphaX_MetaData[] = {
		{ "Category", "RootPosition" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1. Blend contribution to position offset in the X axis in component space.*/" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Range 0-1, default is 1. Blend contribution to position offset in the X axis in component space." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlphaY_MetaData[] = {
		{ "Category", "RootPosition" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1. Blend contribution to position offset in the Y axis in component space.*/" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Range 0-1, default is 1. Blend contribution to position offset in the Y axis in component space." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlphaZ_MetaData[] = {
		{ "Category", "RootPosition" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1. Blend contribution to position offset in the Z axis in component space.*/" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Range 0-1, default is 1. Blend contribution to position offset in the Z axis in component space." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlphaX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlphaY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlphaZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlphaX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlphaY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlphaZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootPrePullSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootPrePullSettings, RotationAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlpha_MetaData), NewProp_RotationAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_RotationAlphaX = { "RotationAlphaX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootPrePullSettings, RotationAlphaX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlphaX_MetaData), NewProp_RotationAlphaX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_RotationAlphaY = { "RotationAlphaY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootPrePullSettings, RotationAlphaY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlphaY_MetaData), NewProp_RotationAlphaY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_RotationAlphaZ = { "RotationAlphaZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootPrePullSettings, RotationAlphaZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlphaZ_MetaData), NewProp_RotationAlphaZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_PositionAlpha = { "PositionAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootPrePullSettings, PositionAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionAlpha_MetaData), NewProp_PositionAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_PositionAlphaX = { "PositionAlphaX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootPrePullSettings, PositionAlphaX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionAlphaX_MetaData), NewProp_PositionAlphaX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_PositionAlphaY = { "PositionAlphaY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootPrePullSettings, PositionAlphaY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionAlphaY_MetaData), NewProp_PositionAlphaY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_PositionAlphaZ = { "PositionAlphaZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootPrePullSettings, PositionAlphaZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionAlphaZ_MetaData), NewProp_PositionAlphaZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_RotationAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_RotationAlphaX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_RotationAlphaY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_RotationAlphaZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_PositionAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_PositionAlphaX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_PositionAlphaY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewProp_PositionAlphaZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PBIK,
	nullptr,
	&NewStructOps,
	"RootPrePullSettings",
	Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::PropPointers),
	sizeof(FRootPrePullSettings),
	alignof(FRootPrePullSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootPrePullSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RootPrePullSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootPrePullSettings.InnerSingleton, Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootPrePullSettings.InnerSingleton;
}
// End ScriptStruct FRootPrePullSettings

// Begin ScriptStruct FPBIKSolverSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PBIKSolverSettings;
class UScriptStruct* FPBIKSolverSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PBIKSolverSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PBIKSolverSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPBIKSolverSettings, (UObject*)Z_Construct_UPackage__Script_PBIK(), TEXT("PBIKSolverSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PBIKSolverSettings.OuterSingleton;
}
template<> PBIK_API UScriptStruct* StaticStruct<FPBIKSolverSettings>()
{
	return FPBIKSolverSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** High iteration counts can help solve complex joint configurations with competing constraints, but will increase runtime cost. Default is 20. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "High iteration counts can help solve complex joint configurations with competing constraints, but will increase runtime cost. Default is 20." },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Iterations used for sub-chains defined by the Chain Depth of the effectors. These are solved BEFORE the main iteration pass. Default is 0. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Iterations used for sub-chains defined by the Chain Depth of the effectors. These are solved BEFORE the main iteration pass. Default is 0." },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassMultiplier_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A global mass multiplier; higher values will make the joints more stiff, but require more iterations. Typical range is 0.0 to 10.0. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "A global mass multiplier; higher values will make the joints more stiff, but require more iterations. Typical range is 0.0 to 10.0." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStretch_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/** If true, joints will translate to reach the effectors; causing bones to lengthen if necessary. Good for cartoon effects. Default is false. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "If true, joints will translate to reach the effectors; causing bones to lengthen if necessary. Good for cartoon effects. Default is false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootBehavior_MetaData[] = {
		{ "Category", "RootBehavior" },
		{ "Comment", "/** (Default is PrePull) Set the behavior of the solver root.\n\x09*Pre Pull: translates and rotates the root (and all children) by the average motion of the stretched effectors to help achieve faster convergence when reaching far.\n\x09*Pin to Input: locks the translation and rotation of the root bone to the input pose. Overrides any bone settings applied to the root. Good for partial-body solves.\n\x09*Free: treats the root bone like any other and allows it to move freely or according to any bone settings applied to it. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "(Default is PrePull) Set the behavior of the solver root.\nPre Pull: translates and rotates the root (and all children) by the average motion of the stretched effectors to help achieve faster convergence when reaching far.\nPin to Input: locks the translation and rotation of the root bone to the input pose. Overrides any bone settings applied to the root. Good for partial-body solves.\nFree: treats the root bone like any other and allows it to move freely or according to any bone settings applied to it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrePullRootSettings_MetaData[] = {
		{ "Category", "RootBehavior" },
		{ "Comment", "/** Settings only applicable when Root Behavior is set to \"PrePull\". Use these values to adjust the gross movement and orientation of the entire skeleton. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Settings only applicable when Root Behavior is set to \"PrePull\". Use these values to adjust the gross movement and orientation of the entire skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalPullChainAlpha_MetaData[] = {
		{ "Category", "AdvancedSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A global multiplier for all Pull Chain Alpha values on all effectors. Range is 0.0 to 1.0. Default is 1.0. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "A global multiplier for all Pull Chain Alpha values on all effectors. Range is 0.0 to 1.0. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[] = {
		{ "Category", "AdvancedSettings" },
		{ "ClampMax", "45" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum angle that a joint can be rotated per constraint iteration. Lower this value if the solve is diverging. Range is 0.0 to 180.0. Default is 30. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Maximum angle that a joint can be rotated per constraint iteration. Lower this value if the solve is diverging. Range is 0.0 to 180.0. Default is 30." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverRelaxation_MetaData[] = {
		{ "Category", "AdvancedSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Pushes constraints beyond their normal amount to speed up convergence. Increasing this may speed up convergence, but at the cost of stability. Range is 1.0 - 2.0. Default is 1.3. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Pushes constraints beyond their normal amount to speed up convergence. Increasing this may speed up convergence, but at the cost of stability. Range is 1.0 - 2.0. Default is 1.3." },
		{ "UIMax", "2.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartSolveFromInputPose_MetaData[] = {
		{ "Comment", "/** DEPRECATED: When true, the solver is reset each tick to start from the current input pose. Default is true.\n\x09 * If false, incoming animated poses are ignored and the solver starts from the results of the previous solve.\n\x09 * In very limited circumstances, it can be beneficial to use the pose from the previous frame.*/" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "DEPRECATED: When true, the solver is reset each tick to start from the current input pose. Default is true.\nIf false, incoming animated poses are ignored and the solver starts from the results of the previous solve.\nIn very limited circumstances, it can be beneficial to use the pose from the previous frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MassMultiplier;
	static void NewProp_bAllowStretch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStretch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RootBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RootBehavior;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrePullRootSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalPullChainAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverRelaxation;
	static void NewProp_bStartSolveFromInputPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartSolveFromInputPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPBIKSolverSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKSolverSettings, Iterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iterations_MetaData), NewProp_Iterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_SubIterations = { "SubIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKSolverSettings, SubIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubIterations_MetaData), NewProp_SubIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MassMultiplier = { "MassMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKSolverSettings, MassMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassMultiplier_MetaData), NewProp_MassMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch_SetBit(void* Obj)
{
	((FPBIKSolverSettings*)Obj)->bAllowStretch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch = { "bAllowStretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPBIKSolverSettings), &Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowStretch_MetaData), NewProp_bAllowStretch_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_RootBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_RootBehavior = { "RootBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKSolverSettings, RootBehavior), Z_Construct_UEnum_PBIK_EPBIKRootBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootBehavior_MetaData), NewProp_RootBehavior_MetaData) }; // 1480353707
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_PrePullRootSettings = { "PrePullRootSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKSolverSettings, PrePullRootSettings), Z_Construct_UScriptStruct_FRootPrePullSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrePullRootSettings_MetaData), NewProp_PrePullRootSettings_MetaData) }; // 3608361146
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_GlobalPullChainAlpha = { "GlobalPullChainAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKSolverSettings, GlobalPullChainAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalPullChainAlpha_MetaData), NewProp_GlobalPullChainAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKSolverSettings, MaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngle_MetaData), NewProp_MaxAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_OverRelaxation = { "OverRelaxation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPBIKSolverSettings, OverRelaxation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverRelaxation_MetaData), NewProp_OverRelaxation_MetaData) };
void Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bStartSolveFromInputPose_SetBit(void* Obj)
{
	((FPBIKSolverSettings*)Obj)->bStartSolveFromInputPose_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bStartSolveFromInputPose = { "bStartSolveFromInputPose", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPBIKSolverSettings), &Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bStartSolveFromInputPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartSolveFromInputPose_MetaData), NewProp_bStartSolveFromInputPose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_Iterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_SubIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MassMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_RootBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_RootBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_PrePullRootSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_GlobalPullChainAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_OverRelaxation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bStartSolveFromInputPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PBIK,
	nullptr,
	&NewStructOps,
	"PBIKSolverSettings",
	Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::PropPointers),
	sizeof(FPBIKSolverSettings),
	alignof(FPBIKSolverSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolverSettings()
{
	if (!Z_Registration_Info_UScriptStruct_PBIKSolverSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PBIKSolverSettings.InnerSingleton, Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PBIKSolverSettings.InnerSingleton;
}
// End ScriptStruct FPBIKSolverSettings

// Begin ScriptStruct FPBIKSolver
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PBIKSolver;
class UScriptStruct* FPBIKSolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PBIKSolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PBIKSolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPBIKSolver, (UObject*)Z_Construct_UPackage__Script_PBIK(), TEXT("PBIKSolver"));
	}
	return Z_Registration_Info_UScriptStruct_PBIKSolver.OuterSingleton;
}
template<> PBIK_API UScriptStruct* StaticStruct<FPBIKSolver>()
{
	return FPBIKSolver::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPBIKSolver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPBIKSolver>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPBIKSolver_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PBIK,
	nullptr,
	&NewStructOps,
	"PBIKSolver",
	nullptr,
	0,
	sizeof(FPBIKSolver),
	alignof(FPBIKSolver),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolver_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPBIKSolver_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolver()
{
	if (!Z_Registration_Info_UScriptStruct_PBIKSolver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PBIKSolver.InnerSingleton, Z_Construct_UScriptStruct_FPBIKSolver_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PBIKSolver.InnerSingleton;
}
// End ScriptStruct FPBIKSolver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPBIKRootBehavior_StaticEnum, TEXT("EPBIKRootBehavior"), &Z_Registration_Info_UEnum_EPBIKRootBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1480353707U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRootPrePullSettings::StaticStruct, Z_Construct_UScriptStruct_FRootPrePullSettings_Statics::NewStructOps, TEXT("RootPrePullSettings"), &Z_Registration_Info_UScriptStruct_RootPrePullSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootPrePullSettings), 3608361146U) },
		{ FPBIKSolverSettings::StaticStruct, Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewStructOps, TEXT("PBIKSolverSettings"), &Z_Registration_Info_UScriptStruct_PBIKSolverSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPBIKSolverSettings), 2987404117U) },
		{ FPBIKSolver::StaticStruct, Z_Construct_UScriptStruct_FPBIKSolver_Statics::NewStructOps, TEXT("PBIKSolver"), &Z_Registration_Info_UScriptStruct_PBIKSolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPBIKSolver), 331870920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_3013688484(TEXT("/Script/PBIK"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
