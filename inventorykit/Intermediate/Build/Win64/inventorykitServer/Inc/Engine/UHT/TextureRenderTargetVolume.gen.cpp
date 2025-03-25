// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTargetVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTargetVolume() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetVolume();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTextureRenderTargetVolume
void UTextureRenderTargetVolume::StaticRegisterNativesUTextureRenderTargetVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureRenderTargetVolume);
UClass* Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister()
{
	return UTextureRenderTargetVolume::StaticClass();
}
struct Z_Construct_UClass_UTextureRenderTargetVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * TextureRenderTargetVolume\n *\n * Volume render target texture resource. This can be used as a target\n * for rendering as well as rendered as a regular Volume texture resource.\n *\n */" },
		{ "HideCategories", "Object Texture Compression Adjustments Compositing" },
		{ "IncludePath", "Engine/TextureRenderTargetVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "TextureRenderTargetVolume\n\nVolume render target texture resource. This can be used as a target\nfor rendering as well as rendered as a regular Volume texture resource." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureRenderTargetVolume" },
		{ "Comment", "/** The width of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "The width of the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureRenderTargetVolume" },
		{ "Comment", "/** The height of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "The height of the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeZ_MetaData[] = {
		{ "Category", "TextureRenderTargetVolume" },
		{ "Comment", "/** The depth of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "The depth of the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
		{ "Comment", "/** the color the texture is cleared to */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "the color the texture is cleared to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFormat_MetaData[] = {
		{ "Comment", "/** The format of the texture data.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\n\x09* Normally the format is derived from bHDR, this allows code to set the format explicitly. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "The format of the texture data.\nNormally the format is derived from bHDR, this allows code to set the format explicitly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHDR_MetaData[] = {
		{ "Category", "TextureRenderTargetVolume" },
		{ "Comment", "/** If OverrideFormat is not set, bHDR chooses the format of the RT.\n\x09With bHDR on it is RGBA16F , off is BGRA8 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "If OverrideFormat is not set, bHDR chooses the format of the RT.\n      With bHDR on it is RGBA16F , off is BGRA8" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceLinearGamma_MetaData[] = {
		{ "Comment", "/** True to force linear gamma space for this render target */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTargetVolume.h" },
		{ "ToolTip", "True to force linear gamma space for this render target" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideFormat;
	static void NewProp_bHDR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHDR;
	static void NewProp_bForceLinearGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceLinearGamma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTargetVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTargetVolume, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeX_MetaData), NewProp_SizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTargetVolume, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeY_MetaData), NewProp_SizeY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTargetVolume, SizeZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeZ_MetaData), NewProp_SizeZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTargetVolume, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearColor_MetaData), NewProp_ClearColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_OverrideFormat = { "OverrideFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTargetVolume, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideFormat_MetaData), NewProp_OverrideFormat_MetaData) }; // 2609309733
void Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_SetBit(void* Obj)
{
	((UTextureRenderTargetVolume*)Obj)->bHDR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR = { "bHDR", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextureRenderTargetVolume), &Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHDR_MetaData), NewProp_bHDR_MetaData) };
void Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_SetBit(void* Obj)
{
	((UTextureRenderTargetVolume*)Obj)->bForceLinearGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma = { "bForceLinearGamma", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextureRenderTargetVolume), &Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceLinearGamma_MetaData), NewProp_bForceLinearGamma_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTargetVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_SizeZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_ClearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_OverrideFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextureRenderTargetVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTargetVolume_Statics::ClassParams = {
	&UTextureRenderTargetVolume::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTextureRenderTargetVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureRenderTargetVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureRenderTargetVolume()
{
	if (!Z_Registration_Info_UClass_UTextureRenderTargetVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureRenderTargetVolume.OuterSingleton, Z_Construct_UClass_UTextureRenderTargetVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureRenderTargetVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureRenderTargetVolume>()
{
	return UTextureRenderTargetVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTargetVolume);
UTextureRenderTargetVolume::~UTextureRenderTargetVolume() {}
// End Class UTextureRenderTargetVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureRenderTargetVolume, UTextureRenderTargetVolume::StaticClass, TEXT("UTextureRenderTargetVolume"), &Z_Registration_Info_UClass_UTextureRenderTargetVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureRenderTargetVolume), 1944308066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_2576665122(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
