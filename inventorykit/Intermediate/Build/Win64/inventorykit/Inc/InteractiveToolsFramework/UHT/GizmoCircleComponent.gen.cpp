// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoCircleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoCircleComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoCircleComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoCircleComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoCircleComponent
void UGizmoCircleComponent::StaticRegisterNativesUGizmoCircleComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoCircleComponent);
UClass* Z_Construct_UClass_UGizmoCircleComponent_NoRegister()
{
	return UGizmoCircleComponent::StaticClass();
}
struct Z_Construct_UClass_UGizmoCircleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Simple Component intended to be used as part of 3D Gizmos.\n * Draws a 3D circle based on parameters.\n */" },
		{ "HideCategories", "Physics Collision Mobile Physics Collision Mobile Mobility VirtualTexture Trigger" },
		{ "IncludePath", "BaseGizmos/GizmoCircleComponent.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
		{ "ToolTip", "Simple Component intended to be used as part of 3D Gizmos.\nDraws a 3D circle based on parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bViewAligned_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFullCircle_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyAllowFrontFacingHits_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// If the circle was on a 3D sphere, then only the 'front' part of the circle can be hit, \n// (in other words, if the ray would hit the sphere first, ignore the hit).\n// Dynamically disabled if the circle is parallel to the view plane (ie \"fully visible\")\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
		{ "ToolTip", "If the circle was on a 3D sphere, then only the 'front' part of the circle can be hit,\n(in other words, if the ray would hit the sphere first, ignore the hit).\nDynamically disabled if the circle is parallel to the view plane (ie \"fully visible\")" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSides;
	static void NewProp_bViewAligned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bViewAligned;
	static void NewProp_bDrawFullCircle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFullCircle;
	static void NewProp_bOnlyAllowFrontFacingHits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyAllowFrontFacingHits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoCircleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoCircleComponent, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoCircleComponent, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoCircleComponent, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoCircleComponent, NumSides), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSides_MetaData), NewProp_NumSides_MetaData) };
void Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned_SetBit(void* Obj)
{
	((UGizmoCircleComponent*)Obj)->bViewAligned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned = { "bViewAligned", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoCircleComponent), &Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bViewAligned_MetaData), NewProp_bViewAligned_MetaData) };
void Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bDrawFullCircle_SetBit(void* Obj)
{
	((UGizmoCircleComponent*)Obj)->bDrawFullCircle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bDrawFullCircle = { "bDrawFullCircle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoCircleComponent), &Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bDrawFullCircle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawFullCircle_MetaData), NewProp_bDrawFullCircle_MetaData) };
void Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits_SetBit(void* Obj)
{
	((UGizmoCircleComponent*)Obj)->bOnlyAllowFrontFacingHits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits = { "bOnlyAllowFrontFacingHits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoCircleComponent), &Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyAllowFrontFacingHits_MetaData), NewProp_bOnlyAllowFrontFacingHits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoCircleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_NumSides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bDrawFullCircle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoCircleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoCircleComponent_Statics::ClassParams = {
	&UGizmoCircleComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoCircleComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoCircleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoCircleComponent()
{
	if (!Z_Registration_Info_UClass_UGizmoCircleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoCircleComponent.OuterSingleton, Z_Construct_UClass_UGizmoCircleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoCircleComponent.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoCircleComponent>()
{
	return UGizmoCircleComponent::StaticClass();
}
UGizmoCircleComponent::UGizmoCircleComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoCircleComponent);
UGizmoCircleComponent::~UGizmoCircleComponent() {}
// End Class UGizmoCircleComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoCircleComponent, UGizmoCircleComponent::StaticClass, TEXT("UGizmoCircleComponent"), &Z_Registration_Info_UClass_UGizmoCircleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoCircleComponent), 2590152870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_3590664105(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
