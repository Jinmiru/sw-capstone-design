// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundNodeDoppler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDoppler() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundNode();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeDoppler();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeDoppler_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundNodeDoppler
void USoundNodeDoppler::StaticRegisterNativesUSoundNodeDoppler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeDoppler);
UClass* Z_Construct_UClass_USoundNodeDoppler_NoRegister()
{
	return USoundNodeDoppler::StaticClass();
}
struct Z_Construct_UClass_USoundNodeDoppler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Computes doppler pitch shift\n */" },
		{ "DisplayName", "Doppler" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeDoppler.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDoppler.h" },
		{ "ToolTip", "Computes doppler pitch shift" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DopplerIntensity_MetaData[] = {
		{ "Category", "Doppler" },
		{ "Comment", "/* How much to scale the doppler shift (1.0 is normal). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDoppler.h" },
		{ "ToolTip", "How much to scale the doppler shift (1.0 is normal)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSmoothing_MetaData[] = {
		{ "Category", "Doppler" },
		{ "Comment", "/** Whether or not to do a smooth interp to our doppler */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDoppler.h" },
		{ "ToolTip", "Whether or not to do a smooth interp to our doppler" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingInterpSpeed_MetaData[] = {
		{ "Category", "Doppler" },
		{ "Comment", "/** Speed at which to interp pitch scale */" },
		{ "EditCondition", "bUseSmoothing" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDoppler.h" },
		{ "ToolTip", "Speed at which to interp pitch scale" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DopplerIntensity;
	static void NewProp_bUseSmoothing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSmoothing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeDoppler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_DopplerIntensity = { "DopplerIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeDoppler, DopplerIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DopplerIntensity_MetaData), NewProp_DopplerIntensity_MetaData) };
void Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_bUseSmoothing_SetBit(void* Obj)
{
	((USoundNodeDoppler*)Obj)->bUseSmoothing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_bUseSmoothing = { "bUseSmoothing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundNodeDoppler), &Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_bUseSmoothing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSmoothing_MetaData), NewProp_bUseSmoothing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_SmoothingInterpSpeed = { "SmoothingInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeDoppler, SmoothingInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingInterpSpeed_MetaData), NewProp_SmoothingInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeDoppler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_DopplerIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_bUseSmoothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_SmoothingInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDoppler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundNodeDoppler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDoppler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeDoppler_Statics::ClassParams = {
	&USoundNodeDoppler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundNodeDoppler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDoppler_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDoppler_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundNodeDoppler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundNodeDoppler()
{
	if (!Z_Registration_Info_UClass_USoundNodeDoppler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeDoppler.OuterSingleton, Z_Construct_UClass_USoundNodeDoppler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundNodeDoppler.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundNodeDoppler>()
{
	return USoundNodeDoppler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDoppler);
USoundNodeDoppler::~USoundNodeDoppler() {}
// End Class USoundNodeDoppler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeDoppler, USoundNodeDoppler::StaticClass, TEXT("USoundNodeDoppler"), &Z_Registration_Info_UClass_USoundNodeDoppler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeDoppler), 1337178639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_139515988(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
