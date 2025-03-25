// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseBehaviors/Widgets/WidgetBaseBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBaseBehavior() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UWidgetBaseBehavior();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UWidgetBaseBehavior_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Interface UWidgetBaseBehavior
void UWidgetBaseBehavior::StaticRegisterNativesUWidgetBaseBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBaseBehavior);
UClass* Z_Construct_UClass_UWidgetBaseBehavior_NoRegister()
{
	return UWidgetBaseBehavior::StaticClass();
}
struct Z_Construct_UClass_UWidgetBaseBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/Widgets/WidgetBaseBehavior.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWidgetBaseBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetBaseBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBaseBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBaseBehavior_Statics::ClassParams = {
	&UWidgetBaseBehavior::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBaseBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetBaseBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetBaseBehavior()
{
	if (!Z_Registration_Info_UClass_UWidgetBaseBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBaseBehavior.OuterSingleton, Z_Construct_UClass_UWidgetBaseBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetBaseBehavior.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UWidgetBaseBehavior>()
{
	return UWidgetBaseBehavior::StaticClass();
}
UWidgetBaseBehavior::UWidgetBaseBehavior(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBaseBehavior);
UWidgetBaseBehavior::~UWidgetBaseBehavior() {}
// End Interface UWidgetBaseBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_Widgets_WidgetBaseBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBaseBehavior, UWidgetBaseBehavior::StaticClass, TEXT("UWidgetBaseBehavior"), &Z_Registration_Info_UClass_UWidgetBaseBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBaseBehavior), 1212024554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_Widgets_WidgetBaseBehavior_h_3340000860(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_Widgets_WidgetBaseBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_Widgets_WidgetBaseBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
