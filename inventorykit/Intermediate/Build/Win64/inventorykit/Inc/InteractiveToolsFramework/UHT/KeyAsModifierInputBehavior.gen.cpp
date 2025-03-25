// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseBehaviors/KeyAsModifierInputBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyAsModifierInputBehavior() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UKeyAsModifierInputBehavior
void UKeyAsModifierInputBehavior::StaticRegisterNativesUKeyAsModifierInputBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyAsModifierInputBehavior);
UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior_NoRegister()
{
	return UKeyAsModifierInputBehavior::StaticClass();
}
struct Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UKeyAsModifierInputBehavior converts a specific key press/release into\n * a \"Modifier\" toggle via the IModifierToggleBehaviorTarget interface. It does\n * not capture the key press; rather, it updates the modifier its WantsCapture call.\n * This means that the modifier won't be updated if another behavior captures the\n * keyboard.\n */" },
		{ "IncludePath", "BaseBehaviors/KeyAsModifierInputBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/KeyAsModifierInputBehavior.h" },
		{ "ToolTip", "UKeyAsModifierInputBehavior converts a specific key press/release into\na \"Modifier\" toggle via the IModifierToggleBehaviorTarget interface. It does\nnot capture the key press; rather, it updates the modifier its WantsCapture call.\nThis means that the modifier won't be updated if another behavior captures the\nkeyboard." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyAsModifierInputBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::ClassParams = {
	&UKeyAsModifierInputBehavior::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior()
{
	if (!Z_Registration_Info_UClass_UKeyAsModifierInputBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyAsModifierInputBehavior.OuterSingleton, Z_Construct_UClass_UKeyAsModifierInputBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKeyAsModifierInputBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UKeyAsModifierInputBehavior>()
{
	return UKeyAsModifierInputBehavior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyAsModifierInputBehavior);
UKeyAsModifierInputBehavior::~UKeyAsModifierInputBehavior() {}
// End Class UKeyAsModifierInputBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyAsModifierInputBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKeyAsModifierInputBehavior, UKeyAsModifierInputBehavior::StaticClass, TEXT("UKeyAsModifierInputBehavior"), &Z_Registration_Info_UClass_UKeyAsModifierInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyAsModifierInputBehavior), 421905749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyAsModifierInputBehavior_h_3323489577(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyAsModifierInputBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_KeyAsModifierInputBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
