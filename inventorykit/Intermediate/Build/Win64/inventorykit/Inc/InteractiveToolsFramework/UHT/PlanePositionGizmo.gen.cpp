// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/PlanePositionGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanePositionGizmo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPlanePositionGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPlanePositionGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPlanePositionGizmoBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPlanePositionGizmoBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UPlanePositionGizmoBuilder
void UPlanePositionGizmoBuilder::StaticRegisterNativesUPlanePositionGizmoBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlanePositionGizmoBuilder);
UClass* Z_Construct_UClass_UPlanePositionGizmoBuilder_NoRegister()
{
	return UPlanePositionGizmoBuilder::StaticClass();
}
struct Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/PlanePositionGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanePositionGizmoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::ClassParams = {
	&UPlanePositionGizmoBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlanePositionGizmoBuilder()
{
	if (!Z_Registration_Info_UClass_UPlanePositionGizmoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanePositionGizmoBuilder.OuterSingleton, Z_Construct_UClass_UPlanePositionGizmoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlanePositionGizmoBuilder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UPlanePositionGizmoBuilder>()
{
	return UPlanePositionGizmoBuilder::StaticClass();
}
UPlanePositionGizmoBuilder::UPlanePositionGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanePositionGizmoBuilder);
UPlanePositionGizmoBuilder::~UPlanePositionGizmoBuilder() {}
// End Class UPlanePositionGizmoBuilder

// Begin Class UPlanePositionGizmo
void UPlanePositionGizmo::StaticRegisterNativesUPlanePositionGizmo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlanePositionGizmo);
UClass* Z_Construct_UClass_UPlanePositionGizmo_NoRegister()
{
	return UPlanePositionGizmo::StaticClass();
}
struct Z_Construct_UClass_UPlanePositionGizmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPlanePositionGizmo implements a gizmo interaction where 2D parameter value is manipulated\n * by dragging a point on a 3D plane in space. The 3D position is converted to 2D coordinates\n * based on the tangent axes of the plane.\n * \n * As with other base gizmos, this class only implements the interaction. The visual aspect of the\n * gizmo, the plane, and the parameter storage are all provided externally.\n *\n * The plane is provided by an IGizmoAxisSource. The origin and normal define the plane and then\n * the tangent axes of the source define the coordinate space. \n * \n * The interaction target (ie the thing you have to click on to start the dragging interaction) is provided by an IGizmoClickTarget. \n *\n * The new 2D parameter value is sent to an IGizmoVec2ParameterSource\n *\n * Internally a UClickDragInputBehavior is used to handle mouse input, configured in ::Setup()\n */" },
		{ "IncludePath", "BaseGizmos/PlanePositionGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "UPlanePositionGizmo implements a gizmo interaction where 2D parameter value is manipulated\nby dragging a point on a 3D plane in space. The 3D position is converted to 2D coordinates\nbased on the tangent axes of the plane.\n\nAs with other base gizmos, this class only implements the interaction. The visual aspect of the\ngizmo, the plane, and the parameter storage are all provided externally.\n\nThe plane is provided by an IGizmoAxisSource. The origin and normal define the plane and then\nthe tangent axes of the source define the coordinate space.\n\nThe interaction target (ie the thing you have to click on to start the dragging interaction) is provided by an IGizmoClickTarget.\n\nThe new 2D parameter value is sent to an IGizmoVec2ParameterSource\n\nInternally a UClickDragInputBehavior is used to handle mouse input, configured in ::Setup()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** AxisSource provides the 3D plane on which the interaction happens */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "AxisSource provides the 3D plane on which the interaction happens" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterSource_MetaData[] = {
		{ "Comment", "/** The 3D plane coordinates are converted to 2D coordinates in the plane tangent space, and the change in value is sent to this ParameterSource */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "The 3D plane coordinates are converted to 2D coordinates in the plane tangent space, and the change in value is sent to this ParameterSource" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitTarget_MetaData[] = {
		{ "Comment", "/** The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTarget_MetaData[] = {
		{ "Comment", "/** StateTarget is notified when interaction starts and ends, so that things like undo/redo can be handled externally */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "StateTarget is notified when interaction starts and ends, so that things like undo/redo can be handled externally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseBehavior_MetaData[] = {
		{ "Comment", "/** The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSignedAxis_MetaData[] = {
		{ "Comment", "/** If enabled, then the sign on the parameter delta is always \"increasing\" when moving away from the origin point, rather than just being a projection onto the axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "If enabled, then the sign on the parameter delta is always \"increasing\" when moving away from the origin point, rather than just being a projection onto the axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipX_MetaData[] = {
		{ "Comment", "/** If enabled, flip sign of parameter delta on X axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "If enabled, flip sign of parameter delta on X axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipY_MetaData[] = {
		{ "Comment", "/** If enabled, flip sign of parameter delta on Y axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "If enabled, flip sign of parameter delta on Y axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInInteraction_MetaData[] = {
		{ "Comment", "/** If true, we are in an active click+drag interaction, otherwise we are not */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "If true, we are in an active click+drag interaction, otherwise we are not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionOrigin_MetaData[] = {
		{ "Comment", "//\n// The values below are used in the context of a single click-drag interaction, ie if bInInteraction = true\n// They otherwise should be considered uninitialized\n//\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
		{ "ToolTip", "The values below are used in the context of a single click-drag interaction, ie if bInInteraction = true\nThey otherwise should be considered uninitialized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAxisX_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAxisY_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCurPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCurParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterSigns_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/PlanePositionGizmo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ParameterSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HitTarget;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_StateTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseBehavior;
	static void NewProp_bEnableSignedAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSignedAxis;
	static void NewProp_bFlipX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipX;
	static void NewProp_bFlipY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipY;
	static void NewProp_bInInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInInteraction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionAxisX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionAxisY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionStartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionCurPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionStartParameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionCurParameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterSigns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanePositionGizmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisSource_MetaData), NewProp_AxisSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSource = { "ParameterSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, ParameterSource), Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterSource_MetaData), NewProp_ParameterSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_HitTarget = { "HitTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, HitTarget), Z_Construct_UClass_UGizmoClickTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitTarget_MetaData), NewProp_HitTarget_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, StateTarget), Z_Construct_UClass_UGizmoStateTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTarget_MetaData), NewProp_StateTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_MouseBehavior = { "MouseBehavior", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, MouseBehavior), Z_Construct_UClass_UClickDragInputBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseBehavior_MetaData), NewProp_MouseBehavior_MetaData) };
void Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bEnableSignedAxis_SetBit(void* Obj)
{
	((UPlanePositionGizmo*)Obj)->bEnableSignedAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bEnableSignedAxis = { "bEnableSignedAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlanePositionGizmo), &Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bEnableSignedAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSignedAxis_MetaData), NewProp_bEnableSignedAxis_MetaData) };
void Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipX_SetBit(void* Obj)
{
	((UPlanePositionGizmo*)Obj)->bFlipX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipX = { "bFlipX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlanePositionGizmo), &Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipX_MetaData), NewProp_bFlipX_MetaData) };
void Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipY_SetBit(void* Obj)
{
	((UPlanePositionGizmo*)Obj)->bFlipY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipY = { "bFlipY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlanePositionGizmo), &Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipY_MetaData), NewProp_bFlipY_MetaData) };
void Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bInInteraction_SetBit(void* Obj)
{
	((UPlanePositionGizmo*)Obj)->bInInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bInInteraction = { "bInInteraction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlanePositionGizmo), &Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bInInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInInteraction_MetaData), NewProp_bInInteraction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionOrigin = { "InteractionOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionOrigin_MetaData), NewProp_InteractionOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionNormal = { "InteractionNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionNormal_MetaData), NewProp_InteractionNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisX = { "InteractionAxisX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionAxisX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionAxisX_MetaData), NewProp_InteractionAxisX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisY = { "InteractionAxisY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionAxisY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionAxisY_MetaData), NewProp_InteractionAxisY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartPoint = { "InteractionStartPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionStartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionStartPoint_MetaData), NewProp_InteractionStartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurPoint = { "InteractionCurPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionCurPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCurPoint_MetaData), NewProp_InteractionCurPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartParameter = { "InteractionStartParameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionStartParameter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionStartParameter_MetaData), NewProp_InteractionStartParameter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurParameter = { "InteractionCurParameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, InteractionCurParameter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCurParameter_MetaData), NewProp_InteractionCurParameter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSigns = { "ParameterSigns", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanePositionGizmo, ParameterSigns), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterSigns_MetaData), NewProp_ParameterSigns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlanePositionGizmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_AxisSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_HitTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_StateTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_MouseBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bEnableSignedAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bFlipY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_bInInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionAxisY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionStartParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_InteractionCurParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanePositionGizmo_Statics::NewProp_ParameterSigns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlanePositionGizmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanePositionGizmo_Statics::ClassParams = {
	&UPlanePositionGizmo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlanePositionGizmo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanePositionGizmo_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlanePositionGizmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlanePositionGizmo()
{
	if (!Z_Registration_Info_UClass_UPlanePositionGizmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanePositionGizmo.OuterSingleton, Z_Construct_UClass_UPlanePositionGizmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlanePositionGizmo.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UPlanePositionGizmo>()
{
	return UPlanePositionGizmo::StaticClass();
}
UPlanePositionGizmo::UPlanePositionGizmo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanePositionGizmo);
UPlanePositionGizmo::~UPlanePositionGizmo() {}
// End Class UPlanePositionGizmo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_PlanePositionGizmo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlanePositionGizmoBuilder, UPlanePositionGizmoBuilder::StaticClass, TEXT("UPlanePositionGizmoBuilder"), &Z_Registration_Info_UClass_UPlanePositionGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanePositionGizmoBuilder), 4079480751U) },
		{ Z_Construct_UClass_UPlanePositionGizmo, UPlanePositionGizmo::StaticClass, TEXT("UPlanePositionGizmo"), &Z_Registration_Info_UClass_UPlanePositionGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanePositionGizmo), 1479498862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_PlanePositionGizmo_h_2692831307(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_PlanePositionGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_PlanePositionGizmo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
