// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Mechanics/LatticeControlPointsMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLatticeControlPointsMechanic() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewGeometryActor_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULatticeControlPointsMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULatticeControlPointsMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPointSetComponent_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class ULatticeControlPointsMechanic
void ULatticeControlPointsMechanic::StaticRegisterNativesULatticeControlPointsMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULatticeControlPointsMechanic);
UClass* Z_Construct_UClass_ULatticeControlPointsMechanic_NoRegister()
{
	return ULatticeControlPointsMechanic::StaticClass();
}
struct Z_Construct_UClass_ULatticeControlPointsMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Mechanics/LatticeControlPointsMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometryActor_MetaData[] = {
		{ "Comment", "/** Used for displaying points/segments */" },
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
		{ "ToolTip", "Used for displaying points/segments" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawnControlPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawnLatticeEdges_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointTransformProxy_MetaData[] = {
		{ "Comment", "// Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy\n// for the transform forwarding- we just use it for the callbacks.\n" },
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
		{ "ToolTip", "Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy\nfor the transform forwarding- we just use it for the callbacks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarqueeMechanic_MetaData[] = {
		{ "Comment", "// Support for selection\n" },
		{ "ModuleRelativePath", "Public/Mechanics/LatticeControlPointsMechanic.h" },
		{ "ToolTip", "Support for selection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewGeometryActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawnControlPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawnLatticeEdges;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointTransformProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointTransformGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarqueeMechanic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatticeControlPointsMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PreviewGeometryActor = { "PreviewGeometryActor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeControlPointsMechanic, PreviewGeometryActor), Z_Construct_UClass_APreviewGeometryActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewGeometryActor_MetaData), NewProp_PreviewGeometryActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnControlPoints = { "DrawnControlPoints", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeControlPointsMechanic, DrawnControlPoints), Z_Construct_UClass_UPointSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawnControlPoints_MetaData), NewProp_DrawnControlPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnLatticeEdges = { "DrawnLatticeEdges", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeControlPointsMechanic, DrawnLatticeEdges), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawnLatticeEdges_MetaData), NewProp_DrawnLatticeEdges_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformProxy = { "PointTransformProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeControlPointsMechanic, PointTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointTransformProxy_MetaData), NewProp_PointTransformProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformGizmo = { "PointTransformGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeControlPointsMechanic, PointTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointTransformGizmo_MetaData), NewProp_PointTransformGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_MarqueeMechanic = { "MarqueeMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULatticeControlPointsMechanic, MarqueeMechanic), Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarqueeMechanic_MetaData), NewProp_MarqueeMechanic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PreviewGeometryActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_DrawnLatticeEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_PointTransformGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::NewProp_MarqueeMechanic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::ClassParams = {
	&ULatticeControlPointsMechanic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULatticeControlPointsMechanic()
{
	if (!Z_Registration_Info_UClass_ULatticeControlPointsMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULatticeControlPointsMechanic.OuterSingleton, Z_Construct_UClass_ULatticeControlPointsMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULatticeControlPointsMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<ULatticeControlPointsMechanic>()
{
	return ULatticeControlPointsMechanic::StaticClass();
}
ULatticeControlPointsMechanic::ULatticeControlPointsMechanic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULatticeControlPointsMechanic);
ULatticeControlPointsMechanic::~ULatticeControlPointsMechanic() {}
// End Class ULatticeControlPointsMechanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULatticeControlPointsMechanic, ULatticeControlPointsMechanic::StaticClass, TEXT("ULatticeControlPointsMechanic"), &Z_Registration_Info_UClass_ULatticeControlPointsMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULatticeControlPointsMechanic), 495144470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_1071915270(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_LatticeControlPointsMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
