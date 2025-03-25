// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavMesh/NavTestRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavTestRenderingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavTestRenderingComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavTestRenderingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavTestRenderingComponent
void UNavTestRenderingComponent::StaticRegisterNativesUNavTestRenderingComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavTestRenderingComponent);
UClass* Z_Construct_UClass_UNavTestRenderingComponent_NoRegister()
{
	return UNavTestRenderingComponent::StaticClass();
}
struct Z_Construct_UClass_UNavTestRenderingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Debug" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "NavMesh/NavTestRenderingComponent.h" },
		{ "ModuleRelativePath", "Public/NavMesh/NavTestRenderingComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavTestRenderingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavTestRenderingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavTestRenderingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavTestRenderingComponent_Statics::ClassParams = {
	&UNavTestRenderingComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavTestRenderingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavTestRenderingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavTestRenderingComponent()
{
	if (!Z_Registration_Info_UClass_UNavTestRenderingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavTestRenderingComponent.OuterSingleton, Z_Construct_UClass_UNavTestRenderingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavTestRenderingComponent.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavTestRenderingComponent>()
{
	return UNavTestRenderingComponent::StaticClass();
}
UNavTestRenderingComponent::UNavTestRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavTestRenderingComponent);
UNavTestRenderingComponent::~UNavTestRenderingComponent() {}
// End Class UNavTestRenderingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavTestRenderingComponent, UNavTestRenderingComponent::StaticClass, TEXT("UNavTestRenderingComponent"), &Z_Registration_Info_UClass_UNavTestRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavTestRenderingComponent), 2078787899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_755384151(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
