// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/SubUV/ParticleModuleSubUVMovie.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSubUVMovie() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVMovie();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVMovie_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleSubUVMovie
void UParticleModuleSubUVMovie::StaticRegisterNativesUParticleModuleSubUVMovie()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSubUVMovie);
UClass* Z_Construct_UClass_UParticleModuleSubUVMovie_NoRegister()
{
	return UParticleModuleSubUVMovie::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleSubUVMovie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "SubUV Movie" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/SubUV/ParticleModuleSubUVMovie.h" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "Comment", "/**\n\x09 *\x09If true, use the emitter time to look up the frame rate.\n\x09 *\x09If false (default), use the particle relative time.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
		{ "ToolTip", "If true, use the emitter time to look up the frame rate.\nIf false (default), use the particle relative time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "Comment", "/**\n\x09 *\x09The frame rate the SubUV images should be 'flipped' thru at.\n\x09 \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
		{ "ToolTip", "The frame rate the SubUV images should be 'flipped' thru at." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingFrame_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "Comment", "/**\n\x09 *\x09The starting image index for the SubUV (1 = the first frame).\n\x09 *\x09""Assumes order of Left->Right, Top->Bottom\n\x09 *\x09If greater than the last frame, it will clamp to the last one.\n\x09 *\x09If 0, then randomly selects a starting frame.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
		{ "ToolTip", "The starting image index for the SubUV (1 = the first frame).\nAssumes order of Left->Right, Top->Bottom\nIf greater than the last frame, it will clamp to the last one.\nIf 0, then randomly selects a starting frame." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseEmitterTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSubUVMovie>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime_SetBit(void* Obj)
{
	((UParticleModuleSubUVMovie*)Obj)->bUseEmitterTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime = { "bUseEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSubUVMovie), &Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseEmitterTime_MetaData), NewProp_bUseEmitterTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSubUVMovie, FrameRate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) }; // 3711494764
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_StartingFrame = { "StartingFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSubUVMovie, StartingFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingFrame_MetaData), NewProp_StartingFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_StartingFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleSubUV,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::ClassParams = {
	&UParticleModuleSubUVMovie::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleSubUVMovie()
{
	if (!Z_Registration_Info_UClass_UParticleModuleSubUVMovie.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSubUVMovie.OuterSingleton, Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleSubUVMovie.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleSubUVMovie>()
{
	return UParticleModuleSubUVMovie::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSubUVMovie);
UParticleModuleSubUVMovie::~UParticleModuleSubUVMovie() {}
// End Class UParticleModuleSubUVMovie

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSubUVMovie, UParticleModuleSubUVMovie::StaticClass, TEXT("UParticleModuleSubUVMovie"), &Z_Registration_Info_UClass_UParticleModuleSubUVMovie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSubUVMovie), 3206230429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_44848079(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
