// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoLineHandleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoLineHandleComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLineHandleComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLineHandleComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoLineHandleComponent
void UGizmoLineHandleComponent::StaticRegisterNativesUGizmoLineHandleComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoLineHandleComponent);
UClass* Z_Construct_UClass_UGizmoLineHandleComponent_NoRegister()
{
	return UGizmoLineHandleComponent::StaticClass();
}
struct Z_Construct_UClass_UGizmoLineHandleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Simple Component intended to be used as part of 3D Gizmos.\n * Draws line terminated by a short perpendicular handle line based on parameters.\n */" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Physics Collision Mobile Mobility VirtualTexture Trigger" },
		{ "IncludePath", "BaseGizmos/GizmoLineHandleComponent.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
		{ "ToolTip", "Simple Component intended to be used as part of 3D Gizmos.\nDraws line terminated by a short perpendicular handle line based on parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleSize_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImageScale_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandleSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static void NewProp_bImageScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImageScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoLineHandleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoLineHandleComponent, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_HandleSize = { "HandleSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoLineHandleComponent, HandleSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleSize_MetaData), NewProp_HandleSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoLineHandleComponent, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoLineHandleComponent, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoLineHandleComponent, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
void Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_bImageScale_SetBit(void* Obj)
{
	((UGizmoLineHandleComponent*)Obj)->bImageScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_bImageScale = { "bImageScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoLineHandleComponent), &Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_bImageScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImageScale_MetaData), NewProp_bImageScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoLineHandleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_HandleSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_bImageScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoLineHandleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::ClassParams = {
	&UGizmoLineHandleComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoLineHandleComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoLineHandleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoLineHandleComponent()
{
	if (!Z_Registration_Info_UClass_UGizmoLineHandleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoLineHandleComponent.OuterSingleton, Z_Construct_UClass_UGizmoLineHandleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoLineHandleComponent.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoLineHandleComponent>()
{
	return UGizmoLineHandleComponent::StaticClass();
}
UGizmoLineHandleComponent::UGizmoLineHandleComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoLineHandleComponent);
UGizmoLineHandleComponent::~UGizmoLineHandleComponent() {}
// End Class UGizmoLineHandleComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoLineHandleComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoLineHandleComponent, UGizmoLineHandleComponent::StaticClass, TEXT("UGizmoLineHandleComponent"), &Z_Registration_Info_UClass_UGizmoLineHandleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoLineHandleComponent), 1424844128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoLineHandleComponent_h_1774632443(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoLineHandleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoLineHandleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
