// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/MirrorTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorOperatorFactory();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorOperatorFactory_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorToolActionPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorToolActionPropertySet_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UMirrorToolBuilder
void UMirrorToolBuilder::StaticRegisterNativesUMirrorToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorToolBuilder);
UClass* Z_Construct_UClass_UMirrorToolBuilder_NoRegister()
{
	return UMirrorToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UMirrorToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MirrorTool.h" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMirrorToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorToolBuilder_Statics::ClassParams = {
	&UMirrorToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMirrorToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMirrorToolBuilder()
{
	if (!Z_Registration_Info_UClass_UMirrorToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorToolBuilder.OuterSingleton, Z_Construct_UClass_UMirrorToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMirrorToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMirrorToolBuilder>()
{
	return UMirrorToolBuilder::StaticClass();
}
UMirrorToolBuilder::UMirrorToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorToolBuilder);
UMirrorToolBuilder::~UMirrorToolBuilder() {}
// End Class UMirrorToolBuilder

// Begin Enum EMirrorSaveMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMirrorSaveMode;
static UEnum* EMirrorSaveMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMirrorSaveMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMirrorSaveMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMirrorSaveMode"));
	}
	return Z_Registration_Info_UEnum_EMirrorSaveMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMirrorSaveMode>()
{
	return EMirrorSaveMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "InputObjects.Comment", "/**  Save the results in place of the original input objects. */" },
		{ "InputObjects.Name", "EMirrorSaveMode::InputObjects" },
		{ "InputObjects.ToolTip", "Save the results in place of the original input objects." },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "NewObjects.Comment", "/** Save the results as new objects. */" },
		{ "NewObjects.Name", "EMirrorSaveMode::NewObjects" },
		{ "NewObjects.ToolTip", "Save the results as new objects." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMirrorSaveMode::InputObjects", (int64)EMirrorSaveMode::InputObjects },
		{ "EMirrorSaveMode::NewObjects", (int64)EMirrorSaveMode::NewObjects },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMirrorSaveMode",
	"EMirrorSaveMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode()
{
	if (!Z_Registration_Info_UEnum_EMirrorSaveMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMirrorSaveMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMirrorSaveMode.InnerSingleton;
}
// End Enum EMirrorSaveMode

// Begin Enum EMirrorOperationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMirrorOperationMode;
static UEnum* EMirrorOperationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMirrorOperationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMirrorOperationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMirrorOperationMode"));
	}
	return Z_Registration_Info_UEnum_EMirrorOperationMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMirrorOperationMode>()
{
	return EMirrorOperationMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MirrorAndAppend.Comment", "/**  Append a mirrored version of the mesh to itself. */" },
		{ "MirrorAndAppend.Name", "EMirrorOperationMode::MirrorAndAppend" },
		{ "MirrorAndAppend.ToolTip", "Append a mirrored version of the mesh to itself." },
		{ "MirrorExisting.Comment", "/** Mirror the existing mesh. */" },
		{ "MirrorExisting.Name", "EMirrorOperationMode::MirrorExisting" },
		{ "MirrorExisting.ToolTip", "Mirror the existing mesh." },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMirrorOperationMode::MirrorAndAppend", (int64)EMirrorOperationMode::MirrorAndAppend },
		{ "EMirrorOperationMode::MirrorExisting", (int64)EMirrorOperationMode::MirrorExisting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMirrorOperationMode",
	"EMirrorOperationMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode()
{
	if (!Z_Registration_Info_UEnum_EMirrorOperationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMirrorOperationMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMirrorOperationMode.InnerSingleton;
}
// End Enum EMirrorOperationMode

// Begin Class UMirrorToolProperties
void UMirrorToolProperties::StaticRegisterNativesUMirrorToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorToolProperties);
UClass* Z_Construct_UClass_UMirrorToolProperties_NoRegister()
{
	return UMirrorToolProperties::StaticClass();
}
struct Z_Construct_UClass_UMirrorToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MirrorTool.h" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Mode of operation. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Mode of operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCropAlongMirrorPlaneFirst_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Cut off everything on the back side of the mirror plane before mirroring. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Cut off everything on the back side of the mirror plane before mirroring." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyAlongCrop_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to locally simplify new edges created when cropping along the mirror plane. Will only simplify when doing so will not change the shape, UVs or PolyGroups. */" },
		{ "EditCondition", "bCropAlongMirrorPlaneFirst" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Whether to locally simplify new edges created when cropping along the mirror plane. Will only simplify when doing so will not change the shape, UVs or PolyGroups." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeldVerticesOnMirrorPlane_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Weld vertices that lie on the mirror plane. Vertices will not be welded if doing so would give an edge more than two faces, or if they are part of a face in the plane. */" },
		{ "EditCondition", "OperationMode == EMirrorOperationMode::MirrorAndAppend" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Weld vertices that lie on the mirror plane. Vertices will not be welded if doing so would give an edge more than two faces, or if they are part of a face in the plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Distance (in unscaled mesh space) to allow a point to be from the plane and still consider it \"on the mirror plane\". */" },
		{ "EditCondition", "OperationMode == EMirrorOperationMode::MirrorAndAppend && bWeldVerticesOnMirrorPlane" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Distance (in unscaled mesh space) to allow a point to be from the plane and still consider it \"on the mirror plane\"." },
		{ "UIMax", "0.010000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowBowtieVertexCreation_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When welding, whether to allow bowtie vertices to be created, or to duplicate the vertex. */" },
		{ "EditCondition", "bWeldVerticesOnMirrorPlane && OperationMode == EMirrorOperationMode::MirrorAndAppend" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "When welding, whether to allow bowtie vertices to be created, or to duplicate the vertex." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreview_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to show the preview. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Whether to show the preview." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WriteTo_MetaData[] = {
		{ "Category", "OutputOptions" },
		{ "Comment", "/** How to save the result. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "How to save the result." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OperationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OperationMode;
	static void NewProp_bCropAlongMirrorPlaneFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCropAlongMirrorPlaneFirst;
	static void NewProp_bSimplifyAlongCrop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyAlongCrop;
	static void NewProp_bWeldVerticesOnMirrorPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldVerticesOnMirrorPlane;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PlaneTolerance;
	static void NewProp_bAllowBowtieVertexCreation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBowtieVertexCreation;
	static void NewProp_bShowPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreview;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WriteTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WriteTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_OperationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_OperationMode = { "OperationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorToolProperties, OperationMode), Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationMode_MetaData), NewProp_OperationMode_MetaData) }; // 2090463056
void Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bCropAlongMirrorPlaneFirst_SetBit(void* Obj)
{
	((UMirrorToolProperties*)Obj)->bCropAlongMirrorPlaneFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bCropAlongMirrorPlaneFirst = { "bCropAlongMirrorPlaneFirst", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMirrorToolProperties), &Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bCropAlongMirrorPlaneFirst_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCropAlongMirrorPlaneFirst_MetaData), NewProp_bCropAlongMirrorPlaneFirst_MetaData) };
void Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bSimplifyAlongCrop_SetBit(void* Obj)
{
	((UMirrorToolProperties*)Obj)->bSimplifyAlongCrop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bSimplifyAlongCrop = { "bSimplifyAlongCrop", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMirrorToolProperties), &Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bSimplifyAlongCrop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimplifyAlongCrop_MetaData), NewProp_bSimplifyAlongCrop_MetaData) };
void Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bWeldVerticesOnMirrorPlane_SetBit(void* Obj)
{
	((UMirrorToolProperties*)Obj)->bWeldVerticesOnMirrorPlane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bWeldVerticesOnMirrorPlane = { "bWeldVerticesOnMirrorPlane", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMirrorToolProperties), &Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bWeldVerticesOnMirrorPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeldVerticesOnMirrorPlane_MetaData), NewProp_bWeldVerticesOnMirrorPlane_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_PlaneTolerance = { "PlaneTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorToolProperties, PlaneTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneTolerance_MetaData), NewProp_PlaneTolerance_MetaData) };
void Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bAllowBowtieVertexCreation_SetBit(void* Obj)
{
	((UMirrorToolProperties*)Obj)->bAllowBowtieVertexCreation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bAllowBowtieVertexCreation = { "bAllowBowtieVertexCreation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMirrorToolProperties), &Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bAllowBowtieVertexCreation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowBowtieVertexCreation_MetaData), NewProp_bAllowBowtieVertexCreation_MetaData) };
void Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bShowPreview_SetBit(void* Obj)
{
	((UMirrorToolProperties*)Obj)->bShowPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bShowPreview = { "bShowPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMirrorToolProperties), &Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bShowPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPreview_MetaData), NewProp_bShowPreview_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_WriteTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_WriteTo = { "WriteTo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorToolProperties, WriteTo), Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WriteTo_MetaData), NewProp_WriteTo_MetaData) }; // 2387626127
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_OperationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_OperationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bCropAlongMirrorPlaneFirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bSimplifyAlongCrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bWeldVerticesOnMirrorPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_PlaneTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bAllowBowtieVertexCreation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bShowPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_WriteTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_WriteTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMirrorToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorToolProperties_Statics::ClassParams = {
	&UMirrorToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMirrorToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMirrorToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMirrorToolProperties()
{
	if (!Z_Registration_Info_UClass_UMirrorToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorToolProperties.OuterSingleton, Z_Construct_UClass_UMirrorToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMirrorToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMirrorToolProperties>()
{
	return UMirrorToolProperties::StaticClass();
}
UMirrorToolProperties::UMirrorToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorToolProperties);
UMirrorToolProperties::~UMirrorToolProperties() {}
// End Class UMirrorToolProperties

// Begin Class UMirrorOperatorFactory
void UMirrorOperatorFactory::StaticRegisterNativesUMirrorOperatorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorOperatorFactory);
UClass* Z_Construct_UClass_UMirrorOperatorFactory_NoRegister()
{
	return UMirrorOperatorFactory::StaticClass();
}
struct Z_Construct_UClass_UMirrorOperatorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MirrorTool.h" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MirrorTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorOperatorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMirrorOperatorFactory_Statics::NewProp_MirrorTool = { "MirrorTool", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorOperatorFactory, MirrorTool), Z_Construct_UClass_UMirrorTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorTool_MetaData), NewProp_MirrorTool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorOperatorFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorOperatorFactory_Statics::NewProp_MirrorTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorOperatorFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMirrorOperatorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorOperatorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorOperatorFactory_Statics::ClassParams = {
	&UMirrorOperatorFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMirrorOperatorFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorOperatorFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorOperatorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMirrorOperatorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMirrorOperatorFactory()
{
	if (!Z_Registration_Info_UClass_UMirrorOperatorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorOperatorFactory.OuterSingleton, Z_Construct_UClass_UMirrorOperatorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMirrorOperatorFactory.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMirrorOperatorFactory>()
{
	return UMirrorOperatorFactory::StaticClass();
}
UMirrorOperatorFactory::UMirrorOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorOperatorFactory);
UMirrorOperatorFactory::~UMirrorOperatorFactory() {}
// End Class UMirrorOperatorFactory

// Begin Enum EMirrorToolAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMirrorToolAction;
static UEnum* EMirrorToolAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMirrorToolAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMirrorToolAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMirrorToolAction"));
	}
	return Z_Registration_Info_UEnum_EMirrorToolAction.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMirrorToolAction>()
{
	return EMirrorToolAction_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backward.Name", "EMirrorToolAction::Backward" },
		{ "Down.Name", "EMirrorToolAction::Down" },
		{ "Forward.Name", "EMirrorToolAction::Forward" },
		{ "Left.Name", "EMirrorToolAction::Left" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "NoAction.Name", "EMirrorToolAction::NoAction" },
		{ "Right.Name", "EMirrorToolAction::Right" },
		{ "ShiftToCenter.Name", "EMirrorToolAction::ShiftToCenter" },
		{ "Up.Name", "EMirrorToolAction::Up" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMirrorToolAction::NoAction", (int64)EMirrorToolAction::NoAction },
		{ "EMirrorToolAction::ShiftToCenter", (int64)EMirrorToolAction::ShiftToCenter },
		{ "EMirrorToolAction::Left", (int64)EMirrorToolAction::Left },
		{ "EMirrorToolAction::Right", (int64)EMirrorToolAction::Right },
		{ "EMirrorToolAction::Up", (int64)EMirrorToolAction::Up },
		{ "EMirrorToolAction::Down", (int64)EMirrorToolAction::Down },
		{ "EMirrorToolAction::Forward", (int64)EMirrorToolAction::Forward },
		{ "EMirrorToolAction::Backward", (int64)EMirrorToolAction::Backward },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMirrorToolAction",
	"EMirrorToolAction",
	Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction()
{
	if (!Z_Registration_Info_UEnum_EMirrorToolAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMirrorToolAction.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMirrorToolAction.InnerSingleton;
}
// End Enum EMirrorToolAction

// Begin Class UMirrorToolActionPropertySet Function Backward
struct Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** Move the mirror plane and adjust its normal to mirror entire selection backward. */" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane and adjust its normal to mirror entire selection backward." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "Backward", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorToolActionPropertySet::execBackward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Backward();
	P_NATIVE_END;
}
// End Class UMirrorToolActionPropertySet Function Backward

// Begin Class UMirrorToolActionPropertySet Function Down
struct Z_Construct_UFunction_UMirrorToolActionPropertySet_Down_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** Move the mirror plane and adjust its normal to mirror entire selection downward. */" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane and adjust its normal to mirror entire selection downward." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_Down_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "Down", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_Down_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorToolActionPropertySet_Down_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_Down()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_Down_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorToolActionPropertySet::execDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Down();
	P_NATIVE_END;
}
// End Class UMirrorToolActionPropertySet Function Down

// Begin Class UMirrorToolActionPropertySet Function Forward
struct Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** Move the mirror plane and adjust its normal to mirror entire selection forward. */" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane and adjust its normal to mirror entire selection forward." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "Forward", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorToolActionPropertySet::execForward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Forward();
	P_NATIVE_END;
}
// End Class UMirrorToolActionPropertySet Function Forward

// Begin Class UMirrorToolActionPropertySet Function Left
struct Z_Construct_UFunction_UMirrorToolActionPropertySet_Left_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** Move the mirror plane and adjust its normal to mirror entire selection leftward. */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane and adjust its normal to mirror entire selection leftward." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_Left_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "Left", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_Left_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorToolActionPropertySet_Left_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_Left()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_Left_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorToolActionPropertySet::execLeft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Left();
	P_NATIVE_END;
}
// End Class UMirrorToolActionPropertySet Function Left

// Begin Class UMirrorToolActionPropertySet Function Right
struct Z_Construct_UFunction_UMirrorToolActionPropertySet_Right_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** Move the mirror plane and adjust its normal to mirror entire selection rightward. */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane and adjust its normal to mirror entire selection rightward." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "Right", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_Right_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorToolActionPropertySet_Right_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_Right()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_Right_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorToolActionPropertySet::execRight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Right();
	P_NATIVE_END;
}
// End Class UMirrorToolActionPropertySet Function Right

// Begin Class UMirrorToolActionPropertySet Function ShiftToCenter
struct Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RepositionPlane" },
		{ "Comment", "/** Move the mirror plane to center of bounding box without changing its normal. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane to center of bounding box without changing its normal." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "ShiftToCenter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorToolActionPropertySet::execShiftToCenter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShiftToCenter();
	P_NATIVE_END;
}
// End Class UMirrorToolActionPropertySet Function ShiftToCenter

// Begin Class UMirrorToolActionPropertySet Function Up
struct Z_Construct_UFunction_UMirrorToolActionPropertySet_Up_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** Move the mirror plane and adjust its normal to mirror entire selection upward. */" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane and adjust its normal to mirror entire selection upward." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_Up_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "Up", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_Up_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMirrorToolActionPropertySet_Up_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_Up()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_Up_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMirrorToolActionPropertySet::execUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Up();
	P_NATIVE_END;
}
// End Class UMirrorToolActionPropertySet Function Up

// Begin Class UMirrorToolActionPropertySet
void UMirrorToolActionPropertySet::StaticRegisterNativesUMirrorToolActionPropertySet()
{
	UClass* Class = UMirrorToolActionPropertySet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Backward", &UMirrorToolActionPropertySet::execBackward },
		{ "Down", &UMirrorToolActionPropertySet::execDown },
		{ "Forward", &UMirrorToolActionPropertySet::execForward },
		{ "Left", &UMirrorToolActionPropertySet::execLeft },
		{ "Right", &UMirrorToolActionPropertySet::execRight },
		{ "ShiftToCenter", &UMirrorToolActionPropertySet::execShiftToCenter },
		{ "Up", &UMirrorToolActionPropertySet::execUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorToolActionPropertySet);
UClass* Z_Construct_UClass_UMirrorToolActionPropertySet_NoRegister()
{
	return UMirrorToolActionPropertySet::StaticClass();
}
struct Z_Construct_UClass_UMirrorToolActionPropertySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MirrorTool.h" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bButtonsOnlyChangeOrientation_MetaData[] = {
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** If true the \"Preset Mirror Directions\" buttons only change the plane orientation, not location. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "If true the \"Preset Mirror Directions\" buttons only change the plane orientation, not location." },
	};
#endif // WITH_METADATA
	static void NewProp_bButtonsOnlyChangeOrientation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bButtonsOnlyChangeOrientation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward, "Backward" }, // 3687251384
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_Down, "Down" }, // 3433742415
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward, "Forward" }, // 210962552
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_Left, "Left" }, // 4272882825
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_Right, "Right" }, // 3270307807
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter, "ShiftToCenter" }, // 852335434
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_Up, "Up" }, // 3830841294
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorToolActionPropertySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::NewProp_bButtonsOnlyChangeOrientation_SetBit(void* Obj)
{
	((UMirrorToolActionPropertySet*)Obj)->bButtonsOnlyChangeOrientation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::NewProp_bButtonsOnlyChangeOrientation = { "bButtonsOnlyChangeOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMirrorToolActionPropertySet), &Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::NewProp_bButtonsOnlyChangeOrientation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bButtonsOnlyChangeOrientation_MetaData), NewProp_bButtonsOnlyChangeOrientation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::NewProp_bButtonsOnlyChangeOrientation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::ClassParams = {
	&UMirrorToolActionPropertySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMirrorToolActionPropertySet()
{
	if (!Z_Registration_Info_UClass_UMirrorToolActionPropertySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMirrorToolActionPropertySet.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMirrorToolActionPropertySet>()
{
	return UMirrorToolActionPropertySet::StaticClass();
}
UMirrorToolActionPropertySet::UMirrorToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorToolActionPropertySet);
UMirrorToolActionPropertySet::~UMirrorToolActionPropertySet() {}
// End Class UMirrorToolActionPropertySet

// Begin Class UMirrorTool
void UMirrorTool::StaticRegisterNativesUMirrorTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorTool);
UClass* Z_Construct_UClass_UMirrorTool_NoRegister()
{
	return UMirrorTool::StaticClass();
}
struct Z_Construct_UClass_UMirrorTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Tool for mirroring one or more meshes across a plane. */" },
		{ "IncludePath", "MirrorTool.h" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Tool for mirroring one or more meshes across a plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleSourcesProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshesToMirror_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Previews_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTypeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandleSourcesProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshesToMirror_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshesToMirror;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Previews_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Previews;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMechanic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorTool, Settings), Z_Construct_UClass_UMirrorToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeProperties_MetaData), NewProp_OutputTypeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_HandleSourcesProperties = { "HandleSourcesProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorTool, HandleSourcesProperties), Z_Construct_UClass_UOnAcceptHandleSourcesProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleSourcesProperties_MetaData), NewProp_HandleSourcesProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_ToolActions = { "ToolActions", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorTool, ToolActions), Z_Construct_UClass_UMirrorToolActionPropertySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolActions_MetaData), NewProp_ToolActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_MeshesToMirror_Inner = { "MeshesToMirror", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_MeshesToMirror = { "MeshesToMirror", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorTool, MeshesToMirror), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshesToMirror_MetaData), NewProp_MeshesToMirror_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_Previews_Inner = { "Previews", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_Previews = { "Previews", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorTool, Previews), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Previews_MetaData), NewProp_Previews_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMirrorTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMechanic_MetaData), NewProp_PlaneMechanic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_OutputTypeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_HandleSourcesProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_ToolActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_MeshesToMirror_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_MeshesToMirror,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_Previews_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_Previews,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_PlaneMechanic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMirrorTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorTool_Statics::ClassParams = {
	&UMirrorTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMirrorTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMirrorTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMirrorTool()
{
	if (!Z_Registration_Info_UClass_UMirrorTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorTool.OuterSingleton, Z_Construct_UClass_UMirrorTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMirrorTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMirrorTool>()
{
	return UMirrorTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorTool);
UMirrorTool::~UMirrorTool() {}
// End Class UMirrorTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMirrorSaveMode_StaticEnum, TEXT("EMirrorSaveMode"), &Z_Registration_Info_UEnum_EMirrorSaveMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2387626127U) },
		{ EMirrorOperationMode_StaticEnum, TEXT("EMirrorOperationMode"), &Z_Registration_Info_UEnum_EMirrorOperationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2090463056U) },
		{ EMirrorToolAction_StaticEnum, TEXT("EMirrorToolAction"), &Z_Registration_Info_UEnum_EMirrorToolAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1422564059U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMirrorToolBuilder, UMirrorToolBuilder::StaticClass, TEXT("UMirrorToolBuilder"), &Z_Registration_Info_UClass_UMirrorToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorToolBuilder), 1552572074U) },
		{ Z_Construct_UClass_UMirrorToolProperties, UMirrorToolProperties::StaticClass, TEXT("UMirrorToolProperties"), &Z_Registration_Info_UClass_UMirrorToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorToolProperties), 1240865478U) },
		{ Z_Construct_UClass_UMirrorOperatorFactory, UMirrorOperatorFactory::StaticClass, TEXT("UMirrorOperatorFactory"), &Z_Registration_Info_UClass_UMirrorOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorOperatorFactory), 723219284U) },
		{ Z_Construct_UClass_UMirrorToolActionPropertySet, UMirrorToolActionPropertySet::StaticClass, TEXT("UMirrorToolActionPropertySet"), &Z_Registration_Info_UClass_UMirrorToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorToolActionPropertySet), 1377039940U) },
		{ Z_Construct_UClass_UMirrorTool, UMirrorTool::StaticClass, TEXT("UMirrorTool"), &Z_Registration_Info_UClass_UMirrorTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorTool), 1709921120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_4058069723(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
