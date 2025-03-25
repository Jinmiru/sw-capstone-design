// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoRectangleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoRectangleComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoRectangleComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoRectangleComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoRectangleComponent
void UGizmoRectangleComponent::StaticRegisterNativesUGizmoRectangleComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoRectangleComponent);
UClass* Z_Construct_UClass_UGizmoRectangleComponent_NoRegister()
{
	return UGizmoRectangleComponent::StaticClass();
}
struct Z_Construct_UClass_UGizmoRectangleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Simple Component intended to be used as part of 3D Gizmos. \n * Draws outline of 3D rectangle based on parameters.\n */" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Physics Collision Mobile Mobility VirtualTexture Trigger" },
		{ "IncludePath", "BaseGizmos/GizmoRectangleComponent.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
		{ "ToolTip", "Simple Component intended to be used as part of 3D Gizmos.\nDraws outline of 3D rectangle based on parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionX_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionY_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientYAccordingToCamera_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// When true, instead of using the provided DirectionY, the component will\n// use a direction orthogonal to the camera direction and DirectionX. This\n// keeps the rectangle pinned along DirectionX but spun to be flatter\n// relative the camera.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
		{ "ToolTip", "When true, instead of using the provided DirectionY, the component will\nuse a direction orthogonal to the camera direction and DirectionX. This\nkeeps the rectangle pinned along DirectionX but spun to be flatter\nrelative the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetX_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetY_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthX_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthY_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentFlags_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionY;
	static void NewProp_bOrientYAccordingToCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientYAccordingToCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SegmentFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoRectangleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionX = { "DirectionX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoRectangleComponent, DirectionX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionX_MetaData), NewProp_DirectionX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionY = { "DirectionY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoRectangleComponent, DirectionY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionY_MetaData), NewProp_DirectionY_MetaData) };
void Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_bOrientYAccordingToCamera_SetBit(void* Obj)
{
	((UGizmoRectangleComponent*)Obj)->bOrientYAccordingToCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_bOrientYAccordingToCamera = { "bOrientYAccordingToCamera", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoRectangleComponent), &Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_bOrientYAccordingToCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientYAccordingToCamera_MetaData), NewProp_bOrientYAccordingToCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetX = { "OffsetX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoRectangleComponent, OffsetX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetX_MetaData), NewProp_OffsetX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetY = { "OffsetY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoRectangleComponent, OffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetY_MetaData), NewProp_OffsetY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthX = { "LengthX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoRectangleComponent, LengthX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthX_MetaData), NewProp_LengthX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthY = { "LengthY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoRectangleComponent, LengthY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthY_MetaData), NewProp_LengthY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoRectangleComponent, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_SegmentFlags = { "SegmentFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoRectangleComponent, SegmentFlags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentFlags_MetaData), NewProp_SegmentFlags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoRectangleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_bOrientYAccordingToCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_SegmentFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoRectangleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::ClassParams = {
	&UGizmoRectangleComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoRectangleComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoRectangleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoRectangleComponent()
{
	if (!Z_Registration_Info_UClass_UGizmoRectangleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoRectangleComponent.OuterSingleton, Z_Construct_UClass_UGizmoRectangleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoRectangleComponent.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoRectangleComponent>()
{
	return UGizmoRectangleComponent::StaticClass();
}
UGizmoRectangleComponent::UGizmoRectangleComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoRectangleComponent);
UGizmoRectangleComponent::~UGizmoRectangleComponent() {}
// End Class UGizmoRectangleComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoRectangleComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoRectangleComponent, UGizmoRectangleComponent::StaticClass, TEXT("UGizmoRectangleComponent"), &Z_Registration_Info_UClass_UGizmoRectangleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoRectangleComponent), 255534386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoRectangleComponent_h_3409096036(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoRectangleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoRectangleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
