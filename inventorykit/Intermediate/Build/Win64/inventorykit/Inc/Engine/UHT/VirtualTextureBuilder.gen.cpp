// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VT/VirtualTextureBuilder.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTextureBuilder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureBuilder();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureBuilder_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UVirtualTextureBuilder
void UVirtualTextureBuilder::StaticRegisterNativesUVirtualTextureBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTextureBuilder);
UClass* Z_Construct_UClass_UVirtualTextureBuilder_NoRegister()
{
	return UVirtualTextureBuilder::StaticClass();
}
struct Z_Construct_UClass_UVirtualTextureBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * Container for a UVirtualTexture2D that can be built from a FVirtualTextureBuildDesc description.\n * This has a simple BuildTexture() interface but we may want to extend in the future to support partial builds\n * or other more blueprint driven approaches for data generation.\n */" },
		{ "IncludePath", "VT/VirtualTextureBuilder.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "Container for a UVirtualTexture2D that can be built from a FVirtualTextureBuildDesc description.\nThis has a simple BuildTexture() interface but we may want to extend in the future to support partial builds\nor other more blueprint driven approaches for data generation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The UTexture object. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "The UTexture object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureMobile_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The UTexture object for Mobile rendering. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "The UTexture object for Mobile rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildHash_MetaData[] = {
		{ "Comment", "/** Some client defined hash of that defines how the Texture was built. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "Some client defined hash of that defines how the Texture was built." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSeparateTextureForMobile_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Whether to use a separate texture for Mobile rendering. A separate texure will be built using mobile preview editor mode */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "Whether to use a separate texture for Mobile rendering. A separate texure will be built using mobile preview editor mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCookPerPlatform_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Per platform overrides for cooking the virtual texture. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "Per platform overrides for cooking the virtual texture." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureMobile;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_BuildHash;
	static void NewProp_bSeparateTextureForMobile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeparateTextureForMobile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnableCookPerPlatform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTextureBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTextureBuilder, Texture), Z_Construct_UClass_UVirtualTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_TextureMobile = { "TextureMobile", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTextureBuilder, TextureMobile), Z_Construct_UClass_UVirtualTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureMobile_MetaData), NewProp_TextureMobile_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash = { "BuildHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTextureBuilder, BuildHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildHash_MetaData), NewProp_BuildHash_MetaData) };
void Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_bSeparateTextureForMobile_SetBit(void* Obj)
{
	((UVirtualTextureBuilder*)Obj)->bSeparateTextureForMobile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_bSeparateTextureForMobile = { "bSeparateTextureForMobile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVirtualTextureBuilder), &Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_bSeparateTextureForMobile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSeparateTextureForMobile_MetaData), NewProp_bSeparateTextureForMobile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_EnableCookPerPlatform = { "EnableCookPerPlatform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTextureBuilder, EnableCookPerPlatform), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCookPerPlatform_MetaData), NewProp_EnableCookPerPlatform_MetaData) }; // 846681800
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_TextureMobile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_bSeparateTextureForMobile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_EnableCookPerPlatform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVirtualTextureBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::ClassParams = {
	&UVirtualTextureBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UVirtualTextureBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVirtualTextureBuilder()
{
	if (!Z_Registration_Info_UClass_UVirtualTextureBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTextureBuilder.OuterSingleton, Z_Construct_UClass_UVirtualTextureBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVirtualTextureBuilder.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVirtualTextureBuilder>()
{
	return UVirtualTextureBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTextureBuilder);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVirtualTextureBuilder)
// End Class UVirtualTextureBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualTextureBuilder, UVirtualTextureBuilder::StaticClass, TEXT("UVirtualTextureBuilder"), &Z_Registration_Info_UClass_UVirtualTextureBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTextureBuilder), 3692818713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_333522693(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
