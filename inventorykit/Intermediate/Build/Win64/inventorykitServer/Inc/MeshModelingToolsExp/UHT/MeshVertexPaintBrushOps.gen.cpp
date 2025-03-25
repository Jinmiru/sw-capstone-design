// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/Sculpting/MeshVertexPaintBrushOps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexPaintBrushOps() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexColorBaseBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexColorBaseBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexColorPaintBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexColorPaintBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexColorSmoothBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexColorSmoothBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexColorSoftenBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexColorSoftenBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EVertexColorPaintBrushOpBlendMode();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Enum EVertexColorPaintBrushOpBlendMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode;
static UEnum* EVertexColorPaintBrushOpBlendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EVertexColorPaintBrushOpBlendMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EVertexColorPaintBrushOpBlendMode"));
	}
	return Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EVertexColorPaintBrushOpBlendMode>()
{
	return EVertexColorPaintBrushOpBlendMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EVertexColorPaintBrushOpBlendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Lerp.Name", "EVertexColorPaintBrushOpBlendMode::Lerp" },
		{ "Mix.Name", "EVertexColorPaintBrushOpBlendMode::Mix" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshVertexPaintBrushOps.h" },
		{ "Multiply.Name", "EVertexColorPaintBrushOpBlendMode::Multiply" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVertexColorPaintBrushOpBlendMode::Lerp", (int64)EVertexColorPaintBrushOpBlendMode::Lerp },
		{ "EVertexColorPaintBrushOpBlendMode::Mix", (int64)EVertexColorPaintBrushOpBlendMode::Mix },
		{ "EVertexColorPaintBrushOpBlendMode::Multiply", (int64)EVertexColorPaintBrushOpBlendMode::Multiply },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EVertexColorPaintBrushOpBlendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EVertexColorPaintBrushOpBlendMode",
	"EVertexColorPaintBrushOpBlendMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EVertexColorPaintBrushOpBlendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EVertexColorPaintBrushOpBlendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EVertexColorPaintBrushOpBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EVertexColorPaintBrushOpBlendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EVertexColorPaintBrushOpBlendMode()
{
	if (!Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EVertexColorPaintBrushOpBlendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode.InnerSingleton;
}
// End Enum EVertexColorPaintBrushOpBlendMode

// Begin Class UVertexColorBaseBrushOpProps
void UVertexColorBaseBrushOpProps::StaticRegisterNativesUVertexColorBaseBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexColorBaseBrushOpProps);
UClass* Z_Construct_UClass_UVertexColorBaseBrushOpProps_NoRegister()
{
	return UVertexColorBaseBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshVertexPaintBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshVertexPaintBrushOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "PaintBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshVertexPaintBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "PaintBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshVertexPaintBrushOps.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "PaintBrush" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshVertexPaintBrushOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFalloff_MetaData[] = {
		{ "Category", "PaintBrush" },
		{ "Comment", "/** If bApplyFalloff is disabled, 1.0 is used as \"falloff\" for all vertices */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshVertexPaintBrushOps.h" },
		{ "ToolTip", "If bApplyFalloff is disabled, 1.0 is used as \"falloff\" for all vertices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static void NewProp_bApplyFalloff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFalloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexColorBaseBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexColorBaseBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexColorBaseBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexColorBaseBrushOpProps, BlendMode), Z_Construct_UEnum_MeshModelingToolsExp_EVertexColorPaintBrushOpBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 187445034
void Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_bApplyFalloff_SetBit(void* Obj)
{
	((UVertexColorBaseBrushOpProps*)Obj)->bApplyFalloff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_bApplyFalloff = { "bApplyFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVertexColorBaseBrushOpProps), &Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_bApplyFalloff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyFalloff_MetaData), NewProp_bApplyFalloff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::NewProp_bApplyFalloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::ClassParams = {
	&UVertexColorBaseBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVertexColorBaseBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.OuterSingleton, Z_Construct_UClass_UVertexColorBaseBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVertexColorBaseBrushOpProps>()
{
	return UVertexColorBaseBrushOpProps::StaticClass();
}
UVertexColorBaseBrushOpProps::UVertexColorBaseBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexColorBaseBrushOpProps);
UVertexColorBaseBrushOpProps::~UVertexColorBaseBrushOpProps() {}
// End Class UVertexColorBaseBrushOpProps

// Begin Class UVertexColorPaintBrushOpProps
void UVertexColorPaintBrushOpProps::StaticRegisterNativesUVertexColorPaintBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexColorPaintBrushOpProps);
UClass* Z_Construct_UClass_UVertexColorPaintBrushOpProps_NoRegister()
{
	return UVertexColorPaintBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshVertexPaintBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshVertexPaintBrushOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Paint" },
		{ "Comment", "/** The paint color */" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshVertexPaintBrushOps.h" },
		{ "ToolTip", "The paint color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexColorPaintBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexColorPaintBrushOpProps, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVertexColorBaseBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::ClassParams = {
	&UVertexColorPaintBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVertexColorPaintBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.OuterSingleton, Z_Construct_UClass_UVertexColorPaintBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVertexColorPaintBrushOpProps>()
{
	return UVertexColorPaintBrushOpProps::StaticClass();
}
UVertexColorPaintBrushOpProps::UVertexColorPaintBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexColorPaintBrushOpProps);
UVertexColorPaintBrushOpProps::~UVertexColorPaintBrushOpProps() {}
// End Class UVertexColorPaintBrushOpProps

// Begin Class UVertexColorSoftenBrushOpProps
void UVertexColorSoftenBrushOpProps::StaticRegisterNativesUVertexColorSoftenBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexColorSoftenBrushOpProps);
UClass* Z_Construct_UClass_UVertexColorSoftenBrushOpProps_NoRegister()
{
	return UVertexColorSoftenBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UVertexColorSoftenBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshVertexPaintBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshVertexPaintBrushOps.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexColorSoftenBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVertexColorSoftenBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVertexColorBaseBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorSoftenBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexColorSoftenBrushOpProps_Statics::ClassParams = {
	&UVertexColorSoftenBrushOpProps::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorSoftenBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexColorSoftenBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVertexColorSoftenBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.OuterSingleton, Z_Construct_UClass_UVertexColorSoftenBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVertexColorSoftenBrushOpProps>()
{
	return UVertexColorSoftenBrushOpProps::StaticClass();
}
UVertexColorSoftenBrushOpProps::UVertexColorSoftenBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexColorSoftenBrushOpProps);
UVertexColorSoftenBrushOpProps::~UVertexColorSoftenBrushOpProps() {}
// End Class UVertexColorSoftenBrushOpProps

// Begin Class UVertexColorSmoothBrushOpProps
void UVertexColorSmoothBrushOpProps::StaticRegisterNativesUVertexColorSmoothBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexColorSmoothBrushOpProps);
UClass* Z_Construct_UClass_UVertexColorSmoothBrushOpProps_NoRegister()
{
	return UVertexColorSmoothBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UVertexColorSmoothBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshVertexPaintBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshVertexPaintBrushOps.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexColorSmoothBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVertexColorSmoothBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVertexColorBaseBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorSmoothBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexColorSmoothBrushOpProps_Statics::ClassParams = {
	&UVertexColorSmoothBrushOpProps::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexColorSmoothBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexColorSmoothBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVertexColorSmoothBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.OuterSingleton, Z_Construct_UClass_UVertexColorSmoothBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVertexColorSmoothBrushOpProps>()
{
	return UVertexColorSmoothBrushOpProps::StaticClass();
}
UVertexColorSmoothBrushOpProps::UVertexColorSmoothBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexColorSmoothBrushOpProps);
UVertexColorSmoothBrushOpProps::~UVertexColorSmoothBrushOpProps() {}
// End Class UVertexColorSmoothBrushOpProps

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshVertexPaintBrushOps_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVertexColorPaintBrushOpBlendMode_StaticEnum, TEXT("EVertexColorPaintBrushOpBlendMode"), &Z_Registration_Info_UEnum_EVertexColorPaintBrushOpBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 187445034U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVertexColorBaseBrushOpProps, UVertexColorBaseBrushOpProps::StaticClass, TEXT("UVertexColorBaseBrushOpProps"), &Z_Registration_Info_UClass_UVertexColorBaseBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexColorBaseBrushOpProps), 3684178645U) },
		{ Z_Construct_UClass_UVertexColorPaintBrushOpProps, UVertexColorPaintBrushOpProps::StaticClass, TEXT("UVertexColorPaintBrushOpProps"), &Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexColorPaintBrushOpProps), 633278571U) },
		{ Z_Construct_UClass_UVertexColorSoftenBrushOpProps, UVertexColorSoftenBrushOpProps::StaticClass, TEXT("UVertexColorSoftenBrushOpProps"), &Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexColorSoftenBrushOpProps), 1402306280U) },
		{ Z_Construct_UClass_UVertexColorSmoothBrushOpProps, UVertexColorSmoothBrushOpProps::StaticClass, TEXT("UVertexColorSmoothBrushOpProps"), &Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexColorSmoothBrushOpProps), 1353079787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshVertexPaintBrushOps_h_3162521710(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshVertexPaintBrushOps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshVertexPaintBrushOps_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshVertexPaintBrushOps_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshVertexPaintBrushOps_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
