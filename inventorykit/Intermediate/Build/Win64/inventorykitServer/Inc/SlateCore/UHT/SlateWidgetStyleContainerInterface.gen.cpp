// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyleContainerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Interface USlateWidgetStyleContainerInterface
void USlateWidgetStyleContainerInterface::StaticRegisterNativesUSlateWidgetStyleContainerInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateWidgetStyleContainerInterface);
UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister()
{
	return USlateWidgetStyleContainerInterface::StaticClass();
}
struct Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleContainerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISlateWidgetStyleContainerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::ClassParams = {
	&USlateWidgetStyleContainerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface()
{
	if (!Z_Registration_Info_UClass_USlateWidgetStyleContainerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateWidgetStyleContainerInterface.OuterSingleton, Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateWidgetStyleContainerInterface.OuterSingleton;
}
template<> SLATECORE_API UClass* StaticClass<USlateWidgetStyleContainerInterface>()
{
	return USlateWidgetStyleContainerInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateWidgetStyleContainerInterface);
USlateWidgetStyleContainerInterface::~USlateWidgetStyleContainerInterface() {}
// End Interface USlateWidgetStyleContainerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlateWidgetStyleContainerInterface, USlateWidgetStyleContainerInterface::StaticClass, TEXT("USlateWidgetStyleContainerInterface"), &Z_Registration_Info_UClass_USlateWidgetStyleContainerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateWidgetStyleContainerInterface), 391521087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_3672737279(TEXT("/Script/SlateCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
