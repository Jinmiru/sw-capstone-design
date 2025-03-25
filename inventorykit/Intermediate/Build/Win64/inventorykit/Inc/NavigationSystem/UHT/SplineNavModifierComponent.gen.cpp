// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/SplineNavModifierComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineNavModifierComponent() {}

// Begin Cross Module References
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_USplineNavModifierComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_USplineNavModifierComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class USplineNavModifierComponent
void USplineNavModifierComponent::StaticRegisterNativesUSplineNavModifierComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplineNavModifierComponent);
UClass* Z_Construct_UClass_USplineNavModifierComponent_NoRegister()
{
	return USplineNavModifierComponent::StaticClass();
}
struct Z_Construct_UClass_USplineNavModifierComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Assign a chosen NavArea in the vicinity of a spline\n *\x09This component must only be attached to an actor with a USplineComponent\n */" },
		{ "HideCategories", "Variable Tags Cooking Collision Activation" },
		{ "IncludePath", "SplineNavModifierComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SplineNavModifierComponent.h" },
		{ "ToolTip", "Assign a chosen NavArea in the vicinity of a spline\nThis component must only be attached to an actor with a USplineComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineExtent_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Radius of the tube surrounding the spline which will be used to generate the Nav Modifiers */" },
		{ "ModuleRelativePath", "Public/SplineNavModifierComponent.h" },
		{ "ToolTip", "Radius of the tube surrounding the spline which will be used to generate the Nav Modifiers" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSplineSamples_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "2" },
		{ "Comment", "/** How many sections the spline will be divided into for generating overlap volumes. More samples result in finer detail */" },
		{ "ModuleRelativePath", "Public/SplineNavModifierComponent.h" },
		{ "ToolTip", "How many sections the spline will be divided into for generating overlap volumes. More samples result in finer detail" },
		{ "UIMin", "2" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SplineExtent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSplineSamples;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineNavModifierComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_SplineExtent = { "SplineExtent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplineNavModifierComponent, SplineExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineExtent_MetaData), NewProp_SplineExtent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_NumSplineSamples = { "NumSplineSamples", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplineNavModifierComponent, NumSplineSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSplineSamples_MetaData), NewProp_NumSplineSamples_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplineNavModifierComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_SplineExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineNavModifierComponent_Statics::NewProp_NumSplineSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplineNavModifierComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USplineNavModifierComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavModifierComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplineNavModifierComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USplineNavModifierComponent_Statics::ClassParams = {
	&USplineNavModifierComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USplineNavModifierComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USplineNavModifierComponent_Statics::PropPointers),
	0,
	0x00A800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplineNavModifierComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USplineNavModifierComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USplineNavModifierComponent()
{
	if (!Z_Registration_Info_UClass_USplineNavModifierComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineNavModifierComponent.OuterSingleton, Z_Construct_UClass_USplineNavModifierComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USplineNavModifierComponent.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<USplineNavModifierComponent>()
{
	return USplineNavModifierComponent::StaticClass();
}
USplineNavModifierComponent::USplineNavModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USplineNavModifierComponent);
USplineNavModifierComponent::~USplineNavModifierComponent() {}
// End Class USplineNavModifierComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USplineNavModifierComponent, USplineNavModifierComponent::StaticClass, TEXT("USplineNavModifierComponent"), &Z_Registration_Info_UClass_USplineNavModifierComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineNavModifierComponent), 1664957694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_4208584742(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
