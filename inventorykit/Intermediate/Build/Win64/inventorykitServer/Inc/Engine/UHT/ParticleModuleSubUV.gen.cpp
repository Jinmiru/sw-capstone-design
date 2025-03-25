// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/SubUV/ParticleModuleSubUV.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSubUV() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVBase();
ENGINE_API UClass* Z_Construct_UClass_USubUVAnimation_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleSubUV
void UParticleModuleSubUV::StaticRegisterNativesUParticleModuleSubUV()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSubUV);
UClass* Z_Construct_UClass_UParticleModuleSubUV_NoRegister()
{
	return UParticleModuleSubUV::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleSubUV_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "SubImage Index" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/SubUV/ParticleModuleSubUV.h" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "Comment", "/** \n\x09 * SubUV animation asset to use.\n\x09 * When specified, optimal bounding geometry for each SubUV frame will be used when rendering the sprites for this emitter instead of full quads.\n\x09 * This reduction in overdraw can reduce the GPU cost of rendering the emitter by 2x or 3x, depending on how much unused space was in the texture.\n\x09 * The bounding geometry is generated off of the texture alpha setup in the SubUV Animation asset, so that has to match what the material is using for opacity, or clipping will occur.\n\x09 * When specified, SubImages_Horizontal and SubImages_Vertical will come from the asset instead of the Required Module.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
		{ "ToolTip", "SubUV animation asset to use.\nWhen specified, optimal bounding geometry for each SubUV frame will be used when rendering the sprites for this emitter instead of full quads.\nThis reduction in overdraw can reduce the GPU cost of rendering the emitter by 2x or 3x, depending on how much unused space was in the texture.\nThe bounding geometry is generated off of the texture alpha setup in the SubUV Animation asset, so that has to match what the material is using for opacity, or clipping will occur.\nWhen specified, SubImages_Horizontal and SubImages_Vertical will come from the asset instead of the Required Module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubImageIndex_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/**\n\x09 *\x09The index of the sub-image that should be used for the particle.\n\x09 *\x09The value is retrieved using the RelativeTime of the particles.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
		{ "ToolTip", "The index of the sub-image that should be used for the particle.\nThe value is retrieved using the RelativeTime of the particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRealTime_MetaData[] = {
		{ "Category", "Realtime" },
		{ "Comment", "/** \n\x09 *\x09If true, use *real* time when updating the image index.\n\x09 *\x09The movie will update regardless of the slomo settings of the game.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
		{ "ToolTip", "If true, use *real* time when updating the image index.\nThe movie will update regardless of the slomo settings of the game." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubImageIndex;
	static void NewProp_bUseRealTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRealTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSubUV>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSubUV, Animation), Z_Construct_UClass_USubUVAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_SubImageIndex = { "SubImageIndex", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleSubUV, SubImageIndex), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubImageIndex_MetaData), NewProp_SubImageIndex_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime_SetBit(void* Obj)
{
	((UParticleModuleSubUV*)Obj)->bUseRealTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime = { "bUseRealTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleSubUV), &Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRealTime_MetaData), NewProp_bUseRealTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSubUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_SubImageIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleSubUV_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleSubUVBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSubUV_Statics::ClassParams = {
	&UParticleModuleSubUV::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleSubUV_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleSubUV_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleSubUV()
{
	if (!Z_Registration_Info_UClass_UParticleModuleSubUV.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSubUV.OuterSingleton, Z_Construct_UClass_UParticleModuleSubUV_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleSubUV.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleSubUV>()
{
	return UParticleModuleSubUV::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSubUV);
UParticleModuleSubUV::~UParticleModuleSubUV() {}
// End Class UParticleModuleSubUV

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSubUV, UParticleModuleSubUV::StaticClass, TEXT("UParticleModuleSubUV"), &Z_Registration_Info_UClass_UParticleModuleSubUV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSubUV), 3126286393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_2415830765(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
