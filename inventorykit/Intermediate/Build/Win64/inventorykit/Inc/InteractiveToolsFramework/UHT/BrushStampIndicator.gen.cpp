// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/BrushStampIndicator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushStampIndicator() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicator();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicator_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicatorBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicatorBuilder_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UBrushStampIndicatorBuilder
void UBrushStampIndicatorBuilder::StaticRegisterNativesUBrushStampIndicatorBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushStampIndicatorBuilder);
UClass* Z_Construct_UClass_UBrushStampIndicatorBuilder_NoRegister()
{
	return UBrushStampIndicatorBuilder::StaticClass();
}
struct Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/BrushStampIndicator.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushStampIndicatorBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::ClassParams = {
	&UBrushStampIndicatorBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBrushStampIndicatorBuilder()
{
	if (!Z_Registration_Info_UClass_UBrushStampIndicatorBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushStampIndicatorBuilder.OuterSingleton, Z_Construct_UClass_UBrushStampIndicatorBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBrushStampIndicatorBuilder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UBrushStampIndicatorBuilder>()
{
	return UBrushStampIndicatorBuilder::StaticClass();
}
UBrushStampIndicatorBuilder::UBrushStampIndicatorBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushStampIndicatorBuilder);
UBrushStampIndicatorBuilder::~UBrushStampIndicatorBuilder() {}
// End Class UBrushStampIndicatorBuilder

// Begin Class UBrushStampIndicator
void UBrushStampIndicator::StaticRegisterNativesUBrushStampIndicator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushStampIndicator);
UClass* Z_Construct_UClass_UBrushStampIndicator_NoRegister()
{
	return UBrushStampIndicator::StaticClass();
}
struct Z_Construct_UClass_UBrushStampIndicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * UBrushStampIndicator is a simple 3D brush indicator. \n */" },
		{ "IncludePath", "BaseGizmos/BrushStampIndicator.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
		{ "ToolTip", "* UBrushStampIndicator is a simple 3D brush indicator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Comment", "/** Controls whether Gizmo will draw visual elements. Does not currently affect AttachedComponent. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
		{ "ToolTip", "Controls whether Gizmo will draw visual elements. Does not currently affect AttachedComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawIndicatorLines_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawRadiusCircle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleStepCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDepthTested_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSecondaryLines_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryLineThickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryLineColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachedComponent_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional Component that will be transformed such that it tracks the Radius/Position/Normal\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/BrushStampIndicator.h" },
		{ "ToolTip", "Optional Component that will be transformed such that it tracks the Radius/Position/Normal" },
	};
#endif // WITH_METADATA
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushFalloff;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BrushPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BrushNormal;
	static void NewProp_bDrawIndicatorLines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawIndicatorLines;
	static void NewProp_bDrawRadiusCircle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawRadiusCircle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleStepCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static void NewProp_bDepthTested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDepthTested;
	static void NewProp_bDrawSecondaryLines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSecondaryLines;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryLineThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryLineColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushStampIndicator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((UBrushStampIndicator*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushRadius = { "BrushRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushStampIndicator, BrushRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushRadius_MetaData), NewProp_BrushRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushFalloff = { "BrushFalloff", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushStampIndicator, BrushFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushFalloff_MetaData), NewProp_BrushFalloff_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushPosition = { "BrushPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushStampIndicator, BrushPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushPosition_MetaData), NewProp_BrushPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushNormal = { "BrushNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushStampIndicator, BrushNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushNormal_MetaData), NewProp_BrushNormal_MetaData) };
void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines_SetBit(void* Obj)
{
	((UBrushStampIndicator*)Obj)->bDrawIndicatorLines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines = { "bDrawIndicatorLines", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawIndicatorLines_MetaData), NewProp_bDrawIndicatorLines_MetaData) };
void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle_SetBit(void* Obj)
{
	((UBrushStampIndicator*)Obj)->bDrawRadiusCircle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle = { "bDrawRadiusCircle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawRadiusCircle_MetaData), NewProp_bDrawRadiusCircle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SampleStepCount = { "SampleStepCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushStampIndicator, SampleStepCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleStepCount_MetaData), NewProp_SampleStepCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushStampIndicator, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineColor_MetaData), NewProp_LineColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushStampIndicator, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested_SetBit(void* Obj)
{
	((UBrushStampIndicator*)Obj)->bDepthTested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested = { "bDepthTested", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDepthTested_MetaData), NewProp_bDepthTested_MetaData) };
void Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines_SetBit(void* Obj)
{
	((UBrushStampIndicator*)Obj)->bDrawSecondaryLines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines = { "bDrawSecondaryLines", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBrushStampIndicator), &Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawSecondaryLines_MetaData), NewProp_bDrawSecondaryLines_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineThickness = { "SecondaryLineThickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushStampIndicator, SecondaryLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryLineThickness_MetaData), NewProp_SecondaryLineThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineColor = { "SecondaryLineColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushStampIndicator, SecondaryLineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryLineColor_MetaData), NewProp_SecondaryLineColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_AttachedComponent = { "AttachedComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushStampIndicator, AttachedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachedComponent_MetaData), NewProp_AttachedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushStampIndicator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_BrushNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawIndicatorLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawRadiusCircle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SampleStepCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDepthTested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_bDrawSecondaryLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_SecondaryLineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushStampIndicator_Statics::NewProp_AttachedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBrushStampIndicator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushStampIndicator_Statics::ClassParams = {
	&UBrushStampIndicator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBrushStampIndicator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::PropPointers),
	0,
	0x008800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushStampIndicator_Statics::Class_MetaDataParams), Z_Construct_UClass_UBrushStampIndicator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBrushStampIndicator()
{
	if (!Z_Registration_Info_UClass_UBrushStampIndicator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushStampIndicator.OuterSingleton, Z_Construct_UClass_UBrushStampIndicator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBrushStampIndicator.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UBrushStampIndicator>()
{
	return UBrushStampIndicator::StaticClass();
}
UBrushStampIndicator::UBrushStampIndicator() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushStampIndicator);
UBrushStampIndicator::~UBrushStampIndicator() {}
// End Class UBrushStampIndicator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_BrushStampIndicator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBrushStampIndicatorBuilder, UBrushStampIndicatorBuilder::StaticClass, TEXT("UBrushStampIndicatorBuilder"), &Z_Registration_Info_UClass_UBrushStampIndicatorBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushStampIndicatorBuilder), 3694860044U) },
		{ Z_Construct_UClass_UBrushStampIndicator, UBrushStampIndicator::StaticClass, TEXT("UBrushStampIndicator"), &Z_Registration_Info_UClass_UBrushStampIndicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushStampIndicator), 1585299973U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_BrushStampIndicator_h_2527004540(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_BrushStampIndicator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_BrushStampIndicator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
