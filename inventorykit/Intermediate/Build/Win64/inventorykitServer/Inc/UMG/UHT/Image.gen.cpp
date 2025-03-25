// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImage() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
UMG_API UClass* Z_Construct_UClass_UImage();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UImage Function GetDynamicMaterial
struct Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics
{
	struct Image_eventGetDynamicMaterial_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventGetDynamicMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "GetDynamicMaterial", nullptr, nullptr, Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics::Image_eventGetDynamicMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics::Image_eventGetDynamicMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_GetDynamicMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_GetDynamicMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execGetDynamicMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicMaterial();
	P_NATIVE_END;
}
// End Class UImage Function GetDynamicMaterial

// Begin Class UImage Function SetBrush
struct Z_Construct_UFunction_UImage_SetBrush_Statics
{
	struct Image_eventSetBrush_Parms
	{
		FSlateBrush InBrush;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImage_SetBrush_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetBrush_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrush_MetaData), NewProp_InBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrush_Statics::NewProp_InBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetBrush", nullptr, nullptr, Z_Construct_UFunction_UImage_SetBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetBrush_Statics::Image_eventSetBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetBrush_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetBrush_Statics::Image_eventSetBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetBrush)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrush(Z_Param_Out_InBrush);
	P_NATIVE_END;
}
// End Class UImage Function SetBrush

// Begin Class UImage Function SetBrushFromAsset
struct Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics
{
	struct Image_eventSetBrushFromAsset_Parms
	{
		USlateBrushAsset* Asset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetBrushFromAsset_Parms, Asset), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetBrushFromAsset", nullptr, nullptr, Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics::Image_eventSetBrushFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics::Image_eventSetBrushFromAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetBrushFromAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetBrushFromAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetBrushFromAsset)
{
	P_GET_OBJECT(USlateBrushAsset,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushFromAsset(Z_Param_Asset);
	P_NATIVE_END;
}
// End Class UImage Function SetBrushFromAsset

// Begin Class UImage Function SetBrushFromAtlasInterface
struct Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics
{
	struct Image_eventSetBrushFromAtlasInterface_Parms
	{
		TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
		bool bMatchSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Sets the Brush to the specified Atlas Region.\n\x09*\n\x09*   @param AtlasRegion Region of the Atlas to use to set on Brush.\n\x09*\x09@param bMatchSize If true, image will change its size to atlas region size. If false, atlas region will be stretched to image size.\n\x09*/" },
		{ "CPP_Default_bMatchSize", "false" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
		{ "ToolTip", "Sets the Brush to the specified Atlas Region.\n\n  @param AtlasRegion Region of the Atlas to use to set on Brush.\n      @param bMatchSize If true, image will change its size to atlas region size. If false, atlas region will be stretched to image size." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AtlasRegion;
	static void NewProp_bMatchSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::NewProp_AtlasRegion = { "AtlasRegion", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetBrushFromAtlasInterface_Parms, AtlasRegion), Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::NewProp_bMatchSize_SetBit(void* Obj)
{
	((Image_eventSetBrushFromAtlasInterface_Parms*)Obj)->bMatchSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::NewProp_bMatchSize = { "bMatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Image_eventSetBrushFromAtlasInterface_Parms), &Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::NewProp_AtlasRegion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::NewProp_bMatchSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetBrushFromAtlasInterface", nullptr, nullptr, Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::Image_eventSetBrushFromAtlasInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::Image_eventSetBrushFromAtlasInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetBrushFromAtlasInterface)
{
	P_GET_TINTERFACE(ISlateTextureAtlasInterface,Z_Param_AtlasRegion);
	P_GET_UBOOL(Z_Param_bMatchSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushFromAtlasInterface(Z_Param_AtlasRegion,Z_Param_bMatchSize);
	P_NATIVE_END;
}
// End Class UImage Function SetBrushFromAtlasInterface

// Begin Class UImage Function SetBrushFromMaterial
struct Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics
{
	struct Image_eventSetBrushFromMaterial_Parms
	{
		UMaterialInterface* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetBrushFromMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetBrushFromMaterial", nullptr, nullptr, Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics::Image_eventSetBrushFromMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics::Image_eventSetBrushFromMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetBrushFromMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetBrushFromMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetBrushFromMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushFromMaterial(Z_Param_Material);
	P_NATIVE_END;
}
// End Class UImage Function SetBrushFromMaterial

// Begin Class UImage Function SetBrushFromSoftMaterial
struct Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics
{
	struct Image_eventSetBrushFromSoftMaterial_Parms
	{
		TSoftObjectPtr<UMaterialInterface> SoftMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics::NewProp_SoftMaterial = { "SoftMaterial", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetBrushFromSoftMaterial_Parms, SoftMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics::NewProp_SoftMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetBrushFromSoftMaterial", nullptr, nullptr, Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics::Image_eventSetBrushFromSoftMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics::Image_eventSetBrushFromSoftMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetBrushFromSoftMaterial)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInterface>,Z_Param_SoftMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushFromSoftMaterial(Z_Param_SoftMaterial);
	P_NATIVE_END;
}
// End Class UImage Function SetBrushFromSoftMaterial

// Begin Class UImage Function SetBrushFromSoftTexture
struct Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics
{
	struct Image_eventSetBrushFromSoftTexture_Parms
	{
		TSoftObjectPtr<UTexture2D> SoftTexture;
		bool bMatchSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Sets the Brush to the specified Soft Texture.\n\x09*\n\x09*   @param SoftTexture Soft Texture to use to set on Brush.\n\x09*\x09@param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size.\n\x09*/" },
		{ "CPP_Default_bMatchSize", "false" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
		{ "ToolTip", "Sets the Brush to the specified Soft Texture.\n\n  @param SoftTexture Soft Texture to use to set on Brush.\n      @param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftTexture;
	static void NewProp_bMatchSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::NewProp_SoftTexture = { "SoftTexture", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetBrushFromSoftTexture_Parms, SoftTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::NewProp_bMatchSize_SetBit(void* Obj)
{
	((Image_eventSetBrushFromSoftTexture_Parms*)Obj)->bMatchSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::NewProp_bMatchSize = { "bMatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Image_eventSetBrushFromSoftTexture_Parms), &Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::NewProp_SoftTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::NewProp_bMatchSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetBrushFromSoftTexture", nullptr, nullptr, Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::Image_eventSetBrushFromSoftTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::Image_eventSetBrushFromSoftTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetBrushFromSoftTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetBrushFromSoftTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetBrushFromSoftTexture)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_SoftTexture);
	P_GET_UBOOL(Z_Param_bMatchSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushFromSoftTexture(Z_Param_SoftTexture,Z_Param_bMatchSize);
	P_NATIVE_END;
}
// End Class UImage Function SetBrushFromSoftTexture

// Begin Class UImage Function SetBrushFromTexture
struct Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics
{
	struct Image_eventSetBrushFromTexture_Parms
	{
		UTexture2D* Texture;
		bool bMatchSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Sets the Brush to the specified Texture.\n\x09*\n\x09*   @param Texture Texture to use to set on Brush.\n\x09*\x09@param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size.\n\x09*/" },
		{ "CPP_Default_bMatchSize", "false" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
		{ "ToolTip", "Sets the Brush to the specified Texture.\n\n  @param Texture Texture to use to set on Brush.\n      @param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static void NewProp_bMatchSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetBrushFromTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::NewProp_bMatchSize_SetBit(void* Obj)
{
	((Image_eventSetBrushFromTexture_Parms*)Obj)->bMatchSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::NewProp_bMatchSize = { "bMatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Image_eventSetBrushFromTexture_Parms), &Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::NewProp_bMatchSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetBrushFromTexture", nullptr, nullptr, Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::Image_eventSetBrushFromTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::Image_eventSetBrushFromTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetBrushFromTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetBrushFromTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetBrushFromTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_GET_UBOOL(Z_Param_bMatchSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushFromTexture(Z_Param_Texture,Z_Param_bMatchSize);
	P_NATIVE_END;
}
// End Class UImage Function SetBrushFromTexture

// Begin Class UImage Function SetBrushFromTextureDynamic
struct Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics
{
	struct Image_eventSetBrushFromTextureDynamic_Parms
	{
		UTexture2DDynamic* Texture;
		bool bMatchSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Sets the Brush to the specified Dynamic Texture.\n\x09*\n\x09*   @param Texture Dynamic Texture to use to set on Brush.\n\x09*\x09@param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size.\n\x09*/" },
		{ "CPP_Default_bMatchSize", "false" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
		{ "ToolTip", "Sets the Brush to the specified Dynamic Texture.\n\n  @param Texture Dynamic Texture to use to set on Brush.\n      @param bMatchSize If true, image will change its size to texture size. If false, texture will be stretched to image size." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static void NewProp_bMatchSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetBrushFromTextureDynamic_Parms, Texture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::NewProp_bMatchSize_SetBit(void* Obj)
{
	((Image_eventSetBrushFromTextureDynamic_Parms*)Obj)->bMatchSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::NewProp_bMatchSize = { "bMatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Image_eventSetBrushFromTextureDynamic_Parms), &Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::NewProp_bMatchSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetBrushFromTextureDynamic", nullptr, nullptr, Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::Image_eventSetBrushFromTextureDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::Image_eventSetBrushFromTextureDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetBrushFromTextureDynamic)
{
	P_GET_OBJECT(UTexture2DDynamic,Z_Param_Texture);
	P_GET_UBOOL(Z_Param_bMatchSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushFromTextureDynamic(Z_Param_Texture,Z_Param_bMatchSize);
	P_NATIVE_END;
}
// End Class UImage Function SetBrushFromTextureDynamic

// Begin Class UImage Function SetBrushResourceObject
struct Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics
{
	struct Image_eventSetBrushResourceObject_Parms
	{
		UObject* ResourceObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResourceObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics::NewProp_ResourceObject = { "ResourceObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetBrushResourceObject_Parms, ResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics::NewProp_ResourceObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetBrushResourceObject", nullptr, nullptr, Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics::Image_eventSetBrushResourceObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics::Image_eventSetBrushResourceObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetBrushResourceObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetBrushResourceObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetBrushResourceObject)
{
	P_GET_OBJECT(UObject,Z_Param_ResourceObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushResourceObject(Z_Param_ResourceObject);
	P_NATIVE_END;
}
// End Class UImage Function SetBrushResourceObject

// Begin Class UImage Function SetBrushTintColor
struct Z_Construct_UFunction_UImage_SetBrushTintColor_Statics
{
	struct Image_eventSetBrushTintColor_Parms
	{
		FSlateColor TintColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TintColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImage_SetBrushTintColor_Statics::NewProp_TintColor = { "TintColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetBrushTintColor_Parms, TintColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(0, nullptr) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetBrushTintColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetBrushTintColor_Statics::NewProp_TintColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushTintColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetBrushTintColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetBrushTintColor", nullptr, nullptr, Z_Construct_UFunction_UImage_SetBrushTintColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushTintColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetBrushTintColor_Statics::Image_eventSetBrushTintColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetBrushTintColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetBrushTintColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetBrushTintColor_Statics::Image_eventSetBrushTintColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetBrushTintColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetBrushTintColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetBrushTintColor)
{
	P_GET_STRUCT(FSlateColor,Z_Param_TintColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushTintColor(Z_Param_TintColor);
	P_NATIVE_END;
}
// End Class UImage Function SetBrushTintColor

// Begin Class UImage Function SetColorAndOpacity
struct Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics
{
	struct Image_eventSetColorAndOpacity_Parms
	{
		FLinearColor InColorAndOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetColorAndOpacity", nullptr, nullptr, Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics::Image_eventSetColorAndOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics::Image_eventSetColorAndOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetColorAndOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetColorAndOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetColorAndOpacity)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity);
	P_NATIVE_END;
}
// End Class UImage Function SetColorAndOpacity

// Begin Class UImage Function SetDesiredSizeOverride
struct Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics
{
	struct Image_eventSetDesiredSizeOverride_Parms
	{
		FVector2D DesiredSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics::NewProp_DesiredSize = { "DesiredSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetDesiredSizeOverride_Parms, DesiredSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics::NewProp_DesiredSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetDesiredSizeOverride", nullptr, nullptr, Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics::Image_eventSetDesiredSizeOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics::Image_eventSetDesiredSizeOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetDesiredSizeOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetDesiredSizeOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetDesiredSizeOverride)
{
	P_GET_STRUCT(FVector2D,Z_Param_DesiredSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDesiredSizeOverride(Z_Param_DesiredSize);
	P_NATIVE_END;
}
// End Class UImage Function SetDesiredSizeOverride

// Begin Class UImage Function SetOpacity
struct Z_Construct_UFunction_UImage_SetOpacity_Statics
{
	struct Image_eventSetOpacity_Parms
	{
		float InOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImage_SetOpacity_Statics::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Image_eventSetOpacity_Parms, InOpacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImage_SetOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImage_SetOpacity_Statics::NewProp_InOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImage_SetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImage, nullptr, "SetOpacity", nullptr, nullptr, Z_Construct_UFunction_UImage_SetOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImage_SetOpacity_Statics::Image_eventSetOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImage_SetOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImage_SetOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImage_SetOpacity_Statics::Image_eventSetOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImage_SetOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImage_SetOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImage::execSetOpacity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOpacity(Z_Param_InOpacity);
	P_NATIVE_END;
}
// End Class UImage Function SetOpacity

// Begin Class UImage
void UImage::GetBrush_WrapperImpl(const void* Object, void* OutValue)
{
	const UImage* Obj = (const UImage*)Object;
	FSlateBrush& Result = *(FSlateBrush*)OutValue;
	Result = (FSlateBrush)Obj->GetBrush();
}
void UImage::SetBrush_WrapperImpl(void* Object, const void* InValue)
{
	UImage* Obj = (UImage*)Object;
	FSlateBrush& Value = *(FSlateBrush*)InValue;
	Obj->SetBrush(Value);
}
void UImage::GetColorAndOpacity_WrapperImpl(const void* Object, void* OutValue)
{
	const UImage* Obj = (const UImage*)Object;
	FLinearColor& Result = *(FLinearColor*)OutValue;
	Result = (FLinearColor)Obj->GetColorAndOpacity();
}
void UImage::SetColorAndOpacity_WrapperImpl(void* Object, const void* InValue)
{
	UImage* Obj = (UImage*)Object;
	FLinearColor& Value = *(FLinearColor*)InValue;
	Obj->SetColorAndOpacity(Value);
}
void UImage::GetbFlipForRightToLeftFlowDirection_WrapperImpl(const void* Object, void* OutValue)
{
	const UImage* Obj = (const UImage*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->ShouldFlipForRightToLeftFlowDirection();
}
void UImage::SetbFlipForRightToLeftFlowDirection_WrapperImpl(void* Object, const void* InValue)
{
	UImage* Obj = (UImage*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetFlipForRightToLeftFlowDirection(Value);
}
void UImage::StaticRegisterNativesUImage()
{
	UClass* Class = UImage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDynamicMaterial", &UImage::execGetDynamicMaterial },
		{ "SetBrush", &UImage::execSetBrush },
		{ "SetBrushFromAsset", &UImage::execSetBrushFromAsset },
		{ "SetBrushFromAtlasInterface", &UImage::execSetBrushFromAtlasInterface },
		{ "SetBrushFromMaterial", &UImage::execSetBrushFromMaterial },
		{ "SetBrushFromSoftMaterial", &UImage::execSetBrushFromSoftMaterial },
		{ "SetBrushFromSoftTexture", &UImage::execSetBrushFromSoftTexture },
		{ "SetBrushFromTexture", &UImage::execSetBrushFromTexture },
		{ "SetBrushFromTextureDynamic", &UImage::execSetBrushFromTextureDynamic },
		{ "SetBrushResourceObject", &UImage::execSetBrushResourceObject },
		{ "SetBrushTintColor", &UImage::execSetBrushTintColor },
		{ "SetColorAndOpacity", &UImage::execSetColorAndOpacity },
		{ "SetDesiredSizeOverride", &UImage::execSetDesiredSizeOverride },
		{ "SetOpacity", &UImage::execSetOpacity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImage);
UClass* Z_Construct_UClass_UImage_NoRegister()
{
	return UImage::StaticClass();
}
struct Z_Construct_UClass_UImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The image widget allows you to display a Slate Brush, or texture or material in the UI.\n *\n * * No Children\n */" },
		{ "IncludePath", "Components/Image.h" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
		{ "ToolTip", "The image widget allows you to display a Slate Brush, or texture or material in the UI.\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "BlueprintSetter", "SetBrush" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to draw */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
		{ "ToolTip", "Image to draw" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the Image. */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
		{ "ToolTip", "A bindable delegate for the Image." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
		{ "BlueprintSetter", "SetColorAndOpacity" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Color and opacity */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "Color and opacity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacityDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the ColorAndOpacity. */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
		{ "ToolTip", "A bindable delegate for the ColorAndOpacity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipForRightToLeftFlowDirection_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Flips the image if the localization's flow direction is RightToLeft */" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
		{ "ToolTip", "Flips the image if the localization's flow direction is RightToLeft" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseButtonDownEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/Image.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_BrushDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ColorAndOpacityDelegate;
	static void NewProp_bFlipForRightToLeftFlowDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipForRightToLeftFlowDirection;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMouseButtonDownEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UImage_GetDynamicMaterial, "GetDynamicMaterial" }, // 2106783826
		{ &Z_Construct_UFunction_UImage_SetBrush, "SetBrush" }, // 1639662611
		{ &Z_Construct_UFunction_UImage_SetBrushFromAsset, "SetBrushFromAsset" }, // 1142903618
		{ &Z_Construct_UFunction_UImage_SetBrushFromAtlasInterface, "SetBrushFromAtlasInterface" }, // 4022316306
		{ &Z_Construct_UFunction_UImage_SetBrushFromMaterial, "SetBrushFromMaterial" }, // 2679069849
		{ &Z_Construct_UFunction_UImage_SetBrushFromSoftMaterial, "SetBrushFromSoftMaterial" }, // 1387977181
		{ &Z_Construct_UFunction_UImage_SetBrushFromSoftTexture, "SetBrushFromSoftTexture" }, // 3925139000
		{ &Z_Construct_UFunction_UImage_SetBrushFromTexture, "SetBrushFromTexture" }, // 3701112571
		{ &Z_Construct_UFunction_UImage_SetBrushFromTextureDynamic, "SetBrushFromTextureDynamic" }, // 145662564
		{ &Z_Construct_UFunction_UImage_SetBrushResourceObject, "SetBrushResourceObject" }, // 1313577157
		{ &Z_Construct_UFunction_UImage_SetBrushTintColor, "SetBrushTintColor" }, // 419879391
		{ &Z_Construct_UFunction_UImage_SetColorAndOpacity, "SetColorAndOpacity" }, // 1811554478
		{ &Z_Construct_UFunction_UImage_SetDesiredSizeOverride, "SetDesiredSizeOverride" }, // 1929274305
		{ &Z_Construct_UFunction_UImage_SetOpacity, "SetOpacity" }, // 248075561
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImage_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UImage::SetBrush_WrapperImpl, &UImage::GetBrush_WrapperImpl, 1, STRUCT_OFFSET(UImage, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) }; // 1704263518
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UImage_Statics::NewProp_BrushDelegate = { "BrushDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImage, BrushDelegate), Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushDelegate_MetaData), NewProp_BrushDelegate_MetaData) }; // 3558432909
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImage_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UImage::SetColorAndOpacity_WrapperImpl, &UImage::GetColorAndOpacity_WrapperImpl, 1, STRUCT_OFFSET(UImage, ColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData), NewProp_ColorAndOpacity_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UImage_Statics::NewProp_ColorAndOpacityDelegate = { "ColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImage, ColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAndOpacityDelegate_MetaData), NewProp_ColorAndOpacityDelegate_MetaData) }; // 3367946829
void Z_Construct_UClass_UImage_Statics::NewProp_bFlipForRightToLeftFlowDirection_SetBit(void* Obj)
{
	((UImage*)Obj)->bFlipForRightToLeftFlowDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImage_Statics::NewProp_bFlipForRightToLeftFlowDirection = { "bFlipForRightToLeftFlowDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UImage::SetbFlipForRightToLeftFlowDirection_WrapperImpl, &UImage::GetbFlipForRightToLeftFlowDirection_WrapperImpl, 1, sizeof(bool), sizeof(UImage), &Z_Construct_UClass_UImage_Statics::NewProp_bFlipForRightToLeftFlowDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipForRightToLeftFlowDirection_MetaData), NewProp_bFlipForRightToLeftFlowDirection_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UImage_Statics::NewProp_OnMouseButtonDownEvent = { "OnMouseButtonDownEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImage, OnMouseButtonDownEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseButtonDownEvent_MetaData), NewProp_OnMouseButtonDownEvent_MetaData) }; // 951480833
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImage_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImage_Statics::NewProp_BrushDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImage_Statics::NewProp_ColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImage_Statics::NewProp_ColorAndOpacityDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImage_Statics::NewProp_bFlipForRightToLeftFlowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImage_Statics::NewProp_OnMouseButtonDownEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UImage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImage_Statics::ClassParams = {
	&UImage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UImage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UImage_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UImage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImage()
{
	if (!Z_Registration_Info_UClass_UImage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImage.OuterSingleton, Z_Construct_UClass_UImage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImage.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UImage>()
{
	return UImage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImage);
UImage::~UImage() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UImage, Brush)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UImage)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UImage, Brush)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UImage);
// End Class UImage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UImage, UImage::StaticClass, TEXT("UImage"), &Z_Registration_Info_UClass_UImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImage), 2259943231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_571511442(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Image_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
