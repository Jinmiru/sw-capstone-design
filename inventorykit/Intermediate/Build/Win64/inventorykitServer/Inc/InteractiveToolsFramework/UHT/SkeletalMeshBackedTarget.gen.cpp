// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/TargetInterfaces/SkeletalMeshBackedTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshBackedTarget() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAssetBackedTarget();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USkeletalMeshBackedTarget();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USkeletalMeshBackedTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Interface USkeletalMeshBackedTarget
void USkeletalMeshBackedTarget::StaticRegisterNativesUSkeletalMeshBackedTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshBackedTarget);
UClass* Z_Construct_UClass_USkeletalMeshBackedTarget_NoRegister()
{
	return USkeletalMeshBackedTarget::StaticClass();
}
struct Z_Construct_UClass_USkeletalMeshBackedTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/SkeletalMeshBackedTarget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISkeletalMeshBackedTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetBackedTarget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::ClassParams = {
	&USkeletalMeshBackedTarget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkeletalMeshBackedTarget()
{
	if (!Z_Registration_Info_UClass_USkeletalMeshBackedTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshBackedTarget.OuterSingleton, Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkeletalMeshBackedTarget.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USkeletalMeshBackedTarget>()
{
	return USkeletalMeshBackedTarget::StaticClass();
}
USkeletalMeshBackedTarget::USkeletalMeshBackedTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshBackedTarget);
USkeletalMeshBackedTarget::~USkeletalMeshBackedTarget() {}
// End Interface USkeletalMeshBackedTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshBackedTarget, USkeletalMeshBackedTarget::StaticClass, TEXT("USkeletalMeshBackedTarget"), &Z_Registration_Info_UClass_USkeletalMeshBackedTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshBackedTarget), 1608853709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_863565894(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
