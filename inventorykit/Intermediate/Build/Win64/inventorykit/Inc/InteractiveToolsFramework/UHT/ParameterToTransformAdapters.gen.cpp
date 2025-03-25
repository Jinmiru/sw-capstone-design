// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/ParameterToTransformAdapters.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/ParameterSourcesFloat.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/ParameterSourcesVec2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterToTransformAdapters() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisRotationParameterSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisRotationParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisScaleParameterSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisScaleParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisTranslationParameterSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisTranslationParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoPlaneScaleParameterSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoPlaneScaleParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoPlaneTranslationParameterSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoUniformScaleParameterSource();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoUniformScaleParameterSource_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoFloatParameterChange();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoVec2ParameterChange();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoAxisTranslationParameterSource
void UGizmoAxisTranslationParameterSource::StaticRegisterNativesUGizmoAxisTranslationParameterSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoAxisTranslationParameterSource);
UClass* Z_Construct_UClass_UGizmoAxisTranslationParameterSource_NoRegister()
{
	return UGizmoAxisTranslationParameterSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoAxisTranslationParameterSource is an IGizmoFloatParameterSource implementation that\n * interprets the float value as the parameter of a line equation, and maps this parameter to a 3D translation \n * along a line with origin/direction given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.\n *\n * This ParameterSource is intended to be used to create 3D Axis Translation Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "UGizmoAxisTranslationParameterSource is an IGizmoFloatParameterSource implementation that\ninterprets the float value as the parameter of a line equation, and maps this parameter to a 3D translation\nalong a line with origin/direction given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.\n\nThis ParameterSource is intended to be used to create 3D Axis Translation Gizmos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** The Parameter line-equation value is converted to a 3D Translation along this Axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "The Parameter line-equation value is converted to a 3D Translation along this Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[] = {
		{ "Comment", "/** This TransformSource is updated by applying the constructed 3D translation */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "This TransformSource is updated by applying the constructed 3D translation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[] = {
		{ "Comment", "/** Parameter is the line-equation parameter that this FloatParameterSource provides */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Parameter is the line-equation parameter that this FloatParameterSource provides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[] = {
		{ "Comment", "/** Active parameter change (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Active parameter change (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurTranslationAxis_MetaData[] = {
		{ "Comment", "/** tranlsation axis for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "tranlsation axis for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurTranslationOrigin_MetaData[] = {
		{ "Comment", "/** tranlsation origin for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "tranlsation origin for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[] = {
		{ "Comment", "/** Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_TransformSource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastChange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurTranslationAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurTranslationOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoAxisTranslationParameterSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisSource_MetaData), NewProp_AxisSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, TransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSource_MetaData), NewProp_TransformSource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, Parameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter_MetaData), NewProp_Parameter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoFloatParameterChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastChange_MetaData), NewProp_LastChange_MetaData) }; // 2847661089
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationAxis = { "CurTranslationAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, CurTranslationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurTranslationAxis_MetaData), NewProp_CurTranslationAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationOrigin = { "CurTranslationOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, CurTranslationOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurTranslationOrigin_MetaData), NewProp_CurTranslationOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisTranslationParameterSource, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTransform_MetaData), NewProp_InitialTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_AxisSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_TransformSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_LastChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_CurTranslationOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::NewProp_InitialTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseFloatParameterSource,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::ClassParams = {
	&UGizmoAxisTranslationParameterSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoAxisTranslationParameterSource()
{
	if (!Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoAxisTranslationParameterSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoAxisTranslationParameterSource>()
{
	return UGizmoAxisTranslationParameterSource::StaticClass();
}
UGizmoAxisTranslationParameterSource::UGizmoAxisTranslationParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoAxisTranslationParameterSource);
UGizmoAxisTranslationParameterSource::~UGizmoAxisTranslationParameterSource() {}
// End Class UGizmoAxisTranslationParameterSource

// Begin Class UGizmoPlaneTranslationParameterSource
void UGizmoPlaneTranslationParameterSource::StaticRegisterNativesUGizmoPlaneTranslationParameterSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoPlaneTranslationParameterSource);
UClass* Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_NoRegister()
{
	return UGizmoPlaneTranslationParameterSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoAxisRotationParameterSource is an IGizmoVec2ParameterSource implementation that\n * interprets the FVector2D parameter as a position in a 2D plane, and maps this position to a 3D translation in\n * a plane with origin/normal given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.\n * \n * This ParameterSource is intended to be used to create 3D Plane Translation Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "UGizmoAxisRotationParameterSource is an IGizmoVec2ParameterSource implementation that\ninterprets the FVector2D parameter as a position in a 2D plane, and maps this position to a 3D translation in\na plane with origin/normal given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.\n\nThis ParameterSource is intended to be used to create 3D Plane Translation Gizmos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[] = {
		{ "Comment", "/** This TransformSource is updated by applying the constructed 3D translation */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "This TransformSource is updated by applying the constructed 3D translation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[] = {
		{ "Comment", "/** Parameter is the two line-equation parameters that this Vec2ParameterSource provides */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Parameter is the two line-equation parameters that this Vec2ParameterSource provides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[] = {
		{ "Comment", "/** Active parameter change (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Active parameter change (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurTranslationOrigin_MetaData[] = {
		{ "Comment", "/** plane origin for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "plane origin for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurTranslationNormal_MetaData[] = {
		{ "Comment", "/** plane normal for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "plane normal for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurTranslationAxisX_MetaData[] = {
		{ "Comment", "/** in-plane axis X for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "in-plane axis X for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurTranslationAxisY_MetaData[] = {
		{ "Comment", "/** in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[] = {
		{ "Comment", "/** Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_TransformSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastChange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurTranslationOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurTranslationNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurTranslationAxisX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurTranslationAxisY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoPlaneTranslationParameterSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisSource_MetaData), NewProp_AxisSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, TransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSource_MetaData), NewProp_TransformSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, Parameter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter_MetaData), NewProp_Parameter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoVec2ParameterChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastChange_MetaData), NewProp_LastChange_MetaData) }; // 1789057421
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationOrigin = { "CurTranslationOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, CurTranslationOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurTranslationOrigin_MetaData), NewProp_CurTranslationOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationNormal = { "CurTranslationNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, CurTranslationNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurTranslationNormal_MetaData), NewProp_CurTranslationNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisX = { "CurTranslationAxisX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, CurTranslationAxisX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurTranslationAxisX_MetaData), NewProp_CurTranslationAxisX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisY = { "CurTranslationAxisY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, CurTranslationAxisY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurTranslationAxisY_MetaData), NewProp_CurTranslationAxisY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneTranslationParameterSource, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTransform_MetaData), NewProp_InitialTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_AxisSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_TransformSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_LastChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_CurTranslationAxisY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::NewProp_InitialTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseVec2ParameterSource,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::ClassParams = {
	&UGizmoPlaneTranslationParameterSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoPlaneTranslationParameterSource()
{
	if (!Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoPlaneTranslationParameterSource>()
{
	return UGizmoPlaneTranslationParameterSource::StaticClass();
}
UGizmoPlaneTranslationParameterSource::UGizmoPlaneTranslationParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoPlaneTranslationParameterSource);
UGizmoPlaneTranslationParameterSource::~UGizmoPlaneTranslationParameterSource() {}
// End Class UGizmoPlaneTranslationParameterSource

// Begin Class UGizmoAxisRotationParameterSource
void UGizmoAxisRotationParameterSource::StaticRegisterNativesUGizmoAxisRotationParameterSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoAxisRotationParameterSource);
UClass* Z_Construct_UClass_UGizmoAxisRotationParameterSource_NoRegister()
{
	return UGizmoAxisRotationParameterSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoAxisRotationParameterSource is an IGizmoFloatParameterSource implementation that\n * interprets the float parameter as an angle, and maps this angle to a 3D rotation\n * around an IGizmoAxisSource (ie 3D axis). This rotation is applied to an IGizmoTransformSource.\n * This ParameterSource is intended to be used to create 3D Rotation Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "UGizmoAxisRotationParameterSource is an IGizmoFloatParameterSource implementation that\ninterprets the float parameter as an angle, and maps this angle to a 3D rotation\naround an IGizmoAxisSource (ie 3D axis). This rotation is applied to an IGizmoTransformSource.\nThis ParameterSource is intended to be used to create 3D Rotation Gizmos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** float-parameter Angle is mapped to a 3D Rotation around this Axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "float-parameter Angle is mapped to a 3D Rotation around this Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[] = {
		{ "Comment", "/** This TransformSource is updated by applying the constructed 3D rotation */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "This TransformSource is updated by applying the constructed 3D rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "Comment", "/** Angle is the parameter that this FloatParameterSource provides */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Angle is the parameter that this FloatParameterSource provides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[] = {
		{ "Comment", "/** Active parameter change (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Active parameter change (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurRotationAxis_MetaData[] = {
		{ "Comment", "/** Rotation axis for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Rotation axis for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurRotationOrigin_MetaData[] = {
		{ "Comment", "/** Rotation origin for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Rotation origin for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[] = {
		{ "Comment", "/** Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_TransformSource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastChange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurRotationAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurRotationOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoAxisRotationParameterSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisSource_MetaData), NewProp_AxisSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, TransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSource_MetaData), NewProp_TransformSource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoFloatParameterChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastChange_MetaData), NewProp_LastChange_MetaData) }; // 2847661089
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationAxis = { "CurRotationAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, CurRotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurRotationAxis_MetaData), NewProp_CurRotationAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationOrigin = { "CurRotationOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, CurRotationOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurRotationOrigin_MetaData), NewProp_CurRotationOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisRotationParameterSource, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTransform_MetaData), NewProp_InitialTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_AxisSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_TransformSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_LastChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_CurRotationOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::NewProp_InitialTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseFloatParameterSource,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::ClassParams = {
	&UGizmoAxisRotationParameterSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoAxisRotationParameterSource()
{
	if (!Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoAxisRotationParameterSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoAxisRotationParameterSource>()
{
	return UGizmoAxisRotationParameterSource::StaticClass();
}
UGizmoAxisRotationParameterSource::UGizmoAxisRotationParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoAxisRotationParameterSource);
UGizmoAxisRotationParameterSource::~UGizmoAxisRotationParameterSource() {}
// End Class UGizmoAxisRotationParameterSource

// Begin Class UGizmoUniformScaleParameterSource
void UGizmoUniformScaleParameterSource::StaticRegisterNativesUGizmoUniformScaleParameterSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoUniformScaleParameterSource);
UClass* Z_Construct_UClass_UGizmoUniformScaleParameterSource_NoRegister()
{
	return UGizmoUniformScaleParameterSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * UGizmoUniformScaleParameterSource is an IGizmoVec2ParameterSource implementation that\n  * interprets the Vec2 parameter as the position in a 2D plane, and maps this parameter to a\n  * change in a uniform scale value. This scale is applied to an IGizmoTransformSource.\n  * \n  * The X/Y plane parameter deltas are converted to a uniform scale delta simply by adding them.\n  * This assumpes that the 3D plane is oriented such that \"positive\" along the X and Y \n  * tangent axes corresponds to something semantically meaningful. It's up to the client to do this.\n  *\n  * This ParameterSource is intended to be used to create 3D Uniform Scale Gizmos.\n  */" },
		{ "IncludePath", "BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "UGizmoUniformScaleParameterSource is an IGizmoVec2ParameterSource implementation that\ninterprets the Vec2 parameter as the position in a 2D plane, and maps this parameter to a\nchange in a uniform scale value. This scale is applied to an IGizmoTransformSource.\n\nThe X/Y plane parameter deltas are converted to a uniform scale delta simply by adding them.\nThis assumpes that the 3D plane is oriented such that \"positive\" along the X and Y\ntangent axes corresponds to something semantically meaningful. It's up to the client to do this.\n\nThis ParameterSource is intended to be used to create 3D Uniform Scale Gizmos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[] = {
		{ "Comment", "/** This TransformSource is updated by applying the constructed 3D translation */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "This TransformSource is updated by applying the constructed 3D translation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[] = {
		{ "Comment", "/** Coordinate delta is multiplied by this amount */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Coordinate delta is multiplied by this amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[] = {
		{ "Comment", "/** Parameter is the two line-equation parameters that this Vec2ParameterSource provides */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Parameter is the two line-equation parameters that this Vec2ParameterSource provides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[] = {
		{ "Comment", "/** Active parameter change (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Active parameter change (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurScaleOrigin_MetaData[] = {
		{ "Comment", "/** plane origin for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "plane origin for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurScaleNormal_MetaData[] = {
		{ "Comment", "/** plane normal for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "plane normal for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurScaleAxisX_MetaData[] = {
		{ "Comment", "/** in-plane axis X for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "in-plane axis X for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurScaleAxisY_MetaData[] = {
		{ "Comment", "/** in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[] = {
		{ "Comment", "/** Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_TransformSource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastChange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurScaleOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurScaleNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurScaleAxisX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurScaleAxisY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoUniformScaleParameterSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisSource_MetaData), NewProp_AxisSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, TransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSource_MetaData), NewProp_TransformSource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, ScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMultiplier_MetaData), NewProp_ScaleMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, Parameter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter_MetaData), NewProp_Parameter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoVec2ParameterChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastChange_MetaData), NewProp_LastChange_MetaData) }; // 1789057421
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleOrigin = { "CurScaleOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, CurScaleOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurScaleOrigin_MetaData), NewProp_CurScaleOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleNormal = { "CurScaleNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, CurScaleNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurScaleNormal_MetaData), NewProp_CurScaleNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisX = { "CurScaleAxisX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, CurScaleAxisX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurScaleAxisX_MetaData), NewProp_CurScaleAxisX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisY = { "CurScaleAxisY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, CurScaleAxisY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurScaleAxisY_MetaData), NewProp_CurScaleAxisY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoUniformScaleParameterSource, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTransform_MetaData), NewProp_InitialTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_AxisSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_TransformSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_ScaleMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_LastChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_CurScaleAxisY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::NewProp_InitialTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseVec2ParameterSource,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::ClassParams = {
	&UGizmoUniformScaleParameterSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoUniformScaleParameterSource()
{
	if (!Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoUniformScaleParameterSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoUniformScaleParameterSource>()
{
	return UGizmoUniformScaleParameterSource::StaticClass();
}
UGizmoUniformScaleParameterSource::UGizmoUniformScaleParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoUniformScaleParameterSource);
UGizmoUniformScaleParameterSource::~UGizmoUniformScaleParameterSource() {}
// End Class UGizmoUniformScaleParameterSource

// Begin Class UGizmoAxisScaleParameterSource
void UGizmoAxisScaleParameterSource::StaticRegisterNativesUGizmoAxisScaleParameterSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoAxisScaleParameterSource);
UClass* Z_Construct_UClass_UGizmoAxisScaleParameterSource_NoRegister()
{
	return UGizmoAxisScaleParameterSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoAxisScaleParameterSource is an IGizmoFloatParameterSource implementation that\n * interprets the float value as the parameter of a line equation, and maps this parameter to a scale factor\n * along a line with origin/direction given by an IGizmoAxisSource. This scale is applied to an IGizmoTransformSource.\n *\n * This ParameterSource is intended to be used to create 3D Axis Scale Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "UGizmoAxisScaleParameterSource is an IGizmoFloatParameterSource implementation that\ninterprets the float value as the parameter of a line equation, and maps this parameter to a scale factor\nalong a line with origin/direction given by an IGizmoAxisSource. This scale is applied to an IGizmoTransformSource.\n\nThis ParameterSource is intended to be used to create 3D Axis Scale Gizmos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** The Parameter line-equation value is converted to a 3D Translation along this Axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "The Parameter line-equation value is converted to a 3D Translation along this Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[] = {
		{ "Comment", "/** This TransformSource is updated by applying the constructed 3D rotation */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "This TransformSource is updated by applying the constructed 3D rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[] = {
		{ "Comment", "/** Coordinate delta is multiplied by this amount */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Coordinate delta is multiplied by this amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampToZero_MetaData[] = {
		{ "Comment", "/** If true, the minimal output scale will be zero. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "If true, the minimal output scale will be zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[] = {
		{ "Comment", "/** Parameter is the line-equation parameter that this FloatParameterSource provides */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Parameter is the line-equation parameter that this FloatParameterSource provides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[] = {
		{ "Comment", "/** Active parameter change (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Active parameter change (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurScaleAxis_MetaData[] = {
		{ "Comment", "/** scale axis for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "scale axis for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurScaleOrigin_MetaData[] = {
		{ "Comment", "/** scale origin for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "scale origin for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[] = {
		{ "Comment", "/** Saved copy of Initial transform for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Saved copy of Initial transform for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_TransformSource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
	static void NewProp_bClampToZero_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToZero;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastChange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurScaleAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurScaleOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoAxisScaleParameterSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisSource_MetaData), NewProp_AxisSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, TransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSource_MetaData), NewProp_TransformSource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, ScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMultiplier_MetaData), NewProp_ScaleMultiplier_MetaData) };
void Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_bClampToZero_SetBit(void* Obj)
{
	((UGizmoAxisScaleParameterSource*)Obj)->bClampToZero = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_bClampToZero = { "bClampToZero", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoAxisScaleParameterSource), &Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_bClampToZero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampToZero_MetaData), NewProp_bClampToZero_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, Parameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter_MetaData), NewProp_Parameter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoFloatParameterChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastChange_MetaData), NewProp_LastChange_MetaData) }; // 2847661089
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleAxis = { "CurScaleAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, CurScaleAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurScaleAxis_MetaData), NewProp_CurScaleAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleOrigin = { "CurScaleOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, CurScaleOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurScaleOrigin_MetaData), NewProp_CurScaleOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoAxisScaleParameterSource, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTransform_MetaData), NewProp_InitialTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_AxisSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_TransformSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_ScaleMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_bClampToZero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_LastChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_CurScaleOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::NewProp_InitialTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseFloatParameterSource,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::ClassParams = {
	&UGizmoAxisScaleParameterSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoAxisScaleParameterSource()
{
	if (!Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoAxisScaleParameterSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoAxisScaleParameterSource>()
{
	return UGizmoAxisScaleParameterSource::StaticClass();
}
UGizmoAxisScaleParameterSource::UGizmoAxisScaleParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoAxisScaleParameterSource);
UGizmoAxisScaleParameterSource::~UGizmoAxisScaleParameterSource() {}
// End Class UGizmoAxisScaleParameterSource

// Begin Class UGizmoPlaneScaleParameterSource
void UGizmoPlaneScaleParameterSource::StaticRegisterNativesUGizmoPlaneScaleParameterSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoPlaneScaleParameterSource);
UClass* Z_Construct_UClass_UGizmoPlaneScaleParameterSource_NoRegister()
{
	return UGizmoPlaneScaleParameterSource::StaticClass();
}
struct Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoPlaneScaleParameterSource  is an UGizmoBaseVec2ParameterSource implementation that\n * maps a 2D parameter delta to a change in a 3D scaling vector, based on the tangent axes of a 3D plane\n * This scale is applied to an IGizmoTransformSource.\n *\n * This ParameterSource is intended to be used to create 3D Plane Scale Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "UGizmoPlaneScaleParameterSource  is an UGizmoBaseVec2ParameterSource implementation that\nmaps a 2D parameter delta to a change in a 3D scaling vector, based on the tangent axes of a 3D plane\nThis scale is applied to an IGizmoTransformSource.\n\nThis ParameterSource is intended to be used to create 3D Plane Scale Gizmos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSource_MetaData[] = {
		{ "Comment", "/** This TransformSource is updated by applying the constructed 3D translation */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "This TransformSource is updated by applying the constructed 3D translation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[] = {
		{ "Comment", "/** Coordinate delta is multiplied by this amount */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Coordinate delta is multiplied by this amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseEqualScaling_MetaData[] = {
		{ "Comment", "/** If true, the scaling will be done an equal amount in each axis, using the minimal value */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "If true, the scaling will be done an equal amount in each axis, using the minimal value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampToZero_MetaData[] = {
		{ "Comment", "/** If true, the minimal output scale will be zero. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "If true, the minimal output scale will be zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[] = {
		{ "Comment", "/** Parameter is the two line-equation parameters that this Vec2ParameterSource provides */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Parameter is the two line-equation parameters that this Vec2ParameterSource provides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[] = {
		{ "Comment", "/** Active parameter change (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Active parameter change (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurScaleOrigin_MetaData[] = {
		{ "Comment", "/** plane origin for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "plane origin for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurScaleNormal_MetaData[] = {
		{ "Comment", "/** plane normal for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "plane normal for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurScaleAxisX_MetaData[] = {
		{ "Comment", "/** in-plane axis X for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "in-plane axis X for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurScaleAxisY_MetaData[] = {
		{ "Comment", "/** in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[] = {
		{ "Comment", "/** Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterToTransformAdapters.h" },
		{ "ToolTip", "Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_TransformSource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
	static void NewProp_bUseEqualScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEqualScaling;
	static void NewProp_bClampToZero_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToZero;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastChange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurScaleOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurScaleNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurScaleAxisX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurScaleAxisY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoPlaneScaleParameterSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisSource_MetaData), NewProp_AxisSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_TransformSource = { "TransformSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, TransformSource), Z_Construct_UClass_UGizmoTransformSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSource_MetaData), NewProp_TransformSource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, ScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMultiplier_MetaData), NewProp_ScaleMultiplier_MetaData) };
void Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_bUseEqualScaling_SetBit(void* Obj)
{
	((UGizmoPlaneScaleParameterSource*)Obj)->bUseEqualScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_bUseEqualScaling = { "bUseEqualScaling", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoPlaneScaleParameterSource), &Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_bUseEqualScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseEqualScaling_MetaData), NewProp_bUseEqualScaling_MetaData) };
void Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_bClampToZero_SetBit(void* Obj)
{
	((UGizmoPlaneScaleParameterSource*)Obj)->bClampToZero = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_bClampToZero = { "bClampToZero", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoPlaneScaleParameterSource), &Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_bClampToZero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampToZero_MetaData), NewProp_bClampToZero_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, Parameter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameter_MetaData), NewProp_Parameter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoVec2ParameterChange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastChange_MetaData), NewProp_LastChange_MetaData) }; // 1789057421
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleOrigin = { "CurScaleOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, CurScaleOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurScaleOrigin_MetaData), NewProp_CurScaleOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleNormal = { "CurScaleNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, CurScaleNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurScaleNormal_MetaData), NewProp_CurScaleNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisX = { "CurScaleAxisX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, CurScaleAxisX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurScaleAxisX_MetaData), NewProp_CurScaleAxisX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisY = { "CurScaleAxisY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, CurScaleAxisY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurScaleAxisY_MetaData), NewProp_CurScaleAxisY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoPlaneScaleParameterSource, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTransform_MetaData), NewProp_InitialTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_AxisSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_TransformSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_ScaleMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_bUseEqualScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_bClampToZero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_Parameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_LastChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_CurScaleAxisY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::NewProp_InitialTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoBaseVec2ParameterSource,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::ClassParams = {
	&UGizmoPlaneScaleParameterSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoPlaneScaleParameterSource()
{
	if (!Z_Registration_Info_UClass_UGizmoPlaneScaleParameterSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoPlaneScaleParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoPlaneScaleParameterSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoPlaneScaleParameterSource.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoPlaneScaleParameterSource>()
{
	return UGizmoPlaneScaleParameterSource::StaticClass();
}
UGizmoPlaneScaleParameterSource::UGizmoPlaneScaleParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoPlaneScaleParameterSource);
UGizmoPlaneScaleParameterSource::~UGizmoPlaneScaleParameterSource() {}
// End Class UGizmoPlaneScaleParameterSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterToTransformAdapters_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoAxisTranslationParameterSource, UGizmoAxisTranslationParameterSource::StaticClass, TEXT("UGizmoAxisTranslationParameterSource"), &Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoAxisTranslationParameterSource), 1803588253U) },
		{ Z_Construct_UClass_UGizmoPlaneTranslationParameterSource, UGizmoPlaneTranslationParameterSource::StaticClass, TEXT("UGizmoPlaneTranslationParameterSource"), &Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoPlaneTranslationParameterSource), 369662904U) },
		{ Z_Construct_UClass_UGizmoAxisRotationParameterSource, UGizmoAxisRotationParameterSource::StaticClass, TEXT("UGizmoAxisRotationParameterSource"), &Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoAxisRotationParameterSource), 3733542743U) },
		{ Z_Construct_UClass_UGizmoUniformScaleParameterSource, UGizmoUniformScaleParameterSource::StaticClass, TEXT("UGizmoUniformScaleParameterSource"), &Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoUniformScaleParameterSource), 2303984167U) },
		{ Z_Construct_UClass_UGizmoAxisScaleParameterSource, UGizmoAxisScaleParameterSource::StaticClass, TEXT("UGizmoAxisScaleParameterSource"), &Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoAxisScaleParameterSource), 2101803902U) },
		{ Z_Construct_UClass_UGizmoPlaneScaleParameterSource, UGizmoPlaneScaleParameterSource::StaticClass, TEXT("UGizmoPlaneScaleParameterSource"), &Z_Registration_Info_UClass_UGizmoPlaneScaleParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoPlaneScaleParameterSource), 1831716365U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterToTransformAdapters_h_2929498314(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterToTransformAdapters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterToTransformAdapters_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
