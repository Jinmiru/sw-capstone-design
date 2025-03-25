// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeTextureStorageProvider.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeTextureStorageProvider() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTextureAllMipDataProviderFactory();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeTextureStorageProviderFactory();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_NoRegister();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin ScriptStruct FLandscapeTexture2DMipMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeTexture2DMipMap;
class UScriptStruct* FLandscapeTexture2DMipMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeTexture2DMipMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeTexture2DMipMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeTexture2DMipMap"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeTexture2DMipMap.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeTexture2DMipMap>()
{
	return FLandscapeTexture2DMipMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeTextureStorageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
		{ "Comment", "/** Width of the mip-map. */" },
		{ "ModuleRelativePath", "Classes/LandscapeTextureStorageProvider.h" },
		{ "ToolTip", "Width of the mip-map." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
		{ "Comment", "/** Height of the mip-map. */" },
		{ "ModuleRelativePath", "Classes/LandscapeTextureStorageProvider.h" },
		{ "ToolTip", "Height of the mip-map." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompressed_MetaData[] = {
		{ "Comment", "/** Whether the bulk data is compressed or not */" },
		{ "ModuleRelativePath", "Classes/LandscapeTextureStorageProvider.h" },
		{ "ToolTip", "Whether the bulk data is compressed or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static void NewProp_bCompressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeTexture2DMipMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeTexture2DMipMap, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeX_MetaData), NewProp_SizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeTexture2DMipMap, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeY_MetaData), NewProp_SizeY_MetaData) };
void Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::NewProp_bCompressed_SetBit(void* Obj)
{
	((FLandscapeTexture2DMipMap*)Obj)->bCompressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::NewProp_bCompressed = { "bCompressed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeTexture2DMipMap), &Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::NewProp_bCompressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompressed_MetaData), NewProp_bCompressed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::NewProp_bCompressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapeTexture2DMipMap",
	Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::PropPointers),
	sizeof(FLandscapeTexture2DMipMap),
	alignof(FLandscapeTexture2DMipMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeTexture2DMipMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeTexture2DMipMap.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapeTexture2DMipMap.InnerSingleton;
}
// End ScriptStruct FLandscapeTexture2DMipMap

// Begin Class ULandscapeTextureStorageProviderFactory
void ULandscapeTextureStorageProviderFactory::StaticRegisterNativesULandscapeTextureStorageProviderFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeTextureStorageProviderFactory);
UClass* Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_NoRegister()
{
	return ULandscapeTextureStorageProviderFactory::StaticClass();
}
struct Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "LandscapeTextureStorageProvider.h" },
		{ "ModuleRelativePath", "Classes/LandscapeTextureStorageProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeTextureStorageProviderFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureAllMipDataProviderFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_Statics::ClassParams = {
	&ULandscapeTextureStorageProviderFactory::StaticClass,
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
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeTextureStorageProviderFactory()
{
	if (!Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.OuterSingleton, Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeTextureStorageProviderFactory>()
{
	return ULandscapeTextureStorageProviderFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeTextureStorageProviderFactory);
ULandscapeTextureStorageProviderFactory::~ULandscapeTextureStorageProviderFactory() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeTextureStorageProviderFactory)
// End Class ULandscapeTextureStorageProviderFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLandscapeTexture2DMipMap::StaticStruct, Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics::NewStructOps, TEXT("LandscapeTexture2DMipMap"), &Z_Registration_Info_UScriptStruct_LandscapeTexture2DMipMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeTexture2DMipMap), 1953936057U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeTextureStorageProviderFactory, ULandscapeTextureStorageProviderFactory::StaticClass, TEXT("ULandscapeTextureStorageProviderFactory"), &Z_Registration_Info_UClass_ULandscapeTextureStorageProviderFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeTextureStorageProviderFactory), 1543457146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_2968260404(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
