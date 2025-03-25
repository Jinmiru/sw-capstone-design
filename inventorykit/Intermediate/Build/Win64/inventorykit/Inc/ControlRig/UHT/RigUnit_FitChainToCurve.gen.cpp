// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_FitChainToCurve() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFourPointBezier();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum EControlRigCurveAlignment
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigCurveAlignment;
static UEnum* EControlRigCurveAlignment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EControlRigCurveAlignment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EControlRigCurveAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigCurveAlignment"));
	}
	return Z_Registration_Info_UEnum_EControlRigCurveAlignment.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigCurveAlignment>()
{
	return EControlRigCurveAlignment_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Front.Name", "EControlRigCurveAlignment::Front" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "Stretched.Name", "EControlRigCurveAlignment::Stretched" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControlRigCurveAlignment::Front", (int64)EControlRigCurveAlignment::Front },
		{ "EControlRigCurveAlignment::Stretched", (int64)EControlRigCurveAlignment::Stretched },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EControlRigCurveAlignment",
	"EControlRigCurveAlignment",
	Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment()
{
	if (!Z_Registration_Info_UEnum_EControlRigCurveAlignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigCurveAlignment.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EControlRigCurveAlignment.InnerSingleton;
}
// End Enum EControlRigCurveAlignment

// Begin ScriptStruct FRigUnit_FitChainToCurve_Rotation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_Rotation;
class UScriptStruct* FRigUnit_FitChainToCurve_Rotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_Rotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_Rotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FitChainToCurve_Rotation"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_Rotation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FitChainToCurve_Rotation>()
{
	return FRigUnit_FitChainToCurve_Rotation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 * The rotation to be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The rotation to be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 * The ratio of where this rotation sits along the chain\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The ratio of where this rotation sits along the chain" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitChainToCurve_Rotation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_Rotation, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_Rotation, Ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ratio_MetaData), NewProp_Ratio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::NewProp_Ratio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_FitChainToCurve_Rotation",
	Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::PropPointers),
	sizeof(FRigUnit_FitChainToCurve_Rotation),
	alignof(FRigUnit_FitChainToCurve_Rotation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_Rotation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_Rotation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_Rotation.InnerSingleton;
}
// End ScriptStruct FRigUnit_FitChainToCurve_Rotation

// Begin ScriptStruct FRigUnit_FitChainToCurve_DebugSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_DebugSettings;
class UScriptStruct* FRigUnit_FitChainToCurve_DebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_DebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_DebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FitChainToCurve_DebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_DebugSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FitChainToCurve_DebugSettings>()
{
	return FRigUnit_FitChainToCurve_DebugSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * If enabled debug information will be drawn\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "If enabled debug information will be drawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The size of the debug drawing information\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The size of the debug drawing information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveColor_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The color to use for debug drawing\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The color to use for debug drawing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentsColor_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The color to use for debug drawing\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The color to use for debug drawing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The offset at which to draw the debug information in the world\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The offset at which to draw the debug information in the world" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentsColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitChainToCurve_DebugSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_FitChainToCurve_DebugSettings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_FitChainToCurve_DebugSettings), &Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_DebugSettings, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewProp_CurveColor = { "CurveColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_DebugSettings, CurveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveColor_MetaData), NewProp_CurveColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewProp_SegmentsColor = { "SegmentsColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_DebugSettings, SegmentsColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentsColor_MetaData), NewProp_SegmentsColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_DebugSettings, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewProp_CurveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewProp_SegmentsColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewProp_WorldOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_FitChainToCurve_DebugSettings",
	Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::PropPointers),
	sizeof(FRigUnit_FitChainToCurve_DebugSettings),
	alignof(FRigUnit_FitChainToCurve_DebugSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_DebugSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_DebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_DebugSettings.InnerSingleton;
}
// End ScriptStruct FRigUnit_FitChainToCurve_DebugSettings

// Begin ScriptStruct FRigUnit_FitChainToCurve_WorkData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_WorkData;
class UScriptStruct* FRigUnit_FitChainToCurve_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FitChainToCurve_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FitChainToCurve_WorkData>()
{
	return FRigUnit_FitChainToCurve_WorkData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPositions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSegments_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvePositions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveSegments_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemRotationA_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemRotationB_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemRotationT_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemLocalTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChainLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemPositions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemSegments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemSegments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurvePositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvePositions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveSegments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveSegments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemRotationA_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemRotationA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemRotationB_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemRotationB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemRotationT_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemRotationT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemLocalTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemLocalTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitChainToCurve_WorkData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ChainLength = { "ChainLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_WorkData, ChainLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainLength_MetaData), NewProp_ChainLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemPositions_Inner = { "ItemPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemPositions = { "ItemPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_WorkData, ItemPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPositions_MetaData), NewProp_ItemPositions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemSegments_Inner = { "ItemSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemSegments = { "ItemSegments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_WorkData, ItemSegments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSegments_MetaData), NewProp_ItemSegments_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_CurvePositions_Inner = { "CurvePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_CurvePositions = { "CurvePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_WorkData, CurvePositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvePositions_MetaData), NewProp_CurvePositions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_CurveSegments_Inner = { "CurveSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_CurveSegments = { "CurveSegments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_WorkData, CurveSegments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveSegments_MetaData), NewProp_CurveSegments_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedItems_MetaData), NewProp_CachedItems_MetaData) }; // 2782416853
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemRotationA_Inner = { "ItemRotationA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemRotationA = { "ItemRotationA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_WorkData, ItemRotationA), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemRotationA_MetaData), NewProp_ItemRotationA_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemRotationB_Inner = { "ItemRotationB", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemRotationB = { "ItemRotationB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_WorkData, ItemRotationB), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemRotationB_MetaData), NewProp_ItemRotationB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemRotationT_Inner = { "ItemRotationT", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemRotationT = { "ItemRotationT", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_WorkData, ItemRotationT), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemRotationT_MetaData), NewProp_ItemRotationT_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemLocalTransforms_Inner = { "ItemLocalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemLocalTransforms = { "ItemLocalTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve_WorkData, ItemLocalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemLocalTransforms_MetaData), NewProp_ItemLocalTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ChainLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemSegments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_CurvePositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_CurvePositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_CurveSegments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_CurveSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_CachedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_CachedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemRotationA_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemRotationA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemRotationB_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemRotationB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemRotationT_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemRotationT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemLocalTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewProp_ItemLocalTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigUnit_FitChainToCurve_WorkData",
	Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::PropPointers),
	sizeof(FRigUnit_FitChainToCurve_WorkData),
	alignof(FRigUnit_FitChainToCurve_WorkData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_WorkData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_WorkData.InnerSingleton;
}
// End ScriptStruct FRigUnit_FitChainToCurve_WorkData

// Begin ScriptStruct FRigUnit_FitChainToCurve
static_assert(std::is_polymorphic<FRigUnit_FitChainToCurve>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FitChainToCurve cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve;
class UScriptStruct* FRigUnit_FitChainToCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FitChainToCurve"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FitChainToCurve_Execute;
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("StartBone"), TEXT("FName"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("EndBone"), TEXT("FName"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("Bezier"), TEXT("FRigVMFourPointBezier"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("Alignment"), TEXT("EControlRigCurveAlignment"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("SamplingPrecision"), TEXT("int32"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("PoleVectorPosition"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_FitChainToCurve_Rotation>"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_FitChainToCurve_DebugSettings"));
		Arguments_FRigUnit_FitChainToCurve_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_FitChainToCurve_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FitChainToCurve::Execute"), &FRigUnit_FitChainToCurve::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve.OuterSingleton, Arguments_FRigUnit_FitChainToCurve_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FitChainToCurve>()
{
	return FRigUnit_FitChainToCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Fits a given chain to a four point bezier curve.\n * Additionally provides rotational control matching the features of the Distribute Rotation node.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Fit Chain on Curve" },
		{ "Keywords", "Fit,Resample,Bezier" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "Fits a given chain to a four point bezier curve.\nAdditionally provides rotational control matching the features of the Distribute Rotation node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the first bone to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The name of the first bone to align" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the last bone to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The name of the last bone to align" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bezier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The curve to align to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The curve to align to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * Specifies how to align the chain on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "Specifies how to align the chain on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The minimum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The minimum U value to use on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The maximum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The maximum U value to use on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingPrecision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The number of samples to use on the curve. Clamped at 64.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The number of samples to use on the curve. Clamped at 64." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The major axis being aligned - along the bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The major axis being aligned - along the bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The minor axis being aligned - towards the pole vector.\n\x09 * You can use (0.0, 0.0, 0.0) to disable it.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The minor axis being aligned - towards the pole vector.\nYou can use (0.0, 0.0, 0.0) to disable it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorPosition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The the position of the pole vector used for aligning the secondary axis.\n\x09 * Only has an effect if the secondary axis is set.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The the position of the pole vector used for aligning the secondary axis.\nOnly has an effect if the secondary axis is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied along the curve\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The list of rotations to be applied along the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bezier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingPrecision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVectorPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitChainToCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, StartBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartBone_MetaData), NewProp_StartBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, EndBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndBone_MetaData), NewProp_EndBone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Bezier = { "Bezier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, Bezier), Z_Construct_UScriptStruct_FRigVMFourPointBezier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bezier_MetaData), NewProp_Bezier_MetaData) }; // 2766953902
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, Alignment), Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 252698936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, Minimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, Maximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_SamplingPrecision = { "SamplingPrecision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, SamplingPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingPrecision_MetaData), NewProp_SamplingPrecision_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAxis_MetaData), NewProp_PrimaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAxis_MetaData), NewProp_SecondaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_PoleVectorPosition = { "PoleVectorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, PoleVectorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleVectorPosition_MetaData), NewProp_PoleVectorPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation, METADATA_PARAMS(0, nullptr) }; // 1223358926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotations_MetaData), NewProp_Rotations_MetaData) }; // 1223358926
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationEaseType_MetaData), NewProp_RotationEaseType_MetaData) }; // 3483435321
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_FitChainToCurve*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_FitChainToCurve), &Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSettings_MetaData), NewProp_DebugSettings_MetaData) }; // 2968576509
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurve, WorkData), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 883419156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_StartBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_EndBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Bezier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Alignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_SamplingPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_PrimaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_SecondaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_PoleVectorPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Rotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Rotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_RotationEaseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_RotationEaseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_DebugSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_FitChainToCurve",
	Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::PropPointers),
	sizeof(FRigUnit_FitChainToCurve),
	alignof(FRigUnit_FitChainToCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve.InnerSingleton;
}
void FRigUnit_FitChainToCurve::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_FitChainToCurve::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_FitChainToCurve_Rotation> Rotations_10_Array(Rotations);
	StaticExecute(
		InExecuteContext,
		StartBone,
		EndBone,
		Bezier,
		Alignment,
		Minimum,
		Maximum,
		SamplingPrecision,
		PrimaryAxis,
		SecondaryAxis,
		PoleVectorPosition,
		Rotations_10_Array,
		RotationEaseType,
		Weight,
		bPropagateToChildren,
		DebugSettings,
		WorkData
	);
}
// End ScriptStruct FRigUnit_FitChainToCurve

// Begin ScriptStruct FRigUnit_FitChainToCurvePerItem
static_assert(std::is_polymorphic<FRigUnit_FitChainToCurvePerItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FitChainToCurvePerItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurvePerItem;
class UScriptStruct* FRigUnit_FitChainToCurvePerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurvePerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurvePerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FitChainToCurvePerItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FitChainToCurvePerItem_Execute;
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("Bezier"), TEXT("FRigVMFourPointBezier"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("Alignment"), TEXT("EControlRigCurveAlignment"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("SamplingPrecision"), TEXT("int32"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("PoleVectorPosition"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_FitChainToCurve_Rotation>"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_FitChainToCurve_DebugSettings"));
		Arguments_FRigUnit_FitChainToCurvePerItem_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_FitChainToCurve_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FitChainToCurvePerItem::Execute"), &FRigUnit_FitChainToCurvePerItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurvePerItem.OuterSingleton, Arguments_FRigUnit_FitChainToCurvePerItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurvePerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FitChainToCurvePerItem>()
{
	return FRigUnit_FitChainToCurvePerItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Fits a given chain to a four point bezier curve.\n * Additionally provides rotational control matching the features of the Distribute Rotation node.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Fit Chain on Curve" },
		{ "Keywords", "Fit,Resample,Bezier" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "Fits a given chain to a four point bezier curve.\nAdditionally provides rotational control matching the features of the Distribute Rotation node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The items to align" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bezier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The curve to align to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The curve to align to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * Specifies how to align the chain on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "Specifies how to align the chain on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The minimum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The minimum U value to use on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The maximum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The maximum U value to use on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingPrecision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The number of samples to use on the curve. Clamped at 64.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The number of samples to use on the curve. Clamped at 64." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The major axis being aligned - along the bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The major axis being aligned - along the bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The minor axis being aligned - towards the pole vector.\n\x09 * You can use (0.0, 0.0, 0.0) to disable it.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The minor axis being aligned - towards the pole vector.\nYou can use (0.0, 0.0, 0.0) to disable it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorPosition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The the position of the pole vector used for aligning the secondary axis.\n\x09 * Only has an effect if the secondary axis is set.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The the position of the pole vector used for aligning the secondary axis.\nOnly has an effect if the secondary axis is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied along the curve\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The list of rotations to be applied along the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bezier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingPrecision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVectorPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitChainToCurvePerItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Bezier = { "Bezier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, Bezier), Z_Construct_UScriptStruct_FRigVMFourPointBezier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bezier_MetaData), NewProp_Bezier_MetaData) }; // 2766953902
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, Alignment), Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 252698936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, Minimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, Maximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_SamplingPrecision = { "SamplingPrecision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, SamplingPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingPrecision_MetaData), NewProp_SamplingPrecision_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAxis_MetaData), NewProp_PrimaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAxis_MetaData), NewProp_SecondaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_PoleVectorPosition = { "PoleVectorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, PoleVectorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleVectorPosition_MetaData), NewProp_PoleVectorPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation, METADATA_PARAMS(0, nullptr) }; // 1223358926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotations_MetaData), NewProp_Rotations_MetaData) }; // 1223358926
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationEaseType_MetaData), NewProp_RotationEaseType_MetaData) }; // 3483435321
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_FitChainToCurvePerItem*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_FitChainToCurvePerItem), &Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSettings_MetaData), NewProp_DebugSettings_MetaData) }; // 2968576509
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurvePerItem, WorkData), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 883419156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Bezier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Alignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_SamplingPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_PrimaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_SecondaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_PoleVectorPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Rotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Rotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_RotationEaseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_RotationEaseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_DebugSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_FitChainToCurvePerItem",
	Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::PropPointers),
	sizeof(FRigUnit_FitChainToCurvePerItem),
	alignof(FRigUnit_FitChainToCurvePerItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurvePerItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurvePerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurvePerItem.InnerSingleton;
}
void FRigUnit_FitChainToCurvePerItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_FitChainToCurvePerItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_FitChainToCurve_Rotation> Rotations_9_Array(Rotations);
	StaticExecute(
		InExecuteContext,
		Items,
		Bezier,
		Alignment,
		Minimum,
		Maximum,
		SamplingPrecision,
		PrimaryAxis,
		SecondaryAxis,
		PoleVectorPosition,
		Rotations_9_Array,
		RotationEaseType,
		Weight,
		bPropagateToChildren,
		DebugSettings,
		WorkData
	);
}
// End ScriptStruct FRigUnit_FitChainToCurvePerItem

// Begin ScriptStruct FRigUnit_FitChainToCurveItemArray
static_assert(std::is_polymorphic<FRigUnit_FitChainToCurveItemArray>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FitChainToCurveItemArray cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurveItemArray;
class UScriptStruct* FRigUnit_FitChainToCurveItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurveItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurveItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FitChainToCurveItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FitChainToCurveItemArray_Execute;
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("Bezier"), TEXT("FRigVMFourPointBezier"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("Alignment"), TEXT("EControlRigCurveAlignment"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("SamplingPrecision"), TEXT("int32"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("PoleVectorPosition"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_FitChainToCurve_Rotation>"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_FitChainToCurve_DebugSettings"));
		Arguments_FRigUnit_FitChainToCurveItemArray_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_FitChainToCurve_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FitChainToCurveItemArray::Execute"), &FRigUnit_FitChainToCurveItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurveItemArray.OuterSingleton, Arguments_FRigUnit_FitChainToCurveItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurveItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FitChainToCurveItemArray>()
{
	return FRigUnit_FitChainToCurveItemArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Fits a given chain to a four point bezier curve.\n * Additionally provides rotational control matching the features of the Distribute Rotation node.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Fit Chain on Curve" },
		{ "Keywords", "Fit,Resample,Bezier" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "Fits a given chain to a four point bezier curve.\nAdditionally provides rotational control matching the features of the Distribute Rotation node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The items to align" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bezier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The curve to align to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The curve to align to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * Specifies how to align the chain on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "Specifies how to align the chain on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The minimum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The minimum U value to use on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The maximum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The maximum U value to use on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingPrecision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The number of samples to use on the curve. Clamped at 64.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The number of samples to use on the curve. Clamped at 64." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The major axis being aligned - along the bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The major axis being aligned - along the bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The minor axis being aligned - towards the pole vector.\n\x09 * You can use (0.0, 0.0, 0.0) to disable it.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The minor axis being aligned - towards the pole vector.\nYou can use (0.0, 0.0, 0.0) to disable it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorPosition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The the position of the pole vector used for aligning the secondary axis.\n\x09 * Only has an effect if the secondary axis is set.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The the position of the pole vector used for aligning the secondary axis.\nOnly has an effect if the secondary axis is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied along the curve\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The list of rotations to be applied along the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bezier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingPrecision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVectorPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitChainToCurveItemArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Bezier = { "Bezier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, Bezier), Z_Construct_UScriptStruct_FRigVMFourPointBezier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bezier_MetaData), NewProp_Bezier_MetaData) }; // 2766953902
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, Alignment), Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 252698936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, Minimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, Maximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_SamplingPrecision = { "SamplingPrecision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, SamplingPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingPrecision_MetaData), NewProp_SamplingPrecision_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAxis_MetaData), NewProp_PrimaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAxis_MetaData), NewProp_SecondaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_PoleVectorPosition = { "PoleVectorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, PoleVectorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleVectorPosition_MetaData), NewProp_PoleVectorPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation, METADATA_PARAMS(0, nullptr) }; // 1223358926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotations_MetaData), NewProp_Rotations_MetaData) }; // 1223358926
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationEaseType_MetaData), NewProp_RotationEaseType_MetaData) }; // 3483435321
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_FitChainToCurveItemArray*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_FitChainToCurveItemArray), &Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSettings_MetaData), NewProp_DebugSettings_MetaData) }; // 2968576509
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToCurveItemArray, WorkData), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 883419156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Bezier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Alignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_SamplingPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_PrimaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_SecondaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_PoleVectorPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Rotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Rotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_RotationEaseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_RotationEaseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_DebugSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_FitChainToCurveItemArray",
	Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::PropPointers),
	sizeof(FRigUnit_FitChainToCurveItemArray),
	alignof(FRigUnit_FitChainToCurveItemArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurveItemArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurveItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurveItemArray.InnerSingleton;
}
void FRigUnit_FitChainToCurveItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_FitChainToCurveItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	TArrayView<const FRigUnit_FitChainToCurve_Rotation> Rotations_9_Array(Rotations);
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Bezier,
		Alignment,
		Minimum,
		Maximum,
		SamplingPrecision,
		PrimaryAxis,
		SecondaryAxis,
		PoleVectorPosition,
		Rotations_9_Array,
		RotationEaseType,
		Weight,
		bPropagateToChildren,
		DebugSettings,
		WorkData
	);
}
// End ScriptStruct FRigUnit_FitChainToCurveItemArray

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EControlRigCurveAlignment_StaticEnum, TEXT("EControlRigCurveAlignment"), &Z_Registration_Info_UEnum_EControlRigCurveAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 252698936U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_FitChainToCurve_Rotation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics::NewStructOps, TEXT("RigUnit_FitChainToCurve_Rotation"), &Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_Rotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitChainToCurve_Rotation), 1223358926U) },
		{ FRigUnit_FitChainToCurve_DebugSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics::NewStructOps, TEXT("RigUnit_FitChainToCurve_DebugSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_DebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitChainToCurve_DebugSettings), 2968576509U) },
		{ FRigUnit_FitChainToCurve_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics::NewStructOps, TEXT("RigUnit_FitChainToCurve_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitChainToCurve_WorkData), 883419156U) },
		{ FRigUnit_FitChainToCurve::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics::NewStructOps, TEXT("RigUnit_FitChainToCurve"), &Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitChainToCurve), 1330453143U) },
		{ FRigUnit_FitChainToCurvePerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics::NewStructOps, TEXT("RigUnit_FitChainToCurvePerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurvePerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitChainToCurvePerItem), 2341502953U) },
		{ FRigUnit_FitChainToCurveItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics::NewStructOps, TEXT("RigUnit_FitChainToCurveItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_FitChainToCurveItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitChainToCurveItemArray), 645233143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_3025812212(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
