// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseBehaviors/MouseWheelBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMouseWheelBehavior() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseWheelInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseWheelInputBehavior_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UMouseWheelInputBehavior
void UMouseWheelInputBehavior::StaticRegisterNativesUMouseWheelInputBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMouseWheelInputBehavior);
UClass* Z_Construct_UClass_UMouseWheelInputBehavior_NoRegister()
{
	return UMouseWheelInputBehavior::StaticClass();
}
struct Z_Construct_UClass_UMouseWheelInputBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseBehaviors/MouseWheelBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/MouseWheelBehavior.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMouseWheelInputBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMouseWheelInputBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMouseWheelInputBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMouseWheelInputBehavior_Statics::ClassParams = {
	&UMouseWheelInputBehavior::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMouseWheelInputBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UMouseWheelInputBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMouseWheelInputBehavior()
{
	if (!Z_Registration_Info_UClass_UMouseWheelInputBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMouseWheelInputBehavior.OuterSingleton, Z_Construct_UClass_UMouseWheelInputBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMouseWheelInputBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMouseWheelInputBehavior>()
{
	return UMouseWheelInputBehavior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMouseWheelInputBehavior);
UMouseWheelInputBehavior::~UMouseWheelInputBehavior() {}
// End Class UMouseWheelInputBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMouseWheelInputBehavior, UMouseWheelInputBehavior::StaticClass, TEXT("UMouseWheelInputBehavior"), &Z_Registration_Info_UClass_UMouseWheelInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMouseWheelInputBehavior), 716234258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelBehavior_h_1886193458(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
