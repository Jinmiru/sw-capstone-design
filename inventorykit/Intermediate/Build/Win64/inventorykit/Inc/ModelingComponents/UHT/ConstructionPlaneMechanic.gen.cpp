// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Mechanics/ConstructionPlaneMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructionPlaneMechanic() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalSingleClickInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UConstructionPlaneMechanic
void UConstructionPlaneMechanic::StaticRegisterNativesUConstructionPlaneMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstructionPlaneMechanic);
UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister()
{
	return UConstructionPlaneMechanic::StaticClass();
}
struct Z_Construct_UClass_UConstructionPlaneMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UConstructionPlaneMechanic implements an interaction in which a 3D plane can be\n * positioned using the standard 3D Gizmo, or placed at hit-locations in the existing scene.\n * A grid in the plane can optionally be rendered.\n */" },
		{ "IncludePath", "Mechanics/ConstructionPlaneMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/ConstructionPlaneMechanic.h" },
		{ "ToolTip", "UConstructionPlaneMechanic implements an interaction in which a 3D plane can be\npositioned using the standard 3D Gizmo, or placed at hit-locations in the existing scene.\nA grid in the plane can optionally be rendered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/ConstructionPlaneMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/ConstructionPlaneMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickToSetPlaneBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/ConstructionPlaneMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiddleClickToSetGizmoBehavior_MetaData[] = {
		{ "Comment", "/** This is the behavior and behavior target used for the Shift+click behavior that sets the gizmo's position in the world. */" },
		{ "ModuleRelativePath", "Public/Mechanics/ConstructionPlaneMechanic.h" },
		{ "ToolTip", "This is the behavior and behavior target used for the Shift+click behavior that sets the gizmo's position in the world." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneTransformGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneTransformProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickToSetPlaneBehavior;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MiddleClickToSetGizmoBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstructionPlaneMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformGizmo = { "PlaneTransformGizmo", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstructionPlaneMechanic, PlaneTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneTransformGizmo_MetaData), NewProp_PlaneTransformGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformProxy = { "PlaneTransformProxy", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstructionPlaneMechanic, PlaneTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneTransformProxy_MetaData), NewProp_PlaneTransformProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_ClickToSetPlaneBehavior = { "ClickToSetPlaneBehavior", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstructionPlaneMechanic, ClickToSetPlaneBehavior), Z_Construct_UClass_USingleClickInputBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickToSetPlaneBehavior_MetaData), NewProp_ClickToSetPlaneBehavior_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_MiddleClickToSetGizmoBehavior = { "MiddleClickToSetGizmoBehavior", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstructionPlaneMechanic, MiddleClickToSetGizmoBehavior), Z_Construct_UClass_ULocalSingleClickInputBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiddleClickToSetGizmoBehavior_MetaData), NewProp_MiddleClickToSetGizmoBehavior_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstructionPlaneMechanic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_PlaneTransformProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_ClickToSetPlaneBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstructionPlaneMechanic_Statics::NewProp_MiddleClickToSetGizmoBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConstructionPlaneMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstructionPlaneMechanic_Statics::ClassParams = {
	&UConstructionPlaneMechanic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConstructionPlaneMechanic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConstructionPlaneMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_UConstructionPlaneMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConstructionPlaneMechanic()
{
	if (!Z_Registration_Info_UClass_UConstructionPlaneMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstructionPlaneMechanic.OuterSingleton, Z_Construct_UClass_UConstructionPlaneMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConstructionPlaneMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UConstructionPlaneMechanic>()
{
	return UConstructionPlaneMechanic::StaticClass();
}
UConstructionPlaneMechanic::UConstructionPlaneMechanic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructionPlaneMechanic);
UConstructionPlaneMechanic::~UConstructionPlaneMechanic() {}
// End Class UConstructionPlaneMechanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConstructionPlaneMechanic, UConstructionPlaneMechanic::StaticClass, TEXT("UConstructionPlaneMechanic"), &Z_Registration_Info_UClass_UConstructionPlaneMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstructionPlaneMechanic), 1608962121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_142975075(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_ConstructionPlaneMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
