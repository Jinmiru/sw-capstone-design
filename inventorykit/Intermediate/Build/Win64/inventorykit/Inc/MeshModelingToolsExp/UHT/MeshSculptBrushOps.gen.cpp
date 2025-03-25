// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/Sculpting/MeshSculptBrushOps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSculptBrushOps() {}

// Begin Cross Module References
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USculptMaxBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USculptMaxBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UStandardSculptBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UStandardSculptBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UViewAlignedSculptBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UViewAlignedSculptBrushOpProps_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UStandardSculptBrushOpProps
void UStandardSculptBrushOpProps::StaticRegisterNativesUStandardSculptBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStandardSculptBrushOpProps);
UClass* Z_Construct_UClass_UStandardSculptBrushOpProps_NoRegister()
{
	return UStandardSculptBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UStandardSculptBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSculptBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptBrushOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "SculptBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "SculptBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptBrushOps.h" },
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
		TCppClassTypeTraits<UStandardSculptBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStandardSculptBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStandardSculptBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::ClassParams = {
	&UStandardSculptBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStandardSculptBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UStandardSculptBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStandardSculptBrushOpProps.OuterSingleton, Z_Construct_UClass_UStandardSculptBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStandardSculptBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UStandardSculptBrushOpProps>()
{
	return UStandardSculptBrushOpProps::StaticClass();
}
UStandardSculptBrushOpProps::UStandardSculptBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStandardSculptBrushOpProps);
UStandardSculptBrushOpProps::~UStandardSculptBrushOpProps() {}
// End Class UStandardSculptBrushOpProps

// Begin Class UViewAlignedSculptBrushOpProps
void UViewAlignedSculptBrushOpProps::StaticRegisterNativesUViewAlignedSculptBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewAlignedSculptBrushOpProps);
UClass* Z_Construct_UClass_UViewAlignedSculptBrushOpProps_NoRegister()
{
	return UViewAlignedSculptBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSculptBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptBrushOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "SculptToViewBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "SculptToViewBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptBrushOps.h" },
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
		TCppClassTypeTraits<UViewAlignedSculptBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UViewAlignedSculptBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UViewAlignedSculptBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::ClassParams = {
	&UViewAlignedSculptBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewAlignedSculptBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.OuterSingleton, Z_Construct_UClass_UViewAlignedSculptBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UViewAlignedSculptBrushOpProps>()
{
	return UViewAlignedSculptBrushOpProps::StaticClass();
}
UViewAlignedSculptBrushOpProps::UViewAlignedSculptBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewAlignedSculptBrushOpProps);
UViewAlignedSculptBrushOpProps::~UViewAlignedSculptBrushOpProps() {}
// End Class UViewAlignedSculptBrushOpProps

// Begin Class USculptMaxBrushOpProps
void USculptMaxBrushOpProps::StaticRegisterNativesUSculptMaxBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USculptMaxBrushOpProps);
UClass* Z_Construct_UClass_USculptMaxBrushOpProps_NoRegister()
{
	return USculptMaxBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_USculptMaxBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSculptBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptBrushOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "SculptMaxBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "SculptMaxBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptBrushOps.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[] = {
		{ "Category", "SculptMaxBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum height as fraction of brush size */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptBrushOps.h" },
		{ "ToolTip", "Maximum height as fraction of brush size" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedHeight_MetaData[] = {
		{ "Category", "SculptMaxBrush" },
		{ "Comment", "/** If true, maximum height is defined using the FixedHeight constant instead of brush-relative size */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptBrushOps.h" },
		{ "ToolTip", "If true, maximum height is defined using the FixedHeight constant instead of brush-relative size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedHeight_MetaData[] = {
		{ "Category", "SculptMaxBrush" },
		{ "Comment", "/** Maximum height in world-space dimension */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptBrushOps.h" },
		{ "ToolTip", "Maximum height in world-space dimension" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
	static void NewProp_bUseFixedHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USculptMaxBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USculptMaxBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USculptMaxBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USculptMaxBrushOpProps, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeight_MetaData), NewProp_MaxHeight_MetaData) };
void Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_bUseFixedHeight_SetBit(void* Obj)
{
	((USculptMaxBrushOpProps*)Obj)->bUseFixedHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_bUseFixedHeight = { "bUseFixedHeight", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USculptMaxBrushOpProps), &Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_bUseFixedHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedHeight_MetaData), NewProp_bUseFixedHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_FixedHeight = { "FixedHeight", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USculptMaxBrushOpProps, FixedHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedHeight_MetaData), NewProp_FixedHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USculptMaxBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_MaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_bUseFixedHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptMaxBrushOpProps_Statics::NewProp_FixedHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USculptMaxBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USculptMaxBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USculptMaxBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USculptMaxBrushOpProps_Statics::ClassParams = {
	&USculptMaxBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USculptMaxBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USculptMaxBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USculptMaxBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_USculptMaxBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USculptMaxBrushOpProps()
{
	if (!Z_Registration_Info_UClass_USculptMaxBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USculptMaxBrushOpProps.OuterSingleton, Z_Construct_UClass_USculptMaxBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USculptMaxBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USculptMaxBrushOpProps>()
{
	return USculptMaxBrushOpProps::StaticClass();
}
USculptMaxBrushOpProps::USculptMaxBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USculptMaxBrushOpProps);
USculptMaxBrushOpProps::~USculptMaxBrushOpProps() {}
// End Class USculptMaxBrushOpProps

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptBrushOps_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStandardSculptBrushOpProps, UStandardSculptBrushOpProps::StaticClass, TEXT("UStandardSculptBrushOpProps"), &Z_Registration_Info_UClass_UStandardSculptBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStandardSculptBrushOpProps), 3128317223U) },
		{ Z_Construct_UClass_UViewAlignedSculptBrushOpProps, UViewAlignedSculptBrushOpProps::StaticClass, TEXT("UViewAlignedSculptBrushOpProps"), &Z_Registration_Info_UClass_UViewAlignedSculptBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewAlignedSculptBrushOpProps), 4273788462U) },
		{ Z_Construct_UClass_USculptMaxBrushOpProps, USculptMaxBrushOpProps::StaticClass, TEXT("USculptMaxBrushOpProps"), &Z_Registration_Info_UClass_USculptMaxBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USculptMaxBrushOpProps), 4064662221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptBrushOps_h_1373417110(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptBrushOps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptBrushOps_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
