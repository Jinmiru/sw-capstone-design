// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/PlaneReflectionCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneReflectionCaptureComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent();
ENGINE_API UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPlaneReflectionCaptureComponent
void UPlaneReflectionCaptureComponent::StaticRegisterNativesUPlaneReflectionCaptureComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneReflectionCaptureComponent);
UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent_NoRegister()
{
	return UPlaneReflectionCaptureComponent::StaticClass();
}
struct Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// -> will be exported to EngineDecalClasses.h\n" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/PlaneReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceRadiusScale_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Radius of the area that can receive reflections from this capture. */" },
		{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
		{ "ToolTip", "Radius of the area that can receive reflections from this capture." },
		{ "UIMax", "16384.0" },
		{ "UIMin", "8.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewInfluenceRadius_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCaptureBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/PlaneReflectionCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InfluenceRadiusScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewInfluenceRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewCaptureBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneReflectionCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_InfluenceRadiusScale = { "InfluenceRadiusScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneReflectionCaptureComponent, InfluenceRadiusScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfluenceRadiusScale_MetaData), NewProp_InfluenceRadiusScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius = { "PreviewInfluenceRadius", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneReflectionCaptureComponent, PreviewInfluenceRadius), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewInfluenceRadius_MetaData), NewProp_PreviewInfluenceRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox = { "PreviewCaptureBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneReflectionCaptureComponent, PreviewCaptureBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewCaptureBox_MetaData), NewProp_PreviewCaptureBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_InfluenceRadiusScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewInfluenceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::NewProp_PreviewCaptureBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReflectionCaptureComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::ClassParams = {
	&UPlaneReflectionCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlaneReflectionCaptureComponent()
{
	if (!Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent.OuterSingleton, Z_Construct_UClass_UPlaneReflectionCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPlaneReflectionCaptureComponent>()
{
	return UPlaneReflectionCaptureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneReflectionCaptureComponent);
UPlaneReflectionCaptureComponent::~UPlaneReflectionCaptureComponent() {}
// End Class UPlaneReflectionCaptureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlaneReflectionCaptureComponent, UPlaneReflectionCaptureComponent::StaticClass, TEXT("UPlaneReflectionCaptureComponent"), &Z_Registration_Info_UClass_UPlaneReflectionCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneReflectionCaptureComponent), 3261177521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_1611443746(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PlaneReflectionCaptureComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
