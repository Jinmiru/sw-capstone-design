// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Mechanics/PolyLassoMarqueeMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyLassoMarqueeMechanic() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyLassoMarqueeMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyLassoMarqueeMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UPolyLassoMarqueeMechanic
void UPolyLassoMarqueeMechanic::StaticRegisterNativesUPolyLassoMarqueeMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyLassoMarqueeMechanic);
UClass* Z_Construct_UClass_UPolyLassoMarqueeMechanic_NoRegister()
{
	return UPolyLassoMarqueeMechanic::StaticClass();
}
struct Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Mechanic for a PolyLasso \"marquee\" selection. It creates and maintains the 2D PolyLasso associated with a mouse drag. \n * It does not test against any scene geometry, nor does it maintain any sort of list of selected objects.\n *\n * The PolyLasso has two potential modes, a freehand polyline and a multi-click polygon. By default both are enabled\n * but this can be selectively controlled with flags below. If a click-and-release is within a small distance tolerance,\n * then a multi-click polygon is entered, and must be exited by clicking again at the start point. The freehand polyline\n * is drawn by click-dragging, and exited by releasing the mouse.\n *\n * When using this mechanic, you should call DrawHUD() in the tool's DrawHUD() call so that it can draw the box.\n *\n * Attach to the mechanic's delegates and use the passed PolyLasso to test against your geometry. \n */" },
		{ "IncludePath", "Mechanics/PolyLassoMarqueeMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/PolyLassoMarqueeMechanic.h" },
		{ "ToolTip", "* Mechanic for a PolyLasso \"marquee\" selection. It creates and maintains the 2D PolyLasso associated with a mouse drag.\n* It does not test against any scene geometry, nor does it maintain any sort of list of selected objects.\n*\n* The PolyLasso has two potential modes, a freehand polyline and a multi-click polygon. By default both are enabled\n* but this can be selectively controlled with flags below. If a click-and-release is within a small distance tolerance,\n* then a multi-click polygon is entered, and must be exited by clicking again at the start point. The freehand polyline\n* is drawn by click-dragging, and exited by releasing the mouse.\n*\n* When using this mechanic, you should call DrawHUD() in the tool's DrawHUD() call so that it can draw the box.\n*\n* Attach to the mechanic's delegates and use the passed PolyLasso to test against your geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingTolerance_MetaData[] = {
		{ "Comment", "/** Tolerance for PolyLasso points and closure test */" },
		{ "ModuleRelativePath", "Public/Mechanics/PolyLassoMarqueeMechanic.h" },
		{ "ToolTip", "Tolerance for PolyLasso points and closure test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Comment", "/** Thickness of the 2D PolyLasso drawing path */" },
		{ "ModuleRelativePath", "Public/Mechanics/PolyLassoMarqueeMechanic.h" },
		{ "ToolTip", "Thickness of the 2D PolyLasso drawing path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[] = {
		{ "Comment", "/** PolyLasso path is drawn in this color */" },
		{ "ModuleRelativePath", "Public/Mechanics/PolyLassoMarqueeMechanic.h" },
		{ "ToolTip", "PolyLasso path is drawn in this color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosedColor_MetaData[] = {
		{ "Comment", "/** PolyLasso path is drawn in this color if the cursor is at a point that would close the loop */" },
		{ "ModuleRelativePath", "Public/Mechanics/PolyLassoMarqueeMechanic.h" },
		{ "ToolTip", "PolyLasso path is drawn in this color if the cursor is at a point that would close the loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFreehandPolygons_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, freehand polygons can be drawn by click-dragging the mouse\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mechanics/PolyLassoMarqueeMechanic.h" },
		{ "ToolTip", "If true, freehand polygons can be drawn by click-dragging the mouse" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiClickPolygons_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, if click and release are within SpacingTolerance, mechanic enters a multi-click mode,\n\x09 * where each click adds a vertex to a polygon. Polygon must be closed by clicking within 2*SpacingTolerance\n\x09 * of the initial point to exit this mode. However, rotating the camera will also cancel out of the interaction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mechanics/PolyLassoMarqueeMechanic.h" },
		{ "ToolTip", "If true, if click and release are within SpacingTolerance, mechanic enters a multi-click mode,\nwhere each click adds a vertex to a polygon. Polygon must be closed by clicking within 2*SpacingTolerance\nof the initial point to exit this mode. However, rotating the camera will also cancel out of the interaction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickDragBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/PolyLassoMarqueeMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/PolyLassoMarqueeMechanic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClosedColor;
	static void NewProp_bEnableFreehandPolygons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFreehandPolygons;
	static void NewProp_bEnableMultiClickPolygons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiClickPolygons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickDragBehavior;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyLassoMarqueeMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_SpacingTolerance = { "SpacingTolerance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyLassoMarqueeMechanic, SpacingTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingTolerance_MetaData), NewProp_SpacingTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyLassoMarqueeMechanic, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyLassoMarqueeMechanic, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineColor_MetaData), NewProp_LineColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_ClosedColor = { "ClosedColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyLassoMarqueeMechanic, ClosedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosedColor_MetaData), NewProp_ClosedColor_MetaData) };
void Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_bEnableFreehandPolygons_SetBit(void* Obj)
{
	((UPolyLassoMarqueeMechanic*)Obj)->bEnableFreehandPolygons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_bEnableFreehandPolygons = { "bEnableFreehandPolygons", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyLassoMarqueeMechanic), &Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_bEnableFreehandPolygons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFreehandPolygons_MetaData), NewProp_bEnableFreehandPolygons_MetaData) };
void Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_bEnableMultiClickPolygons_SetBit(void* Obj)
{
	((UPolyLassoMarqueeMechanic*)Obj)->bEnableMultiClickPolygons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_bEnableMultiClickPolygons = { "bEnableMultiClickPolygons", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyLassoMarqueeMechanic), &Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_bEnableMultiClickPolygons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMultiClickPolygons_MetaData), NewProp_bEnableMultiClickPolygons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_ClickDragBehavior = { "ClickDragBehavior", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyLassoMarqueeMechanic, ClickDragBehavior), Z_Construct_UClass_UClickDragInputBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickDragBehavior_MetaData), NewProp_ClickDragBehavior_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_HoverBehavior = { "HoverBehavior", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyLassoMarqueeMechanic, HoverBehavior), Z_Construct_UClass_UMouseHoverBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverBehavior_MetaData), NewProp_HoverBehavior_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_SpacingTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_LineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_ClosedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_bEnableFreehandPolygons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_bEnableMultiClickPolygons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_ClickDragBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::NewProp_HoverBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::ClassParams = {
	&UPolyLassoMarqueeMechanic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyLassoMarqueeMechanic()
{
	if (!Z_Registration_Info_UClass_UPolyLassoMarqueeMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyLassoMarqueeMechanic.OuterSingleton, Z_Construct_UClass_UPolyLassoMarqueeMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyLassoMarqueeMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UPolyLassoMarqueeMechanic>()
{
	return UPolyLassoMarqueeMechanic::StaticClass();
}
UPolyLassoMarqueeMechanic::UPolyLassoMarqueeMechanic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyLassoMarqueeMechanic);
UPolyLassoMarqueeMechanic::~UPolyLassoMarqueeMechanic() {}
// End Class UPolyLassoMarqueeMechanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PolyLassoMarqueeMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPolyLassoMarqueeMechanic, UPolyLassoMarqueeMechanic::StaticClass, TEXT("UPolyLassoMarqueeMechanic"), &Z_Registration_Info_UClass_UPolyLassoMarqueeMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyLassoMarqueeMechanic), 3988676224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PolyLassoMarqueeMechanic_h_1279840327(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PolyLassoMarqueeMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PolyLassoMarqueeMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
