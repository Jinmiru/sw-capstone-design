// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimSequencerInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequencerInstance() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimSequencerInstance();
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimSequencerInstance_NoRegister();
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Class UAnimSequencerInstance
void UAnimSequencerInstance::StaticRegisterNativesUAnimSequencerInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSequencerInstance);
UClass* Z_Construct_UClass_UAnimSequencerInstance_NoRegister()
{
	return UAnimSequencerInstance::StaticClass();
}
struct Z_Construct_UClass_UAnimSequencerInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimSequencerInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AnimSequencerInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequencerInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimSequencerInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequencerInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimSequencerInstance_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USequencerAnimationSupport_NoRegister, (int32)VTABLE_OFFSET(UAnimSequencerInstance, ISequencerAnimationSupport), false },  // 486829858
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequencerInstance_Statics::ClassParams = {
	&UAnimSequencerInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequencerInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimSequencerInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimSequencerInstance()
{
	if (!Z_Registration_Info_UClass_UAnimSequencerInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSequencerInstance.OuterSingleton, Z_Construct_UClass_UAnimSequencerInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimSequencerInstance.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UAnimSequencerInstance>()
{
	return UAnimSequencerInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequencerInstance);
UAnimSequencerInstance::~UAnimSequencerInstance() {}
// End Class UAnimSequencerInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSequencerInstance, UAnimSequencerInstance::StaticClass, TEXT("UAnimSequencerInstance"), &Z_Registration_Info_UClass_UAnimSequencerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSequencerInstance), 2492261663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_39905701(TEXT("/Script/AnimGraphRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
