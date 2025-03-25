// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TriggerCapsule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerCapsule() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
ENGINE_API UClass* Z_Construct_UClass_ATriggerCapsule();
ENGINE_API UClass* Z_Construct_UClass_ATriggerCapsule_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ATriggerCapsule
void ATriggerCapsule::StaticRegisterNativesATriggerCapsule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerCapsule);
UClass* Z_Construct_UClass_ATriggerCapsule_NoRegister()
{
	return ATriggerCapsule::StaticClass();
}
struct Z_Construct_UClass_ATriggerCapsule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A capsule shaped trigger, used to generate overlap events in the level */" },
		{ "IncludePath", "Engine/TriggerCapsule.h" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerCapsule.h" },
		{ "ToolTip", "A capsule shaped trigger, used to generate overlap events in the level" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerCapsule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATriggerCapsule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerCapsule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerCapsule_Statics::ClassParams = {
	&ATriggerCapsule::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerCapsule_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriggerCapsule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATriggerCapsule()
{
	if (!Z_Registration_Info_UClass_ATriggerCapsule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerCapsule.OuterSingleton, Z_Construct_UClass_ATriggerCapsule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATriggerCapsule.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ATriggerCapsule>()
{
	return ATriggerCapsule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerCapsule);
ATriggerCapsule::~ATriggerCapsule() {}
// End Class ATriggerCapsule

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerCapsule, ATriggerCapsule::StaticClass, TEXT("ATriggerCapsule"), &Z_Registration_Info_UClass_ATriggerCapsule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerCapsule), 1377595036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_2475881226(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
