// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/SequencerAnimationSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerAnimationSupport() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationSupport();
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Interface USequencerAnimationSupport
void USequencerAnimationSupport::StaticRegisterNativesUSequencerAnimationSupport()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerAnimationSupport);
UClass* Z_Construct_UClass_USequencerAnimationSupport_NoRegister()
{
	return USequencerAnimationSupport::StaticClass();
}
struct Z_Construct_UClass_USequencerAnimationSupport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/SequencerAnimationSupport.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISequencerAnimationSupport>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USequencerAnimationSupport_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequencerAnimationSupport_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerAnimationSupport_Statics::ClassParams = {
	&USequencerAnimationSupport::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequencerAnimationSupport_Statics::Class_MetaDataParams), Z_Construct_UClass_USequencerAnimationSupport_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USequencerAnimationSupport()
{
	if (!Z_Registration_Info_UClass_USequencerAnimationSupport.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerAnimationSupport.OuterSingleton, Z_Construct_UClass_USequencerAnimationSupport_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USequencerAnimationSupport.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<USequencerAnimationSupport>()
{
	return USequencerAnimationSupport::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerAnimationSupport);
USequencerAnimationSupport::~USequencerAnimationSupport() {}
// End Interface USequencerAnimationSupport

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USequencerAnimationSupport, USequencerAnimationSupport::StaticClass, TEXT("USequencerAnimationSupport"), &Z_Registration_Info_UClass_USequencerAnimationSupport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerAnimationSupport), 486829858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_231738716(TEXT("/Script/AnimGraphRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
