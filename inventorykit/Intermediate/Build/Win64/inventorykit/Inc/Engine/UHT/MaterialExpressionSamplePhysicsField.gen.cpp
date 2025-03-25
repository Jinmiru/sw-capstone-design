// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSamplePhysicsField.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSamplePhysicsField() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldIntegerType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldScalarType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldVectorType();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPositionOrigin();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionSamplePhysicsVectorField
void UMaterialExpressionSamplePhysicsVectorField::StaticRegisterNativesUMaterialExpressionSamplePhysicsVectorField()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSamplePhysicsVectorField);
UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_NoRegister()
{
	return UMaterialExpressionSamplePhysicsVectorField::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Material expresions to sample the global field\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ToolTip", "Material expresions to sample the global field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOriginType_MetaData[] = {
		{ "Category", "MaterialExpressionSamplePhysicsVectorField" },
		{ "Comment", "/** Defines the reference space for the WorldPosition input. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ToolTip", "Defines the reference space for the WorldPosition input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldTarget_MetaData[] = {
		{ "Category", "Field Setup" },
		{ "Comment", "/** Target Type to be accessed */" },
		{ "DisplayName", "Target Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Target Type to be accessed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPositionOriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPositionOriginType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FieldTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSamplePhysicsVectorField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsVectorField, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPositionOriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPositionOriginType = { "WorldPositionOriginType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsVectorField, WorldPositionOriginType), Z_Construct_UEnum_Engine_EPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOriginType_MetaData), NewProp_WorldPositionOriginType_MetaData) }; // 1574008864
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_FieldTarget = { "FieldTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsVectorField, FieldTarget), Z_Construct_UEnum_Chaos_EFieldVectorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldTarget_MetaData), NewProp_FieldTarget_MetaData) }; // 665830373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPositionOriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPositionOriginType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_FieldTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::ClassParams = {
	&UMaterialExpressionSamplePhysicsVectorField::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSamplePhysicsVectorField>()
{
	return UMaterialExpressionSamplePhysicsVectorField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSamplePhysicsVectorField);
UMaterialExpressionSamplePhysicsVectorField::~UMaterialExpressionSamplePhysicsVectorField() {}
// End Class UMaterialExpressionSamplePhysicsVectorField

// Begin Class UMaterialExpressionSamplePhysicsScalarField
void UMaterialExpressionSamplePhysicsScalarField::StaticRegisterNativesUMaterialExpressionSamplePhysicsScalarField()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSamplePhysicsScalarField);
UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_NoRegister()
{
	return UMaterialExpressionSamplePhysicsScalarField::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOriginType_MetaData[] = {
		{ "Category", "MaterialExpressionSamplePhysicsScalarField" },
		{ "Comment", "/** Defines the reference space for the WorldPosition input. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ToolTip", "Defines the reference space for the WorldPosition input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldTarget_MetaData[] = {
		{ "Category", "Field Setup" },
		{ "Comment", "/** Target Type to be accessed */" },
		{ "DisplayName", "Target Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Target Type to be accessed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPositionOriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPositionOriginType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FieldTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSamplePhysicsScalarField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsScalarField, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPositionOriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPositionOriginType = { "WorldPositionOriginType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsScalarField, WorldPositionOriginType), Z_Construct_UEnum_Engine_EPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOriginType_MetaData), NewProp_WorldPositionOriginType_MetaData) }; // 1574008864
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_FieldTarget = { "FieldTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsScalarField, FieldTarget), Z_Construct_UEnum_Chaos_EFieldScalarType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldTarget_MetaData), NewProp_FieldTarget_MetaData) }; // 2527444282
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPositionOriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPositionOriginType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_FieldTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::ClassParams = {
	&UMaterialExpressionSamplePhysicsScalarField::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsScalarField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsScalarField.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsScalarField.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSamplePhysicsScalarField>()
{
	return UMaterialExpressionSamplePhysicsScalarField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSamplePhysicsScalarField);
UMaterialExpressionSamplePhysicsScalarField::~UMaterialExpressionSamplePhysicsScalarField() {}
// End Class UMaterialExpressionSamplePhysicsScalarField

// Begin Class UMaterialExpressionSamplePhysicsIntegerField
void UMaterialExpressionSamplePhysicsIntegerField::StaticRegisterNativesUMaterialExpressionSamplePhysicsIntegerField()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSamplePhysicsIntegerField);
UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_NoRegister()
{
	return UMaterialExpressionSamplePhysicsIntegerField::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOriginType_MetaData[] = {
		{ "Category", "MaterialExpressionSamplePhysicsIntegerField" },
		{ "Comment", "/** Defines the reference space for the WorldPosition input. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ToolTip", "Defines the reference space for the WorldPosition input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldTarget_MetaData[] = {
		{ "Category", "Field Setup" },
		{ "Comment", "/** Target Type to be accessed */" },
		{ "DisplayName", "Target Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Target Type to be accessed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPositionOriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPositionOriginType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FieldTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSamplePhysicsIntegerField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsIntegerField, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPositionOriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPositionOriginType = { "WorldPositionOriginType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsIntegerField, WorldPositionOriginType), Z_Construct_UEnum_Engine_EPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOriginType_MetaData), NewProp_WorldPositionOriginType_MetaData) }; // 1574008864
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_FieldTarget = { "FieldTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsIntegerField, FieldTarget), Z_Construct_UEnum_Chaos_EFieldIntegerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldTarget_MetaData), NewProp_FieldTarget_MetaData) }; // 1972836009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPositionOriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPositionOriginType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_FieldTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::ClassParams = {
	&UMaterialExpressionSamplePhysicsIntegerField::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSamplePhysicsIntegerField>()
{
	return UMaterialExpressionSamplePhysicsIntegerField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSamplePhysicsIntegerField);
UMaterialExpressionSamplePhysicsIntegerField::~UMaterialExpressionSamplePhysicsIntegerField() {}
// End Class UMaterialExpressionSamplePhysicsIntegerField

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSamplePhysicsField_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField, UMaterialExpressionSamplePhysicsVectorField::StaticClass, TEXT("UMaterialExpressionSamplePhysicsVectorField"), &Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSamplePhysicsVectorField), 997344572U) },
		{ Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField, UMaterialExpressionSamplePhysicsScalarField::StaticClass, TEXT("UMaterialExpressionSamplePhysicsScalarField"), &Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsScalarField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSamplePhysicsScalarField), 1813313508U) },
		{ Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField, UMaterialExpressionSamplePhysicsIntegerField::StaticClass, TEXT("UMaterialExpressionSamplePhysicsIntegerField"), &Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSamplePhysicsIntegerField), 3924443340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSamplePhysicsField_h_2466826625(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSamplePhysicsField_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSamplePhysicsField_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
