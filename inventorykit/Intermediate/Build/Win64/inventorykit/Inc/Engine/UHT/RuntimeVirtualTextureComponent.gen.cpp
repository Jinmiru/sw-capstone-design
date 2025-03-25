// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/RuntimeVirtualTextureComponent.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTextureComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureBuilder_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class URuntimeVirtualTextureComponent Function Invalidate
struct Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics
{
	struct RuntimeVirtualTextureComponent_eventInvalidate_Parms
	{
		FBoxSphereBounds WorldBounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/**\n\x09 * This function marks an area of the runtime virtual texture as dirty.\n\x09 * @param WorldBounds : The world space bounds of the pages to invalidate.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "This function marks an area of the runtime virtual texture as dirty.\n@param WorldBounds : The world space bounds of the pages to invalidate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::NewProp_WorldBounds = { "WorldBounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RuntimeVirtualTextureComponent_eventInvalidate_Parms, WorldBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBounds_MetaData), NewProp_WorldBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::NewProp_WorldBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeVirtualTextureComponent, nullptr, "Invalidate", nullptr, nullptr, Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::PropPointers), sizeof(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::RuntimeVirtualTextureComponent_eventInvalidate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::Function_MetaDataParams), Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::RuntimeVirtualTextureComponent_eventInvalidate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URuntimeVirtualTextureComponent::execInvalidate)
{
	P_GET_STRUCT_REF(FBoxSphereBounds,Z_Param_Out_WorldBounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Invalidate(Z_Param_Out_WorldBounds);
	P_NATIVE_END;
}
// End Class URuntimeVirtualTextureComponent Function Invalidate

// Begin Class URuntimeVirtualTextureComponent
void URuntimeVirtualTextureComponent::StaticRegisterNativesURuntimeVirtualTextureComponent()
{
	UClass* Class = URuntimeVirtualTextureComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Invalidate", &URuntimeVirtualTextureComponent::execInvalidate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeVirtualTextureComponent);
UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister()
{
	return URuntimeVirtualTextureComponent::StaticClass();
}
struct Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component used to place a URuntimeVirtualTexture in the world. */" },
		{ "HideCategories", "Activation Collision Cooking HLOD Mobility LOD Navigation Object Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/RuntimeVirtualTextureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Component used to place a URuntimeVirtualTexture in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsAlignActor_MetaData[] = {
		{ "Category", "VolumeBounds" },
		{ "Comment", "/** Actor to align rotation to. If set this actor is always included in the bounds calculation. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Actor to align rotation to. If set this actor is always included in the bounds calculation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetBoundsButton_MetaData[] = {
		{ "Category", "VolumeBounds" },
		{ "Comment", "/** Placeholder for details customization button. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Placeholder for details customization button." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapBoundsToLandscape_MetaData[] = {
		{ "Category", "VolumeBounds" },
		{ "Comment", "/** If the Bounds Align Actor is a Landscape then this will snap the bounds so that virtual texture texels align with landscape vertex positions. */" },
		{ "DisplayName", "Snap To Landscape" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "If the Bounds Align Actor is a Landscape then this will snap the bounds so that virtual texture texels align with landscape vertex positions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandBounds_MetaData[] = {
		{ "Category", "VolumeBounds" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Amount to expand the Bounds during calculation. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Amount to expand the Bounds during calculation." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTexture_MetaData[] = {
		{ "Category", "RuntimeVirtualTexture" },
		{ "Comment", "/** The virtual texture object to use. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "The virtual texture object to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableInGamePerPlatform_MetaData[] = {
		{ "Category", "RuntimeVirtualTexture" },
		{ "Comment", "/** Per platform overrides for enabling the virtual texture. Only affects In-Game and PIE. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Per platform overrides for enabling the virtual texture. Only affects In-Game and PIE." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableForNaniteOnly_MetaData[] = {
		{ "Category", "RuntimeVirtualTexture" },
		{ "Comment", "/** Enable the virtual texture only when Nanite is enabled. Can be used for a Displacement virtual texture with Nanite tessellation. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Enable the virtual texture only when Nanite is enabled. Can be used for a Displacement virtual texture with Nanite tessellation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableScalability_MetaData[] = {
		{ "Category", "RuntimeVirtualTexture" },
		{ "Comment", "/** Set to true to enable scalability settings for the virtual texture. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Set to true to enable scalability settings for the virtual texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilityGroup_MetaData[] = {
		{ "Category", "RuntimeVirtualTexture" },
		{ "Comment", "/** Group index of the scalability settings to use for the virtual texture. */" },
		{ "EditCondition", "bEnableScalability" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Group index of the scalability settings to use for the virtual texture." },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidePrimitives_MetaData[] = {
		{ "Category", "RuntimeVirtualTexture" },
		{ "Comment", "/** Hide primitives in the main pass. Hidden primitives will be those that draw to this virtual texture with 'Draw in Main Pass' set to 'From Virtual Texture'. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Hide primitives in the main pass. Hidden primitives will be those that draw to this virtual texture with 'Draw in Main Pass' set to 'From Virtual Texture'." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingTexture_MetaData[] = {
		{ "Category", "StreamingVirtualTexture" },
		{ "Comment", "/** Texture object containing streamed low mips. This can reduce rendering update cost. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Texture object containing streamed low mips. This can reduce rendering update cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamLowMips_MetaData[] = {
		{ "Category", "StreamingVirtualTexture" },
		{ "Comment", "/** Number of streaming low mips to build for the virtual texture. */" },
		{ "DisplayName", "Build Levels" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Number of streaming low mips to build for the virtual texture." },
		{ "UIMax", "12" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildStreamingMipsButton_MetaData[] = {
		{ "Category", "StreamingVirtualTexture" },
		{ "Comment", "/** Placeholder for details customization button. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Placeholder for details customization button." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LossyCompressionAmount_MetaData[] = {
		{ "Category", "StreamingVirtualTexture" },
		{ "Comment", "/** \n\x09 * How aggressively should any relevant lossy compression be applied. \n\x09 * For compressors that support EncodeSpeed (i.e. Oodle), this is only applied if enabled (see Project Settings -> Texture Encoding). \n\x09 * Note that this is in addition to any unavoidable loss due to the target format. Selecting \"No Lossy Compression\" will not result in zero distortion for BCn formats.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "How aggressively should any relevant lossy compression be applied.\nFor compressors that support EncodeSpeed (i.e. Oodle), this is only applied if enabled (see Project Settings -> Texture Encoding).\nNote that this is in addition to any unavoidable loss due to the target format. Selecting \"No Lossy Compression\" will not result in zero distortion for BCn formats." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseStreamingMipsFixedColor_MetaData[] = {
		{ "Category", "StreamingVirtualTexture" },
		{ "Comment", "/** Build the streaming low mips using a fixed color. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Build the streaming low mips using a fixed color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingMipsFixedColor_MetaData[] = {
		{ "Category", "StreamingVirtualTexture" },
		{ "Comment", "/** Fixed color to use when building the streaming low mips. This only affects BaseColor and Displacement attributes. The Red channel is used for fixed Displacement. */" },
		{ "DisplayName", "Fixed Color" },
		{ "EditCondition", "bUseStreamingMipsFixedColor" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Fixed color to use when building the streaming low mips. This only affects BaseColor and Displacement attributes. The Red channel is used for fixed Displacement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseStreamingLowMipsInEditor_MetaData[] = {
		{ "Category", "StreamingVirtualTexture" },
		{ "Comment", "/** Use streaming low mips when rendering in editor. Set true to view and debug the baked streaming low mips. */" },
		{ "DisplayName", "View in Editor" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Use streaming low mips when rendering in editor. Set true to view and debug the baked streaming low mips." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundsAlignActor;
	static void NewProp_bSetBoundsButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetBoundsButton;
	static void NewProp_bSnapBoundsToLandscape_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapBoundsToLandscape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpandBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VirtualTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnableInGamePerPlatform;
	static void NewProp_bEnableForNaniteOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableForNaniteOnly;
	static void NewProp_bEnableScalability_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableScalability;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ScalabilityGroup;
	static void NewProp_bHidePrimitives_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePrimitives;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamingTexture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StreamLowMips;
	static void NewProp_bBuildStreamingMipsButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildStreamingMipsButton;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LossyCompressionAmount;
	static void NewProp_bUseStreamingMipsFixedColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStreamingMipsFixedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingMipsFixedColor;
	static void NewProp_bUseStreamingLowMipsInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStreamingLowMipsInEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate, "Invalidate" }, // 3207577912
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVirtualTextureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsAlignActor = { "BoundsAlignActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, BoundsAlignActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsAlignActor_MetaData), NewProp_BoundsAlignActor_MetaData) };
void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton_SetBit(void* Obj)
{
	((URuntimeVirtualTextureComponent*)Obj)->bSetBoundsButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton = { "bSetBoundsButton", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetBoundsButton_MetaData), NewProp_bSetBoundsButton_MetaData) };
void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape_SetBit(void* Obj)
{
	((URuntimeVirtualTextureComponent*)Obj)->bSnapBoundsToLandscape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape = { "bSnapBoundsToLandscape", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapBoundsToLandscape_MetaData), NewProp_bSnapBoundsToLandscape_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ExpandBounds = { "ExpandBounds", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, ExpandBounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandBounds_MetaData), NewProp_ExpandBounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture = { "VirtualTexture", nullptr, (EPropertyFlags)0x0124480000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, VirtualTexture), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTexture_MetaData), NewProp_VirtualTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_EnableInGamePerPlatform = { "EnableInGamePerPlatform", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, EnableInGamePerPlatform), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableInGamePerPlatform_MetaData), NewProp_EnableInGamePerPlatform_MetaData) }; // 846681800
void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableForNaniteOnly_SetBit(void* Obj)
{
	((URuntimeVirtualTextureComponent*)Obj)->bEnableForNaniteOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableForNaniteOnly = { "bEnableForNaniteOnly", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableForNaniteOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableForNaniteOnly_MetaData), NewProp_bEnableForNaniteOnly_MetaData) };
void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability_SetBit(void* Obj)
{
	((URuntimeVirtualTextureComponent*)Obj)->bEnableScalability = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability = { "bEnableScalability", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableScalability_MetaData), NewProp_bEnableScalability_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ScalabilityGroup = { "ScalabilityGroup", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, ScalabilityGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalabilityGroup_MetaData), NewProp_ScalabilityGroup_MetaData) };
void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives_SetBit(void* Obj)
{
	((URuntimeVirtualTextureComponent*)Obj)->bHidePrimitives = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives = { "bHidePrimitives", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidePrimitives_MetaData), NewProp_bHidePrimitives_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingTexture = { "StreamingTexture", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, StreamingTexture), Z_Construct_UClass_UVirtualTextureBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingTexture_MetaData), NewProp_StreamingTexture_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamLowMips = { "StreamLowMips", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, StreamLowMips), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamLowMips_MetaData), NewProp_StreamLowMips_MetaData) };
void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton_SetBit(void* Obj)
{
	((URuntimeVirtualTextureComponent*)Obj)->bBuildStreamingMipsButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton = { "bBuildStreamingMipsButton", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildStreamingMipsButton_MetaData), NewProp_bBuildStreamingMipsButton_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_LossyCompressionAmount = { "LossyCompressionAmount", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, LossyCompressionAmount), Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LossyCompressionAmount_MetaData), NewProp_LossyCompressionAmount_MetaData) }; // 1608486090
void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingMipsFixedColor_SetBit(void* Obj)
{
	((URuntimeVirtualTextureComponent*)Obj)->bUseStreamingMipsFixedColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingMipsFixedColor = { "bUseStreamingMipsFixedColor", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingMipsFixedColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseStreamingMipsFixedColor_MetaData), NewProp_bUseStreamingMipsFixedColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingMipsFixedColor = { "StreamingMipsFixedColor", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, StreamingMipsFixedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingMipsFixedColor_MetaData), NewProp_StreamingMipsFixedColor_MetaData) };
void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_SetBit(void* Obj)
{
	((URuntimeVirtualTextureComponent*)Obj)->bUseStreamingLowMipsInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor = { "bUseStreamingLowMipsInEditor", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseStreamingLowMipsInEditor_MetaData), NewProp_bUseStreamingLowMipsInEditor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsAlignActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ExpandBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_EnableInGamePerPlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableForNaniteOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ScalabilityGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamLowMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_LossyCompressionAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingMipsFixedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingMipsFixedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::ClassParams = {
	&URuntimeVirtualTextureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent()
{
	if (!Z_Registration_Info_UClass_URuntimeVirtualTextureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeVirtualTextureComponent.OuterSingleton, Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeVirtualTextureComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URuntimeVirtualTextureComponent>()
{
	return URuntimeVirtualTextureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVirtualTextureComponent);
URuntimeVirtualTextureComponent::~URuntimeVirtualTextureComponent() {}
// End Class URuntimeVirtualTextureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeVirtualTextureComponent, URuntimeVirtualTextureComponent::StaticClass, TEXT("URuntimeVirtualTextureComponent"), &Z_Registration_Info_UClass_URuntimeVirtualTextureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeVirtualTextureComponent), 1682933870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_2024795197(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
