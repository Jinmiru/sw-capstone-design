// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayDebugger/Public/GameplayDebuggerRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerRenderingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerRenderingComponent();
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
// End Cross Module References

// Begin Class UGameplayDebuggerRenderingComponent
void UGameplayDebuggerRenderingComponent::StaticRegisterNativesUGameplayDebuggerRenderingComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayDebuggerRenderingComponent);
UClass* Z_Construct_UClass_UGameplayDebuggerRenderingComponent_NoRegister()
{
	return UGameplayDebuggerRenderingComponent::StaticClass();
}
struct Z_Construct_UClass_UGameplayDebuggerRenderingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Debug" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "GameplayDebuggerRenderingComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerRenderingComponent.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayDebuggerRenderingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayDebuggerRenderingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerRenderingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayDebuggerRenderingComponent_Statics::ClassParams = {
	&UGameplayDebuggerRenderingComponent::StaticClass,
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
	0x04A000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerRenderingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayDebuggerRenderingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayDebuggerRenderingComponent()
{
	if (!Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.OuterSingleton, Z_Construct_UClass_UGameplayDebuggerRenderingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<UGameplayDebuggerRenderingComponent>()
{
	return UGameplayDebuggerRenderingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayDebuggerRenderingComponent);
UGameplayDebuggerRenderingComponent::~UGameplayDebuggerRenderingComponent() {}
// End Class UGameplayDebuggerRenderingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayDebuggerRenderingComponent, UGameplayDebuggerRenderingComponent::StaticClass, TEXT("UGameplayDebuggerRenderingComponent"), &Z_Registration_Info_UClass_UGameplayDebuggerRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayDebuggerRenderingComponent), 3332538736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h_1881036436(TEXT("/Script/GameplayDebugger"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerRenderingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
