// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent_Hearing.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Hearing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseEvent_Hearing() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_Hearing();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_Hearing_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAINoiseEvent();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAISenseEvent_Hearing
void UAISenseEvent_Hearing::StaticRegisterNativesUAISenseEvent_Hearing()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseEvent_Hearing);
UClass* Z_Construct_UClass_UAISenseEvent_Hearing_NoRegister()
{
	return UAISenseEvent_Hearing::StaticClass();
}
struct Z_Construct_UClass_UAISenseEvent_Hearing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Perception/AISenseEvent_Hearing.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseEvent_Hearing.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseEvent_Hearing.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseEvent_Hearing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseEvent_Hearing_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseEvent_Hearing, Event), Z_Construct_UScriptStruct_FAINoiseEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 1611572614
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseEvent_Hearing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseEvent_Hearing_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Hearing_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISenseEvent_Hearing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISenseEvent,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Hearing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseEvent_Hearing_Statics::ClassParams = {
	&UAISenseEvent_Hearing::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISenseEvent_Hearing_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Hearing_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Hearing_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISenseEvent_Hearing_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISenseEvent_Hearing()
{
	if (!Z_Registration_Info_UClass_UAISenseEvent_Hearing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseEvent_Hearing.OuterSingleton, Z_Construct_UClass_UAISenseEvent_Hearing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISenseEvent_Hearing.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISenseEvent_Hearing>()
{
	return UAISenseEvent_Hearing::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseEvent_Hearing);
UAISenseEvent_Hearing::~UAISenseEvent_Hearing() {}
// End Class UAISenseEvent_Hearing

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseEvent_Hearing, UAISenseEvent_Hearing::StaticClass, TEXT("UAISenseEvent_Hearing"), &Z_Registration_Info_UClass_UAISenseEvent_Hearing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseEvent_Hearing), 218990867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h_3282320637(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_Hearing_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
