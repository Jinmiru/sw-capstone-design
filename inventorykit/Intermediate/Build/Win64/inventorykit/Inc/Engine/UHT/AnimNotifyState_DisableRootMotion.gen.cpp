// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState_DisableRootMotion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_DisableRootMotion() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_DisableRootMotion();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimNotifyState_DisableRootMotion
void UAnimNotifyState_DisableRootMotion::StaticRegisterNativesUAnimNotifyState_DisableRootMotion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_DisableRootMotion);
UClass* Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_NoRegister()
{
	return UAnimNotifyState_DisableRootMotion::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Disable Root Motion" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotifyState_DisableRootMotion.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_DisableRootMotion.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_DisableRootMotion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::ClassParams = {
	&UAnimNotifyState_DisableRootMotion::StaticClass,
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
	0x000930A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_DisableRootMotion()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimNotifyState_DisableRootMotion>()
{
	return UAnimNotifyState_DisableRootMotion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_DisableRootMotion);
UAnimNotifyState_DisableRootMotion::~UAnimNotifyState_DisableRootMotion() {}
// End Class UAnimNotifyState_DisableRootMotion

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_DisableRootMotion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_DisableRootMotion, UAnimNotifyState_DisableRootMotion::StaticClass, TEXT("UAnimNotifyState_DisableRootMotion"), &Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_DisableRootMotion), 3441525674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_DisableRootMotion_h_1893840022(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_DisableRootMotion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_DisableRootMotion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
