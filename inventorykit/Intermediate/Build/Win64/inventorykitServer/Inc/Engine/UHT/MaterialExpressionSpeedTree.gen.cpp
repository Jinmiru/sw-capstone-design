// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSpeedTree.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSpeedTree() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpeedTreeGeometryType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpeedTreeLODType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpeedTreeWindType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESpeedTreeGeometryType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeedTreeGeometryType;
static UEnum* ESpeedTreeGeometryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeedTreeGeometryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeedTreeGeometryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpeedTreeGeometryType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESpeedTreeGeometryType"));
	}
	return Z_Registration_Info_UEnum_ESpeedTreeGeometryType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESpeedTreeGeometryType>()
{
	return ESpeedTreeGeometryType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "STG_Billboard.DisplayName", "Billboard" },
		{ "STG_Billboard.Name", "STG_Billboard" },
		{ "STG_Branch.DisplayName", "Branch" },
		{ "STG_Branch.Name", "STG_Branch" },
		{ "STG_FacingLeaf.DisplayName", "Facing Leaf" },
		{ "STG_FacingLeaf.Name", "STG_FacingLeaf" },
		{ "STG_Frond.DisplayName", "Frond" },
		{ "STG_Frond.Name", "STG_Frond" },
		{ "STG_Leaf.DisplayName", "Leaf" },
		{ "STG_Leaf.Name", "STG_Leaf" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "STG_Branch", (int64)STG_Branch },
		{ "STG_Frond", (int64)STG_Frond },
		{ "STG_Leaf", (int64)STG_Leaf },
		{ "STG_FacingLeaf", (int64)STG_FacingLeaf },
		{ "STG_Billboard", (int64)STG_Billboard },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESpeedTreeGeometryType",
	"ESpeedTreeGeometryType",
	Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESpeedTreeGeometryType()
{
	if (!Z_Registration_Info_UEnum_ESpeedTreeGeometryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeedTreeGeometryType.InnerSingleton, Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeedTreeGeometryType.InnerSingleton;
}
// End Enum ESpeedTreeGeometryType

// Begin Enum ESpeedTreeWindType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeedTreeWindType;
static UEnum* ESpeedTreeWindType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeedTreeWindType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeedTreeWindType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpeedTreeWindType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESpeedTreeWindType"));
	}
	return Z_Registration_Info_UEnum_ESpeedTreeWindType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESpeedTreeWindType>()
{
	return ESpeedTreeWindType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "STW_Best.DisplayName", "Best" },
		{ "STW_Best.Name", "STW_Best" },
		{ "STW_BestPlus.DisplayName", "BestPlus" },
		{ "STW_BestPlus.Name", "STW_BestPlus" },
		{ "STW_Better.DisplayName", "Better" },
		{ "STW_Better.Name", "STW_Better" },
		{ "STW_Fast.DisplayName", "Fast" },
		{ "STW_Fast.Name", "STW_Fast" },
		{ "STW_Fastest.DisplayName", "Fastest" },
		{ "STW_Fastest.Name", "STW_Fastest" },
		{ "STW_None.DisplayName", "None" },
		{ "STW_None.Name", "STW_None" },
		{ "STW_Palm.DisplayName", "Palm" },
		{ "STW_Palm.Name", "STW_Palm" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "STW_None", (int64)STW_None },
		{ "STW_Fastest", (int64)STW_Fastest },
		{ "STW_Fast", (int64)STW_Fast },
		{ "STW_Better", (int64)STW_Better },
		{ "STW_Best", (int64)STW_Best },
		{ "STW_Palm", (int64)STW_Palm },
		{ "STW_BestPlus", (int64)STW_BestPlus },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESpeedTreeWindType",
	"ESpeedTreeWindType",
	Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESpeedTreeWindType()
{
	if (!Z_Registration_Info_UEnum_ESpeedTreeWindType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeedTreeWindType.InnerSingleton, Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeedTreeWindType.InnerSingleton;
}
// End Enum ESpeedTreeWindType

// Begin Enum ESpeedTreeLODType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeedTreeLODType;
static UEnum* ESpeedTreeLODType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeedTreeLODType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeedTreeLODType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpeedTreeLODType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESpeedTreeLODType"));
	}
	return Z_Registration_Info_UEnum_ESpeedTreeLODType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESpeedTreeLODType>()
{
	return ESpeedTreeLODType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "STLOD_Pop.DisplayName", "Pop" },
		{ "STLOD_Pop.Name", "STLOD_Pop" },
		{ "STLOD_Smooth.DisplayName", "Smooth" },
		{ "STLOD_Smooth.Name", "STLOD_Smooth" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "STLOD_Pop", (int64)STLOD_Pop },
		{ "STLOD_Smooth", (int64)STLOD_Smooth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESpeedTreeLODType",
	"ESpeedTreeLODType",
	Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESpeedTreeLODType()
{
	if (!Z_Registration_Info_UEnum_ESpeedTreeLODType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeedTreeLODType.InnerSingleton, Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeedTreeLODType.InnerSingleton;
}
// End Enum ESpeedTreeLODType

// Begin Class UMaterialExpressionSpeedTree
void UMaterialExpressionSpeedTree::StaticRegisterNativesUMaterialExpressionSpeedTree()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSpeedTree);
UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree_NoRegister()
{
	return UMaterialExpressionSpeedTree::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSpeedTree.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'WindType' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'GeometryType' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'LODType' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraBendWS_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "An extra bending of the tree for local effects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryType_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "DisplayName", "Geometry Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "The type of SpeedTree geometry on which this material will be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindType_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "DisplayName", "Wind Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "The type of wind effect used on this tree. This can only go as high as it was in the SpeedTree Modeler, but you can set it to a lower option for lower quality wind and faster rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODType_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "DisplayName", "LOD Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "The type of LOD to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BillboardThreshold_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Billboard Threshold" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "The threshold for triangles to be removed from the bilboard mesh when not facing the camera (0 = none pass, 1 = all pass)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAccurateWindVelocities_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "DisplayName", "Accurate Wind Velocities" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "Support accurate velocities from wind. This will incur extra cost per vertex." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WindInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraBendWS;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GeometryType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LODType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BillboardThreshold;
	static void NewProp_bAccurateWindVelocities_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccurateWindVelocities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSpeedTree>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryInput = { "GeometryInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSpeedTree, GeometryInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryInput_MetaData), NewProp_GeometryInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindInput = { "WindInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSpeedTree, WindInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindInput_MetaData), NewProp_WindInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODInput = { "LODInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSpeedTree, LODInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODInput_MetaData), NewProp_LODInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_ExtraBendWS = { "ExtraBendWS", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSpeedTree, ExtraBendWS), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraBendWS_MetaData), NewProp_ExtraBendWS_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryType = { "GeometryType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSpeedTree, GeometryType), Z_Construct_UEnum_Engine_ESpeedTreeGeometryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryType_MetaData), NewProp_GeometryType_MetaData) }; // 4167640712
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindType = { "WindType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSpeedTree, WindType), Z_Construct_UEnum_Engine_ESpeedTreeWindType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindType_MetaData), NewProp_WindType_MetaData) }; // 3486675947
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODType = { "LODType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSpeedTree, LODType), Z_Construct_UEnum_Engine_ESpeedTreeLODType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODType_MetaData), NewProp_LODType_MetaData) }; // 1300002024
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_BillboardThreshold = { "BillboardThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSpeedTree, BillboardThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BillboardThreshold_MetaData), NewProp_BillboardThreshold_MetaData) };
void Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities_SetBit(void* Obj)
{
	((UMaterialExpressionSpeedTree*)Obj)->bAccurateWindVelocities = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities = { "bAccurateWindVelocities", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionSpeedTree), &Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAccurateWindVelocities_MetaData), NewProp_bAccurateWindVelocities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_ExtraBendWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_BillboardThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::ClassParams = {
	&UMaterialExpressionSpeedTree::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSpeedTree.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSpeedTree.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSpeedTree.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSpeedTree>()
{
	return UMaterialExpressionSpeedTree::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSpeedTree);
UMaterialExpressionSpeedTree::~UMaterialExpressionSpeedTree() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionSpeedTree)
// End Class UMaterialExpressionSpeedTree

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpeedTreeGeometryType_StaticEnum, TEXT("ESpeedTreeGeometryType"), &Z_Registration_Info_UEnum_ESpeedTreeGeometryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4167640712U) },
		{ ESpeedTreeWindType_StaticEnum, TEXT("ESpeedTreeWindType"), &Z_Registration_Info_UEnum_ESpeedTreeWindType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3486675947U) },
		{ ESpeedTreeLODType_StaticEnum, TEXT("ESpeedTreeLODType"), &Z_Registration_Info_UEnum_ESpeedTreeLODType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1300002024U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSpeedTree, UMaterialExpressionSpeedTree::StaticClass, TEXT("UMaterialExpressionSpeedTree"), &Z_Registration_Info_UClass_UMaterialExpressionSpeedTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSpeedTree), 1287151676U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_2957270243(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
