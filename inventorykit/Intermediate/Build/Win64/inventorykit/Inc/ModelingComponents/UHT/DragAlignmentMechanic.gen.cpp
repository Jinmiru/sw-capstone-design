// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Mechanics/DragAlignmentMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragAlignmentMechanic() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentInteraction();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentInteraction_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UDragAlignmentMechanic
void UDragAlignmentMechanic::StaticRegisterNativesUDragAlignmentMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDragAlignmentMechanic);
UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister()
{
	return UDragAlignmentMechanic::StaticClass();
}
struct Z_Construct_UClass_UDragAlignmentMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mechanic that can be added to (potentially multiple) UCombinedTransformGizmo object to allow them to snap to\n * scene geometry in rotation and translation when the Ctrl key is pressed.\n */" },
		{ "IncludePath", "Mechanics/DragAlignmentMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/DragAlignmentMechanic.h" },
		{ "ToolTip", "Mechanic that can be added to (potentially multiple) UCombinedTransformGizmo object to allow them to snap to\nscene geometry in rotation and translation when the Ctrl key is pressed." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragAlignmentMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDragAlignmentMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDragAlignmentMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDragAlignmentMechanic_Statics::ClassParams = {
	&UDragAlignmentMechanic::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDragAlignmentMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_UDragAlignmentMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDragAlignmentMechanic()
{
	if (!Z_Registration_Info_UClass_UDragAlignmentMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDragAlignmentMechanic.OuterSingleton, Z_Construct_UClass_UDragAlignmentMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDragAlignmentMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDragAlignmentMechanic>()
{
	return UDragAlignmentMechanic::StaticClass();
}
UDragAlignmentMechanic::UDragAlignmentMechanic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDragAlignmentMechanic);
UDragAlignmentMechanic::~UDragAlignmentMechanic() {}
// End Class UDragAlignmentMechanic

// Begin Class UDragAlignmentInteraction
void UDragAlignmentInteraction::StaticRegisterNativesUDragAlignmentInteraction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDragAlignmentInteraction);
UClass* Z_Construct_UClass_UDragAlignmentInteraction_NoRegister()
{
	return UDragAlignmentInteraction::StaticClass();
}
struct Z_Construct_UClass_UDragAlignmentInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Interaction that can be added to (potentially multiple) UCombinedTransformGizmo object to allow them to snap to\n * scene geometry in rotation and translation. Generally driven by an externally-provided UKeyAsModifierInputBehavior,\n * or alternately can be directly updated by calling ::OnUpdateModifierState()\n */" },
		{ "IncludePath", "Mechanics/DragAlignmentMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/DragAlignmentMechanic.h" },
		{ "ToolTip", "Interaction that can be added to (potentially multiple) UCombinedTransformGizmo object to allow them to snap to\nscene geometry in rotation and translation. Generally driven by an externally-provided UKeyAsModifierInputBehavior,\nor alternately can be directly updated by calling ::OnUpdateModifierState()" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragAlignmentInteraction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDragAlignmentInteraction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDragAlignmentInteraction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDragAlignmentInteraction_Statics::ClassParams = {
	&UDragAlignmentInteraction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDragAlignmentInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_UDragAlignmentInteraction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDragAlignmentInteraction()
{
	if (!Z_Registration_Info_UClass_UDragAlignmentInteraction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDragAlignmentInteraction.OuterSingleton, Z_Construct_UClass_UDragAlignmentInteraction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDragAlignmentInteraction.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDragAlignmentInteraction>()
{
	return UDragAlignmentInteraction::StaticClass();
}
UDragAlignmentInteraction::UDragAlignmentInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDragAlignmentInteraction);
UDragAlignmentInteraction::~UDragAlignmentInteraction() {}
// End Class UDragAlignmentInteraction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDragAlignmentMechanic, UDragAlignmentMechanic::StaticClass, TEXT("UDragAlignmentMechanic"), &Z_Registration_Info_UClass_UDragAlignmentMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragAlignmentMechanic), 3086198819U) },
		{ Z_Construct_UClass_UDragAlignmentInteraction, UDragAlignmentInteraction::StaticClass, TEXT("UDragAlignmentInteraction"), &Z_Registration_Info_UClass_UDragAlignmentInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragAlignmentInteraction), 1538467730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_2052195994(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
