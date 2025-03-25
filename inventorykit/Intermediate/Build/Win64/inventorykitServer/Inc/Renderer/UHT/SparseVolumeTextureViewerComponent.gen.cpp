// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Renderer/Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSparseVolumeTextureViewerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
RENDERER_API UClass* Z_Construct_UClass_ASparseVolumeTextureViewer();
RENDERER_API UClass* Z_Construct_UClass_ASparseVolumeTextureViewer_NoRegister();
RENDERER_API UClass* Z_Construct_UClass_USparseVolumeTextureViewerComponent();
RENDERER_API UClass* Z_Construct_UClass_USparseVolumeTextureViewerComponent_NoRegister();
RENDERER_API UEnum* Z_Construct_UEnum_Renderer_ESparseVolumeTexturePreviewAttribute();
UPackage* Z_Construct_UPackage__Script_Renderer();
// End Cross Module References

// Begin Enum ESparseVolumeTexturePreviewAttribute
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESparseVolumeTexturePreviewAttribute;
static UEnum* ESparseVolumeTexturePreviewAttribute_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESparseVolumeTexturePreviewAttribute.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESparseVolumeTexturePreviewAttribute.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Renderer_ESparseVolumeTexturePreviewAttribute, (UObject*)Z_Construct_UPackage__Script_Renderer(), TEXT("ESparseVolumeTexturePreviewAttribute"));
	}
	return Z_Registration_Info_UEnum_ESparseVolumeTexturePreviewAttribute.OuterSingleton;
}
template<> RENDERER_API UEnum* StaticEnum<ESparseVolumeTexturePreviewAttribute>()
{
	return ESparseVolumeTexturePreviewAttribute_StaticEnum();
}
struct Z_Construct_UEnum_Renderer_ESparseVolumeTexturePreviewAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ESVTPA_AttributesA_A.DisplayName", "AttributesA Alpha" },
		{ "ESVTPA_AttributesA_A.Name", "ESVTPA_AttributesA_A" },
		{ "ESVTPA_AttributesA_B.DisplayName", "AttributesA Blue" },
		{ "ESVTPA_AttributesA_B.Name", "ESVTPA_AttributesA_B" },
		{ "ESVTPA_AttributesA_G.DisplayName", "AttributesA Green" },
		{ "ESVTPA_AttributesA_G.Name", "ESVTPA_AttributesA_G" },
		{ "ESVTPA_AttributesA_R.DisplayName", "AttributesA Red" },
		{ "ESVTPA_AttributesA_R.Name", "ESVTPA_AttributesA_R" },
		{ "ESVTPA_AttributesB_A.DisplayName", "AttributesB Alpha" },
		{ "ESVTPA_AttributesB_A.Name", "ESVTPA_AttributesB_A" },
		{ "ESVTPA_AttributesB_B.DisplayName", "AttributesB Blue" },
		{ "ESVTPA_AttributesB_B.Name", "ESVTPA_AttributesB_B" },
		{ "ESVTPA_AttributesB_G.DisplayName", "AttributesB Green" },
		{ "ESVTPA_AttributesB_G.Name", "ESVTPA_AttributesB_G" },
		{ "ESVTPA_AttributesB_R.DisplayName", "AttributesB Red" },
		{ "ESVTPA_AttributesB_R.Name", "ESVTPA_AttributesB_R" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESVTPA_AttributesA_R", (int64)ESVTPA_AttributesA_R },
		{ "ESVTPA_AttributesA_G", (int64)ESVTPA_AttributesA_G },
		{ "ESVTPA_AttributesA_B", (int64)ESVTPA_AttributesA_B },
		{ "ESVTPA_AttributesA_A", (int64)ESVTPA_AttributesA_A },
		{ "ESVTPA_AttributesB_R", (int64)ESVTPA_AttributesB_R },
		{ "ESVTPA_AttributesB_G", (int64)ESVTPA_AttributesB_G },
		{ "ESVTPA_AttributesB_B", (int64)ESVTPA_AttributesB_B },
		{ "ESVTPA_AttributesB_A", (int64)ESVTPA_AttributesB_A },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Renderer_ESparseVolumeTexturePreviewAttribute_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Renderer,
	nullptr,
	"ESparseVolumeTexturePreviewAttribute",
	"ESparseVolumeTexturePreviewAttribute",
	Z_Construct_UEnum_Renderer_ESparseVolumeTexturePreviewAttribute_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Renderer_ESparseVolumeTexturePreviewAttribute_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Renderer_ESparseVolumeTexturePreviewAttribute_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Renderer_ESparseVolumeTexturePreviewAttribute_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Renderer_ESparseVolumeTexturePreviewAttribute()
{
	if (!Z_Registration_Info_UEnum_ESparseVolumeTexturePreviewAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESparseVolumeTexturePreviewAttribute.InnerSingleton, Z_Construct_UEnum_Renderer_ESparseVolumeTexturePreviewAttribute_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESparseVolumeTexturePreviewAttribute.InnerSingleton;
}
// End Enum ESparseVolumeTexturePreviewAttribute

// Begin Class USparseVolumeTextureViewerComponent
void USparseVolumeTextureViewerComponent::StaticRegisterNativesUSparseVolumeTextureViewerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USparseVolumeTextureViewerComponent);
UClass* Z_Construct_UClass_USparseVolumeTextureViewerComponent_NoRegister()
{
	return USparseVolumeTextureViewerComponent::StaticClass();
}
struct Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * A component used to inspect sparse volume textures.\n */" },
		{ "HideCategories", "Object Mobility Activation Components|Activation Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "ToolTip", "A component used to inspect sparse volume textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTexturePreview_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditCondition", "bPlaying == false" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockingStreamingRequests_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyPerFrameTransforms_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPivotAtCentroid_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAttribute_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipLevel_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ClampMax", "11" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "UIMax", "11" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extinction_MetaData[] = {
		{ "Category", "Asset Preview" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SparseVolumeTexturePreview;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
	static void NewProp_bPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bReversePlayback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback;
	static void NewProp_bBlockingStreamingRequests_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingStreamingRequests;
	static void NewProp_bApplyPerFrameTransforms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyPerFrameTransforms;
	static void NewProp_bPivotAtCentroid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivotAtCentroid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MipLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Extinction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USparseVolumeTextureViewerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_SparseVolumeTexturePreview = { "SparseVolumeTexturePreview", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USparseVolumeTextureViewerComponent, SparseVolumeTexturePreview), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SparseVolumeTexturePreview_MetaData), NewProp_SparseVolumeTexturePreview_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USparseVolumeTextureViewerComponent, Frame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frame_MetaData), NewProp_Frame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USparseVolumeTextureViewerComponent, FrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
void Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bPlaying_SetBit(void* Obj)
{
	((USparseVolumeTextureViewerComponent*)Obj)->bPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bPlaying = { "bPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USparseVolumeTextureViewerComponent), &Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlaying_MetaData), NewProp_bPlaying_MetaData) };
void Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((USparseVolumeTextureViewerComponent*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USparseVolumeTextureViewerComponent), &Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
void Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bReversePlayback_SetBit(void* Obj)
{
	((USparseVolumeTextureViewerComponent*)Obj)->bReversePlayback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bReversePlayback = { "bReversePlayback", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USparseVolumeTextureViewerComponent), &Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bReversePlayback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReversePlayback_MetaData), NewProp_bReversePlayback_MetaData) };
void Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bBlockingStreamingRequests_SetBit(void* Obj)
{
	((USparseVolumeTextureViewerComponent*)Obj)->bBlockingStreamingRequests = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bBlockingStreamingRequests = { "bBlockingStreamingRequests", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USparseVolumeTextureViewerComponent), &Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bBlockingStreamingRequests_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockingStreamingRequests_MetaData), NewProp_bBlockingStreamingRequests_MetaData) };
void Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bApplyPerFrameTransforms_SetBit(void* Obj)
{
	((USparseVolumeTextureViewerComponent*)Obj)->bApplyPerFrameTransforms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bApplyPerFrameTransforms = { "bApplyPerFrameTransforms", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USparseVolumeTextureViewerComponent), &Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bApplyPerFrameTransforms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyPerFrameTransforms_MetaData), NewProp_bApplyPerFrameTransforms_MetaData) };
void Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bPivotAtCentroid_SetBit(void* Obj)
{
	((USparseVolumeTextureViewerComponent*)Obj)->bPivotAtCentroid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bPivotAtCentroid = { "bPivotAtCentroid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USparseVolumeTextureViewerComponent), &Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bPivotAtCentroid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPivotAtCentroid_MetaData), NewProp_bPivotAtCentroid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USparseVolumeTextureViewerComponent, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_PreviewAttribute = { "PreviewAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USparseVolumeTextureViewerComponent, PreviewAttribute), Z_Construct_UEnum_Renderer_ESparseVolumeTexturePreviewAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewAttribute_MetaData), NewProp_PreviewAttribute_MetaData) }; // 1224755267
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_MipLevel = { "MipLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USparseVolumeTextureViewerComponent, MipLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipLevel_MetaData), NewProp_MipLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_Extinction = { "Extinction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USparseVolumeTextureViewerComponent, Extinction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extinction_MetaData), NewProp_Extinction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_SparseVolumeTexturePreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bReversePlayback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bBlockingStreamingRequests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bApplyPerFrameTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_bPivotAtCentroid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_PreviewAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_MipLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::NewProp_Extinction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Renderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::ClassParams = {
	&USparseVolumeTextureViewerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::PropPointers),
	0,
	0x00A830A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USparseVolumeTextureViewerComponent()
{
	if (!Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent.OuterSingleton, Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent.OuterSingleton;
}
template<> RENDERER_API UClass* StaticClass<USparseVolumeTextureViewerComponent>()
{
	return USparseVolumeTextureViewerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USparseVolumeTextureViewerComponent);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USparseVolumeTextureViewerComponent)
// End Class USparseVolumeTextureViewerComponent

// Begin Class ASparseVolumeTextureViewer
void ASparseVolumeTextureViewer::StaticRegisterNativesASparseVolumeTextureViewer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASparseVolumeTextureViewer);
UClass* Z_Construct_UClass_ASparseVolumeTextureViewer_NoRegister()
{
	return ASparseVolumeTextureViewer::StaticClass();
}
struct Z_Construct_UClass_ASparseVolumeTextureViewer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "Comment", "/**\n * A placeable actor that represents a participating media material around a planet, e.g. clouds.\n */" },
		{ "HideCategories", "Info Object Input Input WorldPartition Collision HLOD" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A placeable actor that represents a participating media material around a planet, e.g. clouds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTextureViewerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SparseVolumeTexture/SparseVolumeTextureViewerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SparseVolumeTextureViewerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASparseVolumeTextureViewer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::NewProp_SparseVolumeTextureViewerComponent = { "SparseVolumeTextureViewerComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASparseVolumeTextureViewer, SparseVolumeTextureViewerComponent), Z_Construct_UClass_USparseVolumeTextureViewerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SparseVolumeTextureViewerComponent_MetaData), NewProp_SparseVolumeTextureViewerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::NewProp_SparseVolumeTextureViewerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Renderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::ClassParams = {
	&ASparseVolumeTextureViewer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::Class_MetaDataParams), Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASparseVolumeTextureViewer()
{
	if (!Z_Registration_Info_UClass_ASparseVolumeTextureViewer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASparseVolumeTextureViewer.OuterSingleton, Z_Construct_UClass_ASparseVolumeTextureViewer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASparseVolumeTextureViewer.OuterSingleton;
}
template<> RENDERER_API UClass* StaticClass<ASparseVolumeTextureViewer>()
{
	return ASparseVolumeTextureViewer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASparseVolumeTextureViewer);
ASparseVolumeTextureViewer::~ASparseVolumeTextureViewer() {}
// End Class ASparseVolumeTextureViewer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESparseVolumeTexturePreviewAttribute_StaticEnum, TEXT("ESparseVolumeTexturePreviewAttribute"), &Z_Registration_Info_UEnum_ESparseVolumeTexturePreviewAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1224755267U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USparseVolumeTextureViewerComponent, USparseVolumeTextureViewerComponent::StaticClass, TEXT("USparseVolumeTextureViewerComponent"), &Z_Registration_Info_UClass_USparseVolumeTextureViewerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USparseVolumeTextureViewerComponent), 1801935156U) },
		{ Z_Construct_UClass_ASparseVolumeTextureViewer, ASparseVolumeTextureViewer::StaticClass, TEXT("ASparseVolumeTextureViewer"), &Z_Registration_Info_UClass_ASparseVolumeTextureViewer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASparseVolumeTextureViewer), 2210711888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_2393127863(TEXT("/Script/Renderer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
