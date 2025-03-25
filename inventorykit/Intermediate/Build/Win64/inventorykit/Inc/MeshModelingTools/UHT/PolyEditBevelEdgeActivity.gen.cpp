// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Private/ToolActivities/PolyEditBevelEdgeActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditBevelEdgeActivity() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditBevelEdgeActivity();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditBevelEdgeActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditBevelEdgeProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditBevelEdgeProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class UPolyEditBevelEdgeProperties
void UPolyEditBevelEdgeProperties::StaticRegisterNativesUPolyEditBevelEdgeProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditBevelEdgeProperties);
UClass* Z_Construct_UClass_UPolyEditBevelEdgeProperties_NoRegister()
{
	return UPolyEditBevelEdgeProperties::StaticClass();
}
struct Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditBevelEdgeActivity.h" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BevelDistance_MetaData[] = {
		{ "Category", "Bevel" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Distance that each beveled mesh edge is inset from its initial position */" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
		{ "SliderExponent", "3" },
		{ "ToolTip", "Distance that each beveled mesh edge is inset from its initial position" },
		{ "UIMax", "100" },
		{ "UIMin", ".001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subdivisions_MetaData[] = {
		{ "Category", "Bevel" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of edge loops added along the bevel faces */" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
		{ "ToolTip", "Number of edge loops added along the bevel faces" },
		{ "UIMax", "10" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundWeight_MetaData[] = {
		{ "Category", "Bevel" },
		{ "Comment", "/** Roundness of the bevel. Ignored if Subdivisions = 0. */" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
		{ "ToolTip", "Roundness of the bevel. Ignored if Subdivisions = 0." },
		{ "UIMax", "2" },
		{ "UIMin", "-2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInferMaterialID_MetaData[] = {
		{ "Category", "Bevel" },
		{ "Comment", "/** If true, when faces on either side of a beveled mesh edges have the same Material ID, beveled edge will be set to that Material ID. Otherwise SetMaterialID is used. */" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
		{ "ToolTip", "If true, when faces on either side of a beveled mesh edges have the same Material ID, beveled edge will be set to that Material ID. Otherwise SetMaterialID is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetMaterialID_MetaData[] = {
		{ "Category", "Bevel" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Material ID to set on the new faces introduced by bevel operation, unless bInferMaterialID=true and non-ambiguous MaterialID can be inferred from adjacent faces */" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
		{ "NoSpinbox", "" },
		{ "ToolTip", "Material ID to set on the new faces introduced by bevel operation, unless bInferMaterialID=true and non-ambiguous MaterialID can be inferred from adjacent faces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BevelDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Subdivisions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoundWeight;
	static void NewProp_bInferMaterialID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInferMaterialID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SetMaterialID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditBevelEdgeProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_BevelDistance = { "BevelDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditBevelEdgeProperties, BevelDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BevelDistance_MetaData), NewProp_BevelDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_Subdivisions = { "Subdivisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditBevelEdgeProperties, Subdivisions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subdivisions_MetaData), NewProp_Subdivisions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_RoundWeight = { "RoundWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditBevelEdgeProperties, RoundWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundWeight_MetaData), NewProp_RoundWeight_MetaData) };
void Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_bInferMaterialID_SetBit(void* Obj)
{
	((UPolyEditBevelEdgeProperties*)Obj)->bInferMaterialID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_bInferMaterialID = { "bInferMaterialID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditBevelEdgeProperties), &Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_bInferMaterialID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInferMaterialID_MetaData), NewProp_bInferMaterialID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_SetMaterialID = { "SetMaterialID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditBevelEdgeProperties, SetMaterialID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetMaterialID_MetaData), NewProp_SetMaterialID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_BevelDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_Subdivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_RoundWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_bInferMaterialID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_SetMaterialID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::ClassParams = {
	&UPolyEditBevelEdgeProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditBevelEdgeProperties()
{
	if (!Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.OuterSingleton, Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditBevelEdgeProperties>()
{
	return UPolyEditBevelEdgeProperties::StaticClass();
}
UPolyEditBevelEdgeProperties::UPolyEditBevelEdgeProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditBevelEdgeProperties);
UPolyEditBevelEdgeProperties::~UPolyEditBevelEdgeProperties() {}
// End Class UPolyEditBevelEdgeProperties

// Begin Class UPolyEditBevelEdgeActivity
void UPolyEditBevelEdgeActivity::StaticRegisterNativesUPolyEditBevelEdgeActivity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditBevelEdgeActivity);
UClass* Z_Construct_UClass_UPolyEditBevelEdgeActivity_NoRegister()
{
	return UPolyEditBevelEdgeActivity::StaticClass();
}
struct Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ToolActivities/PolyEditBevelEdgeActivity.h" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BevelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BevelProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditBevelEdgeActivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_BevelProperties = { "BevelProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditBevelEdgeActivity, BevelProperties), Z_Construct_UClass_UPolyEditBevelEdgeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BevelProperties_MetaData), NewProp_BevelProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditBevelEdgeActivity, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityContext_MetaData), NewProp_ActivityContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_BevelProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_ActivityContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolActivity,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::ClassParams = {
	&UPolyEditBevelEdgeActivity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditBevelEdgeActivity()
{
	if (!Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.OuterSingleton, Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditBevelEdgeActivity>()
{
	return UPolyEditBevelEdgeActivity::StaticClass();
}
UPolyEditBevelEdgeActivity::UPolyEditBevelEdgeActivity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditBevelEdgeActivity);
UPolyEditBevelEdgeActivity::~UPolyEditBevelEdgeActivity() {}
// End Class UPolyEditBevelEdgeActivity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditBevelEdgeActivity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPolyEditBevelEdgeProperties, UPolyEditBevelEdgeProperties::StaticClass, TEXT("UPolyEditBevelEdgeProperties"), &Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditBevelEdgeProperties), 2307962456U) },
		{ Z_Construct_UClass_UPolyEditBevelEdgeActivity, UPolyEditBevelEdgeActivity::StaticClass, TEXT("UPolyEditBevelEdgeActivity"), &Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditBevelEdgeActivity), 1710418272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditBevelEdgeActivity_h_1294926821(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditBevelEdgeActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditBevelEdgeActivity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
