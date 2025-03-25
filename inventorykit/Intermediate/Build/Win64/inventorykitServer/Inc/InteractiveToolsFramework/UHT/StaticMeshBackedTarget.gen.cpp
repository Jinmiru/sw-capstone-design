// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/TargetInterfaces/StaticMeshBackedTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshBackedTarget() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAssetBackedTarget();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UStaticMeshBackedTarget();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UStaticMeshBackedTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Interface UStaticMeshBackedTarget
void UStaticMeshBackedTarget::StaticRegisterNativesUStaticMeshBackedTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshBackedTarget);
UClass* Z_Construct_UClass_UStaticMeshBackedTarget_NoRegister()
{
	return UStaticMeshBackedTarget::StaticClass();
}
struct Z_Construct_UClass_UStaticMeshBackedTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/StaticMeshBackedTarget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStaticMeshBackedTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStaticMeshBackedTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetBackedTarget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshBackedTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshBackedTarget_Statics::ClassParams = {
	&UStaticMeshBackedTarget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshBackedTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaticMeshBackedTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaticMeshBackedTarget()
{
	if (!Z_Registration_Info_UClass_UStaticMeshBackedTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshBackedTarget.OuterSingleton, Z_Construct_UClass_UStaticMeshBackedTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaticMeshBackedTarget.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UStaticMeshBackedTarget>()
{
	return UStaticMeshBackedTarget::StaticClass();
}
UStaticMeshBackedTarget::UStaticMeshBackedTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshBackedTarget);
UStaticMeshBackedTarget::~UStaticMeshBackedTarget() {}
// End Interface UStaticMeshBackedTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshBackedTarget, UStaticMeshBackedTarget::StaticClass, TEXT("UStaticMeshBackedTarget"), &Z_Registration_Info_UClass_UStaticMeshBackedTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshBackedTarget), 2855227518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_535951944(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
