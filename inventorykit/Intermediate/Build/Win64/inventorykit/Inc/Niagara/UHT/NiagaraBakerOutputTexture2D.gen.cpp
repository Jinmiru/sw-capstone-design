// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraBakerOutputTexture2D.h"
#include "Niagara/Classes/NiagaraBakerOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraBakerOutputTexture2D() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutput();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutputTexture2D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutputTexture2D_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraBakerOutputTexture2D
void UNiagaraBakerOutputTexture2D::StaticRegisterNativesUNiagaraBakerOutputTexture2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraBakerOutputTexture2D);
UClass* Z_Construct_UClass_UNiagaraBakerOutputTexture2D_NoRegister()
{
	return UNiagaraBakerOutputTexture2D::StaticClass();
}
struct Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Texture 2D Output" },
		{ "IncludePath", "NiagaraBakerOutputTexture2D.h" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBinding_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Source visualization we should capture, i.e. Scene Color, World Normal, etc */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "Source visualization we should capture, i.e. Scene Color, World Normal, etc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateAtlas_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetTextureAddressX_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetTextureAddressY_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Size of each frame we generate. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "Size of each frame we generate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtlasTextureSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Size of the atlas texture when generating an atlas. */" },
		{ "EditCondition", "bGenerateAtlas" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "Size of the atlas texture when generating an atlas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureAddressX_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** After baking sets the texture address mode to use on the X axis. */" },
		{ "EditCondition", "bSetTextureAddressX" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "After baking sets the texture address mode to use on the X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureAddressY_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** After baking sets the texture address mode to use on the Y axis. */" },
		{ "EditCondition", "bSetTextureAddressY" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "After baking sets the texture address mode to use on the Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtlasAssetPathFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09When enabled a texture atlas is created\n\x09*/" },
		{ "EditCondition", "bGenerateAtlas" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "When enabled a texture atlas is created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesAssetPathFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09When enabled each frame will create an asset.\n\x09*/" },
		{ "EditCondition", "bGenerateFrames" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "When enabled each frame will create an asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesExportPathFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09When enabled each frame will be exported to the output path using the format extension.\n\x09*/" },
		{ "EditCondition", "bExportFrames" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "When enabled each frame will be exported to the output path using the format extension." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBinding;
	static void NewProp_bGenerateAtlas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateAtlas;
	static void NewProp_bGenerateFrames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateFrames;
	static void NewProp_bExportFrames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportFrames;
	static void NewProp_bSetTextureAddressX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetTextureAddressX;
	static void NewProp_bSetTextureAddressY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetTextureAddressY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtlasTextureSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureAddressX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureAddressY;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AtlasAssetPathFormat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FramesAssetPathFormat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FramesExportPathFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBakerOutputTexture2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_SourceBinding = { "SourceBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, SourceBinding), Z_Construct_UScriptStruct_FNiagaraBakerTextureSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBinding_MetaData), NewProp_SourceBinding_MetaData) }; // 1578020863
void Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateAtlas_SetBit(void* Obj)
{
	((UNiagaraBakerOutputTexture2D*)Obj)->bGenerateAtlas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateAtlas = { "bGenerateAtlas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraBakerOutputTexture2D), &Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateAtlas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateAtlas_MetaData), NewProp_bGenerateAtlas_MetaData) };
void Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateFrames_SetBit(void* Obj)
{
	((UNiagaraBakerOutputTexture2D*)Obj)->bGenerateFrames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateFrames = { "bGenerateFrames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraBakerOutputTexture2D), &Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateFrames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateFrames_MetaData), NewProp_bGenerateFrames_MetaData) };
void Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bExportFrames_SetBit(void* Obj)
{
	((UNiagaraBakerOutputTexture2D*)Obj)->bExportFrames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bExportFrames = { "bExportFrames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraBakerOutputTexture2D), &Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bExportFrames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportFrames_MetaData), NewProp_bExportFrames_MetaData) };
void Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressX_SetBit(void* Obj)
{
	((UNiagaraBakerOutputTexture2D*)Obj)->bSetTextureAddressX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressX = { "bSetTextureAddressX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraBakerOutputTexture2D), &Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetTextureAddressX_MetaData), NewProp_bSetTextureAddressX_MetaData) };
void Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressY_SetBit(void* Obj)
{
	((UNiagaraBakerOutputTexture2D*)Obj)->bSetTextureAddressY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressY = { "bSetTextureAddressY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraBakerOutputTexture2D), &Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetTextureAddressY_MetaData), NewProp_bSetTextureAddressY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FrameSize = { "FrameSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, FrameSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameSize_MetaData), NewProp_FrameSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasTextureSize = { "AtlasTextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, AtlasTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtlasTextureSize_MetaData), NewProp_AtlasTextureSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressX = { "TextureAddressX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, TextureAddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureAddressX_MetaData), NewProp_TextureAddressX_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressY = { "TextureAddressY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, TextureAddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureAddressY_MetaData), NewProp_TextureAddressY_MetaData) }; // 2220430387
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasAssetPathFormat = { "AtlasAssetPathFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, AtlasAssetPathFormat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtlasAssetPathFormat_MetaData), NewProp_AtlasAssetPathFormat_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesAssetPathFormat = { "FramesAssetPathFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, FramesAssetPathFormat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesAssetPathFormat_MetaData), NewProp_FramesAssetPathFormat_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesExportPathFormat = { "FramesExportPathFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, FramesExportPathFormat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesExportPathFormat_MetaData), NewProp_FramesExportPathFormat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_SourceBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateAtlas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bExportFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FrameSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasAssetPathFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesAssetPathFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesExportPathFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraBakerOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::ClassParams = {
	&UNiagaraBakerOutputTexture2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraBakerOutputTexture2D()
{
	if (!Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D.OuterSingleton, Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraBakerOutputTexture2D>()
{
	return UNiagaraBakerOutputTexture2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBakerOutputTexture2D);
UNiagaraBakerOutputTexture2D::~UNiagaraBakerOutputTexture2D() {}
// End Class UNiagaraBakerOutputTexture2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputTexture2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraBakerOutputTexture2D, UNiagaraBakerOutputTexture2D::StaticClass, TEXT("UNiagaraBakerOutputTexture2D"), &Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraBakerOutputTexture2D), 1636693328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputTexture2D_h_3437769873(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputTexture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputTexture2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
