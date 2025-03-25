// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Extensions/WidgetBlueprintGeneratedClassExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprintGeneratedClassExtension() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension();
UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UWidgetBlueprintGeneratedClassExtension
void UWidgetBlueprintGeneratedClassExtension::StaticRegisterNativesUWidgetBlueprintGeneratedClassExtension()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBlueprintGeneratedClassExtension);
UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_NoRegister()
{
	return UWidgetBlueprintGeneratedClassExtension::StaticClass();
}
struct Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * WidgetExtension is the base class for components that define reusable behavior that can be added to different types of Widgets.\n */" },
		{ "IncludePath", "Extensions/WidgetBlueprintGeneratedClassExtension.h" },
		{ "ModuleRelativePath", "Public/Extensions/WidgetBlueprintGeneratedClassExtension.h" },
		{ "ToolTip", "WidgetExtension is the base class for components that define reusable behavior that can be added to different types of Widgets." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprintGeneratedClassExtension>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::ClassParams = {
	&UWidgetBlueprintGeneratedClassExtension::StaticClass,
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
	0x002800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension()
{
	if (!Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension.OuterSingleton, Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetBlueprintGeneratedClassExtension>()
{
	return UWidgetBlueprintGeneratedClassExtension::StaticClass();
}
UWidgetBlueprintGeneratedClassExtension::UWidgetBlueprintGeneratedClassExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprintGeneratedClassExtension);
UWidgetBlueprintGeneratedClassExtension::~UWidgetBlueprintGeneratedClassExtension() {}
// End Class UWidgetBlueprintGeneratedClassExtension

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_WidgetBlueprintGeneratedClassExtension_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension, UWidgetBlueprintGeneratedClassExtension::StaticClass, TEXT("UWidgetBlueprintGeneratedClassExtension"), &Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBlueprintGeneratedClassExtension), 993321019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_WidgetBlueprintGeneratedClassExtension_h_1887391647(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_WidgetBlueprintGeneratedClassExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_WidgetBlueprintGeneratedClassExtension_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
