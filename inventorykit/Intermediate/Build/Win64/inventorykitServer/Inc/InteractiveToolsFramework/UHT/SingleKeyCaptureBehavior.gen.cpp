// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseBehaviors/SingleKeyCaptureBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleKeyCaptureBehavior() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleKeyCaptureBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleKeyCaptureBehavior_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class USingleKeyCaptureBehavior
void USingleKeyCaptureBehavior::StaticRegisterNativesUSingleKeyCaptureBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleKeyCaptureBehavior);
UClass* Z_Construct_UClass_USingleKeyCaptureBehavior_NoRegister()
{
	return USingleKeyCaptureBehavior::StaticClass();
}
struct Z_Construct_UClass_USingleKeyCaptureBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USingleKeyCaptureBehavior captures a key press and routes it to target via\n * the IModifierToggleBehaviorTarget interface. If you want similar behavior\n * without actually capturing the key, you should use UKeyAsModifierInputBehavior.\n */" },
		{ "IncludePath", "BaseBehaviors/SingleKeyCaptureBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/SingleKeyCaptureBehavior.h" },
		{ "ToolTip", "USingleKeyCaptureBehavior captures a key press and routes it to target via\nthe IModifierToggleBehaviorTarget interface. If you want similar behavior\nwithout actually capturing the key, you should use UKeyAsModifierInputBehavior." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleKeyCaptureBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::ClassParams = {
	&USingleKeyCaptureBehavior::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USingleKeyCaptureBehavior()
{
	if (!Z_Registration_Info_UClass_USingleKeyCaptureBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleKeyCaptureBehavior.OuterSingleton, Z_Construct_UClass_USingleKeyCaptureBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USingleKeyCaptureBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USingleKeyCaptureBehavior>()
{
	return USingleKeyCaptureBehavior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USingleKeyCaptureBehavior);
USingleKeyCaptureBehavior::~USingleKeyCaptureBehavior() {}
// End Class USingleKeyCaptureBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USingleKeyCaptureBehavior, USingleKeyCaptureBehavior::StaticClass, TEXT("USingleKeyCaptureBehavior"), &Z_Registration_Info_UClass_USingleKeyCaptureBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleKeyCaptureBehavior), 3066412488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_546936283(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleKeyCaptureBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
