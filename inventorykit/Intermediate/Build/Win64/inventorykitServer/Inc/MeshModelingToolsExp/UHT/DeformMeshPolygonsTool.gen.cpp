// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/DeformMeshPolygonsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformMeshPolygonsTool() {}

// Begin Cross Module References
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDeformMeshPolygonsTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDeformMeshPolygonsTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDeformMeshPolygonsToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDeformMeshPolygonsTransformProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UDeformMeshPolygonsToolBuilder
void UDeformMeshPolygonsToolBuilder::StaticRegisterNativesUDeformMeshPolygonsToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeformMeshPolygonsToolBuilder);
UClass* Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_NoRegister()
{
	return UDeformMeshPolygonsToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder\n */" },
		{ "IncludePath", "DeformMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "ToolBuilder" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeformMeshPolygonsToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::ClassParams = {
	&UDeformMeshPolygonsToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeformMeshPolygonsToolBuilder()
{
	if (!Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder.OuterSingleton, Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDeformMeshPolygonsToolBuilder>()
{
	return UDeformMeshPolygonsToolBuilder::StaticClass();
}
UDeformMeshPolygonsToolBuilder::UDeformMeshPolygonsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeformMeshPolygonsToolBuilder);
UDeformMeshPolygonsToolBuilder::~UDeformMeshPolygonsToolBuilder() {}
// End Class UDeformMeshPolygonsToolBuilder

// Begin Enum EGroupTopologyDeformationStrategy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy;
static UEnum* EGroupTopologyDeformationStrategy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EGroupTopologyDeformationStrategy"));
	}
	return Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EGroupTopologyDeformationStrategy>()
{
	return EGroupTopologyDeformationStrategy_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Deformation strategies */" },
		{ "Laplacian.Comment", "/** Deforms the mesh using Laplacian deformation. */" },
		{ "Laplacian.DisplayName", "Smooth" },
		{ "Laplacian.Name", "EGroupTopologyDeformationStrategy::Laplacian" },
		{ "Laplacian.ToolTip", "Deforms the mesh using Laplacian deformation." },
		{ "Linear.Comment", "/** Deforms the mesh using linear deformation. */" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Name", "EGroupTopologyDeformationStrategy::Linear" },
		{ "Linear.ToolTip", "Deforms the mesh using linear deformation." },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Deformation strategies" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroupTopologyDeformationStrategy::Linear", (int64)EGroupTopologyDeformationStrategy::Linear },
		{ "EGroupTopologyDeformationStrategy::Laplacian", (int64)EGroupTopologyDeformationStrategy::Laplacian },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EGroupTopologyDeformationStrategy",
	"EGroupTopologyDeformationStrategy",
	Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy()
{
	if (!Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy.InnerSingleton;
}
// End Enum EGroupTopologyDeformationStrategy

// Begin Enum EWeightScheme
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeightScheme;
static UEnum* EWeightScheme_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeightScheme.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeightScheme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EWeightScheme"));
	}
	return Z_Registration_Info_UEnum_EWeightScheme.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EWeightScheme>()
{
	return EWeightScheme_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ClampedCotangent.DisplayName", "ClampedCotangent" },
		{ "ClampedCotangent.Name", "EWeightScheme::ClampedCotangent" },
		{ "Comment", "/** Laplacian weight schemes determine how we will look at the curvature at a given vertex in relation to its neighborhood*/" },
		{ "Cotangent.DisplayName", "Cotangent" },
		{ "Cotangent.Name", "EWeightScheme::Cotangent" },
		{ "IDTCotangent.DisplayName", "IDTCotangent" },
		{ "IDTCotangent.Name", "EWeightScheme::IDTCotangent" },
		{ "MeanValue.DisplayName", "MeanValue" },
		{ "MeanValue.Name", "EWeightScheme::MeanValue" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Laplacian weight schemes determine how we will look at the curvature at a given vertex in relation to its neighborhood" },
		{ "Umbrella.DisplayName", "Umbrella" },
		{ "Umbrella.Name", "EWeightScheme::Umbrella" },
		{ "Uniform.DisplayName", "Uniform" },
		{ "Uniform.Name", "EWeightScheme::Uniform" },
		{ "Valence.DisplayName", "Valence" },
		{ "Valence.Name", "EWeightScheme::Valence" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeightScheme::Uniform", (int64)EWeightScheme::Uniform },
		{ "EWeightScheme::Umbrella", (int64)EWeightScheme::Umbrella },
		{ "EWeightScheme::Valence", (int64)EWeightScheme::Valence },
		{ "EWeightScheme::MeanValue", (int64)EWeightScheme::MeanValue },
		{ "EWeightScheme::Cotangent", (int64)EWeightScheme::Cotangent },
		{ "EWeightScheme::ClampedCotangent", (int64)EWeightScheme::ClampedCotangent },
		{ "EWeightScheme::IDTCotangent", (int64)EWeightScheme::IDTCotangent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EWeightScheme",
	"EWeightScheme",
	Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme()
{
	if (!Z_Registration_Info_UEnum_EWeightScheme.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeightScheme.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeightScheme.InnerSingleton;
}
// End Enum EWeightScheme

// Begin Enum EQuickTransformerMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuickTransformerMode;
static UEnum* EQuickTransformerMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuickTransformerMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuickTransformerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EQuickTransformerMode"));
	}
	return Z_Registration_Info_UEnum_EQuickTransformerMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EQuickTransformerMode>()
{
	return EQuickTransformerMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AxisRotation.Comment", "/** Rotation around axes */" },
		{ "AxisRotation.DisplayName", "Rotate" },
		{ "AxisRotation.Name", "EQuickTransformerMode::AxisRotation" },
		{ "AxisRotation.ToolTip", "Rotation around axes" },
		{ "AxisTranslation.Comment", "/** Translation along axes */" },
		{ "AxisTranslation.DisplayName", "Translate" },
		{ "AxisTranslation.Name", "EQuickTransformerMode::AxisTranslation" },
		{ "AxisTranslation.ToolTip", "Translation along axes" },
		{ "Comment", "/** Modes for quick transformer */" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Modes for quick transformer" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuickTransformerMode::AxisTranslation", (int64)EQuickTransformerMode::AxisTranslation },
		{ "EQuickTransformerMode::AxisRotation", (int64)EQuickTransformerMode::AxisRotation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EQuickTransformerMode",
	"EQuickTransformerMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode()
{
	if (!Z_Registration_Info_UEnum_EQuickTransformerMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuickTransformerMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuickTransformerMode.InnerSingleton;
}
// End Enum EQuickTransformerMode

// Begin Class UDeformMeshPolygonsTransformProperties
void UDeformMeshPolygonsTransformProperties::StaticRegisterNativesUDeformMeshPolygonsTransformProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeformMeshPolygonsTransformProperties);
UClass* Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_NoRegister()
{
	return UDeformMeshPolygonsTransformProperties::StaticClass();
}
struct Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DeformMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformationStrategy_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Type of deformation used. */" },
		{ "DisplayName", "Deformation" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Type of deformation used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Type of transformation used. */" },
		{ "DisplayName", "Transformation" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Type of transformation used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectFaces_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Allow for faces (PolyGroups) to be selected. */" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Allow for faces (PolyGroups) to be selected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectEdges_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Allow for edges to be selected. */" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Allow for edges to be selected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectVertices_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Allow for vertices to be selected. */" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Allow for vertices to be selected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** If true, overlays preview with wireframe. */" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "If true, overlays preview with wireframe." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedWeightScheme_MetaData[] = {
		{ "Comment", "//Laplacian Deformation Options, currently not exposed.\n" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Laplacian Deformation Options, currently not exposed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPostFixHandles_MetaData[] = {
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeformationStrategy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeformationStrategy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformMode;
	static void NewProp_bSelectFaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectFaces;
	static void NewProp_bSelectEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectEdges;
	static void NewProp_bSelectVertices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectVertices;
	static void NewProp_bShowWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedWeightScheme_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedWeightScheme;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HandleWeight;
	static void NewProp_bPostFixHandles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPostFixHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeformMeshPolygonsTransformProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_DeformationStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_DeformationStrategy = { "DeformationStrategy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeformMeshPolygonsTransformProperties, DeformationStrategy), Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformationStrategy_MetaData), NewProp_DeformationStrategy_MetaData) }; // 205055479
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_TransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_TransformMode = { "TransformMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeformMeshPolygonsTransformProperties, TransformMode), Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformMode_MetaData), NewProp_TransformMode_MetaData) }; // 873204096
void Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectFaces_SetBit(void* Obj)
{
	((UDeformMeshPolygonsTransformProperties*)Obj)->bSelectFaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectFaces = { "bSelectFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDeformMeshPolygonsTransformProperties), &Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectFaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectFaces_MetaData), NewProp_bSelectFaces_MetaData) };
void Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectEdges_SetBit(void* Obj)
{
	((UDeformMeshPolygonsTransformProperties*)Obj)->bSelectEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectEdges = { "bSelectEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDeformMeshPolygonsTransformProperties), &Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectEdges_MetaData), NewProp_bSelectEdges_MetaData) };
void Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectVertices_SetBit(void* Obj)
{
	((UDeformMeshPolygonsTransformProperties*)Obj)->bSelectVertices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectVertices = { "bSelectVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDeformMeshPolygonsTransformProperties), &Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectVertices_MetaData), NewProp_bSelectVertices_MetaData) };
void Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
{
	((UDeformMeshPolygonsTransformProperties*)Obj)->bShowWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDeformMeshPolygonsTransformProperties), &Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWireframe_MetaData), NewProp_bShowWireframe_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_SelectedWeightScheme_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_SelectedWeightScheme = { "SelectedWeightScheme", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeformMeshPolygonsTransformProperties, SelectedWeightScheme), Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedWeightScheme_MetaData), NewProp_SelectedWeightScheme_MetaData) }; // 599206904
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_HandleWeight = { "HandleWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeformMeshPolygonsTransformProperties, HandleWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleWeight_MetaData), NewProp_HandleWeight_MetaData) };
void Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bPostFixHandles_SetBit(void* Obj)
{
	((UDeformMeshPolygonsTransformProperties*)Obj)->bPostFixHandles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bPostFixHandles = { "bPostFixHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDeformMeshPolygonsTransformProperties), &Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bPostFixHandles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPostFixHandles_MetaData), NewProp_bPostFixHandles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_DeformationStrategy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_DeformationStrategy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_TransformMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_TransformMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectFaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bShowWireframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_SelectedWeightScheme_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_SelectedWeightScheme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_HandleWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bPostFixHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::ClassParams = {
	&UDeformMeshPolygonsTransformProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeformMeshPolygonsTransformProperties()
{
	if (!Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties.OuterSingleton, Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDeformMeshPolygonsTransformProperties>()
{
	return UDeformMeshPolygonsTransformProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeformMeshPolygonsTransformProperties);
UDeformMeshPolygonsTransformProperties::~UDeformMeshPolygonsTransformProperties() {}
// End Class UDeformMeshPolygonsTransformProperties

// Begin Class UDeformMeshPolygonsTool
void UDeformMeshPolygonsTool::StaticRegisterNativesUDeformMeshPolygonsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeformMeshPolygonsTool);
UClass* Z_Construct_UClass_UDeformMeshPolygonsTool_NoRegister()
{
	return UDeformMeshPolygonsTool::StaticClass();
}
struct Z_Construct_UClass_UDeformMeshPolygonsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "DeformMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMeshActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformProps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeformMeshPolygonsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_PreviewMeshActor = { "PreviewMeshActor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeformMeshPolygonsTool, PreviewMeshActor), Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMeshActor_MetaData), NewProp_PreviewMeshActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeformMeshPolygonsTool, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMeshComponent_MetaData), NewProp_DynamicMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_TransformProps = { "TransformProps", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeformMeshPolygonsTool, TransformProps), Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformProps_MetaData), NewProp_TransformProps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_PreviewMeshActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_DynamicMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_TransformProps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(UDeformMeshPolygonsTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::ClassParams = {
	&UDeformMeshPolygonsTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeformMeshPolygonsTool()
{
	if (!Z_Registration_Info_UClass_UDeformMeshPolygonsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeformMeshPolygonsTool.OuterSingleton, Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeformMeshPolygonsTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDeformMeshPolygonsTool>()
{
	return UDeformMeshPolygonsTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeformMeshPolygonsTool);
UDeformMeshPolygonsTool::~UDeformMeshPolygonsTool() {}
// End Class UDeformMeshPolygonsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGroupTopologyDeformationStrategy_StaticEnum, TEXT("EGroupTopologyDeformationStrategy"), &Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 205055479U) },
		{ EWeightScheme_StaticEnum, TEXT("EWeightScheme"), &Z_Registration_Info_UEnum_EWeightScheme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 599206904U) },
		{ EQuickTransformerMode_StaticEnum, TEXT("EQuickTransformerMode"), &Z_Registration_Info_UEnum_EQuickTransformerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 873204096U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeformMeshPolygonsToolBuilder, UDeformMeshPolygonsToolBuilder::StaticClass, TEXT("UDeformMeshPolygonsToolBuilder"), &Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeformMeshPolygonsToolBuilder), 1926012001U) },
		{ Z_Construct_UClass_UDeformMeshPolygonsTransformProperties, UDeformMeshPolygonsTransformProperties::StaticClass, TEXT("UDeformMeshPolygonsTransformProperties"), &Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeformMeshPolygonsTransformProperties), 1594179153U) },
		{ Z_Construct_UClass_UDeformMeshPolygonsTool, UDeformMeshPolygonsTool::StaticClass, TEXT("UDeformMeshPolygonsTool"), &Z_Registration_Info_UClass_UDeformMeshPolygonsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeformMeshPolygonsTool), 4093247152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_985714577(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
