// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Simulation/RigUnit_PointSimulation.h"
#include "ControlRig/Public/Math/Simulation/CRSimLinearSpring.h"
#include "ControlRig/Public/Math/Simulation/CRSimPointContainer.h"
#include "ControlRig/Public/Math/Simulation/CRSimPointForce.h"
#include "ControlRig/Public/Math/Simulation/CRSimSoftCollision.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_PointSimulation() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimLinearSpring();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointContainer();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointForce();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimSoftCollision();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFourPointBezier();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMSimPoint();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_PointSimulation_DebugSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings;
class UScriptStruct* FRigUnit_PointSimulation_DebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PointSimulation_DebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PointSimulation_DebugSettings>()
{
	return FRigUnit_PointSimulation_DebugSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * If enabled debug information will be drawn \n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "If enabled debug information will be drawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The size of the debug drawing information\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The size of the debug drawing information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionScale_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n     * The size of the debug drawing information\n     */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The size of the debug drawing information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawPointsAsSpheres_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * If set to true points will be drawn as spheres with their sizes reflected\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "If set to true points will be drawn as spheres with their sizes reflected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The color to use for debug drawing\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The color to use for debug drawing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The offset at which to draw the debug information in the world\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The offset at which to draw the debug information in the world" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionScale;
	static void NewProp_bDrawPointsAsSpheres_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPointsAsSpheres;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PointSimulation_DebugSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_PointSimulation_DebugSettings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_PointSimulation_DebugSettings), &Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation_DebugSettings, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_CollisionScale = { "CollisionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation_DebugSettings, CollisionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionScale_MetaData), NewProp_CollisionScale_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bDrawPointsAsSpheres_SetBit(void* Obj)
{
	((FRigUnit_PointSimulation_DebugSettings*)Obj)->bDrawPointsAsSpheres = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bDrawPointsAsSpheres = { "bDrawPointsAsSpheres", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_PointSimulation_DebugSettings), &Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bDrawPointsAsSpheres_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawPointsAsSpheres_MetaData), NewProp_bDrawPointsAsSpheres_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation_DebugSettings, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation_DebugSettings, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_CollisionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bDrawPointsAsSpheres,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_WorldOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_PointSimulation_DebugSettings",
	Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::PropPointers),
	sizeof(FRigUnit_PointSimulation_DebugSettings),
	alignof(FRigUnit_PointSimulation_DebugSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings.InnerSingleton;
}
// End ScriptStruct FRigUnit_PointSimulation_DebugSettings

// Begin ScriptStruct FRigUnit_PointSimulation_BoneTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget;
class UScriptStruct* FRigUnit_PointSimulation_BoneTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PointSimulation_BoneTarget"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PointSimulation_BoneTarget>()
{
	return FRigUnit_PointSimulation_BoneTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
		{ "Category", "BoneTarget" },
		{ "Comment", "/**\n\x09 * The name of the bone to map\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The name of the bone to map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationPoint_MetaData[] = {
		{ "Category", "BoneTarget" },
		{ "Comment", "/**\n\x09 * The index of the point to use for translation\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The index of the point to use for translation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAimPoint_MetaData[] = {
		{ "Category", "BoneTarget" },
		{ "Comment", "/**\n\x09 * The index of the point to use for aiming the primary axis.\n\x09 * Use -1 to indicate that you don't want to aim the bone.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The index of the point to use for aiming the primary axis.\nUse -1 to indicate that you don't want to aim the bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAimPoint_MetaData[] = {
		{ "Category", "BoneTarget" },
		{ "Comment", "/**\n\x09 * The index of the point to use for aiming the secondary axis.\n\x09 * Use -1 to indicate that you don't want to aim the bone.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The index of the point to use for aiming the secondary axis.\nUse -1 to indicate that you don't want to aim the bone." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TranslationPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrimaryAimPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondaryAimPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PointSimulation_BoneTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation_BoneTarget, Bone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bone_MetaData), NewProp_Bone_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_TranslationPoint = { "TranslationPoint", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation_BoneTarget, TranslationPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationPoint_MetaData), NewProp_TranslationPoint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_PrimaryAimPoint = { "PrimaryAimPoint", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation_BoneTarget, PrimaryAimPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAimPoint_MetaData), NewProp_PrimaryAimPoint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_SecondaryAimPoint = { "SecondaryAimPoint", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation_BoneTarget, SecondaryAimPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAimPoint_MetaData), NewProp_SecondaryAimPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_Bone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_TranslationPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_PrimaryAimPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_SecondaryAimPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_PointSimulation_BoneTarget",
	Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::PropPointers),
	sizeof(FRigUnit_PointSimulation_BoneTarget),
	alignof(FRigUnit_PointSimulation_BoneTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget.InnerSingleton;
}
// End ScriptStruct FRigUnit_PointSimulation_BoneTarget

// Begin ScriptStruct FRigUnit_PointSimulation_WorkData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData;
class UScriptStruct* FRigUnit_PointSimulation_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PointSimulation_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PointSimulation_WorkData>()
{
	return FRigUnit_PointSimulation_WorkData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Simulation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Simulation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PointSimulation_WorkData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_Simulation = { "Simulation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation_WorkData, Simulation), Z_Construct_UScriptStruct_FCRSimPointContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Simulation_MetaData), NewProp_Simulation_MetaData) }; // 324899149
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_BoneIndices_Inner = { "BoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_BoneIndices = { "BoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation_WorkData, BoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIndices_MetaData), NewProp_BoneIndices_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_Simulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_BoneIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_BoneIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_PointSimulation_WorkData",
	Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::PropPointers),
	sizeof(FRigUnit_PointSimulation_WorkData),
	alignof(FRigUnit_PointSimulation_WorkData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData.InnerSingleton;
}
// End ScriptStruct FRigUnit_PointSimulation_WorkData

// Begin ScriptStruct FRigUnit_PointSimulation
static_assert(std::is_polymorphic<FRigUnit_PointSimulation>() == std::is_polymorphic<FRigVMFunction_SimBaseMutable>(), "USTRUCT FRigUnit_PointSimulation cannot be polymorphic unless super FRigVMFunction_SimBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation;
class UScriptStruct* FRigUnit_PointSimulation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PointSimulation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PointSimulation"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PointSimulation_Execute;
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("Points"), TEXT("TArray<FRigVMSimPoint>"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("Links"), TEXT("TArray<FCRSimLinearSpring>"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("Forces"), TEXT("TArray<FCRSimPointForce>"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("CollisionVolumes"), TEXT("TArray<FCRSimSoftCollision>"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("SimulatedStepsPerSecond"), TEXT("float"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("IntegratorType"), TEXT("ERigVMSimPointIntegrateType"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("VerletBlend"), TEXT("float"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("BoneTargets"), TEXT("TArray<FRigUnit_PointSimulation_BoneTarget>"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("bLimitLocalPosition"), TEXT("bool"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("PrimaryAimAxis"), TEXT("FVector"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("SecondaryAimAxis"), TEXT("FVector"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_PointSimulation_DebugSettings"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("Bezier"), TEXT("FRigVMFourPointBezier"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_PointSimulation_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PointSimulation::Execute"), &FRigUnit_PointSimulation::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.OuterSingleton, Arguments_FRigUnit_PointSimulation_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PointSimulation>()
{
	return FRigUnit_PointSimulation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Performs point based simulation\n * Note: Disabled for now.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Point Simulation" },
		{ "Keywords", "Simulate,Verlet,Springs" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "Performs point based simulation\nNote: Disabled for now." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The points to simulate */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The points to simulate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The links to connect the points with */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The links to connect the points with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Forces_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The forces to apply */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The forces to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionVolumes_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The collision volumes to define */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The collision volumes to define" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedStepsPerSecond_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The frame rate of the simulation */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The frame rate of the simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegratorType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The type of integrator to use */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The type of integrator to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerletBlend_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The amount of blending to apply per second ( only for verlet integrations )*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The amount of blending to apply per second ( only for verlet integrations )" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneTargets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The bones to map to the simulated points. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The bones to map to the simulated points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitLocalPosition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true bones are placed within the original distance of\n\x09 * the previous local transform. This can be used to avoid stretch.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "If set to true bones are placed within the original distance of\nthe previous local transform. This can be used to avoid stretch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAimAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The primary axis to use for the aim */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The primary axis to use for the aim" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAimAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The secondary axis to use for the aim */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The secondary axis to use for the aim" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Debug draw settings for this simulation */" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "Debug draw settings for this simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bezier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** If the simulation has at least four points they will be stored in here. */" },
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "Output", "" },
		{ "ToolTip", "If the simulation has at least four points they will be stored in here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Simulation/RigUnit_PointSimulation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Links;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Forces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Forces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionVolumes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionVolumes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulatedStepsPerSecond;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IntegratorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IntegratorType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerletBlend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneTargets;
	static void NewProp_bLimitLocalPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitLocalPosition;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAimAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAimAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bezier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PointSimulation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMSimPoint, METADATA_PARAMS(0, nullptr) }; // 1765622201
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) }; // 1765622201
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCRSimLinearSpring, METADATA_PARAMS(0, nullptr) }; // 1992971679
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, Links), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Links_MetaData), NewProp_Links_MetaData) }; // 1992971679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Forces_Inner = { "Forces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCRSimPointForce, METADATA_PARAMS(0, nullptr) }; // 3337756034
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Forces = { "Forces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, Forces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Forces_MetaData), NewProp_Forces_MetaData) }; // 3337756034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_CollisionVolumes_Inner = { "CollisionVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCRSimSoftCollision, METADATA_PARAMS(0, nullptr) }; // 3844221830
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_CollisionVolumes = { "CollisionVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, CollisionVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionVolumes_MetaData), NewProp_CollisionVolumes_MetaData) }; // 3844221830
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SimulatedStepsPerSecond = { "SimulatedStepsPerSecond", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, SimulatedStepsPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulatedStepsPerSecond_MetaData), NewProp_SimulatedStepsPerSecond_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_IntegratorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_IntegratorType = { "IntegratorType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, IntegratorType), Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegratorType_MetaData), NewProp_IntegratorType_MetaData) }; // 713805871
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_VerletBlend = { "VerletBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, VerletBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerletBlend_MetaData), NewProp_VerletBlend_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_BoneTargets_Inner = { "BoneTargets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget, METADATA_PARAMS(0, nullptr) }; // 831647848
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_BoneTargets = { "BoneTargets", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, BoneTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneTargets_MetaData), NewProp_BoneTargets_MetaData) }; // 831647848
void Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bLimitLocalPosition_SetBit(void* Obj)
{
	((FRigUnit_PointSimulation*)Obj)->bLimitLocalPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bLimitLocalPosition = { "bLimitLocalPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_PointSimulation), &Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bLimitLocalPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitLocalPosition_MetaData), NewProp_bLimitLocalPosition_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_PointSimulation*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_PointSimulation), &Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_PrimaryAimAxis = { "PrimaryAimAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, PrimaryAimAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAimAxis_MetaData), NewProp_PrimaryAimAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SecondaryAimAxis = { "SecondaryAimAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, SecondaryAimAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAimAxis_MetaData), NewProp_SecondaryAimAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSettings_MetaData), NewProp_DebugSettings_MetaData) }; // 1753964932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Bezier = { "Bezier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, Bezier), Z_Construct_UScriptStruct_FRigVMFourPointBezier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bezier_MetaData), NewProp_Bezier_MetaData) }; // 2766953902
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PointSimulation, WorkData), Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 3341269674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Links_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Links,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Forces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Forces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_CollisionVolumes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_CollisionVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SimulatedStepsPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_IntegratorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_IntegratorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_VerletBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_BoneTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_BoneTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bLimitLocalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_PrimaryAimAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SecondaryAimAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_DebugSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Bezier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable,
	&NewStructOps,
	"RigUnit_PointSimulation",
	Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::PropPointers),
	sizeof(FRigUnit_PointSimulation),
	alignof(FRigUnit_PointSimulation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.InnerSingleton;
}
void FRigUnit_PointSimulation::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_PointSimulation::Execute(FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FRigVMSimPoint> Points_0_Array(Points);
	TArrayView<const FCRSimLinearSpring> Links_1_Array(Links);
	TArrayView<const FCRSimPointForce> Forces_2_Array(Forces);
	TArrayView<const FCRSimSoftCollision> CollisionVolumes_3_Array(CollisionVolumes);
	TArrayView<const FRigUnit_PointSimulation_BoneTarget> BoneTargets_7_Array(BoneTargets);
	StaticExecute(
		InExecuteContext,
		Points_0_Array,
		Links_1_Array,
		Forces_2_Array,
		CollisionVolumes_3_Array,
		SimulatedStepsPerSecond,
		IntegratorType,
		VerletBlend,
		BoneTargets_7_Array,
		bLimitLocalPosition,
		bPropagateToChildren,
		PrimaryAimAxis,
		SecondaryAimAxis,
		DebugSettings,
		Bezier,
		WorkData
	);
}
// End ScriptStruct FRigUnit_PointSimulation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_PointSimulation_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_PointSimulation_DebugSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewStructOps, TEXT("RigUnit_PointSimulation_DebugSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PointSimulation_DebugSettings), 1753964932U) },
		{ FRigUnit_PointSimulation_BoneTarget::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewStructOps, TEXT("RigUnit_PointSimulation_BoneTarget"), &Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PointSimulation_BoneTarget), 831647848U) },
		{ FRigUnit_PointSimulation_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewStructOps, TEXT("RigUnit_PointSimulation_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PointSimulation_WorkData), 3341269674U) },
		{ FRigUnit_PointSimulation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewStructOps, TEXT("RigUnit_PointSimulation"), &Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PointSimulation), 3246300963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_PointSimulation_h_3230387161(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_PointSimulation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Simulation_RigUnit_PointSimulation_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
