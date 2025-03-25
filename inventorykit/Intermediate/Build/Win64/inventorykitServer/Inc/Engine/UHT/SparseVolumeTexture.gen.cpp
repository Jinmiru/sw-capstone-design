// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/SparseVolumeTexture/SparseVolumeTexture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSparseVolumeTexture() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
ENGINE_API UClass* Z_Construct_UClass_UAnimatedSparseVolumeTexture();
ENGINE_API UClass* Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimatedSparseVolumeTextureController();
ENGINE_API UClass* Z_Construct_UClass_UAnimatedSparseVolumeTextureController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture();
ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTextureFrame();
ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticSparseVolumeTexture();
ENGINE_API UClass* Z_Construct_UClass_UStaticSparseVolumeTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStreamableSparseVolumeTexture();
ENGINE_API UClass* Z_Construct_UClass_UStreamableSparseVolumeTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USparseVolumeTexture Function GetFrameTransform
struct Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics
{
	struct SparseVolumeTexture_eventGetFrameTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SparseVolumeTexture_eventGetFrameTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USparseVolumeTexture, nullptr, "GetFrameTransform", nullptr, nullptr, Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::SparseVolumeTexture_eventGetFrameTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::SparseVolumeTexture_eventGetFrameTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USparseVolumeTexture::execGetFrameTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetFrameTransform();
	P_NATIVE_END;
}
// End Class USparseVolumeTexture Function GetFrameTransform

// Begin Class USparseVolumeTexture Function GetNumFrames
struct Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics
{
	struct SparseVolumeTexture_eventGetNumFrames_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SparseVolumeTexture_eventGetNumFrames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USparseVolumeTexture, nullptr, "GetNumFrames", nullptr, nullptr, Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::SparseVolumeTexture_eventGetNumFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::SparseVolumeTexture_eventGetNumFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USparseVolumeTexture::execGetNumFrames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumFrames();
	P_NATIVE_END;
}
// End Class USparseVolumeTexture Function GetNumFrames

// Begin Class USparseVolumeTexture Function GetNumMipLevels
struct Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics
{
	struct SparseVolumeTexture_eventGetNumMipLevels_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SparseVolumeTexture_eventGetNumMipLevels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USparseVolumeTexture, nullptr, "GetNumMipLevels", nullptr, nullptr, Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::PropPointers), sizeof(Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::SparseVolumeTexture_eventGetNumMipLevels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::Function_MetaDataParams), Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::SparseVolumeTexture_eventGetNumMipLevels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USparseVolumeTexture::execGetNumMipLevels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumMipLevels();
	P_NATIVE_END;
}
// End Class USparseVolumeTexture Function GetNumMipLevels

// Begin Class USparseVolumeTexture Function GetSizeX
struct Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics
{
	struct SparseVolumeTexture_eventGetSizeX_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SparseVolumeTexture_eventGetSizeX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USparseVolumeTexture, nullptr, "GetSizeX", nullptr, nullptr, Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::PropPointers), sizeof(Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::SparseVolumeTexture_eventGetSizeX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::Function_MetaDataParams), Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::SparseVolumeTexture_eventGetSizeX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USparseVolumeTexture_GetSizeX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USparseVolumeTexture_GetSizeX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USparseVolumeTexture::execGetSizeX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSizeX();
	P_NATIVE_END;
}
// End Class USparseVolumeTexture Function GetSizeX

// Begin Class USparseVolumeTexture Function GetSizeY
struct Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics
{
	struct SparseVolumeTexture_eventGetSizeY_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SparseVolumeTexture_eventGetSizeY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USparseVolumeTexture, nullptr, "GetSizeY", nullptr, nullptr, Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::PropPointers), sizeof(Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::SparseVolumeTexture_eventGetSizeY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::Function_MetaDataParams), Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::SparseVolumeTexture_eventGetSizeY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USparseVolumeTexture_GetSizeY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USparseVolumeTexture_GetSizeY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USparseVolumeTexture::execGetSizeY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSizeY();
	P_NATIVE_END;
}
// End Class USparseVolumeTexture Function GetSizeY

// Begin Class USparseVolumeTexture Function GetSizeZ
struct Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics
{
	struct SparseVolumeTexture_eventGetSizeZ_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SparseVolumeTexture_eventGetSizeZ_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USparseVolumeTexture, nullptr, "GetSizeZ", nullptr, nullptr, Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::SparseVolumeTexture_eventGetSizeZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::SparseVolumeTexture_eventGetSizeZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USparseVolumeTexture::execGetSizeZ)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSizeZ();
	P_NATIVE_END;
}
// End Class USparseVolumeTexture Function GetSizeZ

// Begin Class USparseVolumeTexture
void USparseVolumeTexture::StaticRegisterNativesUSparseVolumeTexture()
{
	UClass* Class = USparseVolumeTexture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFrameTransform", &USparseVolumeTexture::execGetFrameTransform },
		{ "GetNumFrames", &USparseVolumeTexture::execGetNumFrames },
		{ "GetNumMipLevels", &USparseVolumeTexture::execGetNumMipLevels },
		{ "GetSizeX", &USparseVolumeTexture::execGetSizeX },
		{ "GetSizeY", &USparseVolumeTexture::execGetSizeY },
		{ "GetSizeZ", &USparseVolumeTexture::execGetSizeZ },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USparseVolumeTexture);
UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister()
{
	return USparseVolumeTexture::StaticClass();
}
struct Z_Construct_UClass_USparseVolumeTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// SparseVolumeTexture base interface to communicate with material graph and shader bindings.\n" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "SparseVolumeTexture base interface to communicate with material graph and shader bindings." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USparseVolumeTexture_GetFrameTransform, "GetFrameTransform" }, // 2209394798
		{ &Z_Construct_UFunction_USparseVolumeTexture_GetNumFrames, "GetNumFrames" }, // 1652158776
		{ &Z_Construct_UFunction_USparseVolumeTexture_GetNumMipLevels, "GetNumMipLevels" }, // 1811148254
		{ &Z_Construct_UFunction_USparseVolumeTexture_GetSizeX, "GetSizeX" }, // 3334590982
		{ &Z_Construct_UFunction_USparseVolumeTexture_GetSizeY, "GetSizeY" }, // 2086876532
		{ &Z_Construct_UFunction_USparseVolumeTexture_GetSizeZ, "GetSizeZ" }, // 3992935103
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USparseVolumeTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USparseVolumeTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USparseVolumeTexture_Statics::ClassParams = {
	&USparseVolumeTexture::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_USparseVolumeTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USparseVolumeTexture()
{
	if (!Z_Registration_Info_UClass_USparseVolumeTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USparseVolumeTexture.OuterSingleton, Z_Construct_UClass_USparseVolumeTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USparseVolumeTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USparseVolumeTexture>()
{
	return USparseVolumeTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USparseVolumeTexture);
// End Class USparseVolumeTexture

// Begin Class USparseVolumeTextureFrame
void USparseVolumeTextureFrame::StaticRegisterNativesUSparseVolumeTextureFrame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USparseVolumeTextureFrame);
UClass* Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister()
{
	return USparseVolumeTextureFrame::StaticClass();
}
struct Z_Construct_UClass_USparseVolumeTextureFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// Represents a frame in a SparseVolumeTexture sequence and owns the actual data needed for rendering. Is owned by a UStreamableSparseVolumeTexture object.\n" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "Represents a frame in a SparseVolumeTexture sequence and owns the actual data needed for rendering. Is owned by a UStreamableSparseVolumeTexture object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USparseVolumeTextureFrame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USparseVolumeTextureFrame_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USparseVolumeTextureFrame, Owner), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USparseVolumeTextureFrame_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USparseVolumeTextureFrame, FrameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameIndex_MetaData), NewProp_FrameIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USparseVolumeTextureFrame_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0040010000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USparseVolumeTextureFrame, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USparseVolumeTextureFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureFrame_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureFrame_Statics::NewProp_FrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USparseVolumeTextureFrame_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureFrame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USparseVolumeTextureFrame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USparseVolumeTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureFrame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USparseVolumeTextureFrame_Statics::ClassParams = {
	&USparseVolumeTextureFrame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USparseVolumeTextureFrame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureFrame_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTextureFrame_Statics::Class_MetaDataParams), Z_Construct_UClass_USparseVolumeTextureFrame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USparseVolumeTextureFrame()
{
	if (!Z_Registration_Info_UClass_USparseVolumeTextureFrame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USparseVolumeTextureFrame.OuterSingleton, Z_Construct_UClass_USparseVolumeTextureFrame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USparseVolumeTextureFrame.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USparseVolumeTextureFrame>()
{
	return USparseVolumeTextureFrame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USparseVolumeTextureFrame);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USparseVolumeTextureFrame)
// End Class USparseVolumeTextureFrame

// Begin Class UStreamableSparseVolumeTexture
void UStreamableSparseVolumeTexture::StaticRegisterNativesUStreamableSparseVolumeTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamableSparseVolumeTexture);
UClass* Z_Construct_UClass_UStreamableSparseVolumeTexture_NoRegister()
{
	return UStreamableSparseVolumeTexture::StaticClass();
}
struct Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// Represents a streamable SparseVolumeTexture asset and serves as base class for UStaticSparseVolumeTexture and UAnimatedSparseVolumeTexture. It has an array of USparseVolumeTextureFrame.\n" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "Represents a streamable SparseVolumeTexture asset and serves as base class for UStaticSparseVolumeTexture and UAnimatedSparseVolumeTexture. It has an array of USparseVolumeTextureFrame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeResolution_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumMipLevels_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatA_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormatB_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackValueA_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackValueB_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "// The addressing mode to use for the X axis.\n" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "// The addressing mode to use for the Y axis.\n" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressZ_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "// The addressing mode to use for the Z axis.\n" },
		{ "DisplayName", "Z-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "The addressing mode to use for the Z axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocalDDCOnly_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "// If enabled, the SparseVolumeTexture is only going to use the local DDC. For certain assets it might be reasonable to also use the remote DDC, but for larger assets this will mean long up- and download times.\n" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "If enabled, the SparseVolumeTexture is only going to use the local DDC. For certain assets it might be reasonable to also use the remote DDC, but for larger assets this will mean long up- and download times." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingPoolSizeFactor_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "// The SVT streaming pool is sized such that it can hold the largest frame multiplied by this value. There should be some slack to allow for prefetching frames.\n" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "The SVT streaming pool is sized such that it can hold the largest frame multiplied by this value. There should be some slack to allow for prefetching frames." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrefetchFrames_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "// When using non-blocking streaming requests, upcoming frames are loaded into memory in advance. This property controls how many frames to prefetch.\n" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "When using non-blocking streaming requests, upcoming frames are loaded into memory in advance. This property controls how many frames to prefetch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefetchPercentageStepSize_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "// When using non-blocking streaming requests, upcoming frames are loaded into memory in advance. This property controls the size reduction in percent of each additional prefetched frames.\n// A value of 20.0 would prefetch frame N+1 at 80%, N+2 at 60%, N+3 at 40% etc.\n" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "When using non-blocking streaming requests, upcoming frames are loaded into memory in advance. This property controls the size reduction in percent of each additional prefetched frames.\nA value of 20.0 would prefetch frame N+1 at 80%, N+2 at 60%, N+3 at 40% etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefetchPercentageBias_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "// When using non-blocking streaming requests, upcoming frames are loaded into memory in advance. This property applies a bias in percent to how much data is prefetched for every frame.\n// A value of 20.0 adds 20% to all prefetch percentages. So if PrefetchPercentageStepSize is set to 20.0, frame N+1 is prefetched at 80% + 20% = 100%, frame N+2 at 60% + 20% = 80%, N+3 at 40% + 20% = 60% etc.\n" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "When using non-blocking streaming requests, upcoming frames are loaded into memory in advance. This property applies a bias in percent to how much data is prefetched for every frame.\nA value of 20.0 adds 20% to all prefetch percentages. So if PrefetchPercentageStepSize is set to 20.0, frame N+1 is prefetched at 80% + 20% = 100%, frame N+2 at 60% + 20% = 80%, N+3 at 40% + 20% = 60% etc." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeBoundsMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeBoundsMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumMipLevels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumFrames;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FormatA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FormatB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackValueA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackValueB;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressZ;
	static void NewProp_bLocalDDCOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalDDCOnly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingPoolSizeFactor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrefetchFrames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrefetchPercentageStepSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrefetchPercentageBias;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Frames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeBoundsMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeBoundsMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitState;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamableSparseVolumeTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_VolumeResolution = { "VolumeResolution", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, VolumeResolution), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeResolution_MetaData), NewProp_VolumeResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_NumMipLevels = { "NumMipLevels", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, NumMipLevels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumMipLevels_MetaData), NewProp_NumMipLevels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, NumFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFrames_MetaData), NewProp_NumFrames_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_FormatA = { "FormatA", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, FormatA), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatA_MetaData), NewProp_FormatA_MetaData) }; // 2609309733
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_FormatB = { "FormatB", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, FormatB), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormatB_MetaData), NewProp_FormatB_MetaData) }; // 2609309733
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_FallbackValueA = { "FallbackValueA", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, FallbackValueA), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackValueA_MetaData), NewProp_FallbackValueA_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_FallbackValueB = { "FallbackValueB", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, FallbackValueB), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackValueB_MetaData), NewProp_FallbackValueB_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressX_MetaData), NewProp_AddressX_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressY_MetaData), NewProp_AddressY_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_AddressZ = { "AddressZ", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, AddressZ), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressZ_MetaData), NewProp_AddressZ_MetaData) }; // 2220430387
void Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_bLocalDDCOnly_SetBit(void* Obj)
{
	((UStreamableSparseVolumeTexture*)Obj)->bLocalDDCOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_bLocalDDCOnly = { "bLocalDDCOnly", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreamableSparseVolumeTexture), &Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_bLocalDDCOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocalDDCOnly_MetaData), NewProp_bLocalDDCOnly_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_StreamingPoolSizeFactor = { "StreamingPoolSizeFactor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, StreamingPoolSizeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingPoolSizeFactor_MetaData), NewProp_StreamingPoolSizeFactor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_NumberOfPrefetchFrames = { "NumberOfPrefetchFrames", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, NumberOfPrefetchFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPrefetchFrames_MetaData), NewProp_NumberOfPrefetchFrames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_PrefetchPercentageStepSize = { "PrefetchPercentageStepSize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, PrefetchPercentageStepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefetchPercentageStepSize_MetaData), NewProp_PrefetchPercentageStepSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_PrefetchPercentageBias = { "PrefetchPercentageBias", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, PrefetchPercentageBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefetchPercentageBias_MetaData), NewProp_PrefetchPercentageBias_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0114048000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0104000000000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0124080000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frames_MetaData), NewProp_Frames_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_VolumeBoundsMin = { "VolumeBoundsMin", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, VolumeBoundsMin), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeBoundsMin_MetaData), NewProp_VolumeBoundsMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_VolumeBoundsMax = { "VolumeBoundsMax", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, VolumeBoundsMax), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeBoundsMax_MetaData), NewProp_VolumeBoundsMax_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_InitState = { "InitState", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamableSparseVolumeTexture, InitState), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitState_MetaData), NewProp_InitState_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_VolumeResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_NumMipLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_NumFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_FormatA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_FormatB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_FallbackValueA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_FallbackValueB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_AddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_AddressY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_AddressZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_bLocalDDCOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_StreamingPoolSizeFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_NumberOfPrefetchFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_PrefetchPercentageStepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_PrefetchPercentageBias,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_AssetUserData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_Frames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_Frames,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_VolumeBoundsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_VolumeBoundsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::NewProp_InitState,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USparseVolumeTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UStreamableSparseVolumeTexture, IInterface_AssetUserData), false },  // 505316468
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::ClassParams = {
	&UStreamableSparseVolumeTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStreamableSparseVolumeTexture()
{
	if (!Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.OuterSingleton, Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreamableSparseVolumeTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UStreamableSparseVolumeTexture>()
{
	return UStreamableSparseVolumeTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamableSparseVolumeTexture);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStreamableSparseVolumeTexture)
// End Class UStreamableSparseVolumeTexture

// Begin Class UStaticSparseVolumeTexture
void UStaticSparseVolumeTexture::StaticRegisterNativesUStaticSparseVolumeTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticSparseVolumeTexture);
UClass* Z_Construct_UClass_UStaticSparseVolumeTexture_NoRegister()
{
	return UStaticSparseVolumeTexture::StaticClass();
}
struct Z_Construct_UClass_UStaticSparseVolumeTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// Represents a streamable SparseVolumeTexture asset with a single frame. Although there is only a single frame, it is still recommended to use USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest().\n" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "Represents a streamable SparseVolumeTexture asset with a single frame. Although there is only a single frame, it is still recommended to use USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest()." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticSparseVolumeTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStreamableSparseVolumeTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::ClassParams = {
	&UStaticSparseVolumeTexture::StaticClass,
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
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaticSparseVolumeTexture()
{
	if (!Z_Registration_Info_UClass_UStaticSparseVolumeTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticSparseVolumeTexture.OuterSingleton, Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaticSparseVolumeTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UStaticSparseVolumeTexture>()
{
	return UStaticSparseVolumeTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticSparseVolumeTexture);
// End Class UStaticSparseVolumeTexture

// Begin Class UAnimatedSparseVolumeTexture
void UAnimatedSparseVolumeTexture::StaticRegisterNativesUAnimatedSparseVolumeTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimatedSparseVolumeTexture);
UClass* Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister()
{
	return UAnimatedSparseVolumeTexture::StaticClass();
}
struct Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// Represents a streamable SparseVolumeTexture with one or more frames. Use USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest() to bind extract a particular frame to be used for rendering.\n" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "Represents a streamable SparseVolumeTexture with one or more frames. Use USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest() to bind extract a particular frame to be used for rendering." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedSparseVolumeTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStreamableSparseVolumeTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::ClassParams = {
	&UAnimatedSparseVolumeTexture::StaticClass,
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
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimatedSparseVolumeTexture()
{
	if (!Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.OuterSingleton, Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimatedSparseVolumeTexture>()
{
	return UAnimatedSparseVolumeTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedSparseVolumeTexture);
// End Class UAnimatedSparseVolumeTexture

// Begin Class UAnimatedSparseVolumeTextureController Function GetCurrentFrame
struct Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics
{
	struct AnimatedSparseVolumeTextureController_eventGetCurrentFrame_Parms
	{
		USparseVolumeTextureFrame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedSparseVolumeTextureController_eventGetCurrentFrame_Parms, ReturnValue), Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedSparseVolumeTextureController, nullptr, "GetCurrentFrame", nullptr, nullptr, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics::AnimatedSparseVolumeTextureController_eventGetCurrentFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics::AnimatedSparseVolumeTextureController_eventGetCurrentFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedSparseVolumeTextureController::execGetCurrentFrame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USparseVolumeTextureFrame**)Z_Param__Result=P_THIS->GetCurrentFrame();
	P_NATIVE_END;
}
// End Class UAnimatedSparseVolumeTextureController Function GetCurrentFrame

// Begin Class UAnimatedSparseVolumeTextureController Function GetCurrentFramesForInterpolation
struct Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics
{
	struct AnimatedSparseVolumeTextureController_eventGetCurrentFramesForInterpolation_Parms
	{
		USparseVolumeTextureFrame* Frame0;
		USparseVolumeTextureFrame* Frame1;
		float LerpAlpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Frame0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Frame1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::NewProp_Frame0 = { "Frame0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedSparseVolumeTextureController_eventGetCurrentFramesForInterpolation_Parms, Frame0), Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::NewProp_Frame1 = { "Frame1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedSparseVolumeTextureController_eventGetCurrentFramesForInterpolation_Parms, Frame1), Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::NewProp_LerpAlpha = { "LerpAlpha", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedSparseVolumeTextureController_eventGetCurrentFramesForInterpolation_Parms, LerpAlpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::NewProp_Frame0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::NewProp_Frame1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::NewProp_LerpAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedSparseVolumeTextureController, nullptr, "GetCurrentFramesForInterpolation", nullptr, nullptr, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::AnimatedSparseVolumeTextureController_eventGetCurrentFramesForInterpolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::AnimatedSparseVolumeTextureController_eventGetCurrentFramesForInterpolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedSparseVolumeTextureController::execGetCurrentFramesForInterpolation)
{
	P_GET_OBJECT_REF(USparseVolumeTextureFrame,Z_Param_Out_Frame0);
	P_GET_OBJECT_REF(USparseVolumeTextureFrame,Z_Param_Out_Frame1);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LerpAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurrentFramesForInterpolation(P_ARG_GC_BARRIER(Z_Param_Out_Frame0),P_ARG_GC_BARRIER(Z_Param_Out_Frame1),Z_Param_Out_LerpAlpha);
	P_NATIVE_END;
}
// End Class UAnimatedSparseVolumeTextureController Function GetCurrentFramesForInterpolation

// Begin Class UAnimatedSparseVolumeTextureController Function GetDuration
struct Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics
{
	struct AnimatedSparseVolumeTextureController_eventGetDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedSparseVolumeTextureController_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedSparseVolumeTextureController, nullptr, "GetDuration", nullptr, nullptr, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::AnimatedSparseVolumeTextureController_eventGetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::AnimatedSparseVolumeTextureController_eventGetDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedSparseVolumeTextureController::execGetDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDuration();
	P_NATIVE_END;
}
// End Class UAnimatedSparseVolumeTextureController Function GetDuration

// Begin Class UAnimatedSparseVolumeTextureController Function GetFractionalFrameIndex
struct Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics
{
	struct AnimatedSparseVolumeTextureController_eventGetFractionalFrameIndex_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedSparseVolumeTextureController_eventGetFractionalFrameIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedSparseVolumeTextureController, nullptr, "GetFractionalFrameIndex", nullptr, nullptr, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics::AnimatedSparseVolumeTextureController_eventGetFractionalFrameIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics::AnimatedSparseVolumeTextureController_eventGetFractionalFrameIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedSparseVolumeTextureController::execGetFractionalFrameIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFractionalFrameIndex();
	P_NATIVE_END;
}
// End Class UAnimatedSparseVolumeTextureController Function GetFractionalFrameIndex

// Begin Class UAnimatedSparseVolumeTextureController Function GetFrameByIndex
struct Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics
{
	struct AnimatedSparseVolumeTextureController_eventGetFrameByIndex_Parms
	{
		int32 FrameIndex;
		USparseVolumeTextureFrame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedSparseVolumeTextureController_eventGetFrameByIndex_Parms, FrameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedSparseVolumeTextureController_eventGetFrameByIndex_Parms, ReturnValue), Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::NewProp_FrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedSparseVolumeTextureController, nullptr, "GetFrameByIndex", nullptr, nullptr, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::AnimatedSparseVolumeTextureController_eventGetFrameByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::AnimatedSparseVolumeTextureController_eventGetFrameByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedSparseVolumeTextureController::execGetFrameByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USparseVolumeTextureFrame**)Z_Param__Result=P_THIS->GetFrameByIndex(Z_Param_FrameIndex);
	P_NATIVE_END;
}
// End Class UAnimatedSparseVolumeTextureController Function GetFrameByIndex

// Begin Class UAnimatedSparseVolumeTextureController Function Pause
struct Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedSparseVolumeTextureController, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Pause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedSparseVolumeTextureController::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// End Class UAnimatedSparseVolumeTextureController Function Pause

// Begin Class UAnimatedSparseVolumeTextureController Function Play
struct Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedSparseVolumeTextureController, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedSparseVolumeTextureController::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class UAnimatedSparseVolumeTextureController Function Play

// Begin Class UAnimatedSparseVolumeTextureController Function Stop
struct Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedSparseVolumeTextureController, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedSparseVolumeTextureController::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UAnimatedSparseVolumeTextureController Function Stop

// Begin Class UAnimatedSparseVolumeTextureController Function Update
struct Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics
{
	struct AnimatedSparseVolumeTextureController_eventUpdate_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedSparseVolumeTextureController_eventUpdate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimatedSparseVolumeTextureController, nullptr, "Update", nullptr, nullptr, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::AnimatedSparseVolumeTextureController_eventUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::AnimatedSparseVolumeTextureController_eventUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedSparseVolumeTextureController::execUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Update(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UAnimatedSparseVolumeTextureController Function Update

// Begin Class UAnimatedSparseVolumeTextureController
void UAnimatedSparseVolumeTextureController::StaticRegisterNativesUAnimatedSparseVolumeTextureController()
{
	UClass* Class = UAnimatedSparseVolumeTextureController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentFrame", &UAnimatedSparseVolumeTextureController::execGetCurrentFrame },
		{ "GetCurrentFramesForInterpolation", &UAnimatedSparseVolumeTextureController::execGetCurrentFramesForInterpolation },
		{ "GetDuration", &UAnimatedSparseVolumeTextureController::execGetDuration },
		{ "GetFractionalFrameIndex", &UAnimatedSparseVolumeTextureController::execGetFractionalFrameIndex },
		{ "GetFrameByIndex", &UAnimatedSparseVolumeTextureController::execGetFrameByIndex },
		{ "Pause", &UAnimatedSparseVolumeTextureController::execPause },
		{ "Play", &UAnimatedSparseVolumeTextureController::execPlay },
		{ "Stop", &UAnimatedSparseVolumeTextureController::execStop },
		{ "Update", &UAnimatedSparseVolumeTextureController::execUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimatedSparseVolumeTextureController);
UClass* Z_Construct_UClass_UAnimatedSparseVolumeTextureController_NoRegister()
{
	return UAnimatedSparseVolumeTextureController::StaticClass();
}
struct Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// Utility (blueprint) class for controlling SparseVolumeTexture playback.\n" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "Utility (blueprint) class for controlling SparseVolumeTexture playback." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTexture_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipLevel_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockingStreamingRequests_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SparseVolumeTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static void NewProp_bIsPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MipLevel;
	static void NewProp_bBlockingStreamingRequests_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingStreamingRequests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFrame, "GetCurrentFrame" }, // 3279998805
		{ &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetCurrentFramesForInterpolation, "GetCurrentFramesForInterpolation" }, // 1871526339
		{ &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetDuration, "GetDuration" }, // 2974526223
		{ &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFractionalFrameIndex, "GetFractionalFrameIndex" }, // 3108096713
		{ &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_GetFrameByIndex, "GetFrameByIndex" }, // 439409453
		{ &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Pause, "Pause" }, // 2760996901
		{ &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Play, "Play" }, // 4294470887
		{ &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Stop, "Stop" }, // 326456826
		{ &Z_Construct_UFunction_UAnimatedSparseVolumeTextureController_Update, "Update" }, // 1241675699
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedSparseVolumeTextureController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_SparseVolumeTexture = { "SparseVolumeTexture", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatedSparseVolumeTextureController, SparseVolumeTexture), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SparseVolumeTexture_MetaData), NewProp_SparseVolumeTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatedSparseVolumeTextureController, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
void Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
{
	((UAnimatedSparseVolumeTextureController*)Obj)->bIsPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimatedSparseVolumeTextureController), &Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlaying_MetaData), NewProp_bIsPlaying_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatedSparseVolumeTextureController, FrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_MipLevel = { "MipLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatedSparseVolumeTextureController, MipLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipLevel_MetaData), NewProp_MipLevel_MetaData) };
void Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_bBlockingStreamingRequests_SetBit(void* Obj)
{
	((UAnimatedSparseVolumeTextureController*)Obj)->bBlockingStreamingRequests = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_bBlockingStreamingRequests = { "bBlockingStreamingRequests", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimatedSparseVolumeTextureController), &Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_bBlockingStreamingRequests_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockingStreamingRequests_MetaData), NewProp_bBlockingStreamingRequests_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_SparseVolumeTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_bIsPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_MipLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::NewProp_bBlockingStreamingRequests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::ClassParams = {
	&UAnimatedSparseVolumeTextureController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimatedSparseVolumeTextureController()
{
	if (!Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.OuterSingleton, Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimatedSparseVolumeTextureController>()
{
	return UAnimatedSparseVolumeTextureController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedSparseVolumeTextureController);
// End Class UAnimatedSparseVolumeTextureController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USparseVolumeTexture, USparseVolumeTexture::StaticClass, TEXT("USparseVolumeTexture"), &Z_Registration_Info_UClass_USparseVolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USparseVolumeTexture), 10544534U) },
		{ Z_Construct_UClass_USparseVolumeTextureFrame, USparseVolumeTextureFrame::StaticClass, TEXT("USparseVolumeTextureFrame"), &Z_Registration_Info_UClass_USparseVolumeTextureFrame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USparseVolumeTextureFrame), 1378968003U) },
		{ Z_Construct_UClass_UStreamableSparseVolumeTexture, UStreamableSparseVolumeTexture::StaticClass, TEXT("UStreamableSparseVolumeTexture"), &Z_Registration_Info_UClass_UStreamableSparseVolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamableSparseVolumeTexture), 1330637381U) },
		{ Z_Construct_UClass_UStaticSparseVolumeTexture, UStaticSparseVolumeTexture::StaticClass, TEXT("UStaticSparseVolumeTexture"), &Z_Registration_Info_UClass_UStaticSparseVolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticSparseVolumeTexture), 3911922277U) },
		{ Z_Construct_UClass_UAnimatedSparseVolumeTexture, UAnimatedSparseVolumeTexture::StaticClass, TEXT("UAnimatedSparseVolumeTexture"), &Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatedSparseVolumeTexture), 2124970300U) },
		{ Z_Construct_UClass_UAnimatedSparseVolumeTextureController, UAnimatedSparseVolumeTextureController::StaticClass, TEXT("UAnimatedSparseVolumeTextureController"), &Z_Registration_Info_UClass_UAnimatedSparseVolumeTextureController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatedSparseVolumeTextureController), 2627421997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_94127048(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
