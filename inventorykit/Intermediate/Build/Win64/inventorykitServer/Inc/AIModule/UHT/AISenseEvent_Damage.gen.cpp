// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent_Damage.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Damage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseEvent_Damage() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_Damage();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_Damage_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDamageEvent();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAISenseEvent_Damage
void UAISenseEvent_Damage::StaticRegisterNativesUAISenseEvent_Damage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseEvent_Damage);
UClass* Z_Construct_UClass_UAISenseEvent_Damage_NoRegister()
{
	return UAISenseEvent_Damage::StaticClass();
}
struct Z_Construct_UClass_UAISenseEvent_Damage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Perception/AISenseEvent_Damage.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseEvent_Damage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseEvent_Damage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseEvent_Damage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseEvent_Damage_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseEvent_Damage, Event), Z_Construct_UScriptStruct_FAIDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 4164150535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseEvent_Damage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseEvent_Damage_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Damage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISenseEvent_Damage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISenseEvent,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Damage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseEvent_Damage_Statics::ClassParams = {
	&UAISenseEvent_Damage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISenseEvent_Damage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Damage_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Damage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISenseEvent_Damage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISenseEvent_Damage()
{
	if (!Z_Registration_Info_UClass_UAISenseEvent_Damage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseEvent_Damage.OuterSingleton, Z_Construct_UClass_UAISenseEvent_Damage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISenseEvent_Damage.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISenseEvent_Damage>()
{
	return UAISenseEvent_Damage::StaticClass();
}
UAISenseEvent_Damage::UAISenseEvent_Damage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseEvent_Damage);
UAISenseEvent_Damage::~UAISenseEvent_Damage() {}
// End Class UAISenseEvent_Damage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseEvent_Damage, UAISenseEvent_Damage::StaticClass, TEXT("UAISenseEvent_Damage"), &Z_Registration_Info_UClass_UAISenseEvent_Damage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseEvent_Damage), 2647253542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_1170313597(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Damage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
