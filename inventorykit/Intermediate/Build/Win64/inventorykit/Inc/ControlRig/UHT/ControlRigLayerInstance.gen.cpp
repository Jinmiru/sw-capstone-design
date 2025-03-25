// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Sequencer/ControlRigLayerInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigLayerInstance() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigLayerInstance();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigLayerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Class UControlRigLayerInstance
void UControlRigLayerInstance::StaticRegisterNativesUControlRigLayerInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigLayerInstance);
UClass* Z_Construct_UClass_UControlRigLayerInstance_NoRegister()
{
	return UControlRigLayerInstance::StaticClass();
}
struct Z_Construct_UClass_UControlRigLayerInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Sequencer/ControlRigLayerInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigLayerInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigLayerInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UControlRigLayerInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigLayerInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UControlRigLayerInstance_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USequencerAnimationSupport_NoRegister, (int32)VTABLE_OFFSET(UControlRigLayerInstance, ISequencerAnimationSupport), false },  // 486829858
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigLayerInstance_Statics::ClassParams = {
	&UControlRigLayerInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigLayerInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigLayerInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigLayerInstance()
{
	if (!Z_Registration_Info_UClass_UControlRigLayerInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigLayerInstance.OuterSingleton, Z_Construct_UClass_UControlRigLayerInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigLayerInstance.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigLayerInstance>()
{
	return UControlRigLayerInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigLayerInstance);
UControlRigLayerInstance::~UControlRigLayerInstance() {}
// End Class UControlRigLayerInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigLayerInstance, UControlRigLayerInstance::StaticClass, TEXT("UControlRigLayerInstance"), &Z_Registration_Info_UClass_UControlRigLayerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigLayerInstance), 4254202510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_547912849(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
