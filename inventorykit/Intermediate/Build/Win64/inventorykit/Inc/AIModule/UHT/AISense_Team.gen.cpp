// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Team.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Team() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISense();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Team();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Team_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAITeamStimulusEvent();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FAITeamStimulusEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AITeamStimulusEvent;
class UScriptStruct* FAITeamStimulusEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AITeamStimulusEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AITeamStimulusEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITeamStimulusEvent, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AITeamStimulusEvent"));
	}
	return Z_Registration_Info_UScriptStruct_AITeamStimulusEvent.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAITeamStimulusEvent>()
{
	return FAITeamStimulusEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Broadcaster_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Broadcaster;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITeamStimulusEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Broadcaster = { "Broadcaster", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITeamStimulusEvent, Broadcaster), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Broadcaster_MetaData), NewProp_Broadcaster_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITeamStimulusEvent, Enemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemy_MetaData), NewProp_Enemy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Broadcaster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Enemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"AITeamStimulusEvent",
	Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::PropPointers),
	sizeof(FAITeamStimulusEvent),
	alignof(FAITeamStimulusEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAITeamStimulusEvent()
{
	if (!Z_Registration_Info_UScriptStruct_AITeamStimulusEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AITeamStimulusEvent.InnerSingleton, Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AITeamStimulusEvent.InnerSingleton;
}
// End ScriptStruct FAITeamStimulusEvent

// Begin Class UAISense_Team
void UAISense_Team::StaticRegisterNativesUAISense_Team()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Team);
UClass* Z_Construct_UClass_UAISense_Team_NoRegister()
{
	return UAISense_Team::StaticClass();
}
struct Z_Construct_UClass_UAISense_Team_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Team.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Team>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents_Inner = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAITeamStimulusEvent, METADATA_PARAMS(0, nullptr) }; // 3575731249
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Team, RegisteredEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredEvents_MetaData), NewProp_RegisteredEvents_MetaData) }; // 3575731249
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Team_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Team_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISense_Team_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISense,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Team_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Team_Statics::ClassParams = {
	&UAISense_Team::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISense_Team_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Team_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Team_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISense_Team_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISense_Team()
{
	if (!Z_Registration_Info_UClass_UAISense_Team.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Team.OuterSingleton, Z_Construct_UClass_UAISense_Team_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISense_Team.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISense_Team>()
{
	return UAISense_Team::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Team);
UAISense_Team::~UAISense_Team() {}
// End Class UAISense_Team

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAITeamStimulusEvent::StaticStruct, Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewStructOps, TEXT("AITeamStimulusEvent"), &Z_Registration_Info_UScriptStruct_AITeamStimulusEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAITeamStimulusEvent), 3575731249U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Team, UAISense_Team::StaticClass, TEXT("UAISense_Team"), &Z_Registration_Info_UClass_UAISense_Team, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Team), 3272244278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_3297790782(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
