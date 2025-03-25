// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraBakerOutputSparseVolumeTexture.h"
#include "Niagara/Classes/NiagaraBakerOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraBakerOutputSparseVolumeTexture() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutput();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraBakerOutputSparseVolumeTexture
void UNiagaraBakerOutputSparseVolumeTexture::StaticRegisterNativesUNiagaraBakerOutputSparseVolumeTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraBakerOutputSparseVolumeTexture);
UClass* Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_NoRegister()
{
	return UNiagaraBakerOutputSparseVolumeTexture::StaticClass();
}
struct Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "SparseVolume Texture Output" },
		{ "IncludePath", "NiagaraBakerOutputSparseVolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputSparseVolumeTexture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBinding_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputSparseVolumeTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTextureAssetPathFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09When enabled a volume atlas is created, the atlas is along X & Y not Z based on baker settings.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputSparseVolumeTexture.h" },
		{ "ToolTip", "When enabled a volume atlas is created, the atlas is along X & Y not Z based on baker settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBinding;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SparseVolumeTextureAssetPathFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBakerOutputSparseVolumeTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::NewProp_SourceBinding = { "SourceBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputSparseVolumeTexture, SourceBinding), Z_Construct_UScriptStruct_FNiagaraBakerTextureSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBinding_MetaData), NewProp_SourceBinding_MetaData) }; // 1578020863
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::NewProp_SparseVolumeTextureAssetPathFormat = { "SparseVolumeTextureAssetPathFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputSparseVolumeTexture, SparseVolumeTextureAssetPathFormat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SparseVolumeTextureAssetPathFormat_MetaData), NewProp_SparseVolumeTextureAssetPathFormat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::NewProp_SourceBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::NewProp_SparseVolumeTextureAssetPathFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraBakerOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::ClassParams = {
	&UNiagaraBakerOutputSparseVolumeTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture()
{
	if (!Z_Registration_Info_UClass_UNiagaraBakerOutputSparseVolumeTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraBakerOutputSparseVolumeTexture.OuterSingleton, Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraBakerOutputSparseVolumeTexture.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraBakerOutputSparseVolumeTexture>()
{
	return UNiagaraBakerOutputSparseVolumeTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBakerOutputSparseVolumeTexture);
UNiagaraBakerOutputSparseVolumeTexture::~UNiagaraBakerOutputSparseVolumeTexture() {}
// End Class UNiagaraBakerOutputSparseVolumeTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSparseVolumeTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraBakerOutputSparseVolumeTexture, UNiagaraBakerOutputSparseVolumeTexture::StaticClass, TEXT("UNiagaraBakerOutputSparseVolumeTexture"), &Z_Registration_Info_UClass_UNiagaraBakerOutputSparseVolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraBakerOutputSparseVolumeTexture), 821899617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSparseVolumeTexture_h_2961787004(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSparseVolumeTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSparseVolumeTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
