// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseBehaviors/SingleClickOrDragBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleClickOrDragBehavior() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickOrDragInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class USingleClickOrDragInputBehavior
void USingleClickOrDragInputBehavior::StaticRegisterNativesUSingleClickOrDragInputBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleClickOrDragInputBehavior);
UClass* Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister()
{
	return USingleClickOrDragInputBehavior::StaticClass();
}
struct Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USingleClickOrDragInputBehavior is a combination of a USingleClickBehavior and UClickDragBehavior,\n * and allows for the common UI interaction where a click-and-release does one action, but if the mouse \n * is moved, then a drag interaction is started. For example click-to-select is often combined with\n * a drag-marquee-rectangle in this way. This can be directly implemented with a UClickDragBehavior but\n * requires the client to (eg) detect movement thresholds, etc. This class encapsulates all that state/logic.\n * \n * The .ClickDistanceThreshold parameter determines how far the mouse must move (in whatever device units are in use)\n * to switch from a click to drag interaction\n * \n * The .bBeginDragIfClickTargetNotHit parameter determines if the drag interaction will be immediately initiated \n * if the initial 'click' mouse-down does not hit a valid clickable target. Defaults to true. \n *\n * The hit-test and on-clicked functions are provided by a IClickBehaviorTarget instance, while an\n * IClickDragBehaviorTarget provides the can-click-drag/begin-drag/update-drag/end-drag functionality.\n */" },
		{ "IncludePath", "BaseBehaviors/SingleClickOrDragBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/SingleClickOrDragBehavior.h" },
		{ "ToolTip", "USingleClickOrDragInputBehavior is a combination of a USingleClickBehavior and UClickDragBehavior,\nand allows for the common UI interaction where a click-and-release does one action, but if the mouse\nis moved, then a drag interaction is started. For example click-to-select is often combined with\na drag-marquee-rectangle in this way. This can be directly implemented with a UClickDragBehavior but\nrequires the client to (eg) detect movement thresholds, etc. This class encapsulates all that state/logic.\n\nThe .ClickDistanceThreshold parameter determines how far the mouse must move (in whatever device units are in use)\nto switch from a click to drag interaction\n\nThe .bBeginDragIfClickTargetNotHit parameter determines if the drag interaction will be immediately initiated\nif the initial 'click' mouse-down does not hit a valid clickable target. Defaults to true.\n\nThe hit-test and on-clicked functions are provided by a IClickBehaviorTarget instance, while an\nIClickDragBehaviorTarget provides the can-click-drag/begin-drag/update-drag/end-drag functionality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBeginDragIfClickTargetNotHit_MetaData[] = {
		{ "Comment", "/** If true (default), then if the click-mouse-down does not hit a valid click target (determined by IClickBehaviorTarget::IsHitByClick), then the Drag will be initiated */" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/SingleClickOrDragBehavior.h" },
		{ "ToolTip", "If true (default), then if the click-mouse-down does not hit a valid click target (determined by IClickBehaviorTarget::IsHitByClick), then the Drag will be initiated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickDistanceThreshold_MetaData[] = {
		{ "Comment", "/** If the device moves more than this distance in 2D (pixel?) units, the interaction switches from click to drag */" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/SingleClickOrDragBehavior.h" },
		{ "ToolTip", "If the device moves more than this distance in 2D (pixel?) units, the interaction switches from click to drag" },
	};
#endif // WITH_METADATA
	static void NewProp_bBeginDragIfClickTargetNotHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBeginDragIfClickTargetNotHit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClickDistanceThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleClickOrDragInputBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::NewProp_bBeginDragIfClickTargetNotHit_SetBit(void* Obj)
{
	((USingleClickOrDragInputBehavior*)Obj)->bBeginDragIfClickTargetNotHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::NewProp_bBeginDragIfClickTargetNotHit = { "bBeginDragIfClickTargetNotHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USingleClickOrDragInputBehavior), &Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::NewProp_bBeginDragIfClickTargetNotHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBeginDragIfClickTargetNotHit_MetaData), NewProp_bBeginDragIfClickTargetNotHit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::NewProp_ClickDistanceThreshold = { "ClickDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USingleClickOrDragInputBehavior, ClickDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickDistanceThreshold_MetaData), NewProp_ClickDistanceThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::NewProp_bBeginDragIfClickTargetNotHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::NewProp_ClickDistanceThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::ClassParams = {
	&USingleClickOrDragInputBehavior::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USingleClickOrDragInputBehavior()
{
	if (!Z_Registration_Info_UClass_USingleClickOrDragInputBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleClickOrDragInputBehavior.OuterSingleton, Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USingleClickOrDragInputBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USingleClickOrDragInputBehavior>()
{
	return USingleClickOrDragInputBehavior::StaticClass();
}
USingleClickOrDragInputBehavior::USingleClickOrDragInputBehavior() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USingleClickOrDragInputBehavior);
USingleClickOrDragInputBehavior::~USingleClickOrDragInputBehavior() {}
// End Class USingleClickOrDragInputBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USingleClickOrDragInputBehavior, USingleClickOrDragInputBehavior::StaticClass, TEXT("USingleClickOrDragInputBehavior"), &Z_Registration_Info_UClass_USingleClickOrDragInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleClickOrDragInputBehavior), 3703801131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_2079156254(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
