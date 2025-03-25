// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavLinkComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavLinkDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkComponent_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavLinkComponent
void UNavLinkComponent::StaticRegisterNativesUNavLinkComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavLinkComponent);
UClass* Z_Construct_UClass_UNavLinkComponent_NoRegister()
{
	return UNavLinkComponent::StaticClass();
}
struct Z_Construct_UClass_UNavLinkComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Navigation" },
		{ "HideCategories", "Activation Mobility VirtualTexture Trigger" },
		{ "IncludePath", "NavLinkComponent.h" },
		{ "ModuleRelativePath", "Public/NavLinkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavLinkComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Links;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLinkComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(0, nullptr) }; // 770316475
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavLinkComponent, Links), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Links_MetaData), NewProp_Links_MetaData) }; // 770316475
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavLinkComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavLinkComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNavLinkComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNavLinkHostInterface_NoRegister, (int32)VTABLE_OFFSET(UNavLinkComponent, INavLinkHostInterface), false },  // 852273620
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkComponent_Statics::ClassParams = {
	&UNavLinkComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavLinkComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavLinkComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavLinkComponent()
{
	if (!Z_Registration_Info_UClass_UNavLinkComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavLinkComponent.OuterSingleton, Z_Construct_UClass_UNavLinkComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavLinkComponent.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkComponent>()
{
	return UNavLinkComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkComponent);
UNavLinkComponent::~UNavLinkComponent() {}
// End Class UNavLinkComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavLinkComponent, UNavLinkComponent::StaticClass, TEXT("UNavLinkComponent"), &Z_Registration_Info_UClass_UNavLinkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavLinkComponent), 2813302916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_1097449338(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
