// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/LightmassPortalComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassPortalComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULightmassPortalComponent();
ENGINE_API UClass* Z_Construct_UClass_ULightmassPortalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULightmassPortalComponent
void ULightmassPortalComponent::StaticRegisterNativesULightmassPortalComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightmassPortalComponent);
UClass* Z_Construct_UClass_ULightmassPortalComponent_NoRegister()
{
	return ULightmassPortalComponent::StaticClass();
}
struct Z_Construct_UClass_ULightmassPortalComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LightmassPortalComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/LightmassPortalComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/LightmassPortalComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightmassPortalComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightmassPortalComponent_Statics::NewProp_PreviewBox = { "PreviewBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightmassPortalComponent, PreviewBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewBox_MetaData), NewProp_PreviewBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightmassPortalComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmassPortalComponent_Statics::NewProp_PreviewBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPortalComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULightmassPortalComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPortalComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightmassPortalComponent_Statics::ClassParams = {
	&ULightmassPortalComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULightmassPortalComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPortalComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPortalComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightmassPortalComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULightmassPortalComponent()
{
	if (!Z_Registration_Info_UClass_ULightmassPortalComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightmassPortalComponent.OuterSingleton, Z_Construct_UClass_ULightmassPortalComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULightmassPortalComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULightmassPortalComponent>()
{
	return ULightmassPortalComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmassPortalComponent);
ULightmassPortalComponent::~ULightmassPortalComponent() {}
// End Class ULightmassPortalComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULightmassPortalComponent, ULightmassPortalComponent::StaticClass, TEXT("ULightmassPortalComponent"), &Z_Registration_Info_UClass_ULightmassPortalComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightmassPortalComponent), 2361099348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_1962557446(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
