// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/RigControlHierarchy.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigControlHierarchy() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlAxis();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControl();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlHierarchy();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlValue();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElement();
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigControl
static_assert(std::is_polymorphic<FRigControl>() == std::is_polymorphic<FRigElement>(), "USTRUCT FRigControl cannot be polymorphic unless super FRigElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControl;
class UScriptStruct* FRigControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControl, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControl"));
	}
	return Z_Registration_Info_UScriptStruct_RigControl.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControl>()
{
	return FRigControl::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceName_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceIndex_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/**\n\x09 * Used to offset a control in global space. This can be useful\n\x09 * to offset a float control by rotating it or translating it.\n\x09 */" },
		{ "DisplayAfter", "ControlType" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "Used to offset a control in global space. This can be useful\nto offset a float control by rotating it or translating it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/**\n\x09 * The value that a control is reset to during begin play or when the\n\x09 * control rig is instantiated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "The value that a control is reset to during begin play or when the\ncontrol rig is instantiated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/**\n\x09 * The current value of the control.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "The current value of the control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** the primary axis to use for float controls */" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "the primary axis to use for float controls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurve_MetaData[] = {
		{ "Comment", "/** If Created from a Curve  Container*/" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "If Created from a Curve  Container" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimatable_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If the control is animatable in sequencer */" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "If the control is animatable in sequencer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitTranslation_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** True if the control has to obey translation limits. */" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "True if the control has to obey translation limits." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitRotation_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** True if the control has to obey rotation limits. */" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "True if the control has to obey rotation limits." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitScale_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** True if the control has to obey scale limits. */" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "True if the control has to obey scale limits." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLimits_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** True if the limits should be drawn in debug. */" },
		{ "EditCondition", "bLimitTranslation || bLimitRotation || bLimitScale" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "True if the limits should be drawn in debug." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** The minimum limit of the control's value */" },
		{ "EditCondition", "bLimitTranslation || bLimitRotation || bLimitScale" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "The minimum limit of the control's value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumValue_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** The maximum limit of the control's value */" },
		{ "EditCondition", "bLimitTranslation || bLimitRotation || bLimitScale" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "The maximum limit of the control's value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGizmoEnabled_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** Set to true if the gizmo is enabled in 3d */" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "Set to true if the gizmo is enabled in 3d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGizmoVisible_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** Set to true if the gizmo is currently visible in 3d */" },
		{ "EditCondition", "bGizmoEnabled" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "Set to true if the gizmo is currently visible in 3d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoName_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/* This is optional UI setting - this doesn't mean this is always used, but it is optional for manipulation layer to use this*/" },
		{ "EditCondition", "bGizmoEnabled" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "This is optional UI setting - this doesn't mean this is always used, but it is optional for manipulation layer to use this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTransform_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "EditCondition", "bGizmoEnabled" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoColor_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "EditCondition", "bGizmoEnabled" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dependents_MetaData[] = {
		{ "Comment", "/** dependent list - direct dependent for child or anything that needs to update due to this */" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "dependent list - direct dependent for child or anything that needs to update due to this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTransientControl_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If the control is transient and only visible in the control rig editor */" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "If the control is transient and only visible in the control rig editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlEnum_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If the control is transient and only visible in the control rig editor */" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
		{ "ToolTip", "If the control is transient and only visible in the control rig editor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControlType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpaceName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpaceIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryAxis;
	static void NewProp_bIsCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurve;
	static void NewProp_bAnimatable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimatable;
	static void NewProp_bLimitTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitTranslation;
	static void NewProp_bLimitRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitRotation;
	static void NewProp_bLimitScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitScale;
	static void NewProp_bDrawLimits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumValue;
	static void NewProp_bGizmoEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGizmoEnabled;
	static void NewProp_bGizmoVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGizmoVisible;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GizmoName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dependents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dependents;
	static void NewProp_bIsTransientControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTransientControl;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlEnum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControl>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_ControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, ControlType), Z_Construct_UEnum_ControlRig_ERigControlType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlType_MetaData), NewProp_ControlType_MetaData) }; // 83158911
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, ParentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentName_MetaData), NewProp_ParentName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, ParentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIndex_MetaData), NewProp_ParentIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_SpaceName = { "SpaceName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, SpaceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceName_MetaData), NewProp_SpaceName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_SpaceIndex = { "SpaceIndex", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, SpaceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceIndex_MetaData), NewProp_SpaceIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetTransform_MetaData), NewProp_OffsetTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, InitialValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialValue_MetaData), NewProp_InitialValue_MetaData) }; // 4047065167
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, Value), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 4047065167
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_PrimaryAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, PrimaryAxis), Z_Construct_UEnum_ControlRig_ERigControlAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAxis_MetaData), NewProp_PrimaryAxis_MetaData) }; // 1515302631
void Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bIsCurve_SetBit(void* Obj)
{
	((FRigControl*)Obj)->bIsCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bIsCurve = { "bIsCurve", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControl), &Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bIsCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCurve_MetaData), NewProp_bIsCurve_MetaData) };
void Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bAnimatable_SetBit(void* Obj)
{
	((FRigControl*)Obj)->bAnimatable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bAnimatable = { "bAnimatable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControl), &Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bAnimatable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimatable_MetaData), NewProp_bAnimatable_MetaData) };
void Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitTranslation_SetBit(void* Obj)
{
	((FRigControl*)Obj)->bLimitTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitTranslation = { "bLimitTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControl), &Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitTranslation_MetaData), NewProp_bLimitTranslation_MetaData) };
void Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitRotation_SetBit(void* Obj)
{
	((FRigControl*)Obj)->bLimitRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitRotation = { "bLimitRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControl), &Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitRotation_MetaData), NewProp_bLimitRotation_MetaData) };
void Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitScale_SetBit(void* Obj)
{
	((FRigControl*)Obj)->bLimitScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitScale = { "bLimitScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControl), &Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitScale_MetaData), NewProp_bLimitScale_MetaData) };
void Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bDrawLimits_SetBit(void* Obj)
{
	((FRigControl*)Obj)->bDrawLimits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bDrawLimits = { "bDrawLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControl), &Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bDrawLimits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawLimits_MetaData), NewProp_bDrawLimits_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, MinimumValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumValue_MetaData), NewProp_MinimumValue_MetaData) }; // 4047065167
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_MaximumValue = { "MaximumValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, MaximumValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumValue_MetaData), NewProp_MaximumValue_MetaData) }; // 4047065167
void Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bGizmoEnabled_SetBit(void* Obj)
{
	((FRigControl*)Obj)->bGizmoEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bGizmoEnabled = { "bGizmoEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControl), &Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bGizmoEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGizmoEnabled_MetaData), NewProp_bGizmoEnabled_MetaData) };
void Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bGizmoVisible_SetBit(void* Obj)
{
	((FRigControl*)Obj)->bGizmoVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bGizmoVisible = { "bGizmoVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControl), &Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bGizmoVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGizmoVisible_MetaData), NewProp_bGizmoVisible_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_GizmoName = { "GizmoName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, GizmoName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoName_MetaData), NewProp_GizmoName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_GizmoTransform = { "GizmoTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, GizmoTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoTransform_MetaData), NewProp_GizmoTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_GizmoColor = { "GizmoColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, GizmoColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoColor_MetaData), NewProp_GizmoColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_Dependents_Inner = { "Dependents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_Dependents = { "Dependents", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, Dependents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dependents_MetaData), NewProp_Dependents_MetaData) };
void Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bIsTransientControl_SetBit(void* Obj)
{
	((FRigControl*)Obj)->bIsTransientControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bIsTransientControl = { "bIsTransientControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigControl), &Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bIsTransientControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTransientControl_MetaData), NewProp_bIsTransientControl_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_ControlEnum = { "ControlEnum", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControl, ControlEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlEnum_MetaData), NewProp_ControlEnum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_ControlType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_ControlType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_ParentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_ParentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_SpaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_SpaceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_OffsetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_InitialValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_PrimaryAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_PrimaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bIsCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bAnimatable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bLimitScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bDrawLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_MinimumValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_MaximumValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bGizmoEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bGizmoVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_GizmoName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_GizmoTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_GizmoColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_Dependents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_Dependents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_bIsTransientControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControl_Statics::NewProp_ControlEnum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControl_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigElement,
	&NewStructOps,
	"RigControl",
	Z_Construct_UScriptStruct_FRigControl_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControl_Statics::PropPointers),
	sizeof(FRigControl),
	alignof(FRigControl),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigControl_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigControl()
{
	if (!Z_Registration_Info_UScriptStruct_RigControl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControl.InnerSingleton, Z_Construct_UScriptStruct_FRigControl_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigControl.InnerSingleton;
}
// End ScriptStruct FRigControl

// Begin ScriptStruct FRigControlHierarchy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlHierarchy;
class UScriptStruct* FRigControlHierarchy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlHierarchy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlHierarchy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlHierarchy, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlHierarchy"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlHierarchy.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlHierarchy>()
{
	return FRigControlHierarchy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigControlHierarchy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controls_MetaData[] = {
		{ "Category", "FRigControlHierarchy" },
		{ "ModuleRelativePath", "Public/Rigs/RigControlHierarchy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Controls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Controls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlHierarchy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::NewProp_Controls_Inner = { "Controls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigControl, METADATA_PARAMS(0, nullptr) }; // 183799185
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::NewProp_Controls = { "Controls", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigControlHierarchy, Controls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controls_MetaData), NewProp_Controls_MetaData) }; // 183799185
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::NewProp_Controls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::NewProp_Controls,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigControlHierarchy",
	Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::PropPointers),
	sizeof(FRigControlHierarchy),
	alignof(FRigControlHierarchy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigControlHierarchy()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlHierarchy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlHierarchy.InnerSingleton, Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigControlHierarchy.InnerSingleton;
}
// End ScriptStruct FRigControlHierarchy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigControlHierarchy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigControl::StaticStruct, Z_Construct_UScriptStruct_FRigControl_Statics::NewStructOps, TEXT("RigControl"), &Z_Registration_Info_UScriptStruct_RigControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControl), 183799185U) },
		{ FRigControlHierarchy::StaticStruct, Z_Construct_UScriptStruct_FRigControlHierarchy_Statics::NewStructOps, TEXT("RigControlHierarchy"), &Z_Registration_Info_UScriptStruct_RigControlHierarchy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlHierarchy), 1551788975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigControlHierarchy_h_2445509706(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigControlHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigControlHierarchy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
