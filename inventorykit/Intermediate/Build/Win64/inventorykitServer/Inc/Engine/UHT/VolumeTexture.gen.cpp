// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/VolumeTexture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeTexture() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture();
ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UVolumeTexture
void UVolumeTexture::StaticRegisterNativesUVolumeTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeTexture);
UClass* Z_Construct_UClass_UVolumeTexture_NoRegister()
{
	return UVolumeTexture::StaticClass();
}
struct Z_Construct_UClass_UVolumeTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Compositing ImportSettings" },
		{ "IncludePath", "Engine/VolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source2DTexture_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** A (optional) reference texture from which the volume texture was built */" },
		{ "DisplayName", "Source Texture" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "ToolTip", "A (optional) reference texture from which the volume texture was built" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLightingGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source2DTileSizeX_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The reference texture tile size X */" },
		{ "DisplayName", "Tile Size X" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "ToolTip", "The reference texture tile size X" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source2DTileSizeY_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The reference texture tile size Y */" },
		{ "DisplayName", "Tile Size Y" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "ToolTip", "The reference texture tile size Y" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressMode_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The addressing mode to use for the X, Y and Z axis. */" },
		{ "DisplayName", "Tiling Method" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "ToolTip", "The addressing mode to use for the X, Y and Z axis." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source2DTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLightingGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Source2DTileSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Source2DTileSizeY;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTexture = { "Source2DTexture", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeTexture, Source2DTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source2DTexture_MetaData), NewProp_Source2DTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_SourceLightingGuid = { "SourceLightingGuid", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeTexture, SourceLightingGuid_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLightingGuid_MetaData), NewProp_SourceLightingGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeX = { "Source2DTileSizeX", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeTexture, Source2DTileSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source2DTileSizeX_MetaData), NewProp_Source2DTileSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeY = { "Source2DTileSizeY", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeTexture, Source2DTileSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source2DTileSizeY_MetaData), NewProp_Source2DTileSizeY_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_AddressMode = { "AddressMode", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeTexture, AddressMode), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressMode_MetaData), NewProp_AddressMode_MetaData) }; // 2220430387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumeTexture_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_SourceLightingGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeY,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_AddressMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVolumeTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeTexture_Statics::ClassParams = {
	&UVolumeTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVolumeTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UVolumeTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVolumeTexture()
{
	if (!Z_Registration_Info_UClass_UVolumeTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeTexture.OuterSingleton, Z_Construct_UClass_UVolumeTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVolumeTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVolumeTexture>()
{
	return UVolumeTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeTexture);
UVolumeTexture::~UVolumeTexture() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVolumeTexture)
// End Class UVolumeTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVolumeTexture, UVolumeTexture::StaticClass, TEXT("UVolumeTexture"), &Z_Registration_Info_UClass_UVolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeTexture), 3659558178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_809284397(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
