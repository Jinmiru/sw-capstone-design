// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Extensions/UserWidgetExtension.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidgetExtension() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UMG_API UClass* Z_Construct_UClass_UUserWidgetExtension();
UMG_API UClass* Z_Construct_UClass_UUserWidgetExtension_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UUserWidgetExtension
void UUserWidgetExtension::StaticRegisterNativesUUserWidgetExtension()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserWidgetExtension);
UClass* Z_Construct_UClass_UUserWidgetExtension_NoRegister()
{
	return UUserWidgetExtension::StaticClass();
}
struct Z_Construct_UClass_UUserWidgetExtension_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UserWidgetExtension is the base class for components that define reusable behavior that can be added to different types of Widgets.\n */" },
		{ "IncludePath", "Extensions/UserWidgetExtension.h" },
		{ "ModuleRelativePath", "Public/Extensions/UserWidgetExtension.h" },
		{ "ToolTip", "UserWidgetExtension is the base class for components that define reusable behavior that can be added to different types of Widgets." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserWidgetExtension>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUserWidgetExtension_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetExtension_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserWidgetExtension_Statics::ClassParams = {
	&UUserWidgetExtension::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetExtension_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserWidgetExtension_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserWidgetExtension()
{
	if (!Z_Registration_Info_UClass_UUserWidgetExtension.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserWidgetExtension.OuterSingleton, Z_Construct_UClass_UUserWidgetExtension_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserWidgetExtension.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UUserWidgetExtension>()
{
	return UUserWidgetExtension::StaticClass();
}
UUserWidgetExtension::UUserWidgetExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserWidgetExtension);
UUserWidgetExtension::~UUserWidgetExtension() {}
// End Class UUserWidgetExtension

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserWidgetExtension, UUserWidgetExtension::StaticClass, TEXT("UUserWidgetExtension"), &Z_Registration_Info_UClass_UUserWidgetExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserWidgetExtension), 1033353880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_767183394(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
