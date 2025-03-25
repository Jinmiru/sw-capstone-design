// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimationCore/Public/Constraint.h"
#include "Runtime/AnimationCore/Public/CommonAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraint() {}

// Begin Cross Module References
ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EConstraintType();
ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAimConstraintDescription();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintData();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescription();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptionEx();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptor();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraintDescription();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References

// Begin ScriptStruct FFilterOptionPerAxis
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FilterOptionPerAxis;
class UScriptStruct* FFilterOptionPerAxis::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FilterOptionPerAxis.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FilterOptionPerAxis.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilterOptionPerAxis, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("FilterOptionPerAxis"));
	}
	return Z_Registration_Info_UScriptStruct_FilterOptionPerAxis.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FFilterOptionPerAxis>()
{
	return FFilterOptionPerAxis::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Filter Option Per Axis\n * \n * This is used to filter per axis for constraint options\n */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Filter Option Per Axis\n\nThis is used to filter per axis for constraint options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bX;
	static void NewProp_bY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bY;
	static void NewProp_bZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilterOptionPerAxis>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_SetBit(void* Obj)
{
	((FFilterOptionPerAxis*)Obj)->bX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFilterOptionPerAxis), &Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bX_MetaData), NewProp_bX_MetaData) };
void Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_SetBit(void* Obj)
{
	((FFilterOptionPerAxis*)Obj)->bY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFilterOptionPerAxis), &Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bY_MetaData), NewProp_bY_MetaData) };
void Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_SetBit(void* Obj)
{
	((FFilterOptionPerAxis*)Obj)->bZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFilterOptionPerAxis), &Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZ_MetaData), NewProp_bZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewProp_bZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	nullptr,
	&NewStructOps,
	"FilterOptionPerAxis",
	Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::PropPointers),
	sizeof(FFilterOptionPerAxis),
	alignof(FFilterOptionPerAxis),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis()
{
	if (!Z_Registration_Info_UScriptStruct_FilterOptionPerAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FilterOptionPerAxis.InnerSingleton, Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FilterOptionPerAxis.InnerSingleton;
}
// End ScriptStruct FFilterOptionPerAxis

// Begin ScriptStruct FTransformFilter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformFilter;
class UScriptStruct* FTransformFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformFilter, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformFilter"));
	}
	return Z_Registration_Info_UScriptStruct_TransformFilter.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FTransformFilter>()
{
	return FTransformFilter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransformFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A filter for a whole transform */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A filter for a whole transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_TranslationFilter = { "TranslationFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformFilter, TranslationFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationFilter_MetaData), NewProp_TranslationFilter_MetaData) }; // 1027366730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_RotationFilter = { "RotationFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformFilter, RotationFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationFilter_MetaData), NewProp_RotationFilter_MetaData) }; // 1027366730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_ScaleFilter = { "ScaleFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformFilter, ScaleFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleFilter_MetaData), NewProp_ScaleFilter_MetaData) }; // 1027366730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_TranslationFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_RotationFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformFilter_Statics::NewProp_ScaleFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	nullptr,
	&NewStructOps,
	"TransformFilter",
	Z_Construct_UScriptStruct_FTransformFilter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::PropPointers),
	sizeof(FTransformFilter),
	alignof(FTransformFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransformFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter()
{
	if (!Z_Registration_Info_UScriptStruct_TransformFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformFilter.InnerSingleton, Z_Construct_UScriptStruct_FTransformFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TransformFilter.InnerSingleton;
}
// End ScriptStruct FTransformFilter

// Begin ScriptStruct FConstraintDescription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintDescription;
class UScriptStruct* FConstraintDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescription, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescription"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintDescription.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FConstraintDescription>()
{
	return FConstraintDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A description of how to apply a simple transform constraint */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A description of how to apply a simple transform constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTranslation_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotation_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScale_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParent_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// this does composed transform - where as individual will accumulate per component\n" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "this does composed transform - where as individual will accumulate per component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationAxes_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxes_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleAxes_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslation;
	static void NewProp_bRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotation;
	static void NewProp_bScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScale;
	static void NewProp_bParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationAxes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAxes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleAxes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_SetBit(void* Obj)
{
	((FConstraintDescription*)Obj)->bTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation = { "bTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConstraintDescription), &Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTranslation_MetaData), NewProp_bTranslation_MetaData) };
void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_SetBit(void* Obj)
{
	((FConstraintDescription*)Obj)->bRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation = { "bRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConstraintDescription), &Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotation_MetaData), NewProp_bRotation_MetaData) };
void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_SetBit(void* Obj)
{
	((FConstraintDescription*)Obj)->bScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale = { "bScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConstraintDescription), &Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScale_MetaData), NewProp_bScale_MetaData) };
void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_SetBit(void* Obj)
{
	((FConstraintDescription*)Obj)->bParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent = { "bParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConstraintDescription), &Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParent_MetaData), NewProp_bParent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_TranslationAxes = { "TranslationAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintDescription, TranslationAxes), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationAxes_MetaData), NewProp_TranslationAxes_MetaData) }; // 1027366730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_RotationAxes = { "RotationAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintDescription, RotationAxes), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAxes_MetaData), NewProp_RotationAxes_MetaData) }; // 1027366730
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_ScaleAxes = { "ScaleAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintDescription, ScaleAxes), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleAxes_MetaData), NewProp_ScaleAxes_MetaData) }; // 1027366730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_bParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_TranslationAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_RotationAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewProp_ScaleAxes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	nullptr,
	&NewStructOps,
	"ConstraintDescription",
	Z_Construct_UScriptStruct_FConstraintDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::PropPointers),
	sizeof(FConstraintDescription),
	alignof(FConstraintDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescription()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintDescription.InnerSingleton, Z_Construct_UScriptStruct_FConstraintDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintDescription.InnerSingleton;
}
// End ScriptStruct FConstraintDescription

// Begin ScriptStruct FConstraintOffset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintOffset;
class UScriptStruct* FConstraintOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintOffset, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintOffset"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintOffset.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FConstraintOffset>()
{
	return FConstraintOffset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the offset for constraint\n *\n * Saves individual component (translation, rotation, scale or parent)\n * Used by Constraint for saving the offset, and recovering the offset\n */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "This is the offset for constraint\n\nSaves individual component (translation, rotation, scale or parent)\nUsed by Constraint for saving the offset, and recovering the offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintOffset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintOffset, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translation_MetaData), NewProp_Translation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintOffset, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintOffset, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintOffset, Parent), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Translation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewProp_Parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintOffset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	nullptr,
	&NewStructOps,
	"ConstraintOffset",
	Z_Construct_UScriptStruct_FConstraintOffset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::PropPointers),
	sizeof(FConstraintOffset),
	alignof(FConstraintOffset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintOffset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintOffset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintOffset()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintOffset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintOffset.InnerSingleton, Z_Construct_UScriptStruct_FConstraintOffset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintOffset.InnerSingleton;
}
// End ScriptStruct FConstraintOffset

// Begin ScriptStruct FTransformConstraint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformConstraint;
class UScriptStruct* FTransformConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformConstraint, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_TransformConstraint.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FTransformConstraint>()
{
	return FTransformConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransformConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "Comment", "// @note thought of separating this out per each but we'll have an issue with applying transform in what order\n// but something to think about if that seems better\n" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "@note thought of separating this out per each but we'll have an issue with applying transform in what order\nbut something to think about if that seems better" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceNode_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNode_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Transform Constraint" },
		{ "Comment", "/** When the constraint is first applied, maintain the offset from the target node */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "When the constraint is first applied, maintain the offset from the target node" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Operator;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceNode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetNode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformConstraint, Operator), Z_Construct_UScriptStruct_FConstraintDescription, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operator_MetaData), NewProp_Operator_MetaData) }; // 4058244894
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_SourceNode = { "SourceNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformConstraint, SourceNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceNode_MetaData), NewProp_SourceNode_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_TargetNode = { "TargetNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformConstraint, TargetNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNode_MetaData), NewProp_TargetNode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformConstraint, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((FTransformConstraint*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTransformConstraint), &Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Operator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_SourceNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_TargetNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewProp_bMaintainOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	nullptr,
	&NewStructOps,
	"TransformConstraint",
	Z_Construct_UScriptStruct_FTransformConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::PropPointers),
	sizeof(FTransformConstraint),
	alignof(FTransformConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransformConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_TransformConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformConstraint.InnerSingleton, Z_Construct_UScriptStruct_FTransformConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TransformConstraint.InnerSingleton;
}
// End ScriptStruct FTransformConstraint

// Begin Enum EConstraintType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConstraintType;
static UEnum* EConstraintType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConstraintType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationCore_EConstraintType, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("EConstraintType"));
	}
	return Z_Registration_Info_UEnum_EConstraintType.OuterSingleton;
}
template<> ANIMATIONCORE_API UEnum* StaticEnum<EConstraintType>()
{
	return EConstraintType_StaticEnum();
}
struct Z_Construct_UEnum_AnimationCore_EConstraintType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aim.Comment", "/** Aim Constraint*/" },
		{ "Aim.Name", "EConstraintType::Aim" },
		{ "Aim.ToolTip", "Aim Constraint" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Constraint Types*/" },
		{ "MAX.Comment", "/** MAX - invalid */" },
		{ "MAX.Name", "EConstraintType::MAX" },
		{ "MAX.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint Types" },
		{ "Transform.Comment", "/** Transform Constraint */" },
		{ "Transform.Name", "EConstraintType::Transform" },
		{ "Transform.ToolTip", "Transform Constraint" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConstraintType::Transform", (int64)EConstraintType::Transform },
		{ "EConstraintType::Aim", (int64)EConstraintType::Aim },
		{ "EConstraintType::MAX", (int64)EConstraintType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimationCore,
	nullptr,
	"EConstraintType",
	"EConstraintType",
	Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimationCore_EConstraintType()
{
	if (!Z_Registration_Info_UEnum_EConstraintType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConstraintType.InnerSingleton, Z_Construct_UEnum_AnimationCore_EConstraintType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConstraintType.InnerSingleton;
}
// End Enum EConstraintType

// Begin ScriptStruct FConstraintDescriptionEx
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx;
class UScriptStruct* FConstraintDescriptionEx::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescriptionEx, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescriptionEx"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FConstraintDescriptionEx>()
{
	return FConstraintDescriptionEx::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A description of how to apply a simple transform constraint */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A description of how to apply a simple transform constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxesFilterOption_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxesFilterOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDescriptionEx>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewProp_AxesFilterOption = { "AxesFilterOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintDescriptionEx, AxesFilterOption), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxesFilterOption_MetaData), NewProp_AxesFilterOption_MetaData) }; // 1027366730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewProp_AxesFilterOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	nullptr,
	&NewStructOps,
	"ConstraintDescriptionEx",
	Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::PropPointers),
	sizeof(FConstraintDescriptionEx),
	alignof(FConstraintDescriptionEx),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptionEx()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx.InnerSingleton, Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx.InnerSingleton;
}
// End ScriptStruct FConstraintDescriptionEx

// Begin Enum ETransformConstraintType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformConstraintType;
static UEnum* ETransformConstraintType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETransformConstraintType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETransformConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationCore_ETransformConstraintType, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("ETransformConstraintType"));
	}
	return Z_Registration_Info_UEnum_ETransformConstraintType.OuterSingleton;
}
template<> ANIMATIONCORE_API UEnum* StaticEnum<ETransformConstraintType>()
{
	return ETransformConstraintType_StaticEnum();
}
struct Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Transform Constraint Types*/" },
		{ "IsBlueprintBase", "true" },
		{ "LookAt.Name", "ETransformConstraintType::LookAt" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "Parent.Name", "ETransformConstraintType::Parent" },
		{ "Rotation.Name", "ETransformConstraintType::Rotation" },
		{ "Scale.Name", "ETransformConstraintType::Scale" },
		{ "ToolTip", "Transform Constraint Types" },
		{ "Translation.Name", "ETransformConstraintType::Translation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETransformConstraintType::Translation", (int64)ETransformConstraintType::Translation },
		{ "ETransformConstraintType::Rotation", (int64)ETransformConstraintType::Rotation },
		{ "ETransformConstraintType::Scale", (int64)ETransformConstraintType::Scale },
		{ "ETransformConstraintType::Parent", (int64)ETransformConstraintType::Parent },
		{ "ETransformConstraintType::LookAt", (int64)ETransformConstraintType::LookAt },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimationCore,
	nullptr,
	"ETransformConstraintType",
	"ETransformConstraintType",
	Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType()
{
	if (!Z_Registration_Info_UEnum_ETransformConstraintType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformConstraintType.InnerSingleton, Z_Construct_UEnum_AnimationCore_ETransformConstraintType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETransformConstraintType.InnerSingleton;
}
// End Enum ETransformConstraintType

// Begin ScriptStruct FTransformConstraintDescription
static_assert(std::is_polymorphic<FTransformConstraintDescription>() == std::is_polymorphic<FConstraintDescriptionEx>(), "USTRUCT FTransformConstraintDescription cannot be polymorphic unless super FConstraintDescriptionEx is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformConstraintDescription;
class UScriptStruct* FTransformConstraintDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformConstraintDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformConstraintDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformConstraintDescription, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformConstraintDescription"));
	}
	return Z_Registration_Info_UScriptStruct_TransformConstraintDescription.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FTransformConstraintDescription>()
{
	return FTransformConstraintDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A description of how to apply a simple transform constraint */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A description of how to apply a simple transform constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformConstraintDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformConstraintDescription, TransformType), Z_Construct_UEnum_AnimationCore_ETransformConstraintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformType_MetaData), NewProp_TransformType_MetaData) }; // 112181424
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewProp_TransformType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	Z_Construct_UScriptStruct_FConstraintDescriptionEx,
	&NewStructOps,
	"TransformConstraintDescription",
	Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::PropPointers),
	sizeof(FTransformConstraintDescription),
	alignof(FTransformConstraintDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransformConstraintDescription()
{
	if (!Z_Registration_Info_UScriptStruct_TransformConstraintDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformConstraintDescription.InnerSingleton, Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TransformConstraintDescription.InnerSingleton;
}
// End ScriptStruct FTransformConstraintDescription

// Begin ScriptStruct FAimConstraintDescription
static_assert(std::is_polymorphic<FAimConstraintDescription>() == std::is_polymorphic<FConstraintDescriptionEx>(), "USTRUCT FAimConstraintDescription cannot be polymorphic unless super FConstraintDescriptionEx is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AimConstraintDescription;
class UScriptStruct* FAimConstraintDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AimConstraintDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AimConstraintDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAimConstraintDescription, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("AimConstraintDescription"));
	}
	return Z_Registration_Info_UScriptStruct_AimConstraintDescription.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FAimConstraintDescription>()
{
	return FAimConstraintDescription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAimConstraintDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A description of how to apply aim constraint */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "A description of how to apply aim constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAt_Axis_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookUp_Axis_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLookUp_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookUpTarget_MetaData[] = {
		{ "Category", "FAimConstraintDescription" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAt_Axis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookUp_Axis;
	static void NewProp_bUseLookUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLookUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookUpTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAimConstraintDescription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookAt_Axis = { "LookAt_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimConstraintDescription, LookAt_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAt_Axis_MetaData), NewProp_LookAt_Axis_MetaData) }; // 330961940
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUp_Axis = { "LookUp_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimConstraintDescription, LookUp_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookUp_Axis_MetaData), NewProp_LookUp_Axis_MetaData) }; // 330961940
void Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_SetBit(void* Obj)
{
	((FAimConstraintDescription*)Obj)->bUseLookUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp = { "bUseLookUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAimConstraintDescription), &Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLookUp_MetaData), NewProp_bUseLookUp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUpTarget = { "LookUpTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAimConstraintDescription, LookUpTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookUpTarget_MetaData), NewProp_LookUpTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookAt_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_bUseLookUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewProp_LookUpTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	Z_Construct_UScriptStruct_FConstraintDescriptionEx,
	&NewStructOps,
	"AimConstraintDescription",
	Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::PropPointers),
	sizeof(FAimConstraintDescription),
	alignof(FAimConstraintDescription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAimConstraintDescription()
{
	if (!Z_Registration_Info_UScriptStruct_AimConstraintDescription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AimConstraintDescription.InnerSingleton, Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AimConstraintDescription.InnerSingleton;
}
// End ScriptStruct FAimConstraintDescription

// Begin ScriptStruct FConstraintDescriptor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintDescriptor;
class UScriptStruct* FConstraintDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescriptor, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintDescriptor.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FConstraintDescriptor>()
{
	return FConstraintDescriptor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Constraint data container. It contains union of Constraints and node will contain array of these. \n * \n * These are the one contained in NodeData, and it will be iterated via evaluate process\n * The goal is to have contiguous memory location where they can iterate through linearly\n */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint data container. It contains union of Constraints and node will contain array of these.\n\nThese are the one contained in NodeData, and it will be iterated via evaluate process\nThe goal is to have contiguous memory location where they can iterate through linearly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintDescriptor, Type), Z_Construct_UEnum_AnimationCore_EConstraintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 85494065
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	nullptr,
	&NewStructOps,
	"ConstraintDescriptor",
	Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::PropPointers),
	sizeof(FConstraintDescriptor),
	alignof(FConstraintDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintDescriptor.InnerSingleton;
}
// End ScriptStruct FConstraintDescriptor

// Begin ScriptStruct FConstraintData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintData;
class UScriptStruct* FConstraintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintData, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("ConstraintData"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintData.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FConstraintData>()
{
	return FConstraintData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Constraint Data that is contained in Node Datat\n * You can have as many of these per node\n */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint Data that is contained in Node Datat\nYou can have as many of these per node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraint_MetaData[] = {
		{ "Comment", "/** Constraint Description */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint Description" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Comment", "/** Weight of the constraint */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Weight of the constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Comment", "/** When the constraint is first applied, maintain the offset from the target node */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "When the constraint is first applied, maintain the offset from the target node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Comment", "/** Constraint offset if bMaintainOffset is used */" },
		{ "ModuleRelativePath", "Public/Constraint.h" },
		{ "ToolTip", "Constraint offset if bMaintainOffset is used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Constraint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintData, Constraint), Z_Construct_UScriptStruct_FConstraintDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraint_MetaData), NewProp_Constraint_MetaData) }; // 150177188
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintData, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((FConstraintData*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConstraintData), &Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintData, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_CurrentTransform = { "CurrentTransform", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintData, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTransform_MetaData), NewProp_CurrentTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Constraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintData_Statics::NewProp_CurrentTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	nullptr,
	&NewStructOps,
	"ConstraintData",
	Z_Construct_UScriptStruct_FConstraintData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::PropPointers),
	sizeof(FConstraintData),
	alignof(FConstraintData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintData()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintData.InnerSingleton, Z_Construct_UScriptStruct_FConstraintData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintData.InnerSingleton;
}
// End ScriptStruct FConstraintData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EConstraintType_StaticEnum, TEXT("EConstraintType"), &Z_Registration_Info_UEnum_EConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 85494065U) },
		{ ETransformConstraintType_StaticEnum, TEXT("ETransformConstraintType"), &Z_Registration_Info_UEnum_ETransformConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 112181424U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFilterOptionPerAxis::StaticStruct, Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics::NewStructOps, TEXT("FilterOptionPerAxis"), &Z_Registration_Info_UScriptStruct_FilterOptionPerAxis, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFilterOptionPerAxis), 1027366730U) },
		{ FTransformFilter::StaticStruct, Z_Construct_UScriptStruct_FTransformFilter_Statics::NewStructOps, TEXT("TransformFilter"), &Z_Registration_Info_UScriptStruct_TransformFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformFilter), 2061705217U) },
		{ FConstraintDescription::StaticStruct, Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewStructOps, TEXT("ConstraintDescription"), &Z_Registration_Info_UScriptStruct_ConstraintDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintDescription), 4058244894U) },
		{ FConstraintOffset::StaticStruct, Z_Construct_UScriptStruct_FConstraintOffset_Statics::NewStructOps, TEXT("ConstraintOffset"), &Z_Registration_Info_UScriptStruct_ConstraintOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintOffset), 586411464U) },
		{ FTransformConstraint::StaticStruct, Z_Construct_UScriptStruct_FTransformConstraint_Statics::NewStructOps, TEXT("TransformConstraint"), &Z_Registration_Info_UScriptStruct_TransformConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformConstraint), 1933630244U) },
		{ FConstraintDescriptionEx::StaticStruct, Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics::NewStructOps, TEXT("ConstraintDescriptionEx"), &Z_Registration_Info_UScriptStruct_ConstraintDescriptionEx, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintDescriptionEx), 15801759U) },
		{ FTransformConstraintDescription::StaticStruct, Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics::NewStructOps, TEXT("TransformConstraintDescription"), &Z_Registration_Info_UScriptStruct_TransformConstraintDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformConstraintDescription), 3010569042U) },
		{ FAimConstraintDescription::StaticStruct, Z_Construct_UScriptStruct_FAimConstraintDescription_Statics::NewStructOps, TEXT("AimConstraintDescription"), &Z_Registration_Info_UScriptStruct_AimConstraintDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAimConstraintDescription), 2953658243U) },
		{ FConstraintDescriptor::StaticStruct, Z_Construct_UScriptStruct_FConstraintDescriptor_Statics::NewStructOps, TEXT("ConstraintDescriptor"), &Z_Registration_Info_UScriptStruct_ConstraintDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintDescriptor), 150177188U) },
		{ FConstraintData::StaticStruct, Z_Construct_UScriptStruct_FConstraintData_Statics::NewStructOps, TEXT("ConstraintData"), &Z_Registration_Info_UScriptStruct_ConstraintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintData), 1952377732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_1000847429(TEXT("/Script/AnimationCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_Constraint_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
