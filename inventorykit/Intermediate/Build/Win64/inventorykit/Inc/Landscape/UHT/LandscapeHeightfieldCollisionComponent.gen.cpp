// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeHeightfieldCollisionComponent.h"
#include "Runtime/Landscape/Classes/LandscapeProxy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeHeightfieldCollisionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeHeightfieldCollisionComponent Function GetRenderComponent
struct Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics
{
	struct LandscapeHeightfieldCollisionComponent_eventGetRenderComponent_Parms
	{
		ULandscapeComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Returns associated landscape component */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Returns associated landscape component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeHeightfieldCollisionComponent_eventGetRenderComponent_Parms, ReturnValue), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent, nullptr, "GetRenderComponent", nullptr, nullptr, Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::LandscapeHeightfieldCollisionComponent_eventGetRenderComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::LandscapeHeightfieldCollisionComponent_eventGetRenderComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULandscapeHeightfieldCollisionComponent::execGetRenderComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULandscapeComponent**)Z_Param__Result=P_THIS->GetRenderComponent();
	P_NATIVE_END;
}
// End Class ULandscapeHeightfieldCollisionComponent Function GetRenderComponent

// Begin Class ULandscapeHeightfieldCollisionComponent
void ULandscapeHeightfieldCollisionComponent::StaticRegisterNativesULandscapeHeightfieldCollisionComponent()
{
	UClass* Class = ULandscapeHeightfieldCollisionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRenderComponent", &ULandscapeHeightfieldCollisionComponent::execGetRenderComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeHeightfieldCollisionComponent);
UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister()
{
	return ULandscapeHeightfieldCollisionComponent::StaticClass();
}
struct Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LandscapeHeightfieldCollisionComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLayerInfos_MetaData[] = {
		{ "Comment", "/** List of layers painted on this component. Matches the WeightmapLayerAllocations array in the LandscapeComponent. */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "List of layers painted on this component. Matches the WeightmapLayerAllocations array in the LandscapeComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionBaseX_MetaData[] = {
		{ "Comment", "/** Offset of component in landscape quads */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Offset of component in landscape quads" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionBaseY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSizeQuads_MetaData[] = {
		{ "Comment", "/** Size of component in collision quads */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Size of component in collision quads" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionScale_MetaData[] = {
		{ "Comment", "/** Collision scale: (ComponentSizeQuads) / (CollisionSizeQuads) */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Collision scale: (ComponentSizeQuads) / (CollisionSizeQuads)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionSizeQuads_MetaData[] = {
		{ "Comment", "/** Size of component's \"simple collision\" in collision quads */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Size of component's \"simple collision\" in collision quads" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQuadFlags_MetaData[] = {
		{ "Comment", "/** The flags for each collision quad. See ECollisionQuadFlags. */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "The flags for each collision quad. See ECollisionQuadFlags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightfieldGuid_MetaData[] = {
		{ "Comment", "/** Guid used to share Physics heightfield objects in the editor */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Guid used to share Physics heightfield objects in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedLocalBox_MetaData[] = {
		{ "Comment", "/** Cached local-space bounding box, created at heightmap update time */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Cached local-space bounding box, created at heightmap update time" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderComponent_MetaData[] = {
		{ "Comment", "/** Reference to render component */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Reference to render component" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderComponentRef_MetaData[] = {
		{ "Comment", "/** Reference to render component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Reference to render component" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionHash_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialRenderObjects_MetaData[] = {
		{ "Comment", "/** Physical materials objects referenced by the indices in PhysicalMaterialRenderData. Stripped from cooked content */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Physical materials objects referenced by the indices in PhysicalMaterialRenderData. Stripped from cooked content" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedPhysicalMaterials_MetaData[] = {
		{ "Comment", "/** This is a list of physical materials that is actually used by a cooked HeightField */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "This is a list of physical materials that is actually used by a cooked HeightField" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentLayerInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentLayerInfos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionBaseX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionBaseY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionSizeQuads;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SimpleCollisionSizeQuads;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionQuadFlags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionQuadFlags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightfieldGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedLocalBox;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_RenderComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderComponentRef;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CollisionHash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterialRenderObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterialRenderObjects;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CookedPhysicalMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CookedPhysicalMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent, "GetRenderComponent" }, // 1836104148
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeHeightfieldCollisionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos_Inner = { "ComponentLayerInfos", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos = { "ComponentLayerInfos", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, ComponentLayerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentLayerInfos_MetaData), NewProp_ComponentLayerInfos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseX = { "SectionBaseX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, SectionBaseX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionBaseX_MetaData), NewProp_SectionBaseX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseY = { "SectionBaseY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, SectionBaseY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionBaseY_MetaData), NewProp_SectionBaseY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionSizeQuads = { "CollisionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionSizeQuads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSizeQuads_MetaData), NewProp_CollisionSizeQuads_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionScale = { "CollisionScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionScale_MetaData), NewProp_CollisionScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SimpleCollisionSizeQuads = { "SimpleCollisionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, SimpleCollisionSizeQuads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleCollisionSizeQuads_MetaData), NewProp_SimpleCollisionSizeQuads_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags_Inner = { "CollisionQuadFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags = { "CollisionQuadFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionQuadFlags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQuadFlags_MetaData), NewProp_CollisionQuadFlags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_HeightfieldGuid = { "HeightfieldGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, HeightfieldGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightfieldGuid_MetaData), NewProp_HeightfieldGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CachedLocalBox = { "CachedLocalBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CachedLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedLocalBox_MetaData), NewProp_CachedLocalBox_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponent = { "RenderComponent", nullptr, (EPropertyFlags)0x0014000820080008, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, RenderComponent_DEPRECATED), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderComponent_MetaData), NewProp_RenderComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponentRef = { "RenderComponentRef", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, RenderComponentRef), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderComponentRef_MetaData), NewProp_RenderComponentRef_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionHash = { "CollisionHash", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionHash_MetaData), NewProp_CollisionHash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_PhysicalMaterialRenderObjects_Inner = { "PhysicalMaterialRenderObjects", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_PhysicalMaterialRenderObjects = { "PhysicalMaterialRenderObjects", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, PhysicalMaterialRenderObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterialRenderObjects_MetaData), NewProp_PhysicalMaterialRenderObjects_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials_Inner = { "CookedPhysicalMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials = { "CookedPhysicalMaterials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CookedPhysicalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedPhysicalMaterials_MetaData), NewProp_CookedPhysicalMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionSizeQuads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SimpleCollisionSizeQuads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_HeightfieldGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CachedLocalBox,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponentRef,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_PhysicalMaterialRenderObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_PhysicalMaterialRenderObjects,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::ClassParams = {
	&ULandscapeHeightfieldCollisionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent()
{
	if (!Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent.OuterSingleton, Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeHeightfieldCollisionComponent>()
{
	return ULandscapeHeightfieldCollisionComponent::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeHeightfieldCollisionComponent)
// End Class ULandscapeHeightfieldCollisionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent, ULandscapeHeightfieldCollisionComponent::StaticClass, TEXT("ULandscapeHeightfieldCollisionComponent"), &Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeHeightfieldCollisionComponent), 2508153758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_436953060(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
