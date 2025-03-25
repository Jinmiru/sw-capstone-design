// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/ToolActivities/PolyEditInsetOutsetActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditInsetOutsetActivity() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsetOutsetActivity();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsetOutsetActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsetOutsetProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsetOutsetProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class UPolyEditInsetOutsetProperties
void UPolyEditInsetOutsetProperties::StaticRegisterNativesUPolyEditInsetOutsetProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditInsetOutsetProperties);
UClass* Z_Construct_UClass_UPolyEditInsetOutsetProperties_NoRegister()
{
	return UPolyEditInsetOutsetProperties::StaticClass();
}
struct Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditInsetOutsetActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Softness_MetaData[] = {
		{ "Category", "Region" },
		{ "Comment", "/** Amount of smoothing applied to outset boundary */" },
		{ "EditCondition", "bBoundaryOnly == false" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
		{ "ToolTip", "Amount of smoothing applied to outset boundary" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoundaryOnly_MetaData[] = {
		{ "Category", "Region" },
		{ "Comment", "/** Controls whether outset operation will move interior vertices as well as border vertices */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
		{ "ToolTip", "Controls whether outset operation will move interior vertices as well as border vertices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaScale_MetaData[] = {
		{ "Category", "Region" },
		{ "Comment", "/** Tweak area scaling when solving for interior vertices */" },
		{ "EditCondition", "bBoundaryOnly == false" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
		{ "ToolTip", "Tweak area scaling when solving for interior vertices" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReproject_MetaData[] = {
		{ "Category", "Region" },
		{ "Comment", "/** When insetting, determines whether vertices in inset region should be projected back onto input surface */" },
		{ "EditCondition", "!bOutset" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
		{ "ToolTip", "When insetting, determines whether vertices in inset region should be projected back onto input surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutset_MetaData[] = {
		{ "Comment", "//~ This is not user editable- it gets set by PolyEdit depending on whether the user clicks\n//~ inset or outset. Currently, both operations share the same code, and one may argue that\n//~ we should just determine which to do based on where the user clicks. However, our long\n//~ term plan is that they will be more differentiated in operation, to the point that we\n//~ may split them into separate activities.\n" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Softness;
	static void NewProp_bBoundaryOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundaryOnly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AreaScale;
	static void NewProp_bReproject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReproject;
	static void NewProp_bOutset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditInsetOutsetProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_Softness = { "Softness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditInsetOutsetProperties, Softness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Softness_MetaData), NewProp_Softness_MetaData) };
void Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bBoundaryOnly_SetBit(void* Obj)
{
	((UPolyEditInsetOutsetProperties*)Obj)->bBoundaryOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bBoundaryOnly = { "bBoundaryOnly", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditInsetOutsetProperties), &Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bBoundaryOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoundaryOnly_MetaData), NewProp_bBoundaryOnly_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_AreaScale = { "AreaScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditInsetOutsetProperties, AreaScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaScale_MetaData), NewProp_AreaScale_MetaData) };
void Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bReproject_SetBit(void* Obj)
{
	((UPolyEditInsetOutsetProperties*)Obj)->bReproject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bReproject = { "bReproject", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditInsetOutsetProperties), &Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bReproject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReproject_MetaData), NewProp_bReproject_MetaData) };
void Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bOutset_SetBit(void* Obj)
{
	((UPolyEditInsetOutsetProperties*)Obj)->bOutset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bOutset = { "bOutset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditInsetOutsetProperties), &Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bOutset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutset_MetaData), NewProp_bOutset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_Softness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bBoundaryOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_AreaScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bReproject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bOutset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::ClassParams = {
	&UPolyEditInsetOutsetProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditInsetOutsetProperties()
{
	if (!Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.OuterSingleton, Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditInsetOutsetProperties>()
{
	return UPolyEditInsetOutsetProperties::StaticClass();
}
UPolyEditInsetOutsetProperties::UPolyEditInsetOutsetProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditInsetOutsetProperties);
UPolyEditInsetOutsetProperties::~UPolyEditInsetOutsetProperties() {}
// End Class UPolyEditInsetOutsetProperties

// Begin Class UPolyEditInsetOutsetActivity
void UPolyEditInsetOutsetActivity::StaticRegisterNativesUPolyEditInsetOutsetActivity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditInsetOutsetActivity);
UClass* Z_Construct_UClass_UPolyEditInsetOutsetActivity_NoRegister()
{
	return UPolyEditInsetOutsetActivity::StaticClass();
}
struct Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ToolActivities/PolyEditInsetOutsetActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveDistMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditPreview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveDistMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditInsetOutsetActivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditInsetOutsetActivity, Settings), Z_Construct_UClass_UPolyEditInsetOutsetProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_EditPreview = { "EditPreview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditInsetOutsetActivity, EditPreview), Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditPreview_MetaData), NewProp_EditPreview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_CurveDistMechanic = { "CurveDistMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditInsetOutsetActivity, CurveDistMechanic), Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveDistMechanic_MetaData), NewProp_CurveDistMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditInsetOutsetActivity, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityContext_MetaData), NewProp_ActivityContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_EditPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_CurveDistMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_ActivityContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolActivity,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::ClassParams = {
	&UPolyEditInsetOutsetActivity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditInsetOutsetActivity()
{
	if (!Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.OuterSingleton, Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditInsetOutsetActivity>()
{
	return UPolyEditInsetOutsetActivity::StaticClass();
}
UPolyEditInsetOutsetActivity::UPolyEditInsetOutsetActivity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditInsetOutsetActivity);
UPolyEditInsetOutsetActivity::~UPolyEditInsetOutsetActivity() {}
// End Class UPolyEditInsetOutsetActivity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsetOutsetActivity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPolyEditInsetOutsetProperties, UPolyEditInsetOutsetProperties::StaticClass, TEXT("UPolyEditInsetOutsetProperties"), &Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditInsetOutsetProperties), 1798310265U) },
		{ Z_Construct_UClass_UPolyEditInsetOutsetActivity, UPolyEditInsetOutsetActivity::StaticClass, TEXT("UPolyEditInsetOutsetActivity"), &Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditInsetOutsetActivity), 2776165210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsetOutsetActivity_h_4277983635(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsetOutsetActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsetOutsetActivity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
