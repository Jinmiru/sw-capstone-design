// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/PlanarReflectionComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanarReflectionComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlanarReflectionComponent();
ENGINE_API UClass* Z_Construct_UClass_UPlanarReflectionComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPlanarReflectionComponent
void UPlanarReflectionComponent::StaticRegisterNativesUPlanarReflectionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlanarReflectionComponent);
UClass* Z_Construct_UClass_UPlanarReflectionComponent_NoRegister()
{
	return UPlanarReflectionComponent::StaticClass();
}
struct Z_Construct_UClass_UPlanarReflectionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09UPlanarReflectionComponent\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/PlanarReflectionComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
		{ "ToolTip", "UPlanarReflectionComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalDistortionStrength_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "Comment", "/** Controls the strength of normals when distorting the planar reflection. */" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
		{ "ToolTip", "Controls the strength of normals when distorting the planar reflection." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefilterRoughness_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "Comment", "/** The roughness value to prefilter the planar reflection texture with, useful for hiding low resolution.  Larger values have larger GPU cost. */" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
		{ "ToolTip", "The roughness value to prefilter the planar reflection texture with, useful for hiding low resolution.  Larger values have larger GPU cost." },
		{ "UIMax", ".04" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefilterRoughnessDistance_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "Comment", "/** The distance at which the prefilter roughness value will be achieved. */" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
		{ "ToolTip", "The distance at which the prefilter roughness value will be achieved." },
		{ "UIMax", "100000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPercentage_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "Comment", "/** Downsample percent, can be used to reduce GPU time rendering the planar reflection. */" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
		{ "ToolTip", "Downsample percent, can be used to reduce GPU time rendering the planar reflection." },
		{ "UIMax", "100" },
		{ "UIMin", "25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraFOV_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "Comment", "/** \n\x09 * Additional FOV used when rendering to the reflection texture.  \n\x09 * This is useful when normal distortion is causing reads outside the reflection texture. \n\x09 * Larger values increase rendering thread and GPU cost, as more objects and triangles have to be rendered into the planar reflection.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
		{ "ToolTip", "Additional FOV used when rendering to the reflection texture.\nThis is useful when normal distortion is causing reads outside the reflection texture.\nLarger values increase rendering thread and GPU cost, as more objects and triangles have to be rendered into the planar reflection." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromPlaneFadeStart_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromPlaneFadeEnd_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromPlaneFadeoutStart_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "Comment", "/** Receiving pixels at this distance from the reflection plane will begin to fade out the planar reflection. */" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
		{ "ToolTip", "Receiving pixels at this distance from the reflection plane will begin to fade out the planar reflection." },
		{ "UIMax", "1500.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromPlaneFadeoutEnd_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "Comment", "/** Receiving pixels at this distance from the reflection plane will have completely faded out the planar reflection. */" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
		{ "ToolTip", "Receiving pixels at this distance from the reflection plane will have completely faded out the planar reflection." },
		{ "UIMax", "1500.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleFromPlaneFadeStart_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "Comment", "/** Receiving pixels whose normal is at this angle from the reflection plane will begin to fade out the planar reflection. */" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
		{ "ToolTip", "Receiving pixels whose normal is at this angle from the reflection plane will begin to fade out the planar reflection." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleFromPlaneFadeEnd_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "Comment", "/** Receiving pixels whose normal is at this angle from the reflection plane will have completely faded out the planar reflection. */" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
		{ "ToolTip", "Receiving pixels whose normal is at this angle from the reflection plane will have completely faded out the planar reflection." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreviewPlane_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderSceneTwoSided_MetaData[] = {
		{ "Category", "PlanarReflection" },
		{ "Comment", "/** \n\x09 * Whether to render the scene as two-sided, which can be useful to hide artifacts where normal distortion would read 'under' an object that has been clipped by the reflection plane. \n\x09 * With this setting enabled, the backfaces of a mesh would be displayed in the clipped region instead of the background which is potentially a bright sky.\n\x09 * Be sure to add the water plane to HiddenActors if enabling this, as the water plane will now block the reflection.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
		{ "ToolTip", "Whether to render the scene as two-sided, which can be useful to hide artifacts where normal distortion would read 'under' an object that has been clipped by the reflection plane.\nWith this setting enabled, the backfaces of a mesh would be displayed in the clipped region instead of the background which is potentially a bright sky.\nBe sure to add the water plane to HiddenActors if enabling this, as the water plane will now block the reflection." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureMaterial_MetaData[] = {
		{ "Comment", "/** The material to use on ProxyMeshComponent */" },
		{ "ModuleRelativePath", "Classes/Components/PlanarReflectionComponent.h" },
		{ "ToolTip", "The material to use on ProxyMeshComponent" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewBox;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalDistortionStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrefilterRoughness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrefilterRoughnessDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScreenPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtraFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromPlaneFadeStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromPlaneFadeEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromPlaneFadeoutStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromPlaneFadeoutEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleFromPlaneFadeStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleFromPlaneFadeEnd;
	static void NewProp_bShowPreviewPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreviewPlane;
	static void NewProp_bRenderSceneTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderSceneTwoSided;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureMaterial;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanarReflectionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_PreviewBox = { "PreviewBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, PreviewBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewBox_MetaData), NewProp_PreviewBox_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_NormalDistortionStrength = { "NormalDistortionStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, NormalDistortionStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalDistortionStrength_MetaData), NewProp_NormalDistortionStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_PrefilterRoughness = { "PrefilterRoughness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, PrefilterRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefilterRoughness_MetaData), NewProp_PrefilterRoughness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_PrefilterRoughnessDistance = { "PrefilterRoughnessDistance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, PrefilterRoughnessDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefilterRoughnessDistance_MetaData), NewProp_PrefilterRoughnessDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_ScreenPercentage = { "ScreenPercentage", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, ScreenPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenPercentage_MetaData), NewProp_ScreenPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_ExtraFOV = { "ExtraFOV", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, ExtraFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraFOV_MetaData), NewProp_ExtraFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_DistanceFromPlaneFadeStart = { "DistanceFromPlaneFadeStart", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, DistanceFromPlaneFadeStart_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFromPlaneFadeStart_MetaData), NewProp_DistanceFromPlaneFadeStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_DistanceFromPlaneFadeEnd = { "DistanceFromPlaneFadeEnd", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, DistanceFromPlaneFadeEnd_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFromPlaneFadeEnd_MetaData), NewProp_DistanceFromPlaneFadeEnd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_DistanceFromPlaneFadeoutStart = { "DistanceFromPlaneFadeoutStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, DistanceFromPlaneFadeoutStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFromPlaneFadeoutStart_MetaData), NewProp_DistanceFromPlaneFadeoutStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_DistanceFromPlaneFadeoutEnd = { "DistanceFromPlaneFadeoutEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, DistanceFromPlaneFadeoutEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFromPlaneFadeoutEnd_MetaData), NewProp_DistanceFromPlaneFadeoutEnd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_AngleFromPlaneFadeStart = { "AngleFromPlaneFadeStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, AngleFromPlaneFadeStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleFromPlaneFadeStart_MetaData), NewProp_AngleFromPlaneFadeStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_AngleFromPlaneFadeEnd = { "AngleFromPlaneFadeEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, AngleFromPlaneFadeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleFromPlaneFadeEnd_MetaData), NewProp_AngleFromPlaneFadeEnd_MetaData) };
void Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_bShowPreviewPlane_SetBit(void* Obj)
{
	((UPlanarReflectionComponent*)Obj)->bShowPreviewPlane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_bShowPreviewPlane = { "bShowPreviewPlane", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlanarReflectionComponent), &Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_bShowPreviewPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPreviewPlane_MetaData), NewProp_bShowPreviewPlane_MetaData) };
void Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_bRenderSceneTwoSided_SetBit(void* Obj)
{
	((UPlanarReflectionComponent*)Obj)->bRenderSceneTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_bRenderSceneTwoSided = { "bRenderSceneTwoSided", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlanarReflectionComponent), &Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_bRenderSceneTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderSceneTwoSided_MetaData), NewProp_bRenderSceneTwoSided_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_CaptureMaterial = { "CaptureMaterial", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlanarReflectionComponent, CaptureMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureMaterial_MetaData), NewProp_CaptureMaterial_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlanarReflectionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_PreviewBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_NormalDistortionStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_PrefilterRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_PrefilterRoughnessDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_ScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_ExtraFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_DistanceFromPlaneFadeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_DistanceFromPlaneFadeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_DistanceFromPlaneFadeoutStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_DistanceFromPlaneFadeoutEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_AngleFromPlaneFadeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_AngleFromPlaneFadeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_bShowPreviewPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_bRenderSceneTwoSided,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlanarReflectionComponent_Statics::NewProp_CaptureMaterial,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarReflectionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlanarReflectionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarReflectionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanarReflectionComponent_Statics::ClassParams = {
	&UPlanarReflectionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlanarReflectionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarReflectionComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarReflectionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlanarReflectionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlanarReflectionComponent()
{
	if (!Z_Registration_Info_UClass_UPlanarReflectionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanarReflectionComponent.OuterSingleton, Z_Construct_UClass_UPlanarReflectionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlanarReflectionComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPlanarReflectionComponent>()
{
	return UPlanarReflectionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanarReflectionComponent);
UPlanarReflectionComponent::~UPlanarReflectionComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPlanarReflectionComponent)
// End Class UPlanarReflectionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlanarReflectionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlanarReflectionComponent, UPlanarReflectionComponent::StaticClass, TEXT("UPlanarReflectionComponent"), &Z_Registration_Info_UClass_UPlanarReflectionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanarReflectionComponent), 3404214313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlanarReflectionComponent_h_1735138592(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlanarReflectionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlanarReflectionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
