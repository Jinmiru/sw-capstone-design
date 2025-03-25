// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ExternalDataLayerEngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalDataLayerEngineSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerEngineSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerInjectionPolicy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UExternalDataLayerEngineSubsystem
void UExternalDataLayerEngineSubsystem::StaticRegisterNativesUExternalDataLayerEngineSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExternalDataLayerEngineSubsystem);
UClass* Z_Construct_UClass_UExternalDataLayerEngineSubsystem_NoRegister()
{
	return UExternalDataLayerEngineSubsystem::StaticClass();
}
struct Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/DataLayer/ExternalDataLayerEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ExternalDataLayerEngineSubsystem.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InjectionPolicyClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ExternalDataLayerEngineSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InjectionPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ExternalDataLayerEngineSubsystem.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InjectionPolicyClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InjectionPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExternalDataLayerEngineSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::NewProp_InjectionPolicyClass = { "InjectionPolicyClass", nullptr, (EPropertyFlags)0x0044000800004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExternalDataLayerEngineSubsystem, InjectionPolicyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UExternalDataLayerInjectionPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InjectionPolicyClass_MetaData), NewProp_InjectionPolicyClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::NewProp_InjectionPolicy = { "InjectionPolicy", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExternalDataLayerEngineSubsystem, InjectionPolicy), Z_Construct_UClass_UExternalDataLayerInjectionPolicy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InjectionPolicy_MetaData), NewProp_InjectionPolicy_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::NewProp_InjectionPolicyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::NewProp_InjectionPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::ClassParams = {
	&UExternalDataLayerEngineSubsystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::PropPointers), 0),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExternalDataLayerEngineSubsystem()
{
	if (!Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.OuterSingleton, Z_Construct_UClass_UExternalDataLayerEngineSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UExternalDataLayerEngineSubsystem>()
{
	return UExternalDataLayerEngineSubsystem::StaticClass();
}
UExternalDataLayerEngineSubsystem::UExternalDataLayerEngineSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExternalDataLayerEngineSubsystem);
UExternalDataLayerEngineSubsystem::~UExternalDataLayerEngineSubsystem() {}
// End Class UExternalDataLayerEngineSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExternalDataLayerEngineSubsystem, UExternalDataLayerEngineSubsystem::StaticClass, TEXT("UExternalDataLayerEngineSubsystem"), &Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExternalDataLayerEngineSubsystem), 3231390979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h_1636276352(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerEngineSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
