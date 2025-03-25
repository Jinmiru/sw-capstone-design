// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventGenerator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventGenerator();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleEventType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FParticleEvent_GenerateInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo;
class UScriptStruct* FParticleEvent_GenerateInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleEvent_GenerateInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleEvent_GenerateInfo>()
{
	return FParticleEvent_GenerateInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** The type of event. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "The type of event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** How often to trigger the event (<= 1 means EVERY time). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "How often to trigger the event (<= 1 means EVERY time)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleFrequency_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Only fire the first time (collision only). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Only fire the first time (collision only)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstTimeOnly_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Only fire the first time (collision only). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Only fire the first time (collision only)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTimeOnly_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Only fire the last time (collision only). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Only fire the last time (collision only)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseReflectedImpactVector_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Use the impact FVector not the hit normal (collision only). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Use the impact FVector not the hit normal (collision only)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOrbitOffset_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Use the orbit offset when computing the position at which the event occurred. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Use the orbit offset when computing the position at which the event occurred." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomName_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Should the event tag with a custom name? Leave blank for the default. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Should the event tag with a custom name? Leave blank for the default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** The events we want to fire off when this event has been generated */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "The events we want to fire off when this event has been generated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleModuleEventsToSendToGame_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** The events we want to fire off when this event has been generated */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "The events we want to fire off when this event has been generated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleFrequency;
	static void NewProp_FirstTimeOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstTimeOnly;
	static void NewProp_LastTimeOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LastTimeOnly;
	static void NewProp_UseReflectedImpactVector_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseReflectedImpactVector;
	static void NewProp_bUseOrbitOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOrbitOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleModuleEventsToSendToGame_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticleModuleEventsToSendToGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleEvent_GenerateInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleEvent_GenerateInfo, Type), Z_Construct_UEnum_Engine_EParticleEventType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 329606486
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleEvent_GenerateInfo, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleFrequency = { "ParticleFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleEvent_GenerateInfo, ParticleFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleFrequency_MetaData), NewProp_ParticleFrequency_MetaData) };
void Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly_SetBit(void* Obj)
{
	((FParticleEvent_GenerateInfo*)Obj)->FirstTimeOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly = { "FirstTimeOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FParticleEvent_GenerateInfo), &Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstTimeOnly_MetaData), NewProp_FirstTimeOnly_MetaData) };
void Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly_SetBit(void* Obj)
{
	((FParticleEvent_GenerateInfo*)Obj)->LastTimeOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly = { "LastTimeOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FParticleEvent_GenerateInfo), &Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTimeOnly_MetaData), NewProp_LastTimeOnly_MetaData) };
void Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector_SetBit(void* Obj)
{
	((FParticleEvent_GenerateInfo*)Obj)->UseReflectedImpactVector = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector = { "UseReflectedImpactVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FParticleEvent_GenerateInfo), &Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseReflectedImpactVector_MetaData), NewProp_UseReflectedImpactVector_MetaData) };
void Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset_SetBit(void* Obj)
{
	((FParticleEvent_GenerateInfo*)Obj)->bUseOrbitOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset = { "bUseOrbitOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FParticleEvent_GenerateInfo), &Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOrbitOffset_MetaData), NewProp_bUseOrbitOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_CustomName = { "CustomName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleEvent_GenerateInfo, CustomName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomName_MetaData), NewProp_CustomName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_Inner = { "ParticleModuleEventsToSendToGame", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData), NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame = { "ParticleModuleEventsToSendToGame", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleEvent_GenerateInfo, ParticleModuleEventsToSendToGame), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleModuleEventsToSendToGame_MetaData), NewProp_ParticleModuleEventsToSendToGame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_CustomName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ParticleEvent_GenerateInfo",
	Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::PropPointers),
	sizeof(FParticleEvent_GenerateInfo),
	alignof(FParticleEvent_GenerateInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo.InnerSingleton, Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo.InnerSingleton;
}
// End ScriptStruct FParticleEvent_GenerateInfo

// Begin Class UParticleModuleEventGenerator
void UParticleModuleEventGenerator::StaticRegisterNativesUParticleModuleEventGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleEventGenerator);
UClass* Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister()
{
	return UParticleModuleEventGenerator::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleEventGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Event Generator" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000008000000008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo, METADATA_PARAMS(0, nullptr) }; // 3929079027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010008002000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleEventGenerator, Events), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_MetaData), NewProp_Events_MetaData) }; // 3929079027
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleEventGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleEventGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleEventBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventGenerator_Statics::ClassParams = {
	&UParticleModuleEventGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleEventGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleEventGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleEventGenerator()
{
	if (!Z_Registration_Info_UClass_UParticleModuleEventGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleEventGenerator.OuterSingleton, Z_Construct_UClass_UParticleModuleEventGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleEventGenerator.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleEventGenerator>()
{
	return UParticleModuleEventGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventGenerator);
UParticleModuleEventGenerator::~UParticleModuleEventGenerator() {}
// End Class UParticleModuleEventGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParticleEvent_GenerateInfo::StaticStruct, Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewStructOps, TEXT("ParticleEvent_GenerateInfo"), &Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleEvent_GenerateInfo), 3929079027U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleEventGenerator, UParticleModuleEventGenerator::StaticClass, TEXT("UParticleModuleEventGenerator"), &Z_Registration_Info_UClass_UParticleModuleEventGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleEventGenerator), 386061938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_2348708919(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
