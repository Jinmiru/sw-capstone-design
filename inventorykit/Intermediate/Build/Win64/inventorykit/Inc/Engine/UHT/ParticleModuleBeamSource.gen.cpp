// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamSource.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamSource() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamSource();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamSource_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleBeamSource
void UParticleModuleBeamSource::StaticRegisterNativesUParticleModuleBeamSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleBeamSource);
UClass* Z_Construct_UClass_UParticleModuleBeamSource_NoRegister()
{
	return UParticleModuleBeamSource::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleBeamSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Source" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMethod_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The method flag. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "The method flag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The strength of the tangent from the source point for each beam. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "The strength of the tangent from the source point for each beam." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSourceAbsolute_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Whether to treat the as an absolute position in world space. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "Whether to treat the as an absolute position in world space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Default source-point to use. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "Default source-point to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockSource_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Whether to lock the source to the life of the particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "Whether to lock the source to the life of the particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTangentMethod_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The method to use for the source tangent. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "The method to use for the source tangent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTangent_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The tangent for the source point for each beam. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "The tangent for the source point for each beam." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockSourceTangent_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Whether to lock the source to the life of the particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "Whether to lock the source to the life of the particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStrength_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The strength of the tangent from the source point for each beam. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "The strength of the tangent from the source point for each beam." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockSourceStength_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Whether to lock the source to the life of the particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "Whether to lock the source to the life of the particle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMethod;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
	static void NewProp_bSourceAbsolute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSourceAbsolute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static void NewProp_bLockSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceTangentMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTangent;
	static void NewProp_bLockSourceTangent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockSourceTangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStrength;
	static void NewProp_bLockSourceStength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockSourceStength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleBeamSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceMethod = { "SourceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamSource, SourceMethod), Z_Construct_UEnum_Engine_Beam2SourceTargetMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMethod_MetaData), NewProp_SourceMethod_MetaData) }; // 2452332023
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamSource, SourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceName_MetaData), NewProp_SourceName_MetaData) };
void Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bSourceAbsolute_SetBit(void* Obj)
{
	((UParticleModuleBeamSource*)Obj)->bSourceAbsolute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bSourceAbsolute = { "bSourceAbsolute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleBeamSource), &Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bSourceAbsolute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSourceAbsolute_MetaData), NewProp_bSourceAbsolute_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamSource, Source), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1238237137
void Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSource_SetBit(void* Obj)
{
	((UParticleModuleBeamSource*)Obj)->bLockSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSource = { "bLockSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleBeamSource), &Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockSource_MetaData), NewProp_bLockSource_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangentMethod = { "SourceTangentMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamSource, SourceTangentMethod), Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTangentMethod_MetaData), NewProp_SourceTangentMethod_MetaData) }; // 1216000768
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangent = { "SourceTangent", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamSource, SourceTangent), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTangent_MetaData), NewProp_SourceTangent_MetaData) }; // 1238237137
void Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceTangent_SetBit(void* Obj)
{
	((UParticleModuleBeamSource*)Obj)->bLockSourceTangent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceTangent = { "bLockSourceTangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleBeamSource), &Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceTangent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockSourceTangent_MetaData), NewProp_bLockSourceTangent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceStrength = { "SourceStrength", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleBeamSource, SourceStrength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStrength_MetaData), NewProp_SourceStrength_MetaData) }; // 3711494764
void Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceStength_SetBit(void* Obj)
{
	((UParticleModuleBeamSource*)Obj)->bLockSourceStength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceStength = { "bLockSourceStength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleBeamSource), &Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceStength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockSourceStength_MetaData), NewProp_bLockSourceStength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleBeamSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bSourceAbsolute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangentMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceStength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleBeamSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleBeamBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::ClassParams = {
	&UParticleModuleBeamSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleBeamSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleBeamSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleBeamSource()
{
	if (!Z_Registration_Info_UClass_UParticleModuleBeamSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleBeamSource.OuterSingleton, Z_Construct_UClass_UParticleModuleBeamSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleBeamSource.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleBeamSource>()
{
	return UParticleModuleBeamSource::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamSource);
UParticleModuleBeamSource::~UParticleModuleBeamSource() {}
// End Class UParticleModuleBeamSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleBeamSource, UParticleModuleBeamSource::StaticClass, TEXT("UParticleModuleBeamSource"), &Z_Registration_Info_UClass_UParticleModuleBeamSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleBeamSource), 2968865121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_3911396870(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
