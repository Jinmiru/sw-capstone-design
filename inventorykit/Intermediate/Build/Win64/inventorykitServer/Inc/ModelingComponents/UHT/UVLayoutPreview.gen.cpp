// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Drawing/UVLayoutPreview.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVLayoutPreview() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UTriangleSetComponent_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreview();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreview_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreviewProperties();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreviewProperties_NoRegister();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Enum EUVLayoutPreviewSide
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVLayoutPreviewSide;
static UEnum* EUVLayoutPreviewSide_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUVLayoutPreviewSide.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUVLayoutPreviewSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("EUVLayoutPreviewSide"));
	}
	return Z_Registration_Info_UEnum_EUVLayoutPreviewSide.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EUVLayoutPreviewSide>()
{
	return EUVLayoutPreviewSide_StaticEnum();
}
struct Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Where should in-viewport UVLayoutPreview be shown, relative to target object\n */" },
		{ "Left.Comment", "/** On the left side of the object center relative to the camera */" },
		{ "Left.Name", "EUVLayoutPreviewSide::Left" },
		{ "Left.ToolTip", "On the left side of the object center relative to the camera" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "Right.Comment", "/** On the right side of the object center relative to the camera */" },
		{ "Right.Name", "EUVLayoutPreviewSide::Right" },
		{ "Right.ToolTip", "On the right side of the object center relative to the camera" },
		{ "ToolTip", "Where should in-viewport UVLayoutPreview be shown, relative to target object" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUVLayoutPreviewSide::Left", (int64)EUVLayoutPreviewSide::Left },
		{ "EUVLayoutPreviewSide::Right", (int64)EUVLayoutPreviewSide::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	"EUVLayoutPreviewSide",
	"EUVLayoutPreviewSide",
	Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide()
{
	if (!Z_Registration_Info_UEnum_EUVLayoutPreviewSide.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVLayoutPreviewSide.InnerSingleton, Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUVLayoutPreviewSide.InnerSingleton;
}
// End Enum EUVLayoutPreviewSide

// Begin Class UUVLayoutPreviewProperties
void UUVLayoutPreviewProperties::StaticRegisterNativesUUVLayoutPreviewProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVLayoutPreviewProperties);
UClass* Z_Construct_UClass_UUVLayoutPreviewProperties_NoRegister()
{
	return UUVLayoutPreviewProperties::StaticClass();
}
struct Z_Construct_UClass_UUVLayoutPreviewProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visualization settings for UV layout preview\n */" },
		{ "IncludePath", "Drawing/UVLayoutPreview.h" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Visualization settings for UV layout preview" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Preview UV Layout" },
		{ "Comment", "/** Enable the preview UV layout */" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Enable the preview UV layout" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Side_MetaData[] = {
		{ "Category", "Preview UV Layout" },
		{ "Comment", "/** Which side of the selected object the preview UV layout is shown */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Which side of the selected object the preview UV layout is shown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Preview UV Layout" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Uniform scaling factor */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Uniform scaling factor" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Preview UV Layout" },
		{ "Comment", "/** Offset relative to the center of the selected object */" },
		{ "Delta", "0.500000" },
		{ "EditCondition", "bEnabled" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Offset relative to the center of the selected object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Preview UV Layout" },
		{ "Comment", "/** Show wireframe mesh in the preview UV layout */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Show wireframe mesh in the preview UV layout" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Side_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Side;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static void NewProp_bShowWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVLayoutPreviewProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UUVLayoutPreviewProperties*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVLayoutPreviewProperties), &Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Side_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Side = { "Side", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutPreviewProperties, Side), Z_Construct_UEnum_ModelingComponents_EUVLayoutPreviewSide, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Side_MetaData), NewProp_Side_MetaData) }; // 3726079384
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutPreviewProperties, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutPreviewProperties, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
void Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
{
	((UUVLayoutPreviewProperties*)Obj)->bShowWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVLayoutPreviewProperties), &Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWireframe_MetaData), NewProp_bShowWireframe_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Side_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Side,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::NewProp_bShowWireframe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::ClassParams = {
	&UUVLayoutPreviewProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVLayoutPreviewProperties()
{
	if (!Z_Registration_Info_UClass_UUVLayoutPreviewProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVLayoutPreviewProperties.OuterSingleton, Z_Construct_UClass_UUVLayoutPreviewProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVLayoutPreviewProperties.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UUVLayoutPreviewProperties>()
{
	return UUVLayoutPreviewProperties::StaticClass();
}
UUVLayoutPreviewProperties::UUVLayoutPreviewProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVLayoutPreviewProperties);
UUVLayoutPreviewProperties::~UUVLayoutPreviewProperties() {}
// End Class UUVLayoutPreviewProperties

// Begin Class UUVLayoutPreview
void UUVLayoutPreview::StaticRegisterNativesUUVLayoutPreview()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVLayoutPreview);
UClass* Z_Construct_UClass_UUVLayoutPreview_NoRegister()
{
	return UUVLayoutPreview::StaticClass();
}
struct Z_Construct_UClass_UUVLayoutPreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UUVLayoutPreview is a utility object that creates and manages a 3D plane on which a UV layout\n * for a 3D mesh is rendered. The UV layout\n */" },
		{ "IncludePath", "Drawing/UVLayoutPreview.h" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "UUVLayoutPreview is a utility object that creates and manages a 3D plane on which a UV layout\nfor a 3D mesh is rendered. The UV layout" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Comment", "/** Visualization settings */" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Visualization settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "Comment", "/** PreviewMesh is initialized with a copy of an input mesh with UVs mapped to position, ie such that (X,Y,Z) = (U,V,0) */" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "PreviewMesh is initialized with a copy of an input mesh with UVs mapped to position, ie such that (X,Y,Z) = (U,V,0)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshElementsVisualizer_MetaData[] = {
		{ "Comment", "/** MeshElementsVisualizer references the PreviewMesh to handle drawing the wireframes for UVs */" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "MeshElementsVisualizer references the PreviewMesh to handle drawing the wireframes for UVs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriangleComponent_MetaData[] = {
		{ "Comment", "/** Set of additional triangles to draw, eg for backing rectangle, etc */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Set of additional triangles to draw, eg for backing rectangle, etc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowBackingRectangle_MetaData[] = {
		{ "Comment", "/** Configure whether the backing rectangle should be shown */" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Configure whether the backing rectangle should be shown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackingRectangleMaterial_MetaData[] = {
		{ "Comment", "/** Configure the backing rectangle material */" },
		{ "ModuleRelativePath", "Public/Drawing/UVLayoutPreview.h" },
		{ "ToolTip", "Configure the backing rectangle material" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshElementsVisualizer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriangleComponent;
	static void NewProp_bShowBackingRectangle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBackingRectangle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackingRectangleMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVLayoutPreview>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutPreview, Settings), Z_Construct_UClass_UUVLayoutPreviewProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutPreview, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_MeshElementsVisualizer = { "MeshElementsVisualizer", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutPreview, MeshElementsVisualizer), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshElementsVisualizer_MetaData), NewProp_MeshElementsVisualizer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_TriangleComponent = { "TriangleComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutPreview, TriangleComponent), Z_Construct_UClass_UTriangleSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriangleComponent_MetaData), NewProp_TriangleComponent_MetaData) };
void Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_bShowBackingRectangle_SetBit(void* Obj)
{
	((UUVLayoutPreview*)Obj)->bShowBackingRectangle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_bShowBackingRectangle = { "bShowBackingRectangle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVLayoutPreview), &Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_bShowBackingRectangle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowBackingRectangle_MetaData), NewProp_bShowBackingRectangle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_BackingRectangleMaterial = { "BackingRectangleMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutPreview, BackingRectangleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackingRectangleMaterial_MetaData), NewProp_BackingRectangleMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVLayoutPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_PreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_MeshElementsVisualizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_TriangleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_bShowBackingRectangle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutPreview_Statics::NewProp_BackingRectangleMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreview_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUVLayoutPreview_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreview_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVLayoutPreview_Statics::ClassParams = {
	&UUVLayoutPreview::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUVLayoutPreview_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreview_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutPreview_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVLayoutPreview_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVLayoutPreview()
{
	if (!Z_Registration_Info_UClass_UUVLayoutPreview.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVLayoutPreview.OuterSingleton, Z_Construct_UClass_UUVLayoutPreview_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVLayoutPreview.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UUVLayoutPreview>()
{
	return UUVLayoutPreview::StaticClass();
}
UUVLayoutPreview::UUVLayoutPreview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVLayoutPreview);
// End Class UUVLayoutPreview

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUVLayoutPreviewSide_StaticEnum, TEXT("EUVLayoutPreviewSide"), &Z_Registration_Info_UEnum_EUVLayoutPreviewSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3726079384U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUVLayoutPreviewProperties, UUVLayoutPreviewProperties::StaticClass, TEXT("UUVLayoutPreviewProperties"), &Z_Registration_Info_UClass_UUVLayoutPreviewProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVLayoutPreviewProperties), 2788647332U) },
		{ Z_Construct_UClass_UUVLayoutPreview, UUVLayoutPreview::StaticClass, TEXT("UUVLayoutPreview"), &Z_Registration_Info_UClass_UUVLayoutPreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVLayoutPreview), 2945353901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_3473440411(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
