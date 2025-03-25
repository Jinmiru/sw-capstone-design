// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseBehaviors/ClickDragBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClickDragBehavior() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalClickDragInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalClickDragInputBehavior_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UClickDragInputBehavior
void UClickDragInputBehavior::StaticRegisterNativesUClickDragInputBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClickDragInputBehavior);
UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister()
{
	return UClickDragInputBehavior::StaticClass();
}
struct Z_Construct_UClass_UClickDragInputBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UClickDragInputBehavior implements a standard \"button-click-drag\"-style input behavior.\n * An IClickDragBehaviorTarget instance must be provided which is manipulated by this behavior.\n * \n * The state machine works as follows:\n *    1) on input-device-button-press, call Target::CanBeginClickDragSequence to determine if capture should begin\n *    2) on input-device-move, call Target::OnClickDrag\n *    3) on input-device-button-release, call Target::OnClickRelease\n *    \n * If a ForceEndCapture occurs we call Target::OnTerminateDragSequence   \n */" },
		{ "IncludePath", "BaseBehaviors/ClickDragBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/ClickDragBehavior.h" },
		{ "ToolTip", "UClickDragInputBehavior implements a standard \"button-click-drag\"-style input behavior.\nAn IClickDragBehaviorTarget instance must be provided which is manipulated by this behavior.\n\nThe state machine works as follows:\n   1) on input-device-button-press, call Target::CanBeginClickDragSequence to determine if capture should begin\n   2) on input-device-move, call Target::OnClickDrag\n   3) on input-device-button-release, call Target::OnClickRelease\n\nIf a ForceEndCapture occurs we call Target::OnTerminateDragSequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateModifiersDuringDrag_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, then we will update Modifier states in UpdateCapture(). This defaults to false because\n\x09 * in most cases during a capture you don't want this, eg in a brush interaction, if you have a shift-to-smooth modifier,\n\x09 * you don't want to toggle this on/off during a sculpting stroke.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/ClickDragBehavior.h" },
		{ "ToolTip", "If true, then we will update Modifier states in UpdateCapture(). This defaults to false because\nin most cases during a capture you don't want this, eg in a brush interaction, if you have a shift-to-smooth modifier,\nyou don't want to toggle this on/off during a sculpting stroke." },
	};
#endif // WITH_METADATA
	static void NewProp_bUpdateModifiersDuringDrag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateModifiersDuringDrag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClickDragInputBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UClickDragInputBehavior_Statics::NewProp_bUpdateModifiersDuringDrag_SetBit(void* Obj)
{
	((UClickDragInputBehavior*)Obj)->bUpdateModifiersDuringDrag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClickDragInputBehavior_Statics::NewProp_bUpdateModifiersDuringDrag = { "bUpdateModifiersDuringDrag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UClickDragInputBehavior), &Z_Construct_UClass_UClickDragInputBehavior_Statics::NewProp_bUpdateModifiersDuringDrag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateModifiersDuringDrag_MetaData), NewProp_bUpdateModifiersDuringDrag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClickDragInputBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClickDragInputBehavior_Statics::NewProp_bUpdateModifiersDuringDrag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragInputBehavior_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UClickDragInputBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragInputBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClickDragInputBehavior_Statics::ClassParams = {
	&UClickDragInputBehavior::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UClickDragInputBehavior_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragInputBehavior_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragInputBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UClickDragInputBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClickDragInputBehavior()
{
	if (!Z_Registration_Info_UClass_UClickDragInputBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClickDragInputBehavior.OuterSingleton, Z_Construct_UClass_UClickDragInputBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClickDragInputBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UClickDragInputBehavior>()
{
	return UClickDragInputBehavior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClickDragInputBehavior);
UClickDragInputBehavior::~UClickDragInputBehavior() {}
// End Class UClickDragInputBehavior

// Begin Class ULocalClickDragInputBehavior
void ULocalClickDragInputBehavior::StaticRegisterNativesULocalClickDragInputBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalClickDragInputBehavior);
UClass* Z_Construct_UClass_ULocalClickDragInputBehavior_NoRegister()
{
	return ULocalClickDragInputBehavior::StaticClass();
}
struct Z_Construct_UClass_ULocalClickDragInputBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULocalClickDragInputBehavior is an implementation of UClickDragInputBehavior that also implements IClickDragBehaviorTarget directly,\n * via a set of local lambda functions. To use/customize this class the client replaces the lambda functions with their own.\n * This avoids having to create a second IClickDragBehaviorTarget implementation for trivial use-cases.\n */" },
		{ "IncludePath", "BaseBehaviors/ClickDragBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/ClickDragBehavior.h" },
		{ "ToolTip", "ULocalClickDragInputBehavior is an implementation of UClickDragInputBehavior that also implements IClickDragBehaviorTarget directly,\nvia a set of local lambda functions. To use/customize this class the client replaces the lambda functions with their own.\nThis avoids having to create a second IClickDragBehaviorTarget implementation for trivial use-cases." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalClickDragInputBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClickDragInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::ClassParams = {
	&ULocalClickDragInputBehavior::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocalClickDragInputBehavior()
{
	if (!Z_Registration_Info_UClass_ULocalClickDragInputBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalClickDragInputBehavior.OuterSingleton, Z_Construct_UClass_ULocalClickDragInputBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalClickDragInputBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<ULocalClickDragInputBehavior>()
{
	return ULocalClickDragInputBehavior::StaticClass();
}
ULocalClickDragInputBehavior::ULocalClickDragInputBehavior() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalClickDragInputBehavior);
ULocalClickDragInputBehavior::~ULocalClickDragInputBehavior() {}
// End Class ULocalClickDragInputBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_ClickDragBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClickDragInputBehavior, UClickDragInputBehavior::StaticClass, TEXT("UClickDragInputBehavior"), &Z_Registration_Info_UClass_UClickDragInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClickDragInputBehavior), 3681613928U) },
		{ Z_Construct_UClass_ULocalClickDragInputBehavior, ULocalClickDragInputBehavior::StaticClass, TEXT("ULocalClickDragInputBehavior"), &Z_Registration_Info_UClass_ULocalClickDragInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalClickDragInputBehavior), 3577845495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_ClickDragBehavior_h_2253472969(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_ClickDragBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_ClickDragBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
