// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeGizmoRenderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGizmoRenderComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGizmoRenderComponent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGizmoRenderComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeGizmoRenderComponent
void ULandscapeGizmoRenderComponent::StaticRegisterNativesULandscapeGizmoRenderComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeGizmoRenderComponent);
UClass* Z_Construct_UClass_ULandscapeGizmoRenderComponent_NoRegister()
{
	return ULandscapeGizmoRenderComponent::StaticClass();
}
struct Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LandscapeGizmoRenderComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoRenderComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeGizmoRenderComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::ClassParams = {
	&ULandscapeGizmoRenderComponent::StaticClass,
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
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeGizmoRenderComponent()
{
	if (!Z_Registration_Info_UClass_ULandscapeGizmoRenderComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeGizmoRenderComponent.OuterSingleton, Z_Construct_UClass_ULandscapeGizmoRenderComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeGizmoRenderComponent.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeGizmoRenderComponent>()
{
	return ULandscapeGizmoRenderComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeGizmoRenderComponent);
ULandscapeGizmoRenderComponent::~ULandscapeGizmoRenderComponent() {}
// End Class ULandscapeGizmoRenderComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoRenderComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeGizmoRenderComponent, ULandscapeGizmoRenderComponent::StaticClass, TEXT("ULandscapeGizmoRenderComponent"), &Z_Registration_Info_UClass_ULandscapeGizmoRenderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeGizmoRenderComponent), 3660004763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoRenderComponent_h_886506489(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoRenderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoRenderComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
