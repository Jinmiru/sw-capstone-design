// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Debug/DebugDrawComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugDrawComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDebugDrawComponent
void UDebugDrawComponent::StaticRegisterNativesUDebugDrawComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugDrawComponent);
UClass* Z_Construct_UClass_UDebugDrawComponent_NoRegister()
{
	return UDebugDrawComponent::StaticClass();
}
struct Z_Construct_UClass_UDebugDrawComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Helper class to derive from to use debug draw delegate functionalities (i.e. DrawDebugLabels)\n * The class will take care of registering a delegate to the UDebugDrawService and draw all FText3d provided by the scene proxy.\n * This functionality only requires the derived classes to override `CreateDebugSceneProxy`.\n *\n * It is also possible to add text from other sources of data from the scene proxy but that requires a few extra steps:\n *  + create a class that inherits from `FDebugDrawDelegateHelper`\n *\x09\x09- override `DrawDebugLabels`\n *\x09\x09- add a method to be able to populate the source data from the scene proxy\n *\n *\x09\x09""ex: class FMyDelegateHelper : public FDebugDrawDelegateHelper\n *\x09\x09\x09{\n *\x09\x09\x09\x09public:\n *\x09\x09\x09\x09\x09void SetupFromProxy(const FMySceneProxy* InSceneProxy) { <collect data> };\n *\x09\x09\x09\x09protected:\n *\x09\x09\x09\x09\x09virtual void DrawDebugLabels(UCanvas* Canvas, APlayerController*) override { <draw data> };\n *\x09\x09\x09\x09private:\n *\x09\x09\x09\x09\x09TArray<FVector> SomeData;\n *\x09\x09\x09};\n *\n *  + Within the component inheriting from `UDebugDrawComponent`\n *\x09\x09- add a property of that new helper type in the component inheriting from `UDebugDrawComponent`\n *\x09\x09- override `GetDebugDrawDelegateHelper` to return that new member as the new delegate helper to use\n *\x09\x09- and then use it in `CreateDebugSceneProxy` before returning the created proxy.\n *\n *\x09\x09""ex: class MyDebugDrawComponent : public UDebugDrawComponent\n *\x09\x09\x09{\n *\x09\x09\x09\x09protected:\n *\x09\x09\x09\x09\x09virtual FDebugRenderSceneProxy* CreateDebugSceneProxy() override\n *\x09\x09\x09\x09\x09{\n *\x09\x09\x09\x09\x09\x09""FMySceneProxy* Proxy = new FMySceneProxy(this);\n *\x09\x09\x09\x09\x09\x09MyDelegateHelper.SetupFromProxy(Proxy);\n *\x09\x09\x09\x09\x09\x09return Proxy;\n *\x09\x09\x09\x09\x09}\n *\n *\x09\x09\x09\x09\x09virtual FDebugDrawDelegateHelper& GetDebugDrawDelegateHelper() override { return MyDelegateHelper; }\n *\x09\x09\x09\x09private:\n *\x09\x09\x09\x09\x09""FMyDelegateHelper MyDelegateHelper;\n *\x09\x09\x09}\n */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Debug/DebugDrawComponent.h" },
		{ "ModuleRelativePath", "Classes/Debug/DebugDrawComponent.h" },
		{ "ToolTip", "Helper class to derive from to use debug draw delegate functionalities (i.e. DrawDebugLabels)\nThe class will take care of registering a delegate to the UDebugDrawService and draw all FText3d provided by the scene proxy.\nThis functionality only requires the derived classes to override `CreateDebugSceneProxy`.\n\nIt is also possible to add text from other sources of data from the scene proxy but that requires a few extra steps:\n + create a class that inherits from `FDebugDrawDelegateHelper`\n            - override `DrawDebugLabels`\n            - add a method to be able to populate the source data from the scene proxy\n\n            ex: class FMyDelegateHelper : public FDebugDrawDelegateHelper\n                    {\n                            public:\n                                    void SetupFromProxy(const FMySceneProxy* InSceneProxy) { <collect data> };\n                            protected:\n                                    virtual void DrawDebugLabels(UCanvas* Canvas, APlayerController*) override { <draw data> };\n                            private:\n                                    TArray<FVector> SomeData;\n                    };\n\n + Within the component inheriting from `UDebugDrawComponent`\n            - add a property of that new helper type in the component inheriting from `UDebugDrawComponent`\n            - override `GetDebugDrawDelegateHelper` to return that new member as the new delegate helper to use\n            - and then use it in `CreateDebugSceneProxy` before returning the created proxy.\n\n            ex: class MyDebugDrawComponent : public UDebugDrawComponent\n                    {\n                            protected:\n                                    virtual FDebugRenderSceneProxy* CreateDebugSceneProxy() override\n                                    {\n                                            FMySceneProxy* Proxy = new FMySceneProxy(this);\n                                            MyDelegateHelper.SetupFromProxy(Proxy);\n                                            return Proxy;\n                                    }\n\n                                    virtual FDebugDrawDelegateHelper& GetDebugDrawDelegateHelper() override { return MyDelegateHelper; }\n                            private:\n                                    FMyDelegateHelper MyDelegateHelper;\n                    }" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugDrawComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDebugDrawComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugDrawComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugDrawComponent_Statics::ClassParams = {
	&UDebugDrawComponent::StaticClass,
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
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugDrawComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDebugDrawComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDebugDrawComponent()
{
	if (!Z_Registration_Info_UClass_UDebugDrawComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugDrawComponent.OuterSingleton, Z_Construct_UClass_UDebugDrawComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDebugDrawComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDebugDrawComponent>()
{
	return UDebugDrawComponent::StaticClass();
}
UDebugDrawComponent::UDebugDrawComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugDrawComponent);
UDebugDrawComponent::~UDebugDrawComponent() {}
// End Class UDebugDrawComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDebugDrawComponent, UDebugDrawComponent::StaticClass, TEXT("UDebugDrawComponent"), &Z_Registration_Info_UClass_UDebugDrawComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugDrawComponent), 3663027763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawComponent_h_2334739869(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
