// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemReplay() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemReplay();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemReplay_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleEmitterReplayFrame();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemReplayFrame();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FParticleEmitterReplayFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame;
class UScriptStruct* FParticleEmitterReplayFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleEmitterReplayFrame, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleEmitterReplayFrame"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleEmitterReplayFrame>()
{
	return FParticleEmitterReplayFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleEmitterReplayFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ParticleEmitterReplayFrame",
	nullptr,
	0,
	sizeof(FParticleEmitterReplayFrame),
	alignof(FParticleEmitterReplayFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParticleEmitterReplayFrame()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame.InnerSingleton, Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame.InnerSingleton;
}
// End ScriptStruct FParticleEmitterReplayFrame

// Begin ScriptStruct FParticleSystemReplayFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame;
class UScriptStruct* FParticleSystemReplayFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSystemReplayFrame, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemReplayFrame"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleSystemReplayFrame>()
{
	return FParticleSystemReplayFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A single frame within this replay */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
		{ "ToolTip", "A single frame within this replay" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSystemReplayFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ParticleSystemReplayFrame",
	nullptr,
	0,
	sizeof(FParticleSystemReplayFrame),
	alignof(FParticleSystemReplayFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemReplayFrame()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame.InnerSingleton, Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame.InnerSingleton;
}
// End ScriptStruct FParticleSystemReplayFrame

// Begin Class UParticleSystemReplay
void UParticleSystemReplay::StaticRegisterNativesUParticleSystemReplay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleSystemReplay);
UClass* Z_Construct_UClass_UParticleSystemReplay_NoRegister()
{
	return UParticleSystemReplay::StaticClass();
}
struct Z_Construct_UClass_UParticleSystemReplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "ParticleSystemReplay" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleSystemReplay.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipIDNumber_MetaData[] = {
		{ "Category", "ParticleSystemReplay" },
		{ "Comment", "/** Unique ID number for this replay clip */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
		{ "ToolTip", "Unique ID number for this replay clip" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClipIDNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSystemReplay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleSystemReplay_Statics::NewProp_ClipIDNumber = { "ClipIDNumber", nullptr, (EPropertyFlags)0x0010000000202001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleSystemReplay, ClipIDNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipIDNumber_MetaData), NewProp_ClipIDNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleSystemReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemReplay_Statics::NewProp_ClipIDNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemReplay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleSystemReplay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemReplay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleSystemReplay_Statics::ClassParams = {
	&UParticleSystemReplay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleSystemReplay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemReplay_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemReplay_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleSystemReplay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleSystemReplay()
{
	if (!Z_Registration_Info_UClass_UParticleSystemReplay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleSystemReplay.OuterSingleton, Z_Construct_UClass_UParticleSystemReplay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleSystemReplay.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleSystemReplay>()
{
	return UParticleSystemReplay::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystemReplay);
UParticleSystemReplay::~UParticleSystemReplay() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystemReplay)
// End Class UParticleSystemReplay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParticleEmitterReplayFrame::StaticStruct, Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::NewStructOps, TEXT("ParticleEmitterReplayFrame"), &Z_Registration_Info_UScriptStruct_ParticleEmitterReplayFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleEmitterReplayFrame), 2131455931U) },
		{ FParticleSystemReplayFrame::StaticStruct, Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::NewStructOps, TEXT("ParticleSystemReplayFrame"), &Z_Registration_Info_UScriptStruct_ParticleSystemReplayFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleSystemReplayFrame), 3602082628U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleSystemReplay, UParticleSystemReplay::StaticClass, TEXT("UParticleSystemReplay"), &Z_Registration_Info_UClass_UParticleSystemReplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleSystemReplay), 774478307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_3906805532(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
