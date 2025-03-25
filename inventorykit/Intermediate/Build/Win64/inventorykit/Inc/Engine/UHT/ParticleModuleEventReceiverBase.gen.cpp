// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventReceiverBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleEventType();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UParticleModuleEventReceiverBase
void UParticleModuleEventReceiverBase::StaticRegisterNativesUParticleModuleEventReceiverBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleEventReceiverBase);
UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister()
{
	return UParticleModuleEventReceiverBase::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventReceiverBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventGeneratorType_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The type of event that will generate the kill. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverBase.h" },
		{ "ToolTip", "The type of event that will generate the kill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The name of the emitter of interest for generating the event. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverBase.h" },
		{ "ToolTip", "The name of the emitter of interest for generating the event." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventGeneratorType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventReceiverBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventGeneratorType = { "EventGeneratorType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleEventReceiverBase, EventGeneratorType), Z_Construct_UEnum_Engine_EParticleEventType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventGeneratorType_MetaData), NewProp_EventGeneratorType_MetaData) }; // 329606486
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleEventReceiverBase, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventGeneratorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleEventBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::ClassParams = {
	&UParticleModuleEventReceiverBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::PropPointers),
	0,
	0x000010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase()
{
	if (!Z_Registration_Info_UClass_UParticleModuleEventReceiverBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleEventReceiverBase.OuterSingleton, Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleEventReceiverBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleEventReceiverBase>()
{
	return UParticleModuleEventReceiverBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventReceiverBase);
UParticleModuleEventReceiverBase::~UParticleModuleEventReceiverBase() {}
// End Class UParticleModuleEventReceiverBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleEventReceiverBase, UParticleModuleEventReceiverBase::StaticClass, TEXT("UParticleModuleEventReceiverBase"), &Z_Registration_Info_UClass_UParticleModuleEventReceiverBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleEventReceiverBase), 3688576423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_3221126985(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
