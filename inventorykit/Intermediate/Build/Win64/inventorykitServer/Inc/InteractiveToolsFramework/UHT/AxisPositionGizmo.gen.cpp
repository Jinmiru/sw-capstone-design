// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/AxisPositionGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisPositionGizmo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisPositionGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisPositionGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisPositionGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisPositionGizmoBuilder_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoViewContext_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UAxisPositionGizmoBuilder
void UAxisPositionGizmoBuilder::StaticRegisterNativesUAxisPositionGizmoBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxisPositionGizmoBuilder);
UClass* Z_Construct_UClass_UAxisPositionGizmoBuilder_NoRegister()
{
	return UAxisPositionGizmoBuilder::StaticClass();
}
struct Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/AxisPositionGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisPositionGizmoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::ClassParams = {
	&UAxisPositionGizmoBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAxisPositionGizmoBuilder()
{
	if (!Z_Registration_Info_UClass_UAxisPositionGizmoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxisPositionGizmoBuilder.OuterSingleton, Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAxisPositionGizmoBuilder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAxisPositionGizmoBuilder>()
{
	return UAxisPositionGizmoBuilder::StaticClass();
}
UAxisPositionGizmoBuilder::UAxisPositionGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisPositionGizmoBuilder);
UAxisPositionGizmoBuilder::~UAxisPositionGizmoBuilder() {}
// End Class UAxisPositionGizmoBuilder

// Begin Class UAxisPositionGizmo
void UAxisPositionGizmo::StaticRegisterNativesUAxisPositionGizmo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxisPositionGizmo);
UClass* Z_Construct_UClass_UAxisPositionGizmo_NoRegister()
{
	return UAxisPositionGizmo::StaticClass();
}
struct Z_Construct_UClass_UAxisPositionGizmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAxisPositionGizmo implements a gizmo interaction where 1D parameter value is manipulated\n * by dragging a point on a 3D line/axis in space. The 3D point is converted to the axis parameter at\n * the nearest point, giving us the 1D parameter value.\n *\n * As with other base gizmos, this class only implements the interaction. The visual aspect of the\n * gizmo, the axis, and the parameter storage are all provided externally.\n *\n * The axis direction+origin is provided by an IGizmoAxisSource. \n *\n * The interaction target (ie the thing you have to click on to start the dragging interaction) is provided by an IGizmoClickTarget.\n *\n * The new 1D parameter value is sent to an IGizmoFloatParameterSource\n *\n * Internally a UClickDragInputBehavior is used to handle mouse input, configured in ::Setup()\n */" },
		{ "IncludePath", "BaseGizmos/AxisPositionGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "UAxisPositionGizmo implements a gizmo interaction where 1D parameter value is manipulated\nby dragging a point on a 3D line/axis in space. The 3D point is converted to the axis parameter at\nthe nearest point, giving us the 1D parameter value.\n\nAs with other base gizmos, this class only implements the interaction. The visual aspect of the\ngizmo, the axis, and the parameter storage are all provided externally.\n\nThe axis direction+origin is provided by an IGizmoAxisSource.\n\nThe interaction target (ie the thing you have to click on to start the dragging interaction) is provided by an IGizmoClickTarget.\n\nThe new 1D parameter value is sent to an IGizmoFloatParameterSource\n\nInternally a UClickDragInputBehavior is used to handle mouse input, configured in ::Setup()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** AxisSource provides the 3D line on which the interaction happens */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "AxisSource provides the 3D line on which the interaction happens" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterSource_MetaData[] = {
		{ "Comment", "/** The 3D line-nearest-point is converted to a 1D coordinate along the line, and the change in value is sent to this ParameterSource */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "The 3D line-nearest-point is converted to a 1D coordinate along the line, and the change in value is sent to this ParameterSource" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoViewContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitTarget_MetaData[] = {
		{ "Comment", "/** The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTarget_MetaData[] = {
		{ "Comment", "/** StateTarget is notified when interaction starts and ends, so that things like undo/redo can be handled externally. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "StateTarget is notified when interaction starts and ends, so that things like undo/redo can be handled externally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseBehavior_MetaData[] = {
		{ "Comment", "/** The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSignedAxis_MetaData[] = {
		{ "Comment", "/** If enabled, then the sign on the parameter delta is always \"increasing\" when moving away from the origin point, rather than just being a projection onto the axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "If enabled, then the sign on the parameter delta is always \"increasing\" when moving away from the origin point, rather than just being a projection onto the axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInInteraction_MetaData[] = {
		{ "Comment", "/** If true, we are in an active click+drag interaction, otherwise we are not */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "If true, we are in an active click+drag interaction, otherwise we are not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionOrigin_MetaData[] = {
		{ "Comment", "//\n// The values below are used in the context of a single click-drag interaction, ie if bInInteraction = true\n// They otherwise should be considered uninitialized\n//\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "The values below are used in the context of a single click-drag interaction, ie if bInInteraction = true\nThey otherwise should be considered uninitialized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCurPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCurParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterSign_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ParameterSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoViewContext;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HitTarget;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_StateTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseBehavior;
	static void NewProp_bEnableSignedAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSignedAxis;
	static void NewProp_bInInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInInteraction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionStartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionCurPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionStartParameter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionCurParameter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterSign;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisPositionGizmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisSource_MetaData), NewProp_AxisSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSource = { "ParameterSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, ParameterSource), Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterSource_MetaData), NewProp_ParameterSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_GizmoViewContext = { "GizmoViewContext", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, GizmoViewContext), Z_Construct_UClass_UGizmoViewContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoViewContext_MetaData), NewProp_GizmoViewContext_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_HitTarget = { "HitTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, HitTarget), Z_Construct_UClass_UGizmoClickTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitTarget_MetaData), NewProp_HitTarget_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, StateTarget), Z_Construct_UClass_UGizmoStateTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTarget_MetaData), NewProp_StateTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_MouseBehavior = { "MouseBehavior", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, MouseBehavior), Z_Construct_UClass_UClickDragInputBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseBehavior_MetaData), NewProp_MouseBehavior_MetaData) };
void Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis_SetBit(void* Obj)
{
	((UAxisPositionGizmo*)Obj)->bEnableSignedAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis = { "bEnableSignedAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAxisPositionGizmo), &Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSignedAxis_MetaData), NewProp_bEnableSignedAxis_MetaData) };
void Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction_SetBit(void* Obj)
{
	((UAxisPositionGizmo*)Obj)->bInInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction = { "bInInteraction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAxisPositionGizmo), &Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInInteraction_MetaData), NewProp_bInInteraction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionOrigin = { "InteractionOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, InteractionOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionOrigin_MetaData), NewProp_InteractionOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionAxis = { "InteractionAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, InteractionAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionAxis_MetaData), NewProp_InteractionAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartPoint = { "InteractionStartPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, InteractionStartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionStartPoint_MetaData), NewProp_InteractionStartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurPoint = { "InteractionCurPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, InteractionCurPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCurPoint_MetaData), NewProp_InteractionCurPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartParameter = { "InteractionStartParameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, InteractionStartParameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionStartParameter_MetaData), NewProp_InteractionStartParameter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurParameter = { "InteractionCurParameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, InteractionCurParameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCurParameter_MetaData), NewProp_InteractionCurParameter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSign = { "ParameterSign", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxisPositionGizmo, ParameterSign), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterSign_MetaData), NewProp_ParameterSign_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxisPositionGizmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_AxisSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_GizmoViewContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_HitTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_StateTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_MouseBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSign,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAxisPositionGizmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxisPositionGizmo_Statics::ClassParams = {
	&UAxisPositionGizmo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAxisPositionGizmo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxisPositionGizmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAxisPositionGizmo()
{
	if (!Z_Registration_Info_UClass_UAxisPositionGizmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxisPositionGizmo.OuterSingleton, Z_Construct_UClass_UAxisPositionGizmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAxisPositionGizmo.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAxisPositionGizmo>()
{
	return UAxisPositionGizmo::StaticClass();
}
UAxisPositionGizmo::UAxisPositionGizmo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisPositionGizmo);
UAxisPositionGizmo::~UAxisPositionGizmo() {}
// End Class UAxisPositionGizmo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisPositionGizmo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAxisPositionGizmoBuilder, UAxisPositionGizmoBuilder::StaticClass, TEXT("UAxisPositionGizmoBuilder"), &Z_Registration_Info_UClass_UAxisPositionGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxisPositionGizmoBuilder), 2268969309U) },
		{ Z_Construct_UClass_UAxisPositionGizmo, UAxisPositionGizmo::StaticClass, TEXT("UAxisPositionGizmo"), &Z_Registration_Info_UClass_UAxisPositionGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxisPositionGizmo), 2501743174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisPositionGizmo_h_2972819094(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisPositionGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisPositionGizmo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
