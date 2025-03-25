// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/DrawAndRevolveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawAndRevolveTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawAndRevolveTool();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawAndRevolveTool_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawAndRevolveToolBuilder();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawAndRevolveToolBuilder_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveOperatorFactory();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveOperatorFactory_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveToolProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveToolProperties_NoRegister();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCurveControlPointsMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class UDrawAndRevolveToolBuilder
void UDrawAndRevolveToolBuilder::StaticRegisterNativesUDrawAndRevolveToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawAndRevolveToolBuilder);
UClass* Z_Construct_UClass_UDrawAndRevolveToolBuilder_NoRegister()
{
	return UDrawAndRevolveToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DrawAndRevolveTool.h" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawAndRevolveToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::ClassParams = {
	&UDrawAndRevolveToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrawAndRevolveToolBuilder()
{
	if (!Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder.OuterSingleton, Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UDrawAndRevolveToolBuilder>()
{
	return UDrawAndRevolveToolBuilder::StaticClass();
}
UDrawAndRevolveToolBuilder::UDrawAndRevolveToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawAndRevolveToolBuilder);
UDrawAndRevolveToolBuilder::~UDrawAndRevolveToolBuilder() {}
// End Class UDrawAndRevolveToolBuilder

// Begin Class URevolveToolProperties
void URevolveToolProperties::StaticRegisterNativesURevolveToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveToolProperties);
UClass* Z_Construct_UClass_URevolveToolProperties_NoRegister()
{
	return URevolveToolProperties::StaticClass();
}
struct Z_Construct_UClass_URevolveToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DrawAndRevolveTool.h" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapFillMode_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed. */" },
		{ "DisplayAfter", "QuadSplitMode" },
		{ "EditCondition", "HeightOffsetPerDegree != 0 || RevolveDegrees != 360" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed." },
		{ "ValidEnumValues", "None, CenterFan, Delaunay" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosePathToAxis_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** Connect the ends of an open path to the axis to add caps to the top and bottom of the revolved result.\n\x09  * This is not relevant for paths that are already closed. */" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Connect the ends of an open path to the axis to add caps to the top and bottom of the revolved result.\nThis is not relevant for paths that are already closed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawPlaneOrigin_MetaData[] = {
		{ "Category", "DrawPlane" },
		{ "Comment", "/** Sets the draw plane origin. The revolution axis is the X axis in the plane. */" },
		{ "Delta", "5" },
		{ "DisplayName", "Origin" },
		{ "EditCondition", "bAllowedToEditDrawPlane" },
		{ "HideEditConditionToggle", "" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Sets the draw plane origin. The revolution axis is the X axis in the plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawPlaneOrientation_MetaData[] = {
		{ "Category", "DrawPlane" },
		{ "ClampMax", "180000" },
		{ "ClampMin", "-180000" },
		{ "Comment", "/** Sets the draw plane orientation. The revolution axis is the X axis in the plane. */" },
		{ "DisplayName", "Orientation" },
		{ "EditCondition", "bAllowedToEditDrawPlane" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Sets the draw plane orientation. The revolution axis is the X axis in the plane." },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapping_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enables snapping while editing the path. */" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Enables snapping while editing the path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowedToEditDrawPlane_MetaData[] = {
		{ "Comment", "// Not user visible- used to disallow draw plane modification.\n" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Not user visible- used to disallow draw plane modification." },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CapFillMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CapFillMode;
	static void NewProp_bClosePathToAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosePathToAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawPlaneOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawPlaneOrientation;
	static void NewProp_bEnableSnapping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapping;
	static void NewProp_bAllowedToEditDrawPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowedToEditDrawPlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_CapFillMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_CapFillMode = { "CapFillMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveToolProperties, CapFillMode), Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapFillMode_MetaData), NewProp_CapFillMode_MetaData) }; // 649546140
void Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bClosePathToAxis_SetBit(void* Obj)
{
	((URevolveToolProperties*)Obj)->bClosePathToAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bClosePathToAxis = { "bClosePathToAxis", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URevolveToolProperties), &Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bClosePathToAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosePathToAxis_MetaData), NewProp_bClosePathToAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrigin = { "DrawPlaneOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveToolProperties, DrawPlaneOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawPlaneOrigin_MetaData), NewProp_DrawPlaneOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrientation = { "DrawPlaneOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveToolProperties, DrawPlaneOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawPlaneOrientation_MetaData), NewProp_DrawPlaneOrientation_MetaData) };
void Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bEnableSnapping_SetBit(void* Obj)
{
	((URevolveToolProperties*)Obj)->bEnableSnapping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bEnableSnapping = { "bEnableSnapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URevolveToolProperties), &Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bEnableSnapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSnapping_MetaData), NewProp_bEnableSnapping_MetaData) };
void Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bAllowedToEditDrawPlane_SetBit(void* Obj)
{
	((URevolveToolProperties*)Obj)->bAllowedToEditDrawPlane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bAllowedToEditDrawPlane = { "bAllowedToEditDrawPlane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URevolveToolProperties), &Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bAllowedToEditDrawPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowedToEditDrawPlane_MetaData), NewProp_bAllowedToEditDrawPlane_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_CapFillMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_CapFillMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bClosePathToAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bEnableSnapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bAllowedToEditDrawPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URevolveToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URevolveProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveToolProperties_Statics::ClassParams = {
	&URevolveToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URevolveToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URevolveToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_URevolveToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URevolveToolProperties()
{
	if (!Z_Registration_Info_UClass_URevolveToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveToolProperties.OuterSingleton, Z_Construct_UClass_URevolveToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URevolveToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<URevolveToolProperties>()
{
	return URevolveToolProperties::StaticClass();
}
URevolveToolProperties::URevolveToolProperties() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveToolProperties);
URevolveToolProperties::~URevolveToolProperties() {}
// End Class URevolveToolProperties

// Begin Class URevolveOperatorFactory
void URevolveOperatorFactory::StaticRegisterNativesURevolveOperatorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveOperatorFactory);
UClass* Z_Construct_UClass_URevolveOperatorFactory_NoRegister()
{
	return URevolveOperatorFactory::StaticClass();
}
struct Z_Construct_UClass_URevolveOperatorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DrawAndRevolveTool.h" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevolveTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RevolveTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveOperatorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveOperatorFactory_Statics::NewProp_RevolveTool = { "RevolveTool", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveOperatorFactory, RevolveTool), Z_Construct_UClass_UDrawAndRevolveTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevolveTool_MetaData), NewProp_RevolveTool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveOperatorFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveOperatorFactory_Statics::NewProp_RevolveTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveOperatorFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URevolveOperatorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveOperatorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveOperatorFactory_Statics::ClassParams = {
	&URevolveOperatorFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URevolveOperatorFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URevolveOperatorFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveOperatorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URevolveOperatorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URevolveOperatorFactory()
{
	if (!Z_Registration_Info_UClass_URevolveOperatorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveOperatorFactory.OuterSingleton, Z_Construct_UClass_URevolveOperatorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URevolveOperatorFactory.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<URevolveOperatorFactory>()
{
	return URevolveOperatorFactory::StaticClass();
}
URevolveOperatorFactory::URevolveOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveOperatorFactory);
URevolveOperatorFactory::~URevolveOperatorFactory() {}
// End Class URevolveOperatorFactory

// Begin Class UDrawAndRevolveTool
void UDrawAndRevolveTool::StaticRegisterNativesUDrawAndRevolveTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawAndRevolveTool);
UClass* Z_Construct_UClass_UDrawAndRevolveTool_NoRegister()
{
	return UDrawAndRevolveTool::StaticClass();
}
struct Z_Construct_UClass_UDrawAndRevolveTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Draws a profile curve and revolves it around an axis. */" },
		{ "IncludePath", "DrawAndRevolveTool.h" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Draws a profile curve and revolves it around an axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPointsMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[] = {
		{ "Comment", "/** Property set for type of output object (StaticMesh, Volume, etc) */" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Property set for type of output object (StaticMesh, Volume, etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlPointsMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTypeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawAndRevolveTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_ControlPointsMechanic = { "ControlPointsMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawAndRevolveTool, ControlPointsMechanic), Z_Construct_UClass_UCurveControlPointsMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPointsMechanic_MetaData), NewProp_ControlPointsMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawAndRevolveTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMechanic_MetaData), NewProp_PlaneMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawAndRevolveTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeProperties_MetaData), NewProp_OutputTypeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawAndRevolveTool, Settings), Z_Construct_UClass_URevolveToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_MaterialProperties = { "MaterialProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawAndRevolveTool, MaterialProperties), Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialProperties_MetaData), NewProp_MaterialProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawAndRevolveTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawAndRevolveTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_ControlPointsMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_PlaneMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_OutputTypeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_MaterialProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Preview,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDrawAndRevolveTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::ClassParams = {
	&UDrawAndRevolveTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDrawAndRevolveTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrawAndRevolveTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrawAndRevolveTool()
{
	if (!Z_Registration_Info_UClass_UDrawAndRevolveTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawAndRevolveTool.OuterSingleton, Z_Construct_UClass_UDrawAndRevolveTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrawAndRevolveTool.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UDrawAndRevolveTool>()
{
	return UDrawAndRevolveTool::StaticClass();
}
UDrawAndRevolveTool::UDrawAndRevolveTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawAndRevolveTool);
UDrawAndRevolveTool::~UDrawAndRevolveTool() {}
// End Class UDrawAndRevolveTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawAndRevolveTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDrawAndRevolveToolBuilder, UDrawAndRevolveToolBuilder::StaticClass, TEXT("UDrawAndRevolveToolBuilder"), &Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawAndRevolveToolBuilder), 1445789288U) },
		{ Z_Construct_UClass_URevolveToolProperties, URevolveToolProperties::StaticClass, TEXT("URevolveToolProperties"), &Z_Registration_Info_UClass_URevolveToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveToolProperties), 888521331U) },
		{ Z_Construct_UClass_URevolveOperatorFactory, URevolveOperatorFactory::StaticClass, TEXT("URevolveOperatorFactory"), &Z_Registration_Info_UClass_URevolveOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveOperatorFactory), 3537856523U) },
		{ Z_Construct_UClass_UDrawAndRevolveTool, UDrawAndRevolveTool::StaticClass, TEXT("UDrawAndRevolveTool"), &Z_Registration_Info_UClass_UDrawAndRevolveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawAndRevolveTool), 128480039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawAndRevolveTool_h_1347554741(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawAndRevolveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawAndRevolveTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
