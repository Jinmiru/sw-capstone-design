// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Private/InteractiveFoliageComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveFoliageComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
FOLIAGE_API UClass* Z_Construct_UClass_UInteractiveFoliageComponent();
FOLIAGE_API UClass* Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Class UInteractiveFoliageComponent
void UInteractiveFoliageComponent::StaticRegisterNativesUInteractiveFoliageComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveFoliageComponent);
UClass* Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister()
{
	return UInteractiveFoliageComponent::StaticClass();
}
struct Z_Construct_UClass_UInteractiveFoliageComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Activation Components|Activation Trigger" },
		{ "IncludePath", "InteractiveFoliageComponent.h" },
		{ "ModuleRelativePath", "Private/InteractiveFoliageComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveFoliageComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractiveFoliageComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveFoliageComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveFoliageComponent_Statics::ClassParams = {
	&UInteractiveFoliageComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveFoliageComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractiveFoliageComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractiveFoliageComponent()
{
	if (!Z_Registration_Info_UClass_UInteractiveFoliageComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveFoliageComponent.OuterSingleton, Z_Construct_UClass_UInteractiveFoliageComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractiveFoliageComponent.OuterSingleton;
}
template<> FOLIAGE_API UClass* StaticClass<UInteractiveFoliageComponent>()
{
	return UInteractiveFoliageComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveFoliageComponent);
UInteractiveFoliageComponent::~UInteractiveFoliageComponent() {}
// End Class UInteractiveFoliageComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveFoliageComponent, UInteractiveFoliageComponent::StaticClass, TEXT("UInteractiveFoliageComponent"), &Z_Registration_Info_UClass_UInteractiveFoliageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveFoliageComponent), 2772272609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_210804124(TEXT("/Script/Foliage"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
