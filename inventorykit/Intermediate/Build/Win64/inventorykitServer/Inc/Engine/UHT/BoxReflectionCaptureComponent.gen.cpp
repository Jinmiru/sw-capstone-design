// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/BoxReflectionCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxReflectionCaptureComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent();
ENGINE_API UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UBoxReflectionCaptureComponent
void UBoxReflectionCaptureComponent::StaticRegisterNativesUBoxReflectionCaptureComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoxReflectionCaptureComponent);
UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent_NoRegister()
{
	return UBoxReflectionCaptureComponent::StaticClass();
}
struct Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// -> will be exported to EngineDecalClasses.h\n" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/BoxReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTransitionDistance_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Adjust capture transition distance */" },
		{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
		{ "ToolTip", "Adjust capture transition distance" },
		{ "UIMax", "1000" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewInfluenceBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCaptureBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/BoxReflectionCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxTransitionDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewInfluenceBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewCaptureBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoxReflectionCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_BoxTransitionDistance = { "BoxTransitionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxReflectionCaptureComponent, BoxTransitionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTransitionDistance_MetaData), NewProp_BoxTransitionDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceBox = { "PreviewInfluenceBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxReflectionCaptureComponent, PreviewInfluenceBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewInfluenceBox_MetaData), NewProp_PreviewInfluenceBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox = { "PreviewCaptureBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxReflectionCaptureComponent, PreviewCaptureBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewCaptureBox_MetaData), NewProp_PreviewCaptureBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_BoxTransitionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReflectionCaptureComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::ClassParams = {
	&UBoxReflectionCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoxReflectionCaptureComponent()
{
	if (!Z_Registration_Info_UClass_UBoxReflectionCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoxReflectionCaptureComponent.OuterSingleton, Z_Construct_UClass_UBoxReflectionCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoxReflectionCaptureComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBoxReflectionCaptureComponent>()
{
	return UBoxReflectionCaptureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxReflectionCaptureComponent);
UBoxReflectionCaptureComponent::~UBoxReflectionCaptureComponent() {}
// End Class UBoxReflectionCaptureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoxReflectionCaptureComponent, UBoxReflectionCaptureComponent::StaticClass, TEXT("UBoxReflectionCaptureComponent"), &Z_Registration_Info_UClass_UBoxReflectionCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoxReflectionCaptureComponent), 380456773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_2851364627(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BoxReflectionCaptureComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
