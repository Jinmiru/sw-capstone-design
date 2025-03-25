// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundNodeModulator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeModulator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundNode();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulator();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulator_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundNodeModulator
void USoundNodeModulator::StaticRegisterNativesUSoundNodeModulator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeModulator);
UClass* Z_Construct_UClass_USoundNodeModulator_NoRegister()
{
	return USoundNodeModulator::StaticClass();
}
struct Z_Construct_UClass_USoundNodeModulator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Defines a random volume and pitch modification when a sound starts\n */" },
		{ "DisplayName", "Modulator" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeModulator.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "Defines a random volume and pitch modification when a sound starts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/* The lower bound of pitch (1.0 is no change). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The lower bound of pitch (1.0 is no change)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/* The upper bound of pitch (1.0 is no change). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The upper bound of pitch (1.0 is no change)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/* The lower bound of volume (1.0 is no change). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The lower bound of volume (1.0 is no change)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/* The upper bound of volume (1.0 is no change). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The upper bound of volume (1.0 is no change)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeModulator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin = { "PitchMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeModulator, PitchMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMin_MetaData), NewProp_PitchMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax = { "PitchMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeModulator, PitchMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMax_MetaData), NewProp_PitchMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin = { "VolumeMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeModulator, VolumeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMin_MetaData), NewProp_VolumeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax = { "VolumeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeModulator, VolumeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMax_MetaData), NewProp_VolumeMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundNodeModulator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeModulator_Statics::ClassParams = {
	&USoundNodeModulator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundNodeModulator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundNodeModulator()
{
	if (!Z_Registration_Info_UClass_USoundNodeModulator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeModulator.OuterSingleton, Z_Construct_UClass_USoundNodeModulator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundNodeModulator.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundNodeModulator>()
{
	return USoundNodeModulator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeModulator);
USoundNodeModulator::~USoundNodeModulator() {}
// End Class USoundNodeModulator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeModulator, USoundNodeModulator::StaticClass, TEXT("USoundNodeModulator"), &Z_Registration_Info_UClass_USoundNodeModulator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeModulator), 3768207218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_741436926(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
