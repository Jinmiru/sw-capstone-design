// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Mechanics/CollisionPrimitivesMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionPrimitivesMechanic() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCollisionPrimitivesMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCollisionPrimitivesMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UCollisionPrimitivesMechanic
void UCollisionPrimitivesMechanic::StaticRegisterNativesUCollisionPrimitivesMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollisionPrimitivesMechanic);
UClass* Z_Construct_UClass_UCollisionPrimitivesMechanic_NoRegister()
{
	return UCollisionPrimitivesMechanic::StaticClass();
}
struct Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Mechanics/CollisionPrimitivesMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometry_MetaData[] = {
		{ "Comment", "/** Used for displaying Primitives/segments */" },
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
		{ "ToolTip", "Used for displaying Primitives/segments" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawnPrimitiveEdges_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslateTransformProxy_MetaData[] = {
		{ "Comment", "// Support for gizmos. Since the primitives aren't individual components, we don't actually use UTransformProxy\n// for the transform forwarding- we just use it for the callbacks.\n" },
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
		{ "ToolTip", "Support for gizmos. Since the primitives aren't individual components, we don't actually use UTransformProxy\nfor the transform forwarding- we just use it for the callbacks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslateTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarqueeMechanic_MetaData[] = {
		{ "Comment", "// Support for selection\n" },
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
		{ "ToolTip", "Support for selection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewGeometry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawnPrimitiveEdges;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslateTransformProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereTransformProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxTransformProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleTransformProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FullTransformProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActiveProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslateTransformGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereTransformGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxTransformGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleTransformGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FullTransformGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarqueeMechanic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionPrimitivesMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_PreviewGeometry = { "PreviewGeometry", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, PreviewGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewGeometry_MetaData), NewProp_PreviewGeometry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_DrawnPrimitiveEdges = { "DrawnPrimitiveEdges", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, DrawnPrimitiveEdges), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawnPrimitiveEdges_MetaData), NewProp_DrawnPrimitiveEdges_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformProxy = { "TranslateTransformProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, TranslateTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslateTransformProxy_MetaData), NewProp_TranslateTransformProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformProxy = { "SphereTransformProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, SphereTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereTransformProxy_MetaData), NewProp_SphereTransformProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformProxy = { "BoxTransformProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, BoxTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTransformProxy_MetaData), NewProp_BoxTransformProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformProxy = { "CapsuleTransformProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, CapsuleTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleTransformProxy_MetaData), NewProp_CapsuleTransformProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformProxy = { "FullTransformProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, FullTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullTransformProxy_MetaData), NewProp_FullTransformProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CurrentActiveProxy = { "CurrentActiveProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, CurrentActiveProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActiveProxy_MetaData), NewProp_CurrentActiveProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformGizmo = { "TranslateTransformGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, TranslateTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslateTransformGizmo_MetaData), NewProp_TranslateTransformGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformGizmo = { "SphereTransformGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, SphereTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereTransformGizmo_MetaData), NewProp_SphereTransformGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformGizmo = { "BoxTransformGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, BoxTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTransformGizmo_MetaData), NewProp_BoxTransformGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformGizmo = { "CapsuleTransformGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, CapsuleTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleTransformGizmo_MetaData), NewProp_CapsuleTransformGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformGizmo = { "FullTransformGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, FullTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullTransformGizmo_MetaData), NewProp_FullTransformGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_MarqueeMechanic = { "MarqueeMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, MarqueeMechanic), Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarqueeMechanic_MetaData), NewProp_MarqueeMechanic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_PreviewGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_DrawnPrimitiveEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CurrentActiveProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_MarqueeMechanic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::ClassParams = {
	&UCollisionPrimitivesMechanic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCollisionPrimitivesMechanic()
{
	if (!Z_Registration_Info_UClass_UCollisionPrimitivesMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollisionPrimitivesMechanic.OuterSingleton, Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCollisionPrimitivesMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UCollisionPrimitivesMechanic>()
{
	return UCollisionPrimitivesMechanic::StaticClass();
}
UCollisionPrimitivesMechanic::UCollisionPrimitivesMechanic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionPrimitivesMechanic);
UCollisionPrimitivesMechanic::~UCollisionPrimitivesMechanic() {}
// End Class UCollisionPrimitivesMechanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCollisionPrimitivesMechanic, UCollisionPrimitivesMechanic::StaticClass, TEXT("UCollisionPrimitivesMechanic"), &Z_Registration_Info_UClass_UCollisionPrimitivesMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollisionPrimitivesMechanic), 720215872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_3845794677(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
