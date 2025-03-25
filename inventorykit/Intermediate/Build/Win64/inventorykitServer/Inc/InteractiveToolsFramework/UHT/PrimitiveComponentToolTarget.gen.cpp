// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/ToolTargets/PrimitiveComponentToolTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimitiveComponentToolTarget() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentToolTarget();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentToolTarget_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentToolTargetFactory();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTarget();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetFactory();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UPrimitiveComponentToolTarget
void UPrimitiveComponentToolTarget::StaticRegisterNativesUPrimitiveComponentToolTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrimitiveComponentToolTarget);
UClass* Z_Construct_UClass_UPrimitiveComponentToolTarget_NoRegister()
{
	return UPrimitiveComponentToolTarget::StaticClass();
}
struct Z_Construct_UClass_UPrimitiveComponentToolTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * A tool target to share some reusable code for tool targets that are\n * backed by primitive components. \n */" },
		{ "IncludePath", "ToolTargets/PrimitiveComponentToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/PrimitiveComponentToolTarget.h" },
		{ "ToolTip", "A tool target to share some reusable code for tool targets that are\nbacked by primitive components." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimitiveComponentToolTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPrimitiveComponentToolTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UToolTarget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveComponentToolTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPrimitiveComponentToolTarget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister, (int32)VTABLE_OFFSET(UPrimitiveComponentToolTarget, IPrimitiveComponentBackedTarget), false },  // 391698828
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrimitiveComponentToolTarget_Statics::ClassParams = {
	&UPrimitiveComponentToolTarget::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveComponentToolTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPrimitiveComponentToolTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPrimitiveComponentToolTarget()
{
	if (!Z_Registration_Info_UClass_UPrimitiveComponentToolTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrimitiveComponentToolTarget.OuterSingleton, Z_Construct_UClass_UPrimitiveComponentToolTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPrimitiveComponentToolTarget.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UPrimitiveComponentToolTarget>()
{
	return UPrimitiveComponentToolTarget::StaticClass();
}
UPrimitiveComponentToolTarget::UPrimitiveComponentToolTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimitiveComponentToolTarget);
UPrimitiveComponentToolTarget::~UPrimitiveComponentToolTarget() {}
// End Class UPrimitiveComponentToolTarget

// Begin Class UPrimitiveComponentToolTargetFactory
void UPrimitiveComponentToolTargetFactory::StaticRegisterNativesUPrimitiveComponentToolTargetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrimitiveComponentToolTargetFactory);
UClass* Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_NoRegister()
{
	return UPrimitiveComponentToolTargetFactory::StaticClass();
}
struct Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for UPrimitiveComponentToolTarget to be used by the target manager.\n */" },
		{ "IncludePath", "ToolTargets/PrimitiveComponentToolTarget.h" },
		{ "ModuleRelativePath", "Public/ToolTargets/PrimitiveComponentToolTarget.h" },
		{ "ToolTip", "Factory for UPrimitiveComponentToolTarget to be used by the target manager." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimitiveComponentToolTargetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UToolTargetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_Statics::ClassParams = {
	&UPrimitiveComponentToolTargetFactory::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPrimitiveComponentToolTargetFactory()
{
	if (!Z_Registration_Info_UClass_UPrimitiveComponentToolTargetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrimitiveComponentToolTargetFactory.OuterSingleton, Z_Construct_UClass_UPrimitiveComponentToolTargetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPrimitiveComponentToolTargetFactory.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UPrimitiveComponentToolTargetFactory>()
{
	return UPrimitiveComponentToolTargetFactory::StaticClass();
}
UPrimitiveComponentToolTargetFactory::UPrimitiveComponentToolTargetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimitiveComponentToolTargetFactory);
UPrimitiveComponentToolTargetFactory::~UPrimitiveComponentToolTargetFactory() {}
// End Class UPrimitiveComponentToolTargetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPrimitiveComponentToolTarget, UPrimitiveComponentToolTarget::StaticClass, TEXT("UPrimitiveComponentToolTarget"), &Z_Registration_Info_UClass_UPrimitiveComponentToolTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrimitiveComponentToolTarget), 556397049U) },
		{ Z_Construct_UClass_UPrimitiveComponentToolTargetFactory, UPrimitiveComponentToolTargetFactory::StaticClass, TEXT("UPrimitiveComponentToolTargetFactory"), &Z_Registration_Info_UClass_UPrimitiveComponentToolTargetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrimitiveComponentToolTargetFactory), 156794881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_936862270(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargets_PrimitiveComponentToolTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
