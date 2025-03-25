// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/NativeWidgetHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNativeWidgetHost() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UNativeWidgetHost();
UMG_API UClass* Z_Construct_UClass_UNativeWidgetHost_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UNativeWidgetHost
void UNativeWidgetHost::StaticRegisterNativesUNativeWidgetHost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNativeWidgetHost);
UClass* Z_Construct_UClass_UNativeWidgetHost_NoRegister()
{
	return UNativeWidgetHost::StaticClass();
}
struct Z_Construct_UClass_UNativeWidgetHost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A NativeWidgetHost is a container widget that can contain one child slate widget.  This should\n * be used when all you need is to nest a native widget inside a UMG widget.\n */" },
		{ "IncludePath", "Components/NativeWidgetHost.h" },
		{ "ModuleRelativePath", "Public/Components/NativeWidgetHost.h" },
		{ "ToolTip", "A NativeWidgetHost is a container widget that can contain one child slate widget.  This should\nbe used when all you need is to nest a native widget inside a UMG widget." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNativeWidgetHost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNativeWidgetHost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNativeWidgetHost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNativeWidgetHost_Statics::ClassParams = {
	&UNativeWidgetHost::StaticClass,
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
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNativeWidgetHost_Statics::Class_MetaDataParams), Z_Construct_UClass_UNativeWidgetHost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNativeWidgetHost()
{
	if (!Z_Registration_Info_UClass_UNativeWidgetHost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNativeWidgetHost.OuterSingleton, Z_Construct_UClass_UNativeWidgetHost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNativeWidgetHost.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UNativeWidgetHost>()
{
	return UNativeWidgetHost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNativeWidgetHost);
UNativeWidgetHost::~UNativeWidgetHost() {}
// End Class UNativeWidgetHost

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNativeWidgetHost, UNativeWidgetHost::StaticClass, TEXT("UNativeWidgetHost"), &Z_Registration_Info_UClass_UNativeWidgetHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNativeWidgetHost), 2279962489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_2831927828(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
