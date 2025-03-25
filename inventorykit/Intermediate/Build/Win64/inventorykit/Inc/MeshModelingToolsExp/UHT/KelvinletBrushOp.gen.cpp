// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Private/Sculpting/KelvinletBrushOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKelvinletBrushOp() {}

// Begin Cross Module References
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBaseKelvinletBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBaseKelvinletBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPullKelvinletBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPullKelvinletBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UScaleKelvinletBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UScaleKelvinletBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USharpPullKelvinletBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USharpPullKelvinletBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTwistKelvinletBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTwistKelvinletBrushOpProps_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UBaseKelvinletBrushOpProps
void UBaseKelvinletBrushOpProps::StaticRegisterNativesUBaseKelvinletBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseKelvinletBrushOpProps);
UClass* Z_Construct_UClass_UBaseKelvinletBrushOpProps_NoRegister()
{
	return UBaseKelvinletBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/KelvinletBrushOp.h" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "Comment", "/** How much the mesh resists shear */" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "How much the mesh resists shear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Incompressiblity_MetaData[] = {
		{ "Comment", "/** How compressible the spatial region is: 1 - 2 x Poisson ratio */" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "How compressible the spatial region is: 1 - 2 x Poisson ratio" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSteps_MetaData[] = {
		{ "Comment", "/** Integration steps*/" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Integration steps" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Incompressiblity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BrushSteps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseKelvinletBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseKelvinletBrushOpProps, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Incompressiblity = { "Incompressiblity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseKelvinletBrushOpProps, Incompressiblity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Incompressiblity_MetaData), NewProp_Incompressiblity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_BrushSteps = { "BrushSteps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseKelvinletBrushOpProps, BrushSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSteps_MetaData), NewProp_BrushSteps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_Incompressiblity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::NewProp_BrushSteps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::ClassParams = {
	&UBaseKelvinletBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseKelvinletBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.OuterSingleton, Z_Construct_UClass_UBaseKelvinletBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBaseKelvinletBrushOpProps>()
{
	return UBaseKelvinletBrushOpProps::StaticClass();
}
UBaseKelvinletBrushOpProps::UBaseKelvinletBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseKelvinletBrushOpProps);
UBaseKelvinletBrushOpProps::~UBaseKelvinletBrushOpProps() {}
// End Class UBaseKelvinletBrushOpProps

// Begin Class UScaleKelvinletBrushOpProps
void UScaleKelvinletBrushOpProps::StaticRegisterNativesUScaleKelvinletBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScaleKelvinletBrushOpProps);
UClass* Z_Construct_UClass_UScaleKelvinletBrushOpProps_NoRegister()
{
	return UScaleKelvinletBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/KelvinletBrushOp.h" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "KelvinScaleBrush" },
		{ "ClampMax", "10." },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "10." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "KelvinScaleBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScaleKelvinletBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScaleKelvinletBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScaleKelvinletBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseKelvinletBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::ClassParams = {
	&UScaleKelvinletBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScaleKelvinletBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.OuterSingleton, Z_Construct_UClass_UScaleKelvinletBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UScaleKelvinletBrushOpProps>()
{
	return UScaleKelvinletBrushOpProps::StaticClass();
}
UScaleKelvinletBrushOpProps::UScaleKelvinletBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScaleKelvinletBrushOpProps);
UScaleKelvinletBrushOpProps::~UScaleKelvinletBrushOpProps() {}
// End Class UScaleKelvinletBrushOpProps

// Begin Class UPullKelvinletBrushOpProps
void UPullKelvinletBrushOpProps::StaticRegisterNativesUPullKelvinletBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPullKelvinletBrushOpProps);
UClass* Z_Construct_UClass_UPullKelvinletBrushOpProps_NoRegister()
{
	return UPullKelvinletBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/KelvinletBrushOp.h" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "KelvinGrabBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "Category", "KelvinGrabBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Depth of Brush into surface along view ray */" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Depth of Brush into surface along view ray" },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPullKelvinletBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullKelvinletBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullKelvinletBrushOpProps, Depth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::NewProp_Depth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseKelvinletBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::ClassParams = {
	&UPullKelvinletBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPullKelvinletBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.OuterSingleton, Z_Construct_UClass_UPullKelvinletBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPullKelvinletBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPullKelvinletBrushOpProps>()
{
	return UPullKelvinletBrushOpProps::StaticClass();
}
UPullKelvinletBrushOpProps::UPullKelvinletBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPullKelvinletBrushOpProps);
UPullKelvinletBrushOpProps::~UPullKelvinletBrushOpProps() {}
// End Class UPullKelvinletBrushOpProps

// Begin Class USharpPullKelvinletBrushOpProps
void USharpPullKelvinletBrushOpProps::StaticRegisterNativesUSharpPullKelvinletBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USharpPullKelvinletBrushOpProps);
UClass* Z_Construct_UClass_USharpPullKelvinletBrushOpProps_NoRegister()
{
	return USharpPullKelvinletBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/KelvinletBrushOp.h" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "KelvinSharpGrabBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "Category", "KelvinSharpGrabBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Depth of Brush into surface along view ray */" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Depth of Brush into surface along view ray" },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharpPullKelvinletBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USharpPullKelvinletBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USharpPullKelvinletBrushOpProps, Depth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::NewProp_Depth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseKelvinletBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::ClassParams = {
	&USharpPullKelvinletBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USharpPullKelvinletBrushOpProps()
{
	if (!Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.OuterSingleton, Z_Construct_UClass_USharpPullKelvinletBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USharpPullKelvinletBrushOpProps>()
{
	return USharpPullKelvinletBrushOpProps::StaticClass();
}
USharpPullKelvinletBrushOpProps::USharpPullKelvinletBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USharpPullKelvinletBrushOpProps);
USharpPullKelvinletBrushOpProps::~USharpPullKelvinletBrushOpProps() {}
// End Class USharpPullKelvinletBrushOpProps

// Begin Class UTwistKelvinletBrushOpProps
void UTwistKelvinletBrushOpProps::StaticRegisterNativesUTwistKelvinletBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTwistKelvinletBrushOpProps);
UClass* Z_Construct_UClass_UTwistKelvinletBrushOpProps_NoRegister()
{
	return UTwistKelvinletBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/KelvinletBrushOp.h" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "KelvinTwistBrush" },
		{ "ClampMax", "10." },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Twisting strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Twisting strength of the Brush" },
		{ "UIMax", "10." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "KelvinTwistBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Private/Sculpting/KelvinletBrushOp.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwistKelvinletBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwistKelvinletBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTwistKelvinletBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseKelvinletBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::ClassParams = {
	&UTwistKelvinletBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTwistKelvinletBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.OuterSingleton, Z_Construct_UClass_UTwistKelvinletBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UTwistKelvinletBrushOpProps>()
{
	return UTwistKelvinletBrushOpProps::StaticClass();
}
UTwistKelvinletBrushOpProps::UTwistKelvinletBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTwistKelvinletBrushOpProps);
UTwistKelvinletBrushOpProps::~UTwistKelvinletBrushOpProps() {}
// End Class UTwistKelvinletBrushOpProps

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Private_Sculpting_KelvinletBrushOp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseKelvinletBrushOpProps, UBaseKelvinletBrushOpProps::StaticClass, TEXT("UBaseKelvinletBrushOpProps"), &Z_Registration_Info_UClass_UBaseKelvinletBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseKelvinletBrushOpProps), 3795720456U) },
		{ Z_Construct_UClass_UScaleKelvinletBrushOpProps, UScaleKelvinletBrushOpProps::StaticClass, TEXT("UScaleKelvinletBrushOpProps"), &Z_Registration_Info_UClass_UScaleKelvinletBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScaleKelvinletBrushOpProps), 3155788686U) },
		{ Z_Construct_UClass_UPullKelvinletBrushOpProps, UPullKelvinletBrushOpProps::StaticClass, TEXT("UPullKelvinletBrushOpProps"), &Z_Registration_Info_UClass_UPullKelvinletBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPullKelvinletBrushOpProps), 1249683324U) },
		{ Z_Construct_UClass_USharpPullKelvinletBrushOpProps, USharpPullKelvinletBrushOpProps::StaticClass, TEXT("USharpPullKelvinletBrushOpProps"), &Z_Registration_Info_UClass_USharpPullKelvinletBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USharpPullKelvinletBrushOpProps), 1370744985U) },
		{ Z_Construct_UClass_UTwistKelvinletBrushOpProps, UTwistKelvinletBrushOpProps::StaticClass, TEXT("UTwistKelvinletBrushOpProps"), &Z_Registration_Info_UClass_UTwistKelvinletBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwistKelvinletBrushOpProps), 2275934901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Private_Sculpting_KelvinletBrushOp_h_1552970705(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Private_Sculpting_KelvinletBrushOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Private_Sculpting_KelvinletBrushOp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
