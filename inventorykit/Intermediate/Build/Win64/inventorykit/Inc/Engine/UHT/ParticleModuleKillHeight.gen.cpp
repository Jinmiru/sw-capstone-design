// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Kill/ParticleModuleKillHeight.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleKillHeight() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillHeight();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillHeight_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleKillHeight
void UParticleModuleKillHeight::StaticRegisterNativesUParticleModuleKillHeight()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleKillHeight);
UClass* Z_Construct_UClass_UParticleModuleKillHeight_NoRegister()
{
	return UParticleModuleKillHeight::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleKillHeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Kill Height" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Kill/ParticleModuleKillHeight.h" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Kill" },
		{ "Comment", "/** The height at which to kill the particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
		{ "ToolTip", "The height at which to kill the particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsolute_MetaData[] = {
		{ "Category", "Kill" },
		{ "Comment", "/** If true, the height should be treated as a world-space position. */" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
		{ "ToolTip", "If true, the height should be treated as a world-space position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFloor_MetaData[] = {
		{ "Category", "Kill" },
		{ "Comment", "/**\n\x09 *\x09If true, the plane should be considered a floor - ie kill anything BELOW it.\n\x09 *\x09If false, if is a ceiling - ie kill anything ABOVE it.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
		{ "ToolTip", "If true, the plane should be considered a floor - ie kill anything BELOW it.\nIf false, if is a ceiling - ie kill anything ABOVE it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyPSysScale_MetaData[] = {
		{ "Category", "Kill" },
		{ "Comment", "/** If true, take the particle systems scale into account */" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
		{ "ToolTip", "If true, take the particle systems scale into account" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Height;
	static void NewProp_bAbsolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
	static void NewProp_bFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFloor;
	static void NewProp_bApplyPSysScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyPSysScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleKillHeight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleKillHeight, Height), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bAbsolute_SetBit(void* Obj)
{
	((UParticleModuleKillHeight*)Obj)->bAbsolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleKillHeight), &Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsolute_MetaData), NewProp_bAbsolute_MetaData) };
void Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bFloor_SetBit(void* Obj)
{
	((UParticleModuleKillHeight*)Obj)->bFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bFloor = { "bFloor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleKillHeight), &Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFloor_MetaData), NewProp_bFloor_MetaData) };
void Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bApplyPSysScale_SetBit(void* Obj)
{
	((UParticleModuleKillHeight*)Obj)->bApplyPSysScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bApplyPSysScale = { "bApplyPSysScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleKillHeight), &Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bApplyPSysScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyPSysScale_MetaData), NewProp_bApplyPSysScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleKillHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bAbsolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bApplyPSysScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillHeight_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleKillHeight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleKillBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillHeight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleKillHeight_Statics::ClassParams = {
	&UParticleModuleKillHeight::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleKillHeight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillHeight_Statics::PropPointers),
	0,
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillHeight_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleKillHeight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleKillHeight()
{
	if (!Z_Registration_Info_UClass_UParticleModuleKillHeight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleKillHeight.OuterSingleton, Z_Construct_UClass_UParticleModuleKillHeight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleKillHeight.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleKillHeight>()
{
	return UParticleModuleKillHeight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleKillHeight);
UParticleModuleKillHeight::~UParticleModuleKillHeight() {}
// End Class UParticleModuleKillHeight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillHeight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleKillHeight, UParticleModuleKillHeight::StaticClass, TEXT("UParticleModuleKillHeight"), &Z_Registration_Info_UClass_UParticleModuleKillHeight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleKillHeight), 3729997143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillHeight_h_1757676767(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillHeight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillHeight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
