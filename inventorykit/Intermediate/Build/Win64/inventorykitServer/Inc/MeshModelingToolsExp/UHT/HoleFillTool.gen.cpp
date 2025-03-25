// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/HoleFillTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoleFillTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillOperatorFactory();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillOperatorFactory_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillStatisticsProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillStatisticsProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillToolActions();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillToolActions_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UHoleFillToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothHoleFillProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothHoleFillProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBoundarySelectionMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UHoleFillToolBuilder
void UHoleFillToolBuilder::StaticRegisterNativesUHoleFillToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoleFillToolBuilder);
UClass* Z_Construct_UClass_UHoleFillToolBuilder_NoRegister()
{
	return UHoleFillToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UHoleFillToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Tool builder\n */" },
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "* Tool builder" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoleFillToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoleFillToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoleFillToolBuilder_Statics::ClassParams = {
	&UHoleFillToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoleFillToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoleFillToolBuilder()
{
	if (!Z_Registration_Info_UClass_UHoleFillToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoleFillToolBuilder.OuterSingleton, Z_Construct_UClass_UHoleFillToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoleFillToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UHoleFillToolBuilder>()
{
	return UHoleFillToolBuilder::StaticClass();
}
UHoleFillToolBuilder::UHoleFillToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoleFillToolBuilder);
UHoleFillToolBuilder::~UHoleFillToolBuilder() {}
// End Class UHoleFillToolBuilder

// Begin Class USmoothHoleFillProperties
void USmoothHoleFillProperties::StaticRegisterNativesUSmoothHoleFillProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmoothHoleFillProperties);
UClass* Z_Construct_UClass_USmoothHoleFillProperties_NoRegister()
{
	return USmoothHoleFillProperties::StaticClass();
}
struct Z_Construct_UClass_USmoothHoleFillProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Properties. This class reflects the parameters in FSmoothFillOptions, but is decorated to allow use in the UI system.\n */" },
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "* Properties. This class reflects the parameters in FSmoothFillOptions, but is decorated to allow use in the UI system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainToHoleInterior_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "Comment", "/** Allow smoothing and remeshing of triangles outside of the fill region */" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Allow smoothing and remeshing of triangles outside of the fill region" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemeshingExteriorRegionWidth_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of vertex rings outside of the fill region to allow remeshing */" },
		{ "Delta", "1" },
		{ "EditCondition", "!bConstrainToHoleInterior" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Number of vertex rings outside of the fill region to allow remeshing" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingExteriorRegionWidth_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of vertex rings outside of the fill region to perform smoothing */" },
		{ "Delta", "1" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Number of vertex rings outside of the fill region to perform smoothing" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingInteriorRegionWidth_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of vertex rings away from the fill region boundary to constrain smoothing */" },
		{ "Delta", "1" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Number of vertex rings away from the fill region boundary to constrain smoothing" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteriorSmoothness_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Desired Smoothness. This is not a linear quantity, but larger numbers produce smoother results */" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Desired Smoothness. This is not a linear quantity, but larger numbers produce smoother results" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillDensityScalar_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Relative triangle density of fill region */" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Relative triangle density of fill region" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectDuringRemesh_MetaData[] = {
		{ "Category", "SmoothHoleFillOptions" },
		{ "Comment", "/** \n\x09 * Whether to project to the original mesh during post-smooth remeshing. This can be expensive on large meshes with \n\x09 * many holes. \n\x09 */" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Whether to project to the original mesh during post-smooth remeshing. This can be expensive on large meshes with\nmany holes." },
	};
#endif // WITH_METADATA
	static void NewProp_bConstrainToHoleInterior_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainToHoleInterior;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemeshingExteriorRegionWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothingExteriorRegionWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothingInteriorRegionWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteriorSmoothness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FillDensityScalar;
	static void NewProp_bProjectDuringRemesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectDuringRemesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmoothHoleFillProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bConstrainToHoleInterior_SetBit(void* Obj)
{
	((USmoothHoleFillProperties*)Obj)->bConstrainToHoleInterior = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bConstrainToHoleInterior = { "bConstrainToHoleInterior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USmoothHoleFillProperties), &Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bConstrainToHoleInterior_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstrainToHoleInterior_MetaData), NewProp_bConstrainToHoleInterior_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_RemeshingExteriorRegionWidth = { "RemeshingExteriorRegionWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothHoleFillProperties, RemeshingExteriorRegionWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemeshingExteriorRegionWidth_MetaData), NewProp_RemeshingExteriorRegionWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingExteriorRegionWidth = { "SmoothingExteriorRegionWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothHoleFillProperties, SmoothingExteriorRegionWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingExteriorRegionWidth_MetaData), NewProp_SmoothingExteriorRegionWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingInteriorRegionWidth = { "SmoothingInteriorRegionWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothHoleFillProperties, SmoothingInteriorRegionWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingInteriorRegionWidth_MetaData), NewProp_SmoothingInteriorRegionWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_InteriorSmoothness = { "InteriorSmoothness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothHoleFillProperties, InteriorSmoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteriorSmoothness_MetaData), NewProp_InteriorSmoothness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_FillDensityScalar = { "FillDensityScalar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothHoleFillProperties, FillDensityScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillDensityScalar_MetaData), NewProp_FillDensityScalar_MetaData) };
void Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bProjectDuringRemesh_SetBit(void* Obj)
{
	((USmoothHoleFillProperties*)Obj)->bProjectDuringRemesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bProjectDuringRemesh = { "bProjectDuringRemesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USmoothHoleFillProperties), &Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bProjectDuringRemesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectDuringRemesh_MetaData), NewProp_bProjectDuringRemesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmoothHoleFillProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bConstrainToHoleInterior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_RemeshingExteriorRegionWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingExteriorRegionWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_SmoothingInteriorRegionWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_InteriorSmoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_FillDensityScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothHoleFillProperties_Statics::NewProp_bProjectDuringRemesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USmoothHoleFillProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmoothHoleFillProperties_Statics::ClassParams = {
	&USmoothHoleFillProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USmoothHoleFillProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothHoleFillProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_USmoothHoleFillProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmoothHoleFillProperties()
{
	if (!Z_Registration_Info_UClass_USmoothHoleFillProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmoothHoleFillProperties.OuterSingleton, Z_Construct_UClass_USmoothHoleFillProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmoothHoleFillProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USmoothHoleFillProperties>()
{
	return USmoothHoleFillProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmoothHoleFillProperties);
USmoothHoleFillProperties::~USmoothHoleFillProperties() {}
// End Class USmoothHoleFillProperties

// Begin Class UHoleFillToolProperties
void UHoleFillToolProperties::StaticRegisterNativesUHoleFillToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoleFillToolProperties);
UClass* Z_Construct_UClass_UHoleFillToolProperties_NoRegister()
{
	return UHoleFillToolProperties::StaticClass();
}
struct Z_Construct_UClass_UHoleFillToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillType_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveIsolatedTriangles_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Clean up triangles that have no neighbors */" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Clean up triangles that have no neighbors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuickFillSmallHoles_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Identify and quickly fill single-triangle holes */" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "Identify and quickly fill single-triangle holes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FillType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FillType;
	static void NewProp_bRemoveIsolatedTriangles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveIsolatedTriangles;
	static void NewProp_bQuickFillSmallHoles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuickFillSmallHoles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoleFillToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_FillType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_FillType = { "FillType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillToolProperties, FillType), Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillType_MetaData), NewProp_FillType_MetaData) }; // 2524292496
void Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bRemoveIsolatedTriangles_SetBit(void* Obj)
{
	((UHoleFillToolProperties*)Obj)->bRemoveIsolatedTriangles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bRemoveIsolatedTriangles = { "bRemoveIsolatedTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoleFillToolProperties), &Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bRemoveIsolatedTriangles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveIsolatedTriangles_MetaData), NewProp_bRemoveIsolatedTriangles_MetaData) };
void Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bQuickFillSmallHoles_SetBit(void* Obj)
{
	((UHoleFillToolProperties*)Obj)->bQuickFillSmallHoles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bQuickFillSmallHoles = { "bQuickFillSmallHoles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoleFillToolProperties), &Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bQuickFillSmallHoles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuickFillSmallHoles_MetaData), NewProp_bQuickFillSmallHoles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoleFillToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_FillType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_FillType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bRemoveIsolatedTriangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillToolProperties_Statics::NewProp_bQuickFillSmallHoles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoleFillToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoleFillToolProperties_Statics::ClassParams = {
	&UHoleFillToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoleFillToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoleFillToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoleFillToolProperties()
{
	if (!Z_Registration_Info_UClass_UHoleFillToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoleFillToolProperties.OuterSingleton, Z_Construct_UClass_UHoleFillToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoleFillToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UHoleFillToolProperties>()
{
	return UHoleFillToolProperties::StaticClass();
}
UHoleFillToolProperties::UHoleFillToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoleFillToolProperties);
UHoleFillToolProperties::~UHoleFillToolProperties() {}
// End Class UHoleFillToolProperties

// Begin Enum EHoleFillToolActions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoleFillToolActions;
static UEnum* EHoleFillToolActions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoleFillToolActions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoleFillToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EHoleFillToolActions"));
	}
	return Z_Registration_Info_UEnum_EHoleFillToolActions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EHoleFillToolActions>()
{
	return EHoleFillToolActions_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ClearSelection.Name", "EHoleFillToolActions::ClearSelection" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "NoAction.Name", "EHoleFillToolActions::NoAction" },
		{ "SelectAll.Name", "EHoleFillToolActions::SelectAll" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoleFillToolActions::NoAction", (int64)EHoleFillToolActions::NoAction },
		{ "EHoleFillToolActions::SelectAll", (int64)EHoleFillToolActions::SelectAll },
		{ "EHoleFillToolActions::ClearSelection", (int64)EHoleFillToolActions::ClearSelection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EHoleFillToolActions",
	"EHoleFillToolActions",
	Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions()
{
	if (!Z_Registration_Info_UEnum_EHoleFillToolActions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoleFillToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EHoleFillToolActions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoleFillToolActions.InnerSingleton;
}
// End Enum EHoleFillToolActions

// Begin Class UHoleFillToolActions Function Clear
struct Z_Construct_UFunction_UHoleFillToolActions_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "DisplayName", "Clear" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoleFillToolActions_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoleFillToolActions, nullptr, "Clear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoleFillToolActions_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoleFillToolActions_Clear_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHoleFillToolActions_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoleFillToolActions_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoleFillToolActions::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// End Class UHoleFillToolActions Function Clear

// Begin Class UHoleFillToolActions Function SelectAll
struct Z_Construct_UFunction_UHoleFillToolActions_SelectAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "DisplayName", "Select All" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoleFillToolActions_SelectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoleFillToolActions, nullptr, "SelectAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoleFillToolActions_SelectAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoleFillToolActions_SelectAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHoleFillToolActions_SelectAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoleFillToolActions_SelectAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoleFillToolActions::execSelectAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectAll();
	P_NATIVE_END;
}
// End Class UHoleFillToolActions Function SelectAll

// Begin Class UHoleFillToolActions
void UHoleFillToolActions::StaticRegisterNativesUHoleFillToolActions()
{
	UClass* Class = UHoleFillToolActions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Clear", &UHoleFillToolActions::execClear },
		{ "SelectAll", &UHoleFillToolActions::execSelectAll },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoleFillToolActions);
UClass* Z_Construct_UClass_UHoleFillToolActions_NoRegister()
{
	return UHoleFillToolActions::StaticClass();
}
struct Z_Construct_UClass_UHoleFillToolActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoleFillToolActions_Clear, "Clear" }, // 992563308
		{ &Z_Construct_UFunction_UHoleFillToolActions_SelectAll, "SelectAll" }, // 3106377878
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoleFillToolActions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoleFillToolActions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolActions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoleFillToolActions_Statics::ClassParams = {
	&UHoleFillToolActions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillToolActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoleFillToolActions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoleFillToolActions()
{
	if (!Z_Registration_Info_UClass_UHoleFillToolActions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoleFillToolActions.OuterSingleton, Z_Construct_UClass_UHoleFillToolActions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoleFillToolActions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UHoleFillToolActions>()
{
	return UHoleFillToolActions::StaticClass();
}
UHoleFillToolActions::UHoleFillToolActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoleFillToolActions);
UHoleFillToolActions::~UHoleFillToolActions() {}
// End Class UHoleFillToolActions

// Begin Class UHoleFillStatisticsProperties
void UHoleFillStatisticsProperties::StaticRegisterNativesUHoleFillStatisticsProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoleFillStatisticsProperties);
UClass* Z_Construct_UClass_UHoleFillStatisticsProperties_NoRegister()
{
	return UHoleFillStatisticsProperties::StaticClass();
}
struct Z_Construct_UClass_UHoleFillStatisticsProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialHoles_MetaData[] = {
		{ "Category", "HoleFillStatistics" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoles_MetaData[] = {
		{ "Category", "HoleFillStatistics" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessfulFills_MetaData[] = {
		{ "Category", "HoleFillStatistics" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedFills_MetaData[] = {
		{ "Category", "HoleFillStatistics" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingHoles_MetaData[] = {
		{ "Category", "HoleFillStatistics" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InitialHoles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedHoles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SuccessfulFills;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailedFills;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RemainingHoles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoleFillStatisticsProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_InitialHoles = { "InitialHoles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillStatisticsProperties, InitialHoles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialHoles_MetaData), NewProp_InitialHoles_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SelectedHoles = { "SelectedHoles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillStatisticsProperties, SelectedHoles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedHoles_MetaData), NewProp_SelectedHoles_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SuccessfulFills = { "SuccessfulFills", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillStatisticsProperties, SuccessfulFills), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessfulFills_MetaData), NewProp_SuccessfulFills_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_FailedFills = { "FailedFills", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillStatisticsProperties, FailedFills), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedFills_MetaData), NewProp_FailedFills_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_RemainingHoles = { "RemainingHoles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillStatisticsProperties, RemainingHoles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingHoles_MetaData), NewProp_RemainingHoles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_InitialHoles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SelectedHoles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_SuccessfulFills,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_FailedFills,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::NewProp_RemainingHoles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::ClassParams = {
	&UHoleFillStatisticsProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoleFillStatisticsProperties()
{
	if (!Z_Registration_Info_UClass_UHoleFillStatisticsProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoleFillStatisticsProperties.OuterSingleton, Z_Construct_UClass_UHoleFillStatisticsProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoleFillStatisticsProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UHoleFillStatisticsProperties>()
{
	return UHoleFillStatisticsProperties::StaticClass();
}
UHoleFillStatisticsProperties::UHoleFillStatisticsProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoleFillStatisticsProperties);
UHoleFillStatisticsProperties::~UHoleFillStatisticsProperties() {}
// End Class UHoleFillStatisticsProperties

// Begin Class UHoleFillOperatorFactory
void UHoleFillOperatorFactory::StaticRegisterNativesUHoleFillOperatorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoleFillOperatorFactory);
UClass* Z_Construct_UClass_UHoleFillOperatorFactory_NoRegister()
{
	return UHoleFillOperatorFactory::StaticClass();
}
struct Z_Construct_UClass_UHoleFillOperatorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Operator factory\n */" },
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "* Operator factory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FillTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoleFillOperatorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoleFillOperatorFactory_Statics::NewProp_FillTool = { "FillTool", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillOperatorFactory, FillTool), Z_Construct_UClass_UHoleFillTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillTool_MetaData), NewProp_FillTool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoleFillOperatorFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillOperatorFactory_Statics::NewProp_FillTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillOperatorFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoleFillOperatorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillOperatorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoleFillOperatorFactory_Statics::ClassParams = {
	&UHoleFillOperatorFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoleFillOperatorFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillOperatorFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillOperatorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoleFillOperatorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoleFillOperatorFactory()
{
	if (!Z_Registration_Info_UClass_UHoleFillOperatorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoleFillOperatorFactory.OuterSingleton, Z_Construct_UClass_UHoleFillOperatorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoleFillOperatorFactory.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UHoleFillOperatorFactory>()
{
	return UHoleFillOperatorFactory::StaticClass();
}
UHoleFillOperatorFactory::UHoleFillOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoleFillOperatorFactory);
UHoleFillOperatorFactory::~UHoleFillOperatorFactory() {}
// End Class UHoleFillOperatorFactory

// Begin Class UHoleFillTool
void UHoleFillTool::StaticRegisterNativesUHoleFillTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoleFillTool);
UClass* Z_Construct_UClass_UHoleFillTool_NoRegister()
{
	return UHoleFillTool::StaticClass();
}
struct Z_Construct_UClass_UHoleFillTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Tool\n * Inherit from IClickBehaviorTarget so we can click on boundary loops.\n */" },
		{ "IncludePath", "HoleFillTool.h" },
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
		{ "ToolTip", "* Tool\n* Inherit from IClickBehaviorTarget so we can click on boundary loops." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothHoleFillProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoleFillTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmoothHoleFillProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Statistics;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionMechanic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoleFillTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SmoothHoleFillProperties = { "SmoothHoleFillProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillTool, SmoothHoleFillProperties), Z_Construct_UClass_USmoothHoleFillProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothHoleFillProperties_MetaData), NewProp_SmoothHoleFillProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillTool, Properties), Z_Construct_UClass_UHoleFillToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillTool, Actions), Z_Construct_UClass_UHoleFillToolActions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillTool, Statistics), Z_Construct_UClass_UHoleFillStatisticsProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statistics_MetaData), NewProp_Statistics_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SelectionMechanic = { "SelectionMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoleFillTool, SelectionMechanic), Z_Construct_UClass_UBoundarySelectionMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMechanic_MetaData), NewProp_SelectionMechanic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoleFillTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SmoothHoleFillProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Statistics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillTool_Statics::NewProp_Preview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoleFillTool_Statics::NewProp_SelectionMechanic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoleFillTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoleFillTool_Statics::ClassParams = {
	&UHoleFillTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHoleFillTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoleFillTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoleFillTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoleFillTool()
{
	if (!Z_Registration_Info_UClass_UHoleFillTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoleFillTool.OuterSingleton, Z_Construct_UClass_UHoleFillTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoleFillTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UHoleFillTool>()
{
	return UHoleFillTool::StaticClass();
}
UHoleFillTool::UHoleFillTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoleFillTool);
UHoleFillTool::~UHoleFillTool() {}
// End Class UHoleFillTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoleFillToolActions_StaticEnum, TEXT("EHoleFillToolActions"), &Z_Registration_Info_UEnum_EHoleFillToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3466262265U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoleFillToolBuilder, UHoleFillToolBuilder::StaticClass, TEXT("UHoleFillToolBuilder"), &Z_Registration_Info_UClass_UHoleFillToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoleFillToolBuilder), 3757924663U) },
		{ Z_Construct_UClass_USmoothHoleFillProperties, USmoothHoleFillProperties::StaticClass, TEXT("USmoothHoleFillProperties"), &Z_Registration_Info_UClass_USmoothHoleFillProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmoothHoleFillProperties), 570812577U) },
		{ Z_Construct_UClass_UHoleFillToolProperties, UHoleFillToolProperties::StaticClass, TEXT("UHoleFillToolProperties"), &Z_Registration_Info_UClass_UHoleFillToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoleFillToolProperties), 3165348528U) },
		{ Z_Construct_UClass_UHoleFillToolActions, UHoleFillToolActions::StaticClass, TEXT("UHoleFillToolActions"), &Z_Registration_Info_UClass_UHoleFillToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoleFillToolActions), 4048154542U) },
		{ Z_Construct_UClass_UHoleFillStatisticsProperties, UHoleFillStatisticsProperties::StaticClass, TEXT("UHoleFillStatisticsProperties"), &Z_Registration_Info_UClass_UHoleFillStatisticsProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoleFillStatisticsProperties), 2650051909U) },
		{ Z_Construct_UClass_UHoleFillOperatorFactory, UHoleFillOperatorFactory::StaticClass, TEXT("UHoleFillOperatorFactory"), &Z_Registration_Info_UClass_UHoleFillOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoleFillOperatorFactory), 2706229122U) },
		{ Z_Construct_UClass_UHoleFillTool, UHoleFillTool::StaticClass, TEXT("UHoleFillTool"), &Z_Registration_Info_UClass_UHoleFillTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoleFillTool), 1988949436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_569393553(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_HoleFillTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
