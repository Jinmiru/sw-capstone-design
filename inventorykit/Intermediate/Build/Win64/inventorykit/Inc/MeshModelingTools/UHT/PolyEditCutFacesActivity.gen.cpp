// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/ToolActivities/PolyEditCutFacesActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditCutFacesActivity() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditCutFacesActivity();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditCutFacesActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditCutProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditCutProperties_NoRegister();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Enum EPolyEditCutPlaneOrientation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation;
static UEnum* EPolyEditCutPlaneOrientation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EPolyEditCutPlaneOrientation"));
	}
	return Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EPolyEditCutPlaneOrientation>()
{
	return EPolyEditCutPlaneOrientation_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FaceNormals.Name", "EPolyEditCutPlaneOrientation::FaceNormals" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
		{ "ViewDirection.Name", "EPolyEditCutPlaneOrientation::ViewDirection" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPolyEditCutPlaneOrientation::FaceNormals", (int64)EPolyEditCutPlaneOrientation::FaceNormals },
		{ "EPolyEditCutPlaneOrientation::ViewDirection", (int64)EPolyEditCutPlaneOrientation::ViewDirection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EPolyEditCutPlaneOrientation",
	"EPolyEditCutPlaneOrientation",
	Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation()
{
	if (!Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.InnerSingleton;
}
// End Enum EPolyEditCutPlaneOrientation

// Begin Class UPolyEditCutProperties
void UPolyEditCutProperties::StaticRegisterNativesUPolyEditCutProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditCutProperties);
UClass* Z_Construct_UClass_UPolyEditCutProperties_NoRegister()
{
	return UPolyEditCutProperties::StaticClass();
}
struct Z_Construct_UClass_UPolyEditCutProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditCutFacesActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToVertices_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Orientation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Orientation;
	static void NewProp_bSnapToVertices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToVertices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditCutProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_Orientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditCutProperties, Orientation), Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) }; // 1570783237
void Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_bSnapToVertices_SetBit(void* Obj)
{
	((UPolyEditCutProperties*)Obj)->bSnapToVertices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_bSnapToVertices = { "bSnapToVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditCutProperties), &Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_bSnapToVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToVertices_MetaData), NewProp_bSnapToVertices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditCutProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_Orientation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_bSnapToVertices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditCutProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditCutProperties_Statics::ClassParams = {
	&UPolyEditCutProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditCutProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditCutProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditCutProperties()
{
	if (!Z_Registration_Info_UClass_UPolyEditCutProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditCutProperties.OuterSingleton, Z_Construct_UClass_UPolyEditCutProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditCutProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditCutProperties>()
{
	return UPolyEditCutProperties::StaticClass();
}
UPolyEditCutProperties::UPolyEditCutProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditCutProperties);
UPolyEditCutProperties::~UPolyEditCutProperties() {}
// End Class UPolyEditCutProperties

// Begin Class UPolyEditCutFacesActivity
void UPolyEditCutFacesActivity::StaticRegisterNativesUPolyEditCutFacesActivity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditCutFacesActivity);
UClass* Z_Construct_UClass_UPolyEditCutFacesActivity_NoRegister()
{
	return UPolyEditCutFacesActivity::StaticClass();
}
struct Z_Construct_UClass_UPolyEditCutFacesActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ToolActivities/PolyEditCutFacesActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfacePathMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CutProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditPreview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SurfacePathMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditCutFacesActivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_CutProperties = { "CutProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditCutFacesActivity, CutProperties), Z_Construct_UClass_UPolyEditCutProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutProperties_MetaData), NewProp_CutProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_EditPreview = { "EditPreview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditCutFacesActivity, EditPreview), Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditPreview_MetaData), NewProp_EditPreview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_SurfacePathMechanic = { "SurfacePathMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditCutFacesActivity, SurfacePathMechanic), Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfacePathMechanic_MetaData), NewProp_SurfacePathMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditCutFacesActivity, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityContext_MetaData), NewProp_ActivityContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_CutProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_EditPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_SurfacePathMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_ActivityContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolActivity,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::ClassParams = {
	&UPolyEditCutFacesActivity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditCutFacesActivity()
{
	if (!Z_Registration_Info_UClass_UPolyEditCutFacesActivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditCutFacesActivity.OuterSingleton, Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditCutFacesActivity.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditCutFacesActivity>()
{
	return UPolyEditCutFacesActivity::StaticClass();
}
UPolyEditCutFacesActivity::UPolyEditCutFacesActivity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditCutFacesActivity);
UPolyEditCutFacesActivity::~UPolyEditCutFacesActivity() {}
// End Class UPolyEditCutFacesActivity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPolyEditCutPlaneOrientation_StaticEnum, TEXT("EPolyEditCutPlaneOrientation"), &Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1570783237U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPolyEditCutProperties, UPolyEditCutProperties::StaticClass, TEXT("UPolyEditCutProperties"), &Z_Registration_Info_UClass_UPolyEditCutProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditCutProperties), 787412147U) },
		{ Z_Construct_UClass_UPolyEditCutFacesActivity, UPolyEditCutFacesActivity::StaticClass, TEXT("UPolyEditCutFacesActivity"), &Z_Registration_Info_UClass_UPolyEditCutFacesActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditCutFacesActivity), 1355224012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_3403114176(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
