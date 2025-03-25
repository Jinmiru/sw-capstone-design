// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Animation/Constraints/Public/TransformConstraint.h"
#include "Runtime/AnimationCore/Public/Constraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformConstraint() {}

// Begin Cross Module References
ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOptionPerAxis();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableConstraint();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableLookAtConstraint();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableLookAtConstraint_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableParentConstraint();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableParentConstraint_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableRotationConstraint();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableRotationConstraint_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableScaleConstraint();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableScaleConstraint_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableTransformConstraint();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableTranslationConstraint();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableTranslationConstraint_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableHandle_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_Constraints();
// End Cross Module References

// Begin Class UTickableTransformConstraint
void UTickableTransformConstraint::StaticRegisterNativesUTickableTransformConstraint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableTransformConstraint);
UClass* Z_Construct_UClass_UTickableTransformConstraint_NoRegister()
{
	return UTickableTransformConstraint::StaticClass();
}
struct Z_Construct_UClass_UTickableTransformConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableTransformConstraint\n **/" },
		{ "IncludePath", "TransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "UTickableTransformConstraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentTRSHandle_MetaData[] = {
		{ "Category", "Handle" },
		{ "Comment", "/** The transformable handle representing the parent of that constraint. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "The transformable handle representing the parent of that constraint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildTRSHandle_MetaData[] = {
		{ "Category", "Handle" },
		{ "Comment", "/** The transformable handle representing the child of that constraint. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "The transformable handle representing the child of that constraint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Should that constraint maintain the default offset.  */" },
		{ "EditCondition", "Type!=ETransformConstraintType::LookAt" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Should that constraint maintain the default offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines how much the constraint will be applied. */// UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=\"Weight\", meta = (Input, ClampMin = \"0.0\", ClampMax = \"1.0\", UIMin = \"0.0\", UIMax = \"1.0\"))\n//@benoit when not EditAnywhere?\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines how much the constraint will be applied. // UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=\"Weight\", meta = (Input, ClampMin = \"0.0\", ClampMax = \"1.0\", UIMin = \"0.0\", UIMax = \"1.0\"))\n//@benoit when not EditAnywhere?" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicOffset_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Should the child be able to change it's offset dynamically. */" },
		{ "EditCondition", "(Type!=ETransformConstraintType::LookAt) && bMaintainOffset" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Should the child be able to change it's offset dynamically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Comment", "/** Defines the constraint's type (Position, Parent, Aim...). */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines the constraint's type (Position, Parent, Aim...)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentTRSHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildTRSHandle;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bDynamicOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableTransformConstraint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ParentTRSHandle = { "ParentTRSHandle", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableTransformConstraint, ParentTRSHandle), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentTRSHandle_MetaData), NewProp_ParentTRSHandle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ChildTRSHandle = { "ChildTRSHandle", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableTransformConstraint, ChildTRSHandle), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildTRSHandle_MetaData), NewProp_ChildTRSHandle_MetaData) };
void Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((UTickableTransformConstraint*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTickableTransformConstraint), &Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableTransformConstraint, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bDynamicOffset_SetBit(void* Obj)
{
	((UTickableTransformConstraint*)Obj)->bDynamicOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bDynamicOffset = { "bDynamicOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTickableTransformConstraint), &Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bDynamicOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamicOffset_MetaData), NewProp_bDynamicOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableTransformConstraint, Type), Z_Construct_UEnum_AnimationCore_ETransformConstraintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 112181424
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableTransformConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ParentTRSHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_ChildTRSHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_bDynamicOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTransformConstraint_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTransformConstraint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTickableTransformConstraint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTransformConstraint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableTransformConstraint_Statics::ClassParams = {
	&UTickableTransformConstraint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTickableTransformConstraint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTransformConstraint_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTransformConstraint_Statics::Class_MetaDataParams), Z_Construct_UClass_UTickableTransformConstraint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTickableTransformConstraint()
{
	if (!Z_Registration_Info_UClass_UTickableTransformConstraint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableTransformConstraint.OuterSingleton, Z_Construct_UClass_UTickableTransformConstraint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTickableTransformConstraint.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<UTickableTransformConstraint>()
{
	return UTickableTransformConstraint::StaticClass();
}
UTickableTransformConstraint::UTickableTransformConstraint() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableTransformConstraint);
UTickableTransformConstraint::~UTickableTransformConstraint() {}
// End Class UTickableTransformConstraint

// Begin Class UTickableTranslationConstraint
void UTickableTranslationConstraint::StaticRegisterNativesUTickableTranslationConstraint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableTranslationConstraint);
UClass* Z_Construct_UClass_UTickableTranslationConstraint_NoRegister()
{
	return UTickableTranslationConstraint::StaticClass();
}
struct Z_Construct_UClass_UTickableTranslationConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableTranslationConstraint\n **/" },
		{ "IncludePath", "TransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "UTickableTranslationConstraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTranslation_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Defines the local child's translation offset in the parent space. */" },
		{ "EditCondition", "bMaintainOffset" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines the local child's translation offset in the parent space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "Comment", "/** Defines which translation axis is constrained. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines which translation axis is constrained." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableTranslationConstraint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_OffsetTranslation = { "OffsetTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableTranslationConstraint, OffsetTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetTranslation_MetaData), NewProp_OffsetTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_AxisFilter = { "AxisFilter", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableTranslationConstraint, AxisFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisFilter_MetaData), NewProp_AxisFilter_MetaData) }; // 1027366730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableTranslationConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_OffsetTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableTranslationConstraint_Statics::NewProp_AxisFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTranslationConstraint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTickableTranslationConstraint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableTransformConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTranslationConstraint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableTranslationConstraint_Statics::ClassParams = {
	&UTickableTranslationConstraint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTickableTranslationConstraint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTranslationConstraint_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableTranslationConstraint_Statics::Class_MetaDataParams), Z_Construct_UClass_UTickableTranslationConstraint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTickableTranslationConstraint()
{
	if (!Z_Registration_Info_UClass_UTickableTranslationConstraint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableTranslationConstraint.OuterSingleton, Z_Construct_UClass_UTickableTranslationConstraint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTickableTranslationConstraint.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<UTickableTranslationConstraint>()
{
	return UTickableTranslationConstraint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableTranslationConstraint);
UTickableTranslationConstraint::~UTickableTranslationConstraint() {}
// End Class UTickableTranslationConstraint

// Begin Class UTickableRotationConstraint
void UTickableRotationConstraint::StaticRegisterNativesUTickableRotationConstraint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableRotationConstraint);
UClass* Z_Construct_UClass_UTickableRotationConstraint_NoRegister()
{
	return UTickableRotationConstraint::StaticClass();
}
struct Z_Construct_UClass_UTickableRotationConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableRotationConstraint\n **/" },
		{ "IncludePath", "TransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "UTickableRotationConstraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Defines the local child's rotation offset in the parent space. */" },
		{ "EditCondition", "bMaintainOffset" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines the local child's rotation offset in the parent space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "Comment", "/** Defines which rotation axis is constrained. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines which rotation axis is constrained." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableRotationConstraint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableRotationConstraint, OffsetRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetRotation_MetaData), NewProp_OffsetRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_AxisFilter = { "AxisFilter", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableRotationConstraint, AxisFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisFilter_MetaData), NewProp_AxisFilter_MetaData) }; // 1027366730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableRotationConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_OffsetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableRotationConstraint_Statics::NewProp_AxisFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableRotationConstraint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTickableRotationConstraint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableTransformConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableRotationConstraint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableRotationConstraint_Statics::ClassParams = {
	&UTickableRotationConstraint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTickableRotationConstraint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTickableRotationConstraint_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableRotationConstraint_Statics::Class_MetaDataParams), Z_Construct_UClass_UTickableRotationConstraint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTickableRotationConstraint()
{
	if (!Z_Registration_Info_UClass_UTickableRotationConstraint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableRotationConstraint.OuterSingleton, Z_Construct_UClass_UTickableRotationConstraint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTickableRotationConstraint.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<UTickableRotationConstraint>()
{
	return UTickableRotationConstraint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableRotationConstraint);
UTickableRotationConstraint::~UTickableRotationConstraint() {}
// End Class UTickableRotationConstraint

// Begin Class UTickableScaleConstraint
void UTickableScaleConstraint::StaticRegisterNativesUTickableScaleConstraint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableScaleConstraint);
UClass* Z_Construct_UClass_UTickableScaleConstraint_NoRegister()
{
	return UTickableScaleConstraint::StaticClass();
}
struct Z_Construct_UClass_UTickableScaleConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableScaleConstraint\n **/" },
		{ "IncludePath", "TransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "UTickableScaleConstraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetScale_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Defines the local child's scale offset in the parent space. */" },
		{ "EditCondition", "bMaintainOffset" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines the local child's scale offset in the parent space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "Comment", "/** Defines which scale axis is constrained. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines which scale axis is constrained." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableScaleConstraint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_OffsetScale = { "OffsetScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableScaleConstraint, OffsetScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetScale_MetaData), NewProp_OffsetScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_AxisFilter = { "AxisFilter", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableScaleConstraint, AxisFilter), Z_Construct_UScriptStruct_FFilterOptionPerAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisFilter_MetaData), NewProp_AxisFilter_MetaData) }; // 1027366730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableScaleConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_OffsetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableScaleConstraint_Statics::NewProp_AxisFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableScaleConstraint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTickableScaleConstraint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableTransformConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableScaleConstraint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableScaleConstraint_Statics::ClassParams = {
	&UTickableScaleConstraint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTickableScaleConstraint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTickableScaleConstraint_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableScaleConstraint_Statics::Class_MetaDataParams), Z_Construct_UClass_UTickableScaleConstraint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTickableScaleConstraint()
{
	if (!Z_Registration_Info_UClass_UTickableScaleConstraint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableScaleConstraint.OuterSingleton, Z_Construct_UClass_UTickableScaleConstraint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTickableScaleConstraint.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<UTickableScaleConstraint>()
{
	return UTickableScaleConstraint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableScaleConstraint);
UTickableScaleConstraint::~UTickableScaleConstraint() {}
// End Class UTickableScaleConstraint

// Begin Class UTickableParentConstraint
void UTickableParentConstraint::StaticRegisterNativesUTickableParentConstraint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableParentConstraint);
UClass* Z_Construct_UClass_UTickableParentConstraint_NoRegister()
{
	return UTickableParentConstraint::StaticClass();
}
struct Z_Construct_UClass_UTickableParentConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableParentConstraint\n **/" },
		{ "IncludePath", "TransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "UTickableParentConstraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Defines the local child's transform offset in the parent space. */" },
		{ "EditCondition", "bMaintainOffset" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines the local child's transform offset in the parent space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaling_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Defines whether we propagate the parent scale. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines whether we propagate the parent scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformFilter_MetaData[] = {
		{ "Category", "Axis Filter" },
		{ "Comment", "/** Defines which translation/rotation/scale axis are constrained. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines which translation/rotation/scale axis are constrained." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
	static void NewProp_bScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableParentConstraint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableParentConstraint, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetTransform_MetaData), NewProp_OffsetTransform_MetaData) };
void Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_bScaling_SetBit(void* Obj)
{
	((UTickableParentConstraint*)Obj)->bScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_bScaling = { "bScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTickableParentConstraint), &Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_bScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaling_MetaData), NewProp_bScaling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_TransformFilter = { "TransformFilter", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableParentConstraint, TransformFilter), Z_Construct_UScriptStruct_FTransformFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformFilter_MetaData), NewProp_TransformFilter_MetaData) }; // 2061705217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableParentConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_OffsetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_bScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableParentConstraint_Statics::NewProp_TransformFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableParentConstraint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTickableParentConstraint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableTransformConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableParentConstraint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableParentConstraint_Statics::ClassParams = {
	&UTickableParentConstraint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTickableParentConstraint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTickableParentConstraint_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableParentConstraint_Statics::Class_MetaDataParams), Z_Construct_UClass_UTickableParentConstraint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTickableParentConstraint()
{
	if (!Z_Registration_Info_UClass_UTickableParentConstraint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableParentConstraint.OuterSingleton, Z_Construct_UClass_UTickableParentConstraint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTickableParentConstraint.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<UTickableParentConstraint>()
{
	return UTickableParentConstraint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableParentConstraint);
UTickableParentConstraint::~UTickableParentConstraint() {}
// End Class UTickableParentConstraint

// Begin Class UTickableLookAtConstraint
void UTickableLookAtConstraint::StaticRegisterNativesUTickableLookAtConstraint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableLookAtConstraint);
UClass* Z_Construct_UClass_UTickableLookAtConstraint_NoRegister()
{
	return UTickableLookAtConstraint::StaticClass();
}
struct Z_Construct_UClass_UTickableLookAtConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableLookAtConstraint\n **/" },
		{ "IncludePath", "TransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "UTickableLookAtConstraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "Axis" },
		{ "Comment", "/** Defines the aiming axis. */" },
		{ "ModuleRelativePath", "Public/TransformConstraint.h" },
		{ "ToolTip", "Defines the aiming axis." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableLookAtConstraint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableLookAtConstraint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTickableLookAtConstraint, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableLookAtConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableLookAtConstraint_Statics::NewProp_Axis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableLookAtConstraint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTickableLookAtConstraint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableTransformConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableLookAtConstraint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableLookAtConstraint_Statics::ClassParams = {
	&UTickableLookAtConstraint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTickableLookAtConstraint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTickableLookAtConstraint_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableLookAtConstraint_Statics::Class_MetaDataParams), Z_Construct_UClass_UTickableLookAtConstraint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTickableLookAtConstraint()
{
	if (!Z_Registration_Info_UClass_UTickableLookAtConstraint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableLookAtConstraint.OuterSingleton, Z_Construct_UClass_UTickableLookAtConstraint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTickableLookAtConstraint.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<UTickableLookAtConstraint>()
{
	return UTickableLookAtConstraint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableLookAtConstraint);
UTickableLookAtConstraint::~UTickableLookAtConstraint() {}
// End Class UTickableLookAtConstraint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformConstraint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTickableTransformConstraint, UTickableTransformConstraint::StaticClass, TEXT("UTickableTransformConstraint"), &Z_Registration_Info_UClass_UTickableTransformConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableTransformConstraint), 2093182589U) },
		{ Z_Construct_UClass_UTickableTranslationConstraint, UTickableTranslationConstraint::StaticClass, TEXT("UTickableTranslationConstraint"), &Z_Registration_Info_UClass_UTickableTranslationConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableTranslationConstraint), 4224513054U) },
		{ Z_Construct_UClass_UTickableRotationConstraint, UTickableRotationConstraint::StaticClass, TEXT("UTickableRotationConstraint"), &Z_Registration_Info_UClass_UTickableRotationConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableRotationConstraint), 1044272933U) },
		{ Z_Construct_UClass_UTickableScaleConstraint, UTickableScaleConstraint::StaticClass, TEXT("UTickableScaleConstraint"), &Z_Registration_Info_UClass_UTickableScaleConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableScaleConstraint), 3107992007U) },
		{ Z_Construct_UClass_UTickableParentConstraint, UTickableParentConstraint::StaticClass, TEXT("UTickableParentConstraint"), &Z_Registration_Info_UClass_UTickableParentConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableParentConstraint), 615756697U) },
		{ Z_Construct_UClass_UTickableLookAtConstraint, UTickableLookAtConstraint::StaticClass, TEXT("UTickableLookAtConstraint"), &Z_Registration_Info_UClass_UTickableLookAtConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableLookAtConstraint), 3354967844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformConstraint_h_937792430(TEXT("/Script/Constraints"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformConstraint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_TransformConstraint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
