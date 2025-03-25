// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementLineBase.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementRenderState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementLineBase() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementLineBase();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementLineBase_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoElementLineBase
void UGizmoElementLineBase::StaticRegisterNativesUGizmoElementLineBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementLineBase);
UClass* Z_Construct_UClass_UGizmoElementLineBase_NoRegister()
{
	return UGizmoElementLineBase::StaticClass();
}
struct Z_Construct_UClass_UGizmoElementLineBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for 2d and 3d primitive objects which support line drawing,\n * intended to be used as part of 3D Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementLineBase.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineBase.h" },
		{ "ToolTip", "Base class for 2d and 3d primitive objects which support line drawing,\nintended to be used as part of 3D Gizmos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineRenderAttributes_MetaData[] = {
		{ "Comment", "// Line render state attributes for this element\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineBase.h" },
		{ "ToolTip", "Line render state attributes for this element" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Comment", "// Line thickness when rendering lines, must be >= 0.0, value of 0.0 will render thinnest line \n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineBase.h" },
		{ "ToolTip", "Line thickness when rendering lines, must be >= 0.0, value of 0.0 will render thinnest line" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScreenSpaceLine_MetaData[] = {
		{ "Comment", "// Whether line thickness is in screen space\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineBase.h" },
		{ "ToolTip", "Whether line thickness is in screen space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverLineThicknessMultiplier_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Multiplier applied to line thickness when hovering\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineBase.h" },
		{ "ToolTip", "Multiplier applied to line thickness when hovering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractLineThicknessMultiplier_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Multiplier applied to line thickness when interacting\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineBase.h" },
		{ "ToolTip", "Multiplier applied to line thickness when interacting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineRenderAttributes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static void NewProp_bScreenSpaceLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScreenSpaceLine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverLineThicknessMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractLineThicknessMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementLineBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineRenderAttributes = { "LineRenderAttributes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementLineBase, LineRenderAttributes), Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineRenderAttributes_MetaData), NewProp_LineRenderAttributes_MetaData) }; // 1825412841
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementLineBase, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
void Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_bScreenSpaceLine_SetBit(void* Obj)
{
	((UGizmoElementLineBase*)Obj)->bScreenSpaceLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_bScreenSpaceLine = { "bScreenSpaceLine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementLineBase), &Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_bScreenSpaceLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScreenSpaceLine_MetaData), NewProp_bScreenSpaceLine_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_HoverLineThicknessMultiplier = { "HoverLineThicknessMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementLineBase, HoverLineThicknessMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverLineThicknessMultiplier_MetaData), NewProp_HoverLineThicknessMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_InteractLineThicknessMultiplier = { "InteractLineThicknessMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementLineBase, InteractLineThicknessMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractLineThicknessMultiplier_MetaData), NewProp_InteractLineThicknessMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementLineBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineRenderAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_bScreenSpaceLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_HoverLineThicknessMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_InteractLineThicknessMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoElementLineBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoElementBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementLineBase_Statics::ClassParams = {
	&UGizmoElementLineBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoElementLineBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineBase_Statics::PropPointers),
	0,
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoElementLineBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoElementLineBase()
{
	if (!Z_Registration_Info_UClass_UGizmoElementLineBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementLineBase.OuterSingleton, Z_Construct_UClass_UGizmoElementLineBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoElementLineBase.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementLineBase>()
{
	return UGizmoElementLineBase::StaticClass();
}
UGizmoElementLineBase::UGizmoElementLineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementLineBase);
UGizmoElementLineBase::~UGizmoElementLineBase() {}
// End Class UGizmoElementLineBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementLineBase, UGizmoElementLineBase::StaticClass, TEXT("UGizmoElementLineBase"), &Z_Registration_Info_UClass_UGizmoElementLineBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementLineBase), 1421370705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineBase_h_1174884564(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
