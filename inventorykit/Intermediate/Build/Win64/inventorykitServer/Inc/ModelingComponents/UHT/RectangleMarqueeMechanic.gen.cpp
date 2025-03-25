// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Mechanics/RectangleMarqueeMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRectangleMarqueeMechanic() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeInteraction();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeInteraction_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class URectangleMarqueeMechanic
void URectangleMarqueeMechanic::StaticRegisterNativesURectangleMarqueeMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URectangleMarqueeMechanic);
UClass* Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister()
{
	return URectangleMarqueeMechanic::StaticClass();
}
struct Z_Construct_UClass_URectangleMarqueeMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Mechanic for a rectangle \"marquee\" selection. It creates and maintains the 2D rectangle associated with a mouse drag. \n * It does not test against any scene geometry, nor does it maintain any sort of list of selected objects.\n *\n * When using this mechanic, you should call Render() on it in the tool's Render() call so that it can cache\n * necessary camera state, and DrawHUD() in the tool's DrawHUD() call so that it can draw the box.\n *\n * Attach to the mechanic's delegates and use the passed rectangle to test against your geometry. \n */" },
		{ "IncludePath", "Mechanics/RectangleMarqueeMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/RectangleMarqueeMechanic.h" },
		{ "ToolTip", "* Mechanic for a rectangle \"marquee\" selection. It creates and maintains the 2D rectangle associated with a mouse drag.\n* It does not test against any scene geometry, nor does it maintain any sort of list of selected objects.\n*\n* When using this mechanic, you should call Render() on it in the tool's Render() call so that it can cache\n* necessary camera state, and DrawHUD() in the tool's DrawHUD() call so that it can draw the box.\n*\n* Attach to the mechanic's delegates and use the passed rectangle to test against your geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExternalClickDragBehavior_MetaData[] = {
		{ "Comment", "/** \n\x09 * If true, then the URectangleMarqueeMechanic will not create an internal UClickDragInputBehavior in ::Setup(), allowing\n\x09 * the client to control the marquee with an external InputBehavior that uses the marquee mechanic as it's IClickDragBehaviorTarget.\n\x09 * For instance, this allows the mechanic to be hooked in as the drag component of a USingleClickOrDragInputBehavior.\n\x09 * Must be configured before calling ::Setup()\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mechanics/RectangleMarqueeMechanic.h" },
		{ "ToolTip", "If true, then the URectangleMarqueeMechanic will not create an internal UClickDragInputBehavior in ::Setup(), allowing\nthe client to control the marquee with an external InputBehavior that uses the marquee mechanic as it's IClickDragBehaviorTarget.\nFor instance, this allows the mechanic to be hooked in as the drag component of a USingleClickOrDragInputBehavior.\nMust be configured before calling ::Setup()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExternalUpdateCameraState_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, then the URectangleMarqueeMechanic will not query the tool manager for the current camera view state,\n\x09 but instead call the custom provided function, UpdateCameraStateFunc, to recieve the correct camera state for the \n\x09 CameraRectangle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mechanics/RectangleMarqueeMechanic.h" },
		{ "ToolTip", "If true, then the URectangleMarqueeMechanic will not query the tool manager for the current camera view state,\n        but instead call the custom provided function, UpdateCameraStateFunc, to recieve the correct camera state for the\n        CameraRectangle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDragRectangleChangedDeferredThreshold_MetaData[] = {
		{ "Comment", "/**\n\x09 * If the computation time for a single call to OnDragRectangleChanged ever exceeds this threshold then future calls\n\x09 * to this function (in the current drag sequence) will be deferred until the mouse button is released. This will\n\x09 * improve the responsiveness of the UI. The default value is set so this optimization is never triggered, if you\n\x09 * want it you can set this to a small value e.g., 1./60 (time elapsed by 1 frame at 60 fps)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mechanics/RectangleMarqueeMechanic.h" },
		{ "ToolTip", "If the computation time for a single call to OnDragRectangleChanged ever exceeds this threshold then future calls\nto this function (in the current drag sequence) will be deferred until the mouse button is released. This will\nimprove the responsiveness of the UI. The default value is set so this optimization is never triggered, if you\nwant it you can set this to a small value e.g., 1./60 (time elapsed by 1 frame at 60 fps)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickDragBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/RectangleMarqueeMechanic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseExternalClickDragBehavior_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExternalClickDragBehavior;
	static void NewProp_bUseExternalUpdateCameraState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExternalUpdateCameraState;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OnDragRectangleChangedDeferredThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickDragBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URectangleMarqueeMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalClickDragBehavior_SetBit(void* Obj)
{
	((URectangleMarqueeMechanic*)Obj)->bUseExternalClickDragBehavior = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalClickDragBehavior = { "bUseExternalClickDragBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URectangleMarqueeMechanic), &Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalClickDragBehavior_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExternalClickDragBehavior_MetaData), NewProp_bUseExternalClickDragBehavior_MetaData) };
void Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalUpdateCameraState_SetBit(void* Obj)
{
	((URectangleMarqueeMechanic*)Obj)->bUseExternalUpdateCameraState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalUpdateCameraState = { "bUseExternalUpdateCameraState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URectangleMarqueeMechanic), &Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalUpdateCameraState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExternalUpdateCameraState_MetaData), NewProp_bUseExternalUpdateCameraState_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_OnDragRectangleChangedDeferredThreshold = { "OnDragRectangleChangedDeferredThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URectangleMarqueeMechanic, OnDragRectangleChangedDeferredThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDragRectangleChangedDeferredThreshold_MetaData), NewProp_OnDragRectangleChangedDeferredThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_ClickDragBehavior = { "ClickDragBehavior", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URectangleMarqueeMechanic, ClickDragBehavior), Z_Construct_UClass_UClickDragInputBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickDragBehavior_MetaData), NewProp_ClickDragBehavior_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URectangleMarqueeMechanic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalClickDragBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalUpdateCameraState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_OnDragRectangleChangedDeferredThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_ClickDragBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URectangleMarqueeMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URectangleMarqueeMechanic_Statics::ClassParams = {
	&URectangleMarqueeMechanic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URectangleMarqueeMechanic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_URectangleMarqueeMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URectangleMarqueeMechanic()
{
	if (!Z_Registration_Info_UClass_URectangleMarqueeMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URectangleMarqueeMechanic.OuterSingleton, Z_Construct_UClass_URectangleMarqueeMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URectangleMarqueeMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<URectangleMarqueeMechanic>()
{
	return URectangleMarqueeMechanic::StaticClass();
}
URectangleMarqueeMechanic::URectangleMarqueeMechanic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URectangleMarqueeMechanic);
URectangleMarqueeMechanic::~URectangleMarqueeMechanic() {}
// End Class URectangleMarqueeMechanic

// Begin Class URectangleMarqueeInteraction
void URectangleMarqueeInteraction::StaticRegisterNativesURectangleMarqueeInteraction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URectangleMarqueeInteraction);
UClass* Z_Construct_UClass_URectangleMarqueeInteraction_NoRegister()
{
	return URectangleMarqueeInteraction::StaticClass();
}
struct Z_Construct_UClass_URectangleMarqueeInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * URectangleMarqueeInteraction is a simplified version of URectangleMarqueeMechanic that is not a UInteractionMechanic,\n * which requires a base Tool/ToolManager. This variant does not create it's own InputBehavior, but is still a \n * ClickDragBehaviorTarget. \n * \n * DrawHUD() must be called by the owning code. \n */" },
		{ "IncludePath", "Mechanics/RectangleMarqueeMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/RectangleMarqueeMechanic.h" },
		{ "ToolTip", "* URectangleMarqueeInteraction is a simplified version of URectangleMarqueeMechanic that is not a UInteractionMechanic,\n* which requires a base Tool/ToolManager. This variant does not create it's own InputBehavior, but is still a\n* ClickDragBehaviorTarget.\n*\n* DrawHUD() must be called by the owning code." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URectangleMarqueeInteraction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URectangleMarqueeInteraction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeInteraction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URectangleMarqueeInteraction_Statics::ClassParams = {
	&URectangleMarqueeInteraction::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_URectangleMarqueeInteraction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URectangleMarqueeInteraction()
{
	if (!Z_Registration_Info_UClass_URectangleMarqueeInteraction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URectangleMarqueeInteraction.OuterSingleton, Z_Construct_UClass_URectangleMarqueeInteraction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URectangleMarqueeInteraction.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<URectangleMarqueeInteraction>()
{
	return URectangleMarqueeInteraction::StaticClass();
}
URectangleMarqueeInteraction::URectangleMarqueeInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URectangleMarqueeInteraction);
URectangleMarqueeInteraction::~URectangleMarqueeInteraction() {}
// End Class URectangleMarqueeInteraction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_RectangleMarqueeMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URectangleMarqueeMechanic, URectangleMarqueeMechanic::StaticClass, TEXT("URectangleMarqueeMechanic"), &Z_Registration_Info_UClass_URectangleMarqueeMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URectangleMarqueeMechanic), 721105728U) },
		{ Z_Construct_UClass_URectangleMarqueeInteraction, URectangleMarqueeInteraction::StaticClass, TEXT("URectangleMarqueeInteraction"), &Z_Registration_Info_UClass_URectangleMarqueeInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URectangleMarqueeInteraction), 2471435407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_RectangleMarqueeMechanic_h_717086258(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_RectangleMarqueeMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_RectangleMarqueeMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
