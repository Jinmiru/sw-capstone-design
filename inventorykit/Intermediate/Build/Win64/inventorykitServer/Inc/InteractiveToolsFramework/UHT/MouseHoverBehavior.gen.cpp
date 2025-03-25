// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseBehaviors/MouseHoverBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMouseHoverBehavior() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalMouseHoverBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalMouseHoverBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UMouseHoverBehavior
void UMouseHoverBehavior::StaticRegisterNativesUMouseHoverBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMouseHoverBehavior);
UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister()
{
	return UMouseHoverBehavior::StaticClass();
}
struct Z_Construct_UClass_UMouseHoverBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Trivial InputBehavior that forwards InputBehavior hover events to a Target object via\n * the IHoverBehaviorTarget interface.\n */" },
		{ "IncludePath", "BaseBehaviors/MouseHoverBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/MouseHoverBehavior.h" },
		{ "ToolTip", "Trivial InputBehavior that forwards InputBehavior hover events to a Target object via\nthe IHoverBehaviorTarget interface." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMouseHoverBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMouseHoverBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMouseHoverBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMouseHoverBehavior_Statics::ClassParams = {
	&UMouseHoverBehavior::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMouseHoverBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UMouseHoverBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMouseHoverBehavior()
{
	if (!Z_Registration_Info_UClass_UMouseHoverBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMouseHoverBehavior.OuterSingleton, Z_Construct_UClass_UMouseHoverBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMouseHoverBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMouseHoverBehavior>()
{
	return UMouseHoverBehavior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMouseHoverBehavior);
UMouseHoverBehavior::~UMouseHoverBehavior() {}
// End Class UMouseHoverBehavior

// Begin Class ULocalMouseHoverBehavior
void ULocalMouseHoverBehavior::StaticRegisterNativesULocalMouseHoverBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalMouseHoverBehavior);
UClass* Z_Construct_UClass_ULocalMouseHoverBehavior_NoRegister()
{
	return ULocalMouseHoverBehavior::StaticClass();
}
struct Z_Construct_UClass_ULocalMouseHoverBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An implementation of UMouseHoverBehavior that also implements IHoverBehaviorTarget directly, via a set \n * of local lambda functions. To use/customize this class, the client replaces the lambda functions with their own.\n * This avoids having to create a separate IHoverBehaviorTarget implementation for trivial use-cases.\n */" },
		{ "IncludePath", "BaseBehaviors/MouseHoverBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/MouseHoverBehavior.h" },
		{ "ToolTip", "An implementation of UMouseHoverBehavior that also implements IHoverBehaviorTarget directly, via a set\nof local lambda functions. To use/customize this class, the client replaces the lambda functions with their own.\nThis avoids having to create a separate IHoverBehaviorTarget implementation for trivial use-cases." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalMouseHoverBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMouseHoverBehavior,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::ClassParams = {
	&ULocalMouseHoverBehavior::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocalMouseHoverBehavior()
{
	if (!Z_Registration_Info_UClass_ULocalMouseHoverBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalMouseHoverBehavior.OuterSingleton, Z_Construct_UClass_ULocalMouseHoverBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalMouseHoverBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<ULocalMouseHoverBehavior>()
{
	return ULocalMouseHoverBehavior::StaticClass();
}
ULocalMouseHoverBehavior::ULocalMouseHoverBehavior() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalMouseHoverBehavior);
ULocalMouseHoverBehavior::~ULocalMouseHoverBehavior() {}
// End Class ULocalMouseHoverBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseHoverBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMouseHoverBehavior, UMouseHoverBehavior::StaticClass, TEXT("UMouseHoverBehavior"), &Z_Registration_Info_UClass_UMouseHoverBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMouseHoverBehavior), 1811543412U) },
		{ Z_Construct_UClass_ULocalMouseHoverBehavior, ULocalMouseHoverBehavior::StaticClass, TEXT("ULocalMouseHoverBehavior"), &Z_Registration_Info_UClass_ULocalMouseHoverBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalMouseHoverBehavior), 2461295490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseHoverBehavior_h_1925164698(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseHoverBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseHoverBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
