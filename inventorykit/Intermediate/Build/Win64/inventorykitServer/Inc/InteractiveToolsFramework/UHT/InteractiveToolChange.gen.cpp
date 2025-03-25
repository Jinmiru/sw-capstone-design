// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InteractiveToolChange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolChange() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Interface UToolContextTransactionProvider
void UToolContextTransactionProvider::StaticRegisterNativesUToolContextTransactionProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolContextTransactionProvider);
UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister()
{
	return UToolContextTransactionProvider::StaticClass();
}
struct Z_Construct_UClass_UToolContextTransactionProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolChange.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IToolContextTransactionProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolContextTransactionProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolContextTransactionProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolContextTransactionProvider_Statics::ClassParams = {
	&UToolContextTransactionProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolContextTransactionProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolContextTransactionProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolContextTransactionProvider()
{
	if (!Z_Registration_Info_UClass_UToolContextTransactionProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolContextTransactionProvider.OuterSingleton, Z_Construct_UClass_UToolContextTransactionProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolContextTransactionProvider.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UToolContextTransactionProvider>()
{
	return UToolContextTransactionProvider::StaticClass();
}
UToolContextTransactionProvider::UToolContextTransactionProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolContextTransactionProvider);
UToolContextTransactionProvider::~UToolContextTransactionProvider() {}
// End Interface UToolContextTransactionProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolContextTransactionProvider, UToolContextTransactionProvider::StaticClass, TEXT("UToolContextTransactionProvider"), &Z_Registration_Info_UClass_UToolContextTransactionProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolContextTransactionProvider), 1703905301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_1014220765(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolChange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
