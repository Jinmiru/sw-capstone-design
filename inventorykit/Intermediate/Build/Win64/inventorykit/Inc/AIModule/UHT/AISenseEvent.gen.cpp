// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseEvent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAISenseEvent
void UAISenseEvent::StaticRegisterNativesUAISenseEvent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseEvent);
UClass* Z_Construct_UClass_UAISenseEvent_NoRegister()
{
	return UAISenseEvent::StaticClass();
}
struct Z_Construct_UClass_UAISenseEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISenseEvent.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseEvent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAISenseEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseEvent_Statics::ClassParams = {
	&UAISenseEvent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISenseEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISenseEvent()
{
	if (!Z_Registration_Info_UClass_UAISenseEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseEvent.OuterSingleton, Z_Construct_UClass_UAISenseEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISenseEvent.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISenseEvent>()
{
	return UAISenseEvent::StaticClass();
}
UAISenseEvent::UAISenseEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseEvent);
UAISenseEvent::~UAISenseEvent() {}
// End Class UAISenseEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseEvent, UAISenseEvent::StaticClass, TEXT("UAISenseEvent"), &Z_Registration_Info_UClass_UAISenseEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseEvent), 3275254557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_3003388888(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
