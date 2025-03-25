// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementCircleBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementCircleBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCircleBase();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCircleBase_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementLineBase();
INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoElementCircleBase
void UGizmoElementCircleBase::StaticRegisterNativesUGizmoElementCircleBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementCircleBase);
UClass* Z_Construct_UClass_UGizmoElementCircleBase_NoRegister()
{
	return UGizmoElementCircleBase::StaticClass();
}
struct Z_Construct_UClass_UGizmoElementCircleBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract base object for circle, torus and arc.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementCircleBase.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircleBase.h" },
		{ "ToolTip", "Abstract base object for circle, torus and arc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Comment", "// CircleBase center.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircleBase.h" },
		{ "ToolTip", "CircleBase center." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis0_MetaData[] = {
		{ "Comment", "// Axis0 of plane in which circle lies, must perpendicular to normal. \n// Start and end angles for partial circles are relative to this axis.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircleBase.h" },
		{ "ToolTip", "Axis0 of plane in which circle lies, must perpendicular to normal.\nStart and end angles for partial circles are relative to this axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis1_MetaData[] = {
		{ "Comment", "// Axis1 of plane in which circle lies, must perpendicular to Axis0.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircleBase.h" },
		{ "ToolTip", "Axis1 of plane in which circle lies, must perpendicular to Axis0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Comment", "// Radius of main circle, some derived elements have inner radius (e.g. torus and arc)\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircleBase.h" },
		{ "ToolTip", "Radius of main circle, some derived elements have inner radius (e.g. torus and arc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSegments_MetaData[] = {
		{ "Comment", "// Number of segments for rendering arc.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircleBase.h" },
		{ "ToolTip", "Number of segments for rendering arc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartialType_MetaData[] = {
		{ "Comment", "// True when the arc is not full.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircleBase.h" },
		{ "ToolTip", "True when the arc is not full." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartialStartAngle_MetaData[] = {
		{ "Comment", "// Start angle to render for partial torus\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircleBase.h" },
		{ "ToolTip", "Start angle to render for partial torus" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartialEndAngle_MetaData[] = {
		{ "Comment", "// End angle to render for partial torus\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircleBase.h" },
		{ "ToolTip", "End angle to render for partial torus" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartialViewDependentMaxCosTol_MetaData[] = {
		{ "Comment", "// For PartialViewDependent, max cosine of angle between the normal and view direction \n// Within this tolerance, the arc will be rendered as full rather than partial\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircleBase.h" },
		{ "ToolTip", "For PartialViewDependent, max cosine of angle between the normal and view direction\nWithin this tolerance, the arc will be rendered as full rather than partial" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis1;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSegments;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartialType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PartialType;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PartialStartAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PartialEndAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PartialViewDependentMaxCosTol;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementCircleBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCircleBase, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_Axis0 = { "Axis0", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCircleBase, Axis0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis0_MetaData), NewProp_Axis0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_Axis1 = { "Axis1", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCircleBase, Axis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis1_MetaData), NewProp_Axis1_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCircleBase, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCircleBase, NumSegments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSegments_MetaData), NewProp_NumSegments_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_PartialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_PartialType = { "PartialType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCircleBase, PartialType), Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartialType_MetaData), NewProp_PartialType_MetaData) }; // 465377321
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_PartialStartAngle = { "PartialStartAngle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCircleBase, PartialStartAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartialStartAngle_MetaData), NewProp_PartialStartAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_PartialEndAngle = { "PartialEndAngle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCircleBase, PartialEndAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartialEndAngle_MetaData), NewProp_PartialEndAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_PartialViewDependentMaxCosTol = { "PartialViewDependentMaxCosTol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCircleBase, PartialViewDependentMaxCosTol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartialViewDependentMaxCosTol_MetaData), NewProp_PartialViewDependentMaxCosTol_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementCircleBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_Axis0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_Axis1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_NumSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_PartialType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_PartialType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_PartialStartAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_PartialEndAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircleBase_Statics::NewProp_PartialViewDependentMaxCosTol,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCircleBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoElementCircleBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoElementLineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCircleBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementCircleBase_Statics::ClassParams = {
	&UGizmoElementCircleBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoElementCircleBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCircleBase_Statics::PropPointers),
	0,
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCircleBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoElementCircleBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoElementCircleBase()
{
	if (!Z_Registration_Info_UClass_UGizmoElementCircleBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementCircleBase.OuterSingleton, Z_Construct_UClass_UGizmoElementCircleBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoElementCircleBase.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementCircleBase>()
{
	return UGizmoElementCircleBase::StaticClass();
}
UGizmoElementCircleBase::UGizmoElementCircleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementCircleBase);
UGizmoElementCircleBase::~UGizmoElementCircleBase() {}
// End Class UGizmoElementCircleBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementCircleBase, UGizmoElementCircleBase::StaticClass, TEXT("UGizmoElementCircleBase"), &Z_Registration_Info_UClass_UGizmoElementCircleBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementCircleBase), 325386155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h_2073072461(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircleBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
