// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementTorus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementTorus() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCircleBase();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementTorus();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementTorus_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoElementTorus
void UGizmoElementTorus::StaticRegisterNativesUGizmoElementTorus()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementTorus);
UClass* Z_Construct_UClass_UGizmoElementTorus_NoRegister()
{
	return UGizmoElementTorus::StaticClass();
}
struct Z_Construct_UClass_UGizmoElementTorus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a torus based on parameters.\n * \n * Note: the LineTrace method does not perform a true ray-torus intersection!\n * See comment above LineTrace method below for details of how this intersection is approximated.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementTorus.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTorus.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a torus based on parameters.\n\nNote: the LineTrace method does not perform a true ray-torus intersection!\nSee comment above LineTrace method below for details of how this intersection is approximated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[] = {
		{ "Comment", "// Torus inner radius.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTorus.h" },
		{ "ToolTip", "Torus inner radius." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInnerSlices_MetaData[] = {
		{ "Comment", "// Number of slices to render in each torus segment.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTorus.h" },
		{ "ToolTip", "Number of slices to render in each torus segment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEndCaps_MetaData[] = {
		{ "Comment", "// Whether to render end caps on a partial torus.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTorus.h" },
		{ "ToolTip", "Whether to render end caps on a partial torus." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InnerRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInnerSlices;
	static void NewProp_bEndCaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndCaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementTorus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementTorus, InnerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerRadius_MetaData), NewProp_InnerRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_NumInnerSlices = { "NumInnerSlices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementTorus, NumInnerSlices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInnerSlices_MetaData), NewProp_NumInnerSlices_MetaData) };
void Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_bEndCaps_SetBit(void* Obj)
{
	((UGizmoElementTorus*)Obj)->bEndCaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_bEndCaps = { "bEndCaps", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementTorus), &Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_bEndCaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEndCaps_MetaData), NewProp_bEndCaps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementTorus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_InnerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_NumInnerSlices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementTorus_Statics::NewProp_bEndCaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTorus_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoElementTorus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoElementCircleBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTorus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementTorus_Statics::ClassParams = {
	&UGizmoElementTorus::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoElementTorus_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTorus_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTorus_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoElementTorus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoElementTorus()
{
	if (!Z_Registration_Info_UClass_UGizmoElementTorus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementTorus.OuterSingleton, Z_Construct_UClass_UGizmoElementTorus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoElementTorus.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementTorus>()
{
	return UGizmoElementTorus::StaticClass();
}
UGizmoElementTorus::UGizmoElementTorus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementTorus);
UGizmoElementTorus::~UGizmoElementTorus() {}
// End Class UGizmoElementTorus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementTorus, UGizmoElementTorus::StaticClass, TEXT("UGizmoElementTorus"), &Z_Registration_Info_UClass_UGizmoElementTorus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementTorus), 739103255U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_2598485280(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTorus_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
