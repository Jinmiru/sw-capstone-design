// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/MeshSelectionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSelectionTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSelectionSet_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionEditActions();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionEditActions_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionMeshEditActions();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionMeshEditActions_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionToolActionPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionToolActionPropertySet_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSelectionToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshStatisticsProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshFacesColorMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolActions();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolPrimaryMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UMeshSelectionToolBuilder
void UMeshSelectionToolBuilder::StaticRegisterNativesUMeshSelectionToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSelectionToolBuilder);
UClass* Z_Construct_UClass_UMeshSelectionToolBuilder_NoRegister()
{
	return UMeshSelectionToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UMeshSelectionToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSelectionToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshSelectionToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSelectionToolBuilder_Statics::ClassParams = {
	&UMeshSelectionToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSelectionToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSelectionToolBuilder()
{
	if (!Z_Registration_Info_UClass_UMeshSelectionToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSelectionToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshSelectionToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSelectionToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSelectionToolBuilder>()
{
	return UMeshSelectionToolBuilder::StaticClass();
}
UMeshSelectionToolBuilder::UMeshSelectionToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSelectionToolBuilder);
UMeshSelectionToolBuilder::~UMeshSelectionToolBuilder() {}
// End Class UMeshSelectionToolBuilder

// Begin Enum EMeshSelectionToolActions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshSelectionToolActions;
static UEnum* EMeshSelectionToolActions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshSelectionToolActions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshSelectionToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshSelectionToolActions"));
	}
	return Z_Registration_Info_UEnum_EMeshSelectionToolActions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshSelectionToolActions>()
{
	return EMeshSelectionToolActions_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ClearSelection.Name", "EMeshSelectionToolActions::ClearSelection" },
		{ "CreateGroup.Name", "EMeshSelectionToolActions::CreateGroup" },
		{ "CycleSelectionMode.Name", "EMeshSelectionToolActions::CycleSelectionMode" },
		{ "CycleViewMode.Name", "EMeshSelectionToolActions::CycleViewMode" },
		{ "DeleteSelected.Name", "EMeshSelectionToolActions::DeleteSelected" },
		{ "DisconnectSelected.Name", "EMeshSelectionToolActions::DisconnectSelected" },
		{ "DuplicateSelected.Name", "EMeshSelectionToolActions::DuplicateSelected" },
		{ "ExpandToConnected.Name", "EMeshSelectionToolActions::ExpandToConnected" },
		{ "FlipSelected.Name", "EMeshSelectionToolActions::FlipSelected" },
		{ "GrowSelection.Name", "EMeshSelectionToolActions::GrowSelection" },
		{ "InvertSelection.Name", "EMeshSelectionToolActions::InvertSelection" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "NoAction.Name", "EMeshSelectionToolActions::NoAction" },
		{ "OptimizeSelection.Name", "EMeshSelectionToolActions::OptimizeSelection" },
		{ "SelectAll.Name", "EMeshSelectionToolActions::SelectAll" },
		{ "SelectAllByMaterial.Name", "EMeshSelectionToolActions::SelectAllByMaterial" },
		{ "SelectLargestComponentByArea.Name", "EMeshSelectionToolActions::SelectLargestComponentByArea" },
		{ "SelectLargestComponentByTriCount.Name", "EMeshSelectionToolActions::SelectLargestComponentByTriCount" },
		{ "SeparateSelected.Name", "EMeshSelectionToolActions::SeparateSelected" },
		{ "ShrinkSelection.Name", "EMeshSelectionToolActions::ShrinkSelection" },
		{ "SmoothBoundary.Name", "EMeshSelectionToolActions::SmoothBoundary" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshSelectionToolActions::NoAction", (int64)EMeshSelectionToolActions::NoAction },
		{ "EMeshSelectionToolActions::SelectAll", (int64)EMeshSelectionToolActions::SelectAll },
		{ "EMeshSelectionToolActions::SelectAllByMaterial", (int64)EMeshSelectionToolActions::SelectAllByMaterial },
		{ "EMeshSelectionToolActions::ClearSelection", (int64)EMeshSelectionToolActions::ClearSelection },
		{ "EMeshSelectionToolActions::InvertSelection", (int64)EMeshSelectionToolActions::InvertSelection },
		{ "EMeshSelectionToolActions::GrowSelection", (int64)EMeshSelectionToolActions::GrowSelection },
		{ "EMeshSelectionToolActions::ShrinkSelection", (int64)EMeshSelectionToolActions::ShrinkSelection },
		{ "EMeshSelectionToolActions::ExpandToConnected", (int64)EMeshSelectionToolActions::ExpandToConnected },
		{ "EMeshSelectionToolActions::SelectLargestComponentByTriCount", (int64)EMeshSelectionToolActions::SelectLargestComponentByTriCount },
		{ "EMeshSelectionToolActions::SelectLargestComponentByArea", (int64)EMeshSelectionToolActions::SelectLargestComponentByArea },
		{ "EMeshSelectionToolActions::OptimizeSelection", (int64)EMeshSelectionToolActions::OptimizeSelection },
		{ "EMeshSelectionToolActions::DeleteSelected", (int64)EMeshSelectionToolActions::DeleteSelected },
		{ "EMeshSelectionToolActions::DisconnectSelected", (int64)EMeshSelectionToolActions::DisconnectSelected },
		{ "EMeshSelectionToolActions::SeparateSelected", (int64)EMeshSelectionToolActions::SeparateSelected },
		{ "EMeshSelectionToolActions::DuplicateSelected", (int64)EMeshSelectionToolActions::DuplicateSelected },
		{ "EMeshSelectionToolActions::FlipSelected", (int64)EMeshSelectionToolActions::FlipSelected },
		{ "EMeshSelectionToolActions::CreateGroup", (int64)EMeshSelectionToolActions::CreateGroup },
		{ "EMeshSelectionToolActions::SmoothBoundary", (int64)EMeshSelectionToolActions::SmoothBoundary },
		{ "EMeshSelectionToolActions::CycleSelectionMode", (int64)EMeshSelectionToolActions::CycleSelectionMode },
		{ "EMeshSelectionToolActions::CycleViewMode", (int64)EMeshSelectionToolActions::CycleViewMode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolActions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshSelectionToolActions",
	"EMeshSelectionToolActions",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolActions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolActions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolActions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolActions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolActions()
{
	if (!Z_Registration_Info_UEnum_EMeshSelectionToolActions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshSelectionToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolActions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshSelectionToolActions.InnerSingleton;
}
// End Enum EMeshSelectionToolActions

// Begin Class UMeshSelectionToolActionPropertySet
void UMeshSelectionToolActionPropertySet::StaticRegisterNativesUMeshSelectionToolActionPropertySet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSelectionToolActionPropertySet);
UClass* Z_Construct_UClass_UMeshSelectionToolActionPropertySet_NoRegister()
{
	return UMeshSelectionToolActionPropertySet::StaticClass();
}
struct Z_Construct_UClass_UMeshSelectionToolActionPropertySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSelectionToolActionPropertySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshSelectionToolActionPropertySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionToolActionPropertySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSelectionToolActionPropertySet_Statics::ClassParams = {
	&UMeshSelectionToolActionPropertySet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionToolActionPropertySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSelectionToolActionPropertySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSelectionToolActionPropertySet()
{
	if (!Z_Registration_Info_UClass_UMeshSelectionToolActionPropertySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSelectionToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UMeshSelectionToolActionPropertySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSelectionToolActionPropertySet.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSelectionToolActionPropertySet>()
{
	return UMeshSelectionToolActionPropertySet::StaticClass();
}
UMeshSelectionToolActionPropertySet::UMeshSelectionToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSelectionToolActionPropertySet);
UMeshSelectionToolActionPropertySet::~UMeshSelectionToolActionPropertySet() {}
// End Class UMeshSelectionToolActionPropertySet

// Begin Class UMeshSelectionEditActions Function Clear
struct Z_Construct_UFunction_UMeshSelectionEditActions_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Clear the active triangle selection */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Clear the active triangle selection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionEditActions_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionEditActions, nullptr, "Clear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionEditActions_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionEditActions_Clear_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionEditActions_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionEditActions_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionEditActions::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// End Class UMeshSelectionEditActions Function Clear

// Begin Class UMeshSelectionEditActions Function ExpandToMaterials
struct Z_Construct_UFunction_UMeshSelectionEditActions_ExpandToMaterials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Expand the selection to include all triangles with Materials matching the Materials on the currently selected triangles */" },
		{ "DisplayPriority", "9" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Expand the selection to include all triangles with Materials matching the Materials on the currently selected triangles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionEditActions_ExpandToMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionEditActions, nullptr, "ExpandToMaterials", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionEditActions_ExpandToMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionEditActions_ExpandToMaterials_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionEditActions_ExpandToMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionEditActions_ExpandToMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionEditActions::execExpandToMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExpandToMaterials();
	P_NATIVE_END;
}
// End Class UMeshSelectionEditActions Function ExpandToMaterials

// Begin Class UMeshSelectionEditActions Function FloodFill
struct Z_Construct_UFunction_UMeshSelectionEditActions_FloodFill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Grow the active selection to include any triangle connected via shared edges (ie flood-fill) */" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Grow the active selection to include any triangle connected via shared edges (ie flood-fill)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionEditActions_FloodFill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionEditActions, nullptr, "FloodFill", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionEditActions_FloodFill_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionEditActions_FloodFill_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionEditActions_FloodFill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionEditActions_FloodFill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionEditActions::execFloodFill)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FloodFill();
	P_NATIVE_END;
}
// End Class UMeshSelectionEditActions Function FloodFill

// Begin Class UMeshSelectionEditActions Function Grow
struct Z_Construct_UFunction_UMeshSelectionEditActions_Grow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Grow the active triangle selection to include any triangles touching a vertex on the selection boundary */" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Grow the active triangle selection to include any triangles touching a vertex on the selection boundary" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionEditActions_Grow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionEditActions, nullptr, "Grow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionEditActions_Grow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionEditActions_Grow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionEditActions_Grow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionEditActions_Grow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionEditActions::execGrow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Grow();
	P_NATIVE_END;
}
// End Class UMeshSelectionEditActions Function Grow

// Begin Class UMeshSelectionEditActions Function Invert
struct Z_Construct_UFunction_UMeshSelectionEditActions_Invert_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Invert the active triangle selection */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Invert the active triangle selection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionEditActions_Invert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionEditActions, nullptr, "Invert", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionEditActions_Invert_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionEditActions_Invert_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionEditActions_Invert()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionEditActions_Invert_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionEditActions::execInvert)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Invert();
	P_NATIVE_END;
}
// End Class UMeshSelectionEditActions Function Invert

// Begin Class UMeshSelectionEditActions Function LargestAreaPart
struct Z_Construct_UFunction_UMeshSelectionEditActions_LargestAreaPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Select the largest connected mesh component by mesh area */" },
		{ "DisplayPriority", "7" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Select the largest connected mesh component by mesh area" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionEditActions_LargestAreaPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionEditActions, nullptr, "LargestAreaPart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionEditActions_LargestAreaPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionEditActions_LargestAreaPart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionEditActions_LargestAreaPart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionEditActions_LargestAreaPart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionEditActions::execLargestAreaPart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LargestAreaPart();
	P_NATIVE_END;
}
// End Class UMeshSelectionEditActions Function LargestAreaPart

// Begin Class UMeshSelectionEditActions Function LargestTriCountPart
struct Z_Construct_UFunction_UMeshSelectionEditActions_LargestTriCountPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Select the largest connected mesh component by triangle count */" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Select the largest connected mesh component by triangle count" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionEditActions_LargestTriCountPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionEditActions, nullptr, "LargestTriCountPart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionEditActions_LargestTriCountPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionEditActions_LargestTriCountPart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionEditActions_LargestTriCountPart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionEditActions_LargestTriCountPart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionEditActions::execLargestTriCountPart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LargestTriCountPart();
	P_NATIVE_END;
}
// End Class UMeshSelectionEditActions Function LargestTriCountPart

// Begin Class UMeshSelectionEditActions Function OptimizeBorder
struct Z_Construct_UFunction_UMeshSelectionEditActions_OptimizeBorder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Optimize the selection border by removing \"fin\" triangles and including \"ear\" triangles */" },
		{ "DisplayPriority", "8" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Optimize the selection border by removing \"fin\" triangles and including \"ear\" triangles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionEditActions_OptimizeBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionEditActions, nullptr, "OptimizeBorder", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionEditActions_OptimizeBorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionEditActions_OptimizeBorder_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionEditActions_OptimizeBorder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionEditActions_OptimizeBorder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionEditActions::execOptimizeBorder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OptimizeBorder();
	P_NATIVE_END;
}
// End Class UMeshSelectionEditActions Function OptimizeBorder

// Begin Class UMeshSelectionEditActions Function SelectAll
struct Z_Construct_UFunction_UMeshSelectionEditActions_SelectAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Select all triangles in the mesh */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Select all triangles in the mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionEditActions_SelectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionEditActions, nullptr, "SelectAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionEditActions_SelectAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionEditActions_SelectAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionEditActions_SelectAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionEditActions_SelectAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionEditActions::execSelectAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectAll();
	P_NATIVE_END;
}
// End Class UMeshSelectionEditActions Function SelectAll

// Begin Class UMeshSelectionEditActions Function Shrink
struct Z_Construct_UFunction_UMeshSelectionEditActions_Shrink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Shrink the active triangle selection by removing any triangles touching a vertex on the selection boundary */" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Shrink the active triangle selection by removing any triangles touching a vertex on the selection boundary" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionEditActions_Shrink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionEditActions, nullptr, "Shrink", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionEditActions_Shrink_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionEditActions_Shrink_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionEditActions_Shrink()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionEditActions_Shrink_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionEditActions::execShrink)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Shrink();
	P_NATIVE_END;
}
// End Class UMeshSelectionEditActions Function Shrink

// Begin Class UMeshSelectionEditActions
void UMeshSelectionEditActions::StaticRegisterNativesUMeshSelectionEditActions()
{
	UClass* Class = UMeshSelectionEditActions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Clear", &UMeshSelectionEditActions::execClear },
		{ "ExpandToMaterials", &UMeshSelectionEditActions::execExpandToMaterials },
		{ "FloodFill", &UMeshSelectionEditActions::execFloodFill },
		{ "Grow", &UMeshSelectionEditActions::execGrow },
		{ "Invert", &UMeshSelectionEditActions::execInvert },
		{ "LargestAreaPart", &UMeshSelectionEditActions::execLargestAreaPart },
		{ "LargestTriCountPart", &UMeshSelectionEditActions::execLargestTriCountPart },
		{ "OptimizeBorder", &UMeshSelectionEditActions::execOptimizeBorder },
		{ "SelectAll", &UMeshSelectionEditActions::execSelectAll },
		{ "Shrink", &UMeshSelectionEditActions::execShrink },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSelectionEditActions);
UClass* Z_Construct_UClass_UMeshSelectionEditActions_NoRegister()
{
	return UMeshSelectionEditActions::StaticClass();
}
struct Z_Construct_UClass_UMeshSelectionEditActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshSelectionEditActions_Clear, "Clear" }, // 3140639292
		{ &Z_Construct_UFunction_UMeshSelectionEditActions_ExpandToMaterials, "ExpandToMaterials" }, // 151987543
		{ &Z_Construct_UFunction_UMeshSelectionEditActions_FloodFill, "FloodFill" }, // 2172026225
		{ &Z_Construct_UFunction_UMeshSelectionEditActions_Grow, "Grow" }, // 1190383922
		{ &Z_Construct_UFunction_UMeshSelectionEditActions_Invert, "Invert" }, // 3796551659
		{ &Z_Construct_UFunction_UMeshSelectionEditActions_LargestAreaPart, "LargestAreaPart" }, // 3620579600
		{ &Z_Construct_UFunction_UMeshSelectionEditActions_LargestTriCountPart, "LargestTriCountPart" }, // 3379174674
		{ &Z_Construct_UFunction_UMeshSelectionEditActions_OptimizeBorder, "OptimizeBorder" }, // 2753915288
		{ &Z_Construct_UFunction_UMeshSelectionEditActions_SelectAll, "SelectAll" }, // 1415808164
		{ &Z_Construct_UFunction_UMeshSelectionEditActions_Shrink, "Shrink" }, // 1856038431
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSelectionEditActions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshSelectionEditActions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSelectionToolActionPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionEditActions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSelectionEditActions_Statics::ClassParams = {
	&UMeshSelectionEditActions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionEditActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSelectionEditActions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSelectionEditActions()
{
	if (!Z_Registration_Info_UClass_UMeshSelectionEditActions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSelectionEditActions.OuterSingleton, Z_Construct_UClass_UMeshSelectionEditActions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSelectionEditActions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSelectionEditActions>()
{
	return UMeshSelectionEditActions::StaticClass();
}
UMeshSelectionEditActions::UMeshSelectionEditActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSelectionEditActions);
UMeshSelectionEditActions::~UMeshSelectionEditActions() {}
// End Class UMeshSelectionEditActions

// Begin Class UMeshSelectionMeshEditActions Function CreatePolygroup
struct Z_Construct_UFunction_UMeshSelectionMeshEditActions_CreatePolygroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MeshEdits" },
		{ "Comment", "/** Assign a new unique Polygroup index to the selected triangles */" },
		{ "DisplayName", "Create Polygroup" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Assign a new unique Polygroup index to the selected triangles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionMeshEditActions_CreatePolygroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionMeshEditActions, nullptr, "CreatePolygroup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionMeshEditActions_CreatePolygroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionMeshEditActions_CreatePolygroup_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionMeshEditActions_CreatePolygroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionMeshEditActions_CreatePolygroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionMeshEditActions::execCreatePolygroup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreatePolygroup();
	P_NATIVE_END;
}
// End Class UMeshSelectionMeshEditActions Function CreatePolygroup

// Begin Class UMeshSelectionMeshEditActions Function Delete
struct Z_Construct_UFunction_UMeshSelectionMeshEditActions_Delete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MeshEdits" },
		{ "Comment", "/** Delete the selected triangles */" },
		{ "DisplayName", "Delete" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Delete the selected triangles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionMeshEditActions_Delete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionMeshEditActions, nullptr, "Delete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionMeshEditActions_Delete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionMeshEditActions_Delete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionMeshEditActions_Delete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionMeshEditActions_Delete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionMeshEditActions::execDelete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Delete();
	P_NATIVE_END;
}
// End Class UMeshSelectionMeshEditActions Function Delete

// Begin Class UMeshSelectionMeshEditActions Function Disconnect
struct Z_Construct_UFunction_UMeshSelectionMeshEditActions_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MeshEdits" },
		{ "Comment", "/** Disconnected the selected triangles from their neighbours, to create mesh boundaries along the selection borders */" },
		{ "DisplayName", "Disconnect" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Disconnected the selected triangles from their neighbours, to create mesh boundaries along the selection borders" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionMeshEditActions_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionMeshEditActions, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionMeshEditActions_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionMeshEditActions_Disconnect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionMeshEditActions_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionMeshEditActions_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionMeshEditActions::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// End Class UMeshSelectionMeshEditActions Function Disconnect

// Begin Class UMeshSelectionMeshEditActions Function Duplicate
struct Z_Construct_UFunction_UMeshSelectionMeshEditActions_Duplicate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MeshEdits" },
		{ "Comment", "/** Create a new Mesh Object containing the selected triangles */" },
		{ "DisplayName", "Duplicate" },
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Create a new Mesh Object containing the selected triangles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionMeshEditActions_Duplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionMeshEditActions, nullptr, "Duplicate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionMeshEditActions_Duplicate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionMeshEditActions_Duplicate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionMeshEditActions_Duplicate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionMeshEditActions_Duplicate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionMeshEditActions::execDuplicate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Duplicate();
	P_NATIVE_END;
}
// End Class UMeshSelectionMeshEditActions Function Duplicate

// Begin Class UMeshSelectionMeshEditActions Function FlipNormals
struct Z_Construct_UFunction_UMeshSelectionMeshEditActions_FlipNormals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MeshEdits" },
		{ "Comment", "/** Flip the normals of the selected triangles. This will create hard normals at selection borders. */" },
		{ "DisplayName", "Flip Normals" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Flip the normals of the selected triangles. This will create hard normals at selection borders." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionMeshEditActions_FlipNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionMeshEditActions, nullptr, "FlipNormals", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionMeshEditActions_FlipNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionMeshEditActions_FlipNormals_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionMeshEditActions_FlipNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionMeshEditActions_FlipNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionMeshEditActions::execFlipNormals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlipNormals();
	P_NATIVE_END;
}
// End Class UMeshSelectionMeshEditActions Function FlipNormals

// Begin Class UMeshSelectionMeshEditActions Function Separate
struct Z_Construct_UFunction_UMeshSelectionMeshEditActions_Separate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MeshEdits" },
		{ "Comment", "/** Delete the selected triangles from the active Mesh Object and create a new Mesh Object containing those triangles */" },
		{ "DisplayName", "Separate" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Delete the selected triangles from the active Mesh Object and create a new Mesh Object containing those triangles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionMeshEditActions_Separate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionMeshEditActions, nullptr, "Separate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionMeshEditActions_Separate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionMeshEditActions_Separate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionMeshEditActions_Separate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionMeshEditActions_Separate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionMeshEditActions::execSeparate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Separate();
	P_NATIVE_END;
}
// End Class UMeshSelectionMeshEditActions Function Separate

// Begin Class UMeshSelectionMeshEditActions Function SmoothBorder
struct Z_Construct_UFunction_UMeshSelectionMeshEditActions_SmoothBorder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MeshEdits" },
		{ "Comment", "/** Smooth the selection border */" },
		{ "DisplayPriority", "12" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Smooth the selection border" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSelectionMeshEditActions_SmoothBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSelectionMeshEditActions, nullptr, "SmoothBorder", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSelectionMeshEditActions_SmoothBorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshSelectionMeshEditActions_SmoothBorder_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshSelectionMeshEditActions_SmoothBorder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSelectionMeshEditActions_SmoothBorder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshSelectionMeshEditActions::execSmoothBorder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SmoothBorder();
	P_NATIVE_END;
}
// End Class UMeshSelectionMeshEditActions Function SmoothBorder

// Begin Class UMeshSelectionMeshEditActions
void UMeshSelectionMeshEditActions::StaticRegisterNativesUMeshSelectionMeshEditActions()
{
	UClass* Class = UMeshSelectionMeshEditActions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePolygroup", &UMeshSelectionMeshEditActions::execCreatePolygroup },
		{ "Delete", &UMeshSelectionMeshEditActions::execDelete },
		{ "Disconnect", &UMeshSelectionMeshEditActions::execDisconnect },
		{ "Duplicate", &UMeshSelectionMeshEditActions::execDuplicate },
		{ "FlipNormals", &UMeshSelectionMeshEditActions::execFlipNormals },
		{ "Separate", &UMeshSelectionMeshEditActions::execSeparate },
		{ "SmoothBorder", &UMeshSelectionMeshEditActions::execSmoothBorder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSelectionMeshEditActions);
UClass* Z_Construct_UClass_UMeshSelectionMeshEditActions_NoRegister()
{
	return UMeshSelectionMeshEditActions::StaticClass();
}
struct Z_Construct_UClass_UMeshSelectionMeshEditActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshSelectionMeshEditActions_CreatePolygroup, "CreatePolygroup" }, // 3577309081
		{ &Z_Construct_UFunction_UMeshSelectionMeshEditActions_Delete, "Delete" }, // 1318187834
		{ &Z_Construct_UFunction_UMeshSelectionMeshEditActions_Disconnect, "Disconnect" }, // 2518981787
		{ &Z_Construct_UFunction_UMeshSelectionMeshEditActions_Duplicate, "Duplicate" }, // 4068998587
		{ &Z_Construct_UFunction_UMeshSelectionMeshEditActions_FlipNormals, "FlipNormals" }, // 2992775468
		{ &Z_Construct_UFunction_UMeshSelectionMeshEditActions_Separate, "Separate" }, // 2114861198
		{ &Z_Construct_UFunction_UMeshSelectionMeshEditActions_SmoothBorder, "SmoothBorder" }, // 3440635499
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSelectionMeshEditActions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshSelectionMeshEditActions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSelectionToolActionPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionMeshEditActions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSelectionMeshEditActions_Statics::ClassParams = {
	&UMeshSelectionMeshEditActions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionMeshEditActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSelectionMeshEditActions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSelectionMeshEditActions()
{
	if (!Z_Registration_Info_UClass_UMeshSelectionMeshEditActions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSelectionMeshEditActions.OuterSingleton, Z_Construct_UClass_UMeshSelectionMeshEditActions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSelectionMeshEditActions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSelectionMeshEditActions>()
{
	return UMeshSelectionMeshEditActions::StaticClass();
}
UMeshSelectionMeshEditActions::UMeshSelectionMeshEditActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSelectionMeshEditActions);
UMeshSelectionMeshEditActions::~UMeshSelectionMeshEditActions() {}
// End Class UMeshSelectionMeshEditActions

// Begin Enum EMeshSelectionToolPrimaryMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshSelectionToolPrimaryMode;
static UEnum* EMeshSelectionToolPrimaryMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshSelectionToolPrimaryMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshSelectionToolPrimaryMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolPrimaryMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshSelectionToolPrimaryMode"));
	}
	return Z_Registration_Info_UEnum_EMeshSelectionToolPrimaryMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshSelectionToolPrimaryMode>()
{
	return EMeshSelectionToolPrimaryMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolPrimaryMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllConnected.Comment", "/** Select all triangles connected to any triangle inside the brush */" },
		{ "AllConnected.Name", "EMeshSelectionToolPrimaryMode::AllConnected" },
		{ "AllConnected.ToolTip", "Select all triangles connected to any triangle inside the brush" },
		{ "AllInGroup.Comment", "/** Select all triangles in groups connected to any triangle inside the brush */" },
		{ "AllInGroup.Name", "EMeshSelectionToolPrimaryMode::AllInGroup" },
		{ "AllInGroup.ToolTip", "Select all triangles in groups connected to any triangle inside the brush" },
		{ "AllWithinAngle.Comment", "/** Select all triangles with normal within angular tolerance of hit triangle */" },
		{ "AllWithinAngle.Name", "EMeshSelectionToolPrimaryMode::AllWithinAngle" },
		{ "AllWithinAngle.ToolTip", "Select all triangles with normal within angular tolerance of hit triangle" },
		{ "AngleFiltered.Comment", "/** Select all triangles inside brush with normal within angular tolerance of hit triangle */" },
		{ "AngleFiltered.Name", "EMeshSelectionToolPrimaryMode::AngleFiltered" },
		{ "AngleFiltered.ToolTip", "Select all triangles inside brush with normal within angular tolerance of hit triangle" },
		{ "Brush.Comment", "/** Select all triangles inside the brush area */" },
		{ "Brush.Name", "EMeshSelectionToolPrimaryMode::Brush" },
		{ "Brush.ToolTip", "Select all triangles inside the brush area" },
		{ "ByMaterial.Comment", "/** Select the connected group of triangles with same material as hit triangle */" },
		{ "ByMaterial.DisplayName", "By Material (Connected)" },
		{ "ByMaterial.Name", "EMeshSelectionToolPrimaryMode::ByMaterial" },
		{ "ByMaterial.ToolTip", "Select the connected group of triangles with same material as hit triangle" },
		{ "ByMaterialAll.Comment", "/** Select all triangles with same material as hit triangle */" },
		{ "ByMaterialAll.DisplayName", "By Material (All)" },
		{ "ByMaterialAll.Name", "EMeshSelectionToolPrimaryMode::ByMaterialAll" },
		{ "ByMaterialAll.ToolTip", "Select all triangles with same material as hit triangle" },
		{ "ByUVIsland.Comment", "/** Select all triangles in same UV island as hit triangle */" },
		{ "ByUVIsland.Name", "EMeshSelectionToolPrimaryMode::ByUVIsland" },
		{ "ByUVIsland.ToolTip", "Select all triangles in same UV island as hit triangle" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "Visible.Comment", "/** Select all triangles inside brush that are visible from current view */" },
		{ "Visible.Name", "EMeshSelectionToolPrimaryMode::Visible" },
		{ "Visible.ToolTip", "Select all triangles inside brush that are visible from current view" },
		{ "VolumetricBrush.Comment", "/** Select all triangles inside the brush volume */" },
		{ "VolumetricBrush.Name", "EMeshSelectionToolPrimaryMode::VolumetricBrush" },
		{ "VolumetricBrush.ToolTip", "Select all triangles inside the brush volume" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshSelectionToolPrimaryMode::Brush", (int64)EMeshSelectionToolPrimaryMode::Brush },
		{ "EMeshSelectionToolPrimaryMode::VolumetricBrush", (int64)EMeshSelectionToolPrimaryMode::VolumetricBrush },
		{ "EMeshSelectionToolPrimaryMode::AngleFiltered", (int64)EMeshSelectionToolPrimaryMode::AngleFiltered },
		{ "EMeshSelectionToolPrimaryMode::Visible", (int64)EMeshSelectionToolPrimaryMode::Visible },
		{ "EMeshSelectionToolPrimaryMode::AllConnected", (int64)EMeshSelectionToolPrimaryMode::AllConnected },
		{ "EMeshSelectionToolPrimaryMode::AllInGroup", (int64)EMeshSelectionToolPrimaryMode::AllInGroup },
		{ "EMeshSelectionToolPrimaryMode::ByMaterial", (int64)EMeshSelectionToolPrimaryMode::ByMaterial },
		{ "EMeshSelectionToolPrimaryMode::ByMaterialAll", (int64)EMeshSelectionToolPrimaryMode::ByMaterialAll },
		{ "EMeshSelectionToolPrimaryMode::ByUVIsland", (int64)EMeshSelectionToolPrimaryMode::ByUVIsland },
		{ "EMeshSelectionToolPrimaryMode::AllWithinAngle", (int64)EMeshSelectionToolPrimaryMode::AllWithinAngle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolPrimaryMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshSelectionToolPrimaryMode",
	"EMeshSelectionToolPrimaryMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolPrimaryMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolPrimaryMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolPrimaryMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolPrimaryMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolPrimaryMode()
{
	if (!Z_Registration_Info_UEnum_EMeshSelectionToolPrimaryMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshSelectionToolPrimaryMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolPrimaryMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshSelectionToolPrimaryMode.InnerSingleton;
}
// End Enum EMeshSelectionToolPrimaryMode

// Begin Enum EMeshFacesColorMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshFacesColorMode;
static UEnum* EMeshFacesColorMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshFacesColorMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshFacesColorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshFacesColorMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshFacesColorMode"));
	}
	return Z_Registration_Info_UEnum_EMeshFacesColorMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshFacesColorMode>()
{
	return EMeshFacesColorMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshFacesColorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ByGroup.Comment", "/** Color mesh triangles by PolyGroup Color */" },
		{ "ByGroup.Name", "EMeshFacesColorMode::ByGroup" },
		{ "ByGroup.ToolTip", "Color mesh triangles by PolyGroup Color" },
		{ "ByMaterialID.Comment", "/** Color mesh triangles by Material ID */" },
		{ "ByMaterialID.Name", "EMeshFacesColorMode::ByMaterialID" },
		{ "ByMaterialID.ToolTip", "Color mesh triangles by Material ID" },
		{ "ByUVIsland.Comment", "/** Color mesh triangles by UV Island */" },
		{ "ByUVIsland.Name", "EMeshFacesColorMode::ByUVIsland" },
		{ "ByUVIsland.ToolTip", "Color mesh triangles by UV Island" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "None.Comment", "/** Display original mesh materials */" },
		{ "None.Name", "EMeshFacesColorMode::None" },
		{ "None.ToolTip", "Display original mesh materials" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshFacesColorMode::None", (int64)EMeshFacesColorMode::None },
		{ "EMeshFacesColorMode::ByGroup", (int64)EMeshFacesColorMode::ByGroup },
		{ "EMeshFacesColorMode::ByMaterialID", (int64)EMeshFacesColorMode::ByMaterialID },
		{ "EMeshFacesColorMode::ByUVIsland", (int64)EMeshFacesColorMode::ByUVIsland },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshFacesColorMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshFacesColorMode",
	"EMeshFacesColorMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshFacesColorMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshFacesColorMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshFacesColorMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshFacesColorMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshFacesColorMode()
{
	if (!Z_Registration_Info_UEnum_EMeshFacesColorMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshFacesColorMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshFacesColorMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshFacesColorMode.InnerSingleton;
}
// End Enum EMeshFacesColorMode

// Begin Class UMeshSelectionToolProperties
void UMeshSelectionToolProperties::StaticRegisterNativesUMeshSelectionToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSelectionToolProperties);
UClass* Z_Construct_UClass_UMeshSelectionToolProperties_NoRegister()
{
	return UMeshSelectionToolProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshSelectionToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMode_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** The Selection Mode defines the behavior of the selection brush */" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "The Selection Mode defines the behavior of the selection brush" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleTolerance_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Angle in Degrees used for Angle-based Selection Modes */" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Angle in Degrees used for Angle-based Selection Modes" },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitBackFaces_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Allow the brush to hit back-facing parts of the surface  */" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Allow the brush to hit back-facing parts of the surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPoints_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Toggle drawing of highlight points on/off */" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Toggle drawing of highlight points on/off" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceColorMode_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Color each triangle based on the selected mesh attribute */" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
		{ "ToolTip", "Color each triangle based on the selected mesh attribute" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleTolerance;
	static void NewProp_bHitBackFaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitBackFaces;
	static void NewProp_bShowPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FaceColorMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceColorMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSelectionToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_SelectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_SelectionMode = { "SelectionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSelectionToolProperties, SelectionMode), Z_Construct_UEnum_MeshModelingToolsExp_EMeshSelectionToolPrimaryMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionMode_MetaData), NewProp_SelectionMode_MetaData) }; // 1312213060
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_AngleTolerance = { "AngleTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSelectionToolProperties, AngleTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleTolerance_MetaData), NewProp_AngleTolerance_MetaData) };
void Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_bHitBackFaces_SetBit(void* Obj)
{
	((UMeshSelectionToolProperties*)Obj)->bHitBackFaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_bHitBackFaces = { "bHitBackFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshSelectionToolProperties), &Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_bHitBackFaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitBackFaces_MetaData), NewProp_bHitBackFaces_MetaData) };
void Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_bShowPoints_SetBit(void* Obj)
{
	((UMeshSelectionToolProperties*)Obj)->bShowPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_bShowPoints = { "bShowPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshSelectionToolProperties), &Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_bShowPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPoints_MetaData), NewProp_bShowPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_FaceColorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_FaceColorMode = { "FaceColorMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSelectionToolProperties, FaceColorMode), Z_Construct_UEnum_MeshModelingToolsExp_EMeshFacesColorMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceColorMode_MetaData), NewProp_FaceColorMode_MetaData) }; // 3116530299
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSelectionToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_SelectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_SelectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_AngleTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_bHitBackFaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_bShowPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_FaceColorMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionToolProperties_Statics::NewProp_FaceColorMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshSelectionToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSelectionToolProperties_Statics::ClassParams = {
	&UMeshSelectionToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshSelectionToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSelectionToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSelectionToolProperties()
{
	if (!Z_Registration_Info_UClass_UMeshSelectionToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSelectionToolProperties.OuterSingleton, Z_Construct_UClass_UMeshSelectionToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSelectionToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSelectionToolProperties>()
{
	return UMeshSelectionToolProperties::StaticClass();
}
UMeshSelectionToolProperties::UMeshSelectionToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSelectionToolProperties);
UMeshSelectionToolProperties::~UMeshSelectionToolProperties() {}
// End Class UMeshSelectionToolProperties

// Begin Class UMeshSelectionTool
void UMeshSelectionTool::StaticRegisterNativesUMeshSelectionTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSelectionTool);
UClass* Z_Construct_UClass_UMeshSelectionTool_NoRegister()
{
	return UMeshSelectionTool::StaticClass();
}
struct Z_Construct_UClass_UMeshSelectionTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshStatisticsProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshElementsDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSelectionTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionProps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshStatisticsProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshElementsDisplay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UVChannelProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PolygroupLayerProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSelectionTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_SelectionProps = { "SelectionProps", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSelectionTool, SelectionProps), Z_Construct_UClass_UMeshSelectionToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionProps_MetaData), NewProp_SelectionProps_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_SelectionActions = { "SelectionActions", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSelectionTool, SelectionActions), Z_Construct_UClass_UMeshSelectionEditActions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionActions_MetaData), NewProp_SelectionActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_EditActions = { "EditActions", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSelectionTool, EditActions), Z_Construct_UClass_UMeshSelectionToolActionPropertySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditActions_MetaData), NewProp_EditActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_MeshStatisticsProperties = { "MeshStatisticsProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSelectionTool, MeshStatisticsProperties), Z_Construct_UClass_UMeshStatisticsProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshStatisticsProperties_MetaData), NewProp_MeshStatisticsProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_MeshElementsDisplay = { "MeshElementsDisplay", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSelectionTool, MeshElementsDisplay), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshElementsDisplay_MetaData), NewProp_MeshElementsDisplay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_UVChannelProperties = { "UVChannelProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSelectionTool, UVChannelProperties), Z_Construct_UClass_UMeshUVChannelProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannelProperties_MetaData), NewProp_UVChannelProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_PolygroupLayerProperties = { "PolygroupLayerProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSelectionTool, PolygroupLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygroupLayerProperties_MetaData), NewProp_PolygroupLayerProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSelectionTool, Selection), Z_Construct_UClass_UMeshSelectionSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selection_MetaData), NewProp_Selection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_SpawnedActors_Inner = { "SpawnedActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_SpawnedActors = { "SpawnedActors", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSelectionTool, SpawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedActors_MetaData), NewProp_SpawnedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSelectionTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_SelectionProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_SelectionActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_EditActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_MeshStatisticsProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_MeshElementsDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_UVChannelProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_PolygroupLayerProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_Selection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_SpawnedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionTool_Statics::NewProp_SpawnedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshSelectionTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDynamicMeshBrushTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMeshSelectionTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister, (int32)VTABLE_OFFSET(UMeshSelectionTool, IInteractiveToolNestedAcceptCancelAPI), false },  // 2931093765
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSelectionTool_Statics::ClassParams = {
	&UMeshSelectionTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshSelectionTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSelectionTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSelectionTool()
{
	if (!Z_Registration_Info_UClass_UMeshSelectionTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSelectionTool.OuterSingleton, Z_Construct_UClass_UMeshSelectionTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSelectionTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSelectionTool>()
{
	return UMeshSelectionTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSelectionTool);
UMeshSelectionTool::~UMeshSelectionTool() {}
// End Class UMeshSelectionTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMeshSelectionToolActions_StaticEnum, TEXT("EMeshSelectionToolActions"), &Z_Registration_Info_UEnum_EMeshSelectionToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4291526391U) },
		{ EMeshSelectionToolPrimaryMode_StaticEnum, TEXT("EMeshSelectionToolPrimaryMode"), &Z_Registration_Info_UEnum_EMeshSelectionToolPrimaryMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1312213060U) },
		{ EMeshFacesColorMode_StaticEnum, TEXT("EMeshFacesColorMode"), &Z_Registration_Info_UEnum_EMeshFacesColorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3116530299U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshSelectionToolBuilder, UMeshSelectionToolBuilder::StaticClass, TEXT("UMeshSelectionToolBuilder"), &Z_Registration_Info_UClass_UMeshSelectionToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSelectionToolBuilder), 2646741999U) },
		{ Z_Construct_UClass_UMeshSelectionToolActionPropertySet, UMeshSelectionToolActionPropertySet::StaticClass, TEXT("UMeshSelectionToolActionPropertySet"), &Z_Registration_Info_UClass_UMeshSelectionToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSelectionToolActionPropertySet), 2411161827U) },
		{ Z_Construct_UClass_UMeshSelectionEditActions, UMeshSelectionEditActions::StaticClass, TEXT("UMeshSelectionEditActions"), &Z_Registration_Info_UClass_UMeshSelectionEditActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSelectionEditActions), 2350212798U) },
		{ Z_Construct_UClass_UMeshSelectionMeshEditActions, UMeshSelectionMeshEditActions::StaticClass, TEXT("UMeshSelectionMeshEditActions"), &Z_Registration_Info_UClass_UMeshSelectionMeshEditActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSelectionMeshEditActions), 3327616911U) },
		{ Z_Construct_UClass_UMeshSelectionToolProperties, UMeshSelectionToolProperties::StaticClass, TEXT("UMeshSelectionToolProperties"), &Z_Registration_Info_UClass_UMeshSelectionToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSelectionToolProperties), 3330577130U) },
		{ Z_Construct_UClass_UMeshSelectionTool, UMeshSelectionTool::StaticClass, TEXT("UMeshSelectionTool"), &Z_Registration_Info_UClass_UMeshSelectionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSelectionTool), 2529237578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_1857043290(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSelectionTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
