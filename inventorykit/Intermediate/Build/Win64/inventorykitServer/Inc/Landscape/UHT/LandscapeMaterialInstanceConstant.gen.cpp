// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeMaterialInstanceConstant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMaterialInstanceConstant() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin ScriptStruct FLandscapeMaterialTextureStreamingInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo;
class UScriptStruct* FLandscapeMaterialTextureStreamingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeMaterialTextureStreamingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeMaterialTextureStreamingInfo>()
{
	return FLandscapeMaterialTextureStreamingInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexelFactor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TextureName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TexelFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeMaterialTextureStreamingInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TextureName = { "TextureName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeMaterialTextureStreamingInfo, TextureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureName_MetaData), NewProp_TextureName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TexelFactor = { "TexelFactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeMaterialTextureStreamingInfo, TexelFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexelFactor_MetaData), NewProp_TexelFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TextureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TexelFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapeMaterialTextureStreamingInfo",
	Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::PropPointers),
	sizeof(FLandscapeMaterialTextureStreamingInfo),
	alignof(FLandscapeMaterialTextureStreamingInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo.InnerSingleton;
}
// End ScriptStruct FLandscapeMaterialTextureStreamingInfo

// Begin Class ULandscapeMaterialInstanceConstant
void ULandscapeMaterialInstanceConstant::StaticRegisterNativesULandscapeMaterialInstanceConstant()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeMaterialInstanceConstant);
UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister()
{
	return ULandscapeMaterialInstanceConstant::StaticClass();
}
struct Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "LandscapeMaterialInstanceConstant.h" },
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLayerThumbnail_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableTessellation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEditorToolUsage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureStreamingInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureStreamingInfo;
	static void NewProp_bIsLayerThumbnail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLayerThumbnail;
	static void NewProp_bDisableTessellation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableTessellation;
	static void NewProp_bMobile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobile;
	static void NewProp_bEditorToolUsage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditorToolUsage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeMaterialInstanceConstant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo_Inner = { "TextureStreamingInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo, METADATA_PARAMS(0, nullptr) }; // 2385887463
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo = { "TextureStreamingInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMaterialInstanceConstant, TextureStreamingInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureStreamingInfo_MetaData), NewProp_TextureStreamingInfo_MetaData) }; // 2385887463
void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_SetBit(void* Obj)
{
	((ULandscapeMaterialInstanceConstant*)Obj)->bIsLayerThumbnail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail = { "bIsLayerThumbnail", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLayerThumbnail_MetaData), NewProp_bIsLayerThumbnail_MetaData) };
void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_SetBit(void* Obj)
{
	((ULandscapeMaterialInstanceConstant*)Obj)->bDisableTessellation_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation = { "bDisableTessellation", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableTessellation_MetaData), NewProp_bDisableTessellation_MetaData) };
void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_SetBit(void* Obj)
{
	((ULandscapeMaterialInstanceConstant*)Obj)->bMobile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile = { "bMobile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobile_MetaData), NewProp_bMobile_MetaData) };
void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_SetBit(void* Obj)
{
	((ULandscapeMaterialInstanceConstant*)Obj)->bEditorToolUsage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage = { "bEditorToolUsage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEditorToolUsage_MetaData), NewProp_bEditorToolUsage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialInstanceConstant,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::ClassParams = {
	&ULandscapeMaterialInstanceConstant::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers),
	0,
	0x008820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant()
{
	if (!Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant.OuterSingleton, Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeMaterialInstanceConstant>()
{
	return ULandscapeMaterialInstanceConstant::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMaterialInstanceConstant);
ULandscapeMaterialInstanceConstant::~ULandscapeMaterialInstanceConstant() {}
// End Class ULandscapeMaterialInstanceConstant

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLandscapeMaterialTextureStreamingInfo::StaticStruct, Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewStructOps, TEXT("LandscapeMaterialTextureStreamingInfo"), &Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeMaterialTextureStreamingInfo), 2385887463U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeMaterialInstanceConstant, ULandscapeMaterialInstanceConstant::StaticClass, TEXT("ULandscapeMaterialInstanceConstant"), &Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeMaterialInstanceConstant), 1822912056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_656436241(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
