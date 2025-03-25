// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceAudioSpectrum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAudioSpectrum() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceAudioSpectrum
void UNiagaraDataInterfaceAudioSpectrum::StaticRegisterNativesUNiagaraDataInterfaceAudioSpectrum()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceAudioSpectrum);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_NoRegister()
{
	return UNiagaraDataInterfaceAudioSpectrum::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Data Interface allowing sampling of recent audio spectrum. */" },
		{ "DisplayName", "Audio Spectrum" },
		{ "IncludePath", "NiagaraDataInterfaceAudioSpectrum.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioSpectrum.h" },
		{ "ToolTip", "Data Interface allowing sampling of recent audio spectrum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Spectrum" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "16" },
		{ "Comment", "/** The number of spectrum samples to pass to the GPU */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioSpectrum.h" },
		{ "ToolTip", "The number of spectrum samples to pass to the GPU" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumFrequency_MetaData[] = {
		{ "Category", "Spectrum" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** The minimum frequency represented in the spectrum. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioSpectrum.h" },
		{ "ToolTip", "The minimum frequency represented in the spectrum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumFrequency_MetaData[] = {
		{ "Category", "Spectrum" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** The maximum frequency represented in the spectrum. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioSpectrum.h" },
		{ "ToolTip", "The maximum frequency represented in the spectrum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFloorDb_MetaData[] = {
		{ "Category", "Spectrum" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-120.0" },
		{ "Comment", "/** The decibel level considered as silence. This is used to scale the output of the spectrum. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioSpectrum.h" },
		{ "ToolTip", "The decibel level considered as silence. This is used to scale the output of the spectrum." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseFloorDb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAudioSpectrum>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioSpectrum, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::NewProp_MinimumFrequency = { "MinimumFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioSpectrum, MinimumFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumFrequency_MetaData), NewProp_MinimumFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::NewProp_MaximumFrequency = { "MaximumFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioSpectrum, MaximumFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumFrequency_MetaData), NewProp_MaximumFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::NewProp_NoiseFloorDb = { "NoiseFloorDb", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceAudioSpectrum, NoiseFloorDb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseFloorDb_MetaData), NewProp_NoiseFloorDb_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::NewProp_MinimumFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::NewProp_MaximumFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::NewProp_NoiseFloorDb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::ClassParams = {
	&UNiagaraDataInterfaceAudioSpectrum::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSpectrum.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSpectrum.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSpectrum.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAudioSpectrum>()
{
	return UNiagaraDataInterfaceAudioSpectrum::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAudioSpectrum);
UNiagaraDataInterfaceAudioSpectrum::~UNiagaraDataInterfaceAudioSpectrum() {}
// End Class UNiagaraDataInterfaceAudioSpectrum

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioSpectrum_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceAudioSpectrum, UNiagaraDataInterfaceAudioSpectrum::StaticClass, TEXT("UNiagaraDataInterfaceAudioSpectrum"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSpectrum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceAudioSpectrum), 862968891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioSpectrum_h_2190559191(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioSpectrum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioSpectrum_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
