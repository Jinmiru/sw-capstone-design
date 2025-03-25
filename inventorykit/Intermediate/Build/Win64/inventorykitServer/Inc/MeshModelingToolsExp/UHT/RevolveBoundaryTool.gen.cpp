// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/RevolveBoundaryTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevolveBoundaryTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveProperties();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshBoundaryToolBase();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryOperatorFactory();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryOperatorFactory_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryToolProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class URevolveBoundaryToolBuilder
void URevolveBoundaryToolBuilder::StaticRegisterNativesURevolveBoundaryToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveBoundaryToolBuilder);
UClass* Z_Construct_UClass_URevolveBoundaryToolBuilder_NoRegister()
{
	return URevolveBoundaryToolBuilder::StaticClass();
}
struct Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Tool Builder\n" },
		{ "IncludePath", "RevolveBoundaryTool.h" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "Tool Builder" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveBoundaryToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::ClassParams = {
	&URevolveBoundaryToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URevolveBoundaryToolBuilder()
{
	if (!Z_Registration_Info_UClass_URevolveBoundaryToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveBoundaryToolBuilder.OuterSingleton, Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URevolveBoundaryToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URevolveBoundaryToolBuilder>()
{
	return URevolveBoundaryToolBuilder::StaticClass();
}
URevolveBoundaryToolBuilder::URevolveBoundaryToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveBoundaryToolBuilder);
URevolveBoundaryToolBuilder::~URevolveBoundaryToolBuilder() {}
// End Class URevolveBoundaryToolBuilder

// Begin Class URevolveBoundaryOperatorFactory
void URevolveBoundaryOperatorFactory::StaticRegisterNativesURevolveBoundaryOperatorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveBoundaryOperatorFactory);
UClass* Z_Construct_UClass_URevolveBoundaryOperatorFactory_NoRegister()
{
	return URevolveBoundaryOperatorFactory::StaticClass();
}
struct Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RevolveBoundaryTool.h" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevolveBoundaryTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RevolveBoundaryTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveBoundaryOperatorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::NewProp_RevolveBoundaryTool = { "RevolveBoundaryTool", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveBoundaryOperatorFactory, RevolveBoundaryTool), Z_Construct_UClass_URevolveBoundaryTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevolveBoundaryTool_MetaData), NewProp_RevolveBoundaryTool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::NewProp_RevolveBoundaryTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::ClassParams = {
	&URevolveBoundaryOperatorFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URevolveBoundaryOperatorFactory()
{
	if (!Z_Registration_Info_UClass_URevolveBoundaryOperatorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveBoundaryOperatorFactory.OuterSingleton, Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URevolveBoundaryOperatorFactory.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URevolveBoundaryOperatorFactory>()
{
	return URevolveBoundaryOperatorFactory::StaticClass();
}
URevolveBoundaryOperatorFactory::URevolveBoundaryOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveBoundaryOperatorFactory);
URevolveBoundaryOperatorFactory::~URevolveBoundaryOperatorFactory() {}
// End Class URevolveBoundaryOperatorFactory

// Begin Class URevolveBoundaryToolProperties
void URevolveBoundaryToolProperties::StaticRegisterNativesURevolveBoundaryToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveBoundaryToolProperties);
UClass* Z_Construct_UClass_URevolveBoundaryToolProperties_NoRegister()
{
	return URevolveBoundaryToolProperties::StaticClass();
}
struct Z_Construct_UClass_URevolveBoundaryToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RevolveBoundaryTool.h" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapFillMode_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed. */" },
		{ "DisplayAfter", "QuadSplitMode" },
		{ "EditCondition", "HeightOffsetPerDegree != 0 || RevolveDegrees != 360" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayInputMesh_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** If true, displays the original mesh in addition to the revolved boundary. */" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "If true, displays the original mesh in addition to the revolved boundary." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrigin_MetaData[] = {
		{ "Category", "RevolutionAxis" },
		{ "Comment", "/** Sets the revolution axis origin. */" },
		{ "Delta", "5" },
		{ "DisplayName", "Origin" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "Sets the revolution axis origin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrientation_MetaData[] = {
		{ "Category", "RevolutionAxis" },
		{ "ClampMax", "180000" },
		{ "ClampMin", "-180000" },
		{ "Comment", "/** Sets the revolution axis pitch and yaw. */" },
		{ "DisplayName", "Orientation" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "Sets the revolution axis pitch and yaw." },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CapFillMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CapFillMode;
	static void NewProp_bDisplayInputMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayInputMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrientation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveBoundaryToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_CapFillMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_CapFillMode = { "CapFillMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveBoundaryToolProperties, CapFillMode), Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapFillMode_MetaData), NewProp_CapFillMode_MetaData) }; // 649546140
void Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_bDisplayInputMesh_SetBit(void* Obj)
{
	((URevolveBoundaryToolProperties*)Obj)->bDisplayInputMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_bDisplayInputMesh = { "bDisplayInputMesh", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URevolveBoundaryToolProperties), &Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_bDisplayInputMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayInputMesh_MetaData), NewProp_bDisplayInputMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrigin = { "AxisOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveBoundaryToolProperties, AxisOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrigin_MetaData), NewProp_AxisOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrientation = { "AxisOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveBoundaryToolProperties, AxisOrientation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrientation_MetaData), NewProp_AxisOrientation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_CapFillMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_CapFillMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_bDisplayInputMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrientation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URevolveProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::ClassParams = {
	&URevolveBoundaryToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URevolveBoundaryToolProperties()
{
	if (!Z_Registration_Info_UClass_URevolveBoundaryToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveBoundaryToolProperties.OuterSingleton, Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URevolveBoundaryToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URevolveBoundaryToolProperties>()
{
	return URevolveBoundaryToolProperties::StaticClass();
}
URevolveBoundaryToolProperties::URevolveBoundaryToolProperties() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveBoundaryToolProperties);
URevolveBoundaryToolProperties::~URevolveBoundaryToolProperties() {}
// End Class URevolveBoundaryToolProperties

// Begin Class URevolveBoundaryTool
void URevolveBoundaryTool::StaticRegisterNativesURevolveBoundaryTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveBoundaryTool);
UClass* Z_Construct_UClass_URevolveBoundaryTool_NoRegister()
{
	return URevolveBoundaryTool::StaticClass();
}
struct Z_Construct_UClass_URevolveBoundaryTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Tool that revolves the boundary of a mesh around an axis to create a new mesh. Mainly useful for\n * revolving planar meshes. \n */" },
		{ "IncludePath", "RevolveBoundaryTool.h" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "Tool that revolves the boundary of a mesh around an axis to create a new mesh. Mainly useful for\nrevolving planar meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[] = {
		{ "Comment", "/** Property set for type of output object (StaticMesh, Volume, etc) */" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "Property set for type of output object (StaticMesh, Volume, etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTypeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveBoundaryTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveBoundaryTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeProperties_MetaData), NewProp_OutputTypeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveBoundaryTool, Settings), Z_Construct_UClass_URevolveBoundaryToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_MaterialProperties = { "MaterialProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveBoundaryTool, MaterialProperties), Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialProperties_MetaData), NewProp_MaterialProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveBoundaryTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMechanic_MetaData), NewProp_PlaneMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveBoundaryTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveBoundaryTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_OutputTypeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_MaterialProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_PlaneMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Preview,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URevolveBoundaryTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshBoundaryToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveBoundaryTool_Statics::ClassParams = {
	&URevolveBoundaryTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URevolveBoundaryTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryTool_Statics::Class_MetaDataParams), Z_Construct_UClass_URevolveBoundaryTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URevolveBoundaryTool()
{
	if (!Z_Registration_Info_UClass_URevolveBoundaryTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveBoundaryTool.OuterSingleton, Z_Construct_UClass_URevolveBoundaryTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URevolveBoundaryTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URevolveBoundaryTool>()
{
	return URevolveBoundaryTool::StaticClass();
}
URevolveBoundaryTool::URevolveBoundaryTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveBoundaryTool);
URevolveBoundaryTool::~URevolveBoundaryTool() {}
// End Class URevolveBoundaryTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveBoundaryTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URevolveBoundaryToolBuilder, URevolveBoundaryToolBuilder::StaticClass, TEXT("URevolveBoundaryToolBuilder"), &Z_Registration_Info_UClass_URevolveBoundaryToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveBoundaryToolBuilder), 3397965005U) },
		{ Z_Construct_UClass_URevolveBoundaryOperatorFactory, URevolveBoundaryOperatorFactory::StaticClass, TEXT("URevolveBoundaryOperatorFactory"), &Z_Registration_Info_UClass_URevolveBoundaryOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveBoundaryOperatorFactory), 1463408062U) },
		{ Z_Construct_UClass_URevolveBoundaryToolProperties, URevolveBoundaryToolProperties::StaticClass, TEXT("URevolveBoundaryToolProperties"), &Z_Registration_Info_UClass_URevolveBoundaryToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveBoundaryToolProperties), 3624057427U) },
		{ Z_Construct_UClass_URevolveBoundaryTool, URevolveBoundaryTool::StaticClass, TEXT("URevolveBoundaryTool"), &Z_Registration_Info_UClass_URevolveBoundaryTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveBoundaryTool), 2599206960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveBoundaryTool_h_3206945169(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveBoundaryTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveBoundaryTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
