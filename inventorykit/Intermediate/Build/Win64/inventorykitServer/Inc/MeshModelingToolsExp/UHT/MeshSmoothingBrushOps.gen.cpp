// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/Sculpting/MeshSmoothingBrushOps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSmoothingBrushOps() {}

// Begin Cross Module References
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBaseSmoothBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBaseSmoothBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEraseBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEraseBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UFlattenBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UFlattenBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USecondarySmoothBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USecondarySmoothBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothFillBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothFillBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UBaseSmoothBrushOpProps
void UBaseSmoothBrushOpProps::StaticRegisterNativesUBaseSmoothBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseSmoothBrushOpProps);
UClass* Z_Construct_UClass_UBaseSmoothBrushOpProps_NoRegister()
{
	return UBaseSmoothBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UBaseSmoothBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSmoothingBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseSmoothBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseSmoothBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSmoothBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseSmoothBrushOpProps_Statics::ClassParams = {
	&UBaseSmoothBrushOpProps::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSmoothBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseSmoothBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseSmoothBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.OuterSingleton, Z_Construct_UClass_UBaseSmoothBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseSmoothBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBaseSmoothBrushOpProps>()
{
	return UBaseSmoothBrushOpProps::StaticClass();
}
UBaseSmoothBrushOpProps::UBaseSmoothBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseSmoothBrushOpProps);
UBaseSmoothBrushOpProps::~UBaseSmoothBrushOpProps() {}
// End Class UBaseSmoothBrushOpProps

// Begin Class USmoothBrushOpProps
void USmoothBrushOpProps::StaticRegisterNativesUSmoothBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmoothBrushOpProps);
UClass* Z_Construct_UClass_USmoothBrushOpProps_NoRegister()
{
	return USmoothBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_USmoothBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSmoothingBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "SmoothBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "SmoothBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply (0.0 - 1.0) */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "Amount of falloff to apply (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveUVFlow_MetaData[] = {
		{ "Category", "SmoothBrush" },
		{ "Comment", "/** If true, try to preserve the shape of the UV/3D mapping. This will limit Smoothing and Remeshing in some cases. */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "If true, try to preserve the shape of the UV/3D mapping. This will limit Smoothing and Remeshing in some cases." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static void NewProp_bPreserveUVFlow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveUVFlow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmoothBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
void Z_Construct_UClass_USmoothBrushOpProps_Statics::NewProp_bPreserveUVFlow_SetBit(void* Obj)
{
	((USmoothBrushOpProps*)Obj)->bPreserveUVFlow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothBrushOpProps_Statics::NewProp_bPreserveUVFlow = { "bPreserveUVFlow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USmoothBrushOpProps), &Z_Construct_UClass_USmoothBrushOpProps_Statics::NewProp_bPreserveUVFlow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveUVFlow_MetaData), NewProp_bPreserveUVFlow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmoothBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothBrushOpProps_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothBrushOpProps_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothBrushOpProps_Statics::NewProp_bPreserveUVFlow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USmoothBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseSmoothBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmoothBrushOpProps_Statics::ClassParams = {
	&USmoothBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USmoothBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USmoothBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_USmoothBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmoothBrushOpProps()
{
	if (!Z_Registration_Info_UClass_USmoothBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmoothBrushOpProps.OuterSingleton, Z_Construct_UClass_USmoothBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmoothBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USmoothBrushOpProps>()
{
	return USmoothBrushOpProps::StaticClass();
}
USmoothBrushOpProps::USmoothBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmoothBrushOpProps);
USmoothBrushOpProps::~USmoothBrushOpProps() {}
// End Class USmoothBrushOpProps

// Begin Class USecondarySmoothBrushOpProps
void USecondarySmoothBrushOpProps::StaticRegisterNativesUSecondarySmoothBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USecondarySmoothBrushOpProps);
UClass* Z_Construct_UClass_USecondarySmoothBrushOpProps_NoRegister()
{
	return USecondarySmoothBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSmoothingBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "ShiftSmoothBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "ShiftSmoothBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveUVFlow_MetaData[] = {
		{ "Category", "ShiftSmoothBrush" },
		{ "Comment", "/** If true, try to preserve the shape of the UV/3D mapping. This will limit Smoothing and Remeshing in some cases. */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "If true, try to preserve the shape of the UV/3D mapping. This will limit Smoothing and Remeshing in some cases." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static void NewProp_bPreserveUVFlow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveUVFlow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecondarySmoothBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondarySmoothBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondarySmoothBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
void Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::NewProp_bPreserveUVFlow_SetBit(void* Obj)
{
	((USecondarySmoothBrushOpProps*)Obj)->bPreserveUVFlow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::NewProp_bPreserveUVFlow = { "bPreserveUVFlow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USecondarySmoothBrushOpProps), &Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::NewProp_bPreserveUVFlow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveUVFlow_MetaData), NewProp_bPreserveUVFlow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::NewProp_bPreserveUVFlow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseSmoothBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::ClassParams = {
	&USecondarySmoothBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USecondarySmoothBrushOpProps()
{
	if (!Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.OuterSingleton, Z_Construct_UClass_USecondarySmoothBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USecondarySmoothBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USecondarySmoothBrushOpProps>()
{
	return USecondarySmoothBrushOpProps::StaticClass();
}
USecondarySmoothBrushOpProps::USecondarySmoothBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USecondarySmoothBrushOpProps);
USecondarySmoothBrushOpProps::~USecondarySmoothBrushOpProps() {}
// End Class USecondarySmoothBrushOpProps

// Begin Class USmoothFillBrushOpProps
void USmoothFillBrushOpProps::StaticRegisterNativesUSmoothFillBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmoothFillBrushOpProps);
UClass* Z_Construct_UClass_USmoothFillBrushOpProps_NoRegister()
{
	return USmoothFillBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_USmoothFillBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSmoothingBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "SmoothFillBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "SmoothFillBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply (0.0 - 1.0) */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "Amount of falloff to apply (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveUVFlow_MetaData[] = {
		{ "Category", "SmoothFillBrush" },
		{ "Comment", "/** If true, try to preserve the shape of the UV/3D mapping. This will limit Smoothing and Remeshing in some cases. */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "If true, try to preserve the shape of the UV/3D mapping. This will limit Smoothing and Remeshing in some cases." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static void NewProp_bPreserveUVFlow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveUVFlow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmoothFillBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothFillBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothFillBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothFillBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothFillBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
void Z_Construct_UClass_USmoothFillBrushOpProps_Statics::NewProp_bPreserveUVFlow_SetBit(void* Obj)
{
	((USmoothFillBrushOpProps*)Obj)->bPreserveUVFlow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmoothFillBrushOpProps_Statics::NewProp_bPreserveUVFlow = { "bPreserveUVFlow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USmoothFillBrushOpProps), &Z_Construct_UClass_USmoothFillBrushOpProps_Statics::NewProp_bPreserveUVFlow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveUVFlow_MetaData), NewProp_bPreserveUVFlow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmoothFillBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothFillBrushOpProps_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothFillBrushOpProps_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothFillBrushOpProps_Statics::NewProp_bPreserveUVFlow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothFillBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USmoothFillBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseSmoothBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothFillBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmoothFillBrushOpProps_Statics::ClassParams = {
	&USmoothFillBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USmoothFillBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USmoothFillBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothFillBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_USmoothFillBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmoothFillBrushOpProps()
{
	if (!Z_Registration_Info_UClass_USmoothFillBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmoothFillBrushOpProps.OuterSingleton, Z_Construct_UClass_USmoothFillBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmoothFillBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USmoothFillBrushOpProps>()
{
	return USmoothFillBrushOpProps::StaticClass();
}
USmoothFillBrushOpProps::USmoothFillBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmoothFillBrushOpProps);
USmoothFillBrushOpProps::~USmoothFillBrushOpProps() {}
// End Class USmoothFillBrushOpProps

// Begin Class UFlattenBrushOpProps
void UFlattenBrushOpProps::StaticRegisterNativesUFlattenBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlattenBrushOpProps);
UClass* Z_Construct_UClass_UFlattenBrushOpProps_NoRegister()
{
	return UFlattenBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UFlattenBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSmoothingBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "FlattenBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "FlattenBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply (0.0 - 1.0) */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "Amount of falloff to apply (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "Category", "FlattenBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Depth of Brush into surface along surface normal */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "Depth of Brush into surface along surface normal" },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhichSide_MetaData[] = {
		{ "Category", "FlattenBrush" },
		{ "Comment", "/** Control whether effect of brush should be limited to one side of the Plane  */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "Control whether effect of brush should be limited to one side of the Plane" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WhichSide_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WhichSide;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlattenBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlattenBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlattenBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlattenBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlattenBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlattenBrushOpProps_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlattenBrushOpProps, Depth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlattenBrushOpProps_Statics::NewProp_WhichSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlattenBrushOpProps_Statics::NewProp_WhichSide = { "WhichSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlattenBrushOpProps, WhichSide), Z_Construct_UEnum_MeshModelingToolsExp_EPlaneBrushSideMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhichSide_MetaData), NewProp_WhichSide_MetaData) }; // 957628041
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlattenBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlattenBrushOpProps_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlattenBrushOpProps_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlattenBrushOpProps_Statics::NewProp_Depth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlattenBrushOpProps_Statics::NewProp_WhichSide_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlattenBrushOpProps_Statics::NewProp_WhichSide,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlattenBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlattenBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlattenBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlattenBrushOpProps_Statics::ClassParams = {
	&UFlattenBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlattenBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlattenBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlattenBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlattenBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlattenBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UFlattenBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlattenBrushOpProps.OuterSingleton, Z_Construct_UClass_UFlattenBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlattenBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UFlattenBrushOpProps>()
{
	return UFlattenBrushOpProps::StaticClass();
}
UFlattenBrushOpProps::UFlattenBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlattenBrushOpProps);
UFlattenBrushOpProps::~UFlattenBrushOpProps() {}
// End Class UFlattenBrushOpProps

// Begin Class UEraseBrushOpProps
void UEraseBrushOpProps::StaticRegisterNativesUEraseBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEraseBrushOpProps);
UClass* Z_Construct_UClass_UEraseBrushOpProps_NoRegister()
{
	return UEraseBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UEraseBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSmoothingBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "EraseBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "EraseBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply (0.0 - 1.0) */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSmoothingBrushOps.h" },
		{ "ToolTip", "Amount of falloff to apply (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEraseBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEraseBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEraseBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEraseBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEraseBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEraseBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEraseBrushOpProps_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEraseBrushOpProps_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEraseBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEraseBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEraseBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEraseBrushOpProps_Statics::ClassParams = {
	&UEraseBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEraseBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEraseBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEraseBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UEraseBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEraseBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UEraseBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEraseBrushOpProps.OuterSingleton, Z_Construct_UClass_UEraseBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEraseBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UEraseBrushOpProps>()
{
	return UEraseBrushOpProps::StaticClass();
}
UEraseBrushOpProps::UEraseBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEraseBrushOpProps);
UEraseBrushOpProps::~UEraseBrushOpProps() {}
// End Class UEraseBrushOpProps

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSmoothingBrushOps_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseSmoothBrushOpProps, UBaseSmoothBrushOpProps::StaticClass, TEXT("UBaseSmoothBrushOpProps"), &Z_Registration_Info_UClass_UBaseSmoothBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseSmoothBrushOpProps), 4118281931U) },
		{ Z_Construct_UClass_USmoothBrushOpProps, USmoothBrushOpProps::StaticClass, TEXT("USmoothBrushOpProps"), &Z_Registration_Info_UClass_USmoothBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmoothBrushOpProps), 2112741125U) },
		{ Z_Construct_UClass_USecondarySmoothBrushOpProps, USecondarySmoothBrushOpProps::StaticClass, TEXT("USecondarySmoothBrushOpProps"), &Z_Registration_Info_UClass_USecondarySmoothBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecondarySmoothBrushOpProps), 1104742370U) },
		{ Z_Construct_UClass_USmoothFillBrushOpProps, USmoothFillBrushOpProps::StaticClass, TEXT("USmoothFillBrushOpProps"), &Z_Registration_Info_UClass_USmoothFillBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmoothFillBrushOpProps), 1261163186U) },
		{ Z_Construct_UClass_UFlattenBrushOpProps, UFlattenBrushOpProps::StaticClass, TEXT("UFlattenBrushOpProps"), &Z_Registration_Info_UClass_UFlattenBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlattenBrushOpProps), 648748289U) },
		{ Z_Construct_UClass_UEraseBrushOpProps, UEraseBrushOpProps::StaticClass, TEXT("UEraseBrushOpProps"), &Z_Registration_Info_UClass_UEraseBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEraseBrushOpProps), 2016324062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSmoothingBrushOps_h_2435134327(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSmoothingBrushOps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSmoothingBrushOps_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
