// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/OffsetMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOffsetMeshTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UImplicitOffsetProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UImplicitOffsetProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UIterativeOffsetProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UIterativeOffsetProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetWeightMapSetProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetWeightMapSetProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshToolOffsetType();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseMeshProcessingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseMeshProcessingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UWeightMapSetProperties();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Enum EOffsetMeshToolOffsetType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetMeshToolOffsetType;
static UEnum* EOffsetMeshToolOffsetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOffsetMeshToolOffsetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOffsetMeshToolOffsetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshToolOffsetType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EOffsetMeshToolOffsetType"));
	}
	return Z_Registration_Info_UEnum_EOffsetMeshToolOffsetType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EOffsetMeshToolOffsetType>()
{
	return EOffsetMeshToolOffsetType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshToolOffsetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Implicit.Comment", "/** Implicit Offsetting, produces smoother output and does a better job at preserving UVs, but can be very slow on large meshes */" },
		{ "Implicit.DisplayName", "Implicit" },
		{ "Implicit.Name", "EOffsetMeshToolOffsetType::Implicit" },
		{ "Implicit.ToolTip", "Implicit Offsetting, produces smoother output and does a better job at preserving UVs, but can be very slow on large meshes" },
		{ "Iterative.Comment", "/** Iterative Offsetting with N iterations */" },
		{ "Iterative.DisplayName", "Iterative" },
		{ "Iterative.Name", "EOffsetMeshToolOffsetType::Iterative" },
		{ "Iterative.ToolTip", "Iterative Offsetting with N iterations" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOffsetMeshToolOffsetType::Iterative", (int64)EOffsetMeshToolOffsetType::Iterative },
		{ "EOffsetMeshToolOffsetType::Implicit", (int64)EOffsetMeshToolOffsetType::Implicit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshToolOffsetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EOffsetMeshToolOffsetType",
	"EOffsetMeshToolOffsetType",
	Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshToolOffsetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshToolOffsetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshToolOffsetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshToolOffsetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshToolOffsetType()
{
	if (!Z_Registration_Info_UEnum_EOffsetMeshToolOffsetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetMeshToolOffsetType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshToolOffsetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOffsetMeshToolOffsetType.InnerSingleton;
}
// End Enum EOffsetMeshToolOffsetType

// Begin Class UOffsetMeshToolProperties
void UOffsetMeshToolProperties::StaticRegisterNativesUOffsetMeshToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOffsetMeshToolProperties);
UClass* Z_Construct_UClass_UOffsetMeshToolProperties_NoRegister()
{
	return UOffsetMeshToolProperties::StaticClass();
}
struct Z_Construct_UClass_UOffsetMeshToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Base properties of Offset */" },
		{ "IncludePath", "OffsetMeshTool.h" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "Base properties of Offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetType_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Type of Offsetting to apply */" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "Type of Offsetting to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Offset" },
		{ "ClampMax", "100000.0" },
		{ "ClampMin", "-10000.0" },
		{ "Comment", "/** Offset Distance in World Units */" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "Offset Distance in World Units" },
		{ "UIMax", "100.0" },
		{ "UIMin", "-100.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateShell_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** If true, create a thickened shell, instead of only moving the input vertices */" },
		{ "EditCondition", "OffsetType == EOffsetMeshToolOffsetType::Iterative" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "If true, create a thickened shell, instead of only moving the input vertices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OffsetType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OffsetType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static void NewProp_bCreateShell_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateShell;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOffsetMeshToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOffsetMeshToolProperties_Statics::NewProp_OffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOffsetMeshToolProperties_Statics::NewProp_OffsetType = { "OffsetType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshToolProperties, OffsetType), Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshToolOffsetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetType_MetaData), NewProp_OffsetType_MetaData) }; // 3924933845
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOffsetMeshToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshToolProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
void Z_Construct_UClass_UOffsetMeshToolProperties_Statics::NewProp_bCreateShell_SetBit(void* Obj)
{
	((UOffsetMeshToolProperties*)Obj)->bCreateShell = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshToolProperties_Statics::NewProp_bCreateShell = { "bCreateShell", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOffsetMeshToolProperties), &Z_Construct_UClass_UOffsetMeshToolProperties_Statics::NewProp_bCreateShell_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateShell_MetaData), NewProp_bCreateShell_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOffsetMeshToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshToolProperties_Statics::NewProp_OffsetType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshToolProperties_Statics::NewProp_OffsetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshToolProperties_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshToolProperties_Statics::NewProp_bCreateShell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOffsetMeshToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOffsetMeshToolProperties_Statics::ClassParams = {
	&UOffsetMeshToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOffsetMeshToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UOffsetMeshToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOffsetMeshToolProperties()
{
	if (!Z_Registration_Info_UClass_UOffsetMeshToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOffsetMeshToolProperties.OuterSingleton, Z_Construct_UClass_UOffsetMeshToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOffsetMeshToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UOffsetMeshToolProperties>()
{
	return UOffsetMeshToolProperties::StaticClass();
}
UOffsetMeshToolProperties::UOffsetMeshToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOffsetMeshToolProperties);
UOffsetMeshToolProperties::~UOffsetMeshToolProperties() {}
// End Class UOffsetMeshToolProperties

// Begin Class UOffsetWeightMapSetProperties
void UOffsetWeightMapSetProperties::StaticRegisterNativesUOffsetWeightMapSetProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOffsetWeightMapSetProperties);
UClass* Z_Construct_UClass_UOffsetWeightMapSetProperties_NoRegister()
{
	return UOffsetWeightMapSetProperties::StaticClass();
}
struct Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OffsetMeshTool.h" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[] = {
		{ "Category", "WeightMap" },
		{ "ClampMax", "100000.0" },
		{ "ClampMin", "-10000.0" },
		{ "Comment", "/** Minimum Offset Distance in World Units, for Weight Map values of zero (clamped to Distance) */" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "Minimum Offset Distance in World Units, for Weight Map values of zero (clamped to Distance)" },
		{ "UIMax", "100.0" },
		{ "UIMin", "-100.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOffsetWeightMapSetProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetWeightMapSetProperties, MinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistance_MetaData), NewProp_MinDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics::NewProp_MinDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeightMapSetProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics::ClassParams = {
	&UOffsetWeightMapSetProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOffsetWeightMapSetProperties()
{
	if (!Z_Registration_Info_UClass_UOffsetWeightMapSetProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOffsetWeightMapSetProperties.OuterSingleton, Z_Construct_UClass_UOffsetWeightMapSetProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOffsetWeightMapSetProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UOffsetWeightMapSetProperties>()
{
	return UOffsetWeightMapSetProperties::StaticClass();
}
UOffsetWeightMapSetProperties::UOffsetWeightMapSetProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOffsetWeightMapSetProperties);
UOffsetWeightMapSetProperties::~UOffsetWeightMapSetProperties() {}
// End Class UOffsetWeightMapSetProperties

// Begin Class UIterativeOffsetProperties
void UIterativeOffsetProperties::StaticRegisterNativesUIterativeOffsetProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIterativeOffsetProperties);
UClass* Z_Construct_UClass_UIterativeOffsetProperties_NoRegister()
{
	return UIterativeOffsetProperties::StaticClass();
}
struct Z_Construct_UClass_UIterativeOffsetProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Properties for Iterative Offsetting */" },
		{ "IncludePath", "OffsetMeshTool.h" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "Properties for Iterative Offsetting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[] = {
		{ "Category", "IterativeOffsetOptions" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of Offsetting iterations */" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "Number of Offsetting iterations" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOffsetBoundaries_MetaData[] = {
		{ "Category", "IterativeOffsetOptions" },
		{ "Comment", "/** Control whether the boundary is allowed to move */" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "Control whether the boundary is allowed to move" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingPerStep_MetaData[] = {
		{ "Category", "IterativeOffsetOptions" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of smoothing applied per Offset step */" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "Amount of smoothing applied per Offset step" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReprojectSmooth_MetaData[] = {
		{ "Category", "IterativeOffsetOptions" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Reproject smooth vertices onto non-smoothed Offset Surface at each step (expensive but better-preserves uniform distance) */" },
		{ "EditCondition", "SmoothingPerStep > 0" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "Reproject smooth vertices onto non-smoothed Offset Surface at each step (expensive but better-preserves uniform distance)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Steps;
	static void NewProp_bOffsetBoundaries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOffsetBoundaries;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingPerStep;
	static void NewProp_bReprojectSmooth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReprojectSmooth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIterativeOffsetProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIterativeOffsetProperties_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIterativeOffsetProperties, Steps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steps_MetaData), NewProp_Steps_MetaData) };
void Z_Construct_UClass_UIterativeOffsetProperties_Statics::NewProp_bOffsetBoundaries_SetBit(void* Obj)
{
	((UIterativeOffsetProperties*)Obj)->bOffsetBoundaries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIterativeOffsetProperties_Statics::NewProp_bOffsetBoundaries = { "bOffsetBoundaries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIterativeOffsetProperties), &Z_Construct_UClass_UIterativeOffsetProperties_Statics::NewProp_bOffsetBoundaries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOffsetBoundaries_MetaData), NewProp_bOffsetBoundaries_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIterativeOffsetProperties_Statics::NewProp_SmoothingPerStep = { "SmoothingPerStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIterativeOffsetProperties, SmoothingPerStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingPerStep_MetaData), NewProp_SmoothingPerStep_MetaData) };
void Z_Construct_UClass_UIterativeOffsetProperties_Statics::NewProp_bReprojectSmooth_SetBit(void* Obj)
{
	((UIterativeOffsetProperties*)Obj)->bReprojectSmooth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIterativeOffsetProperties_Statics::NewProp_bReprojectSmooth = { "bReprojectSmooth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIterativeOffsetProperties), &Z_Construct_UClass_UIterativeOffsetProperties_Statics::NewProp_bReprojectSmooth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReprojectSmooth_MetaData), NewProp_bReprojectSmooth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIterativeOffsetProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIterativeOffsetProperties_Statics::NewProp_Steps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIterativeOffsetProperties_Statics::NewProp_bOffsetBoundaries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIterativeOffsetProperties_Statics::NewProp_SmoothingPerStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIterativeOffsetProperties_Statics::NewProp_bReprojectSmooth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIterativeOffsetProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIterativeOffsetProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIterativeOffsetProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIterativeOffsetProperties_Statics::ClassParams = {
	&UIterativeOffsetProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIterativeOffsetProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIterativeOffsetProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIterativeOffsetProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UIterativeOffsetProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIterativeOffsetProperties()
{
	if (!Z_Registration_Info_UClass_UIterativeOffsetProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIterativeOffsetProperties.OuterSingleton, Z_Construct_UClass_UIterativeOffsetProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIterativeOffsetProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UIterativeOffsetProperties>()
{
	return UIterativeOffsetProperties::StaticClass();
}
UIterativeOffsetProperties::UIterativeOffsetProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIterativeOffsetProperties);
UIterativeOffsetProperties::~UIterativeOffsetProperties() {}
// End Class UIterativeOffsetProperties

// Begin Class UImplicitOffsetProperties
void UImplicitOffsetProperties::StaticRegisterNativesUImplicitOffsetProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImplicitOffsetProperties);
UClass* Z_Construct_UClass_UImplicitOffsetProperties_NoRegister()
{
	return UImplicitOffsetProperties::StaticClass();
}
struct Z_Construct_UClass_UImplicitOffsetProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Properties for Implicit Offsetting */" },
		{ "IncludePath", "OffsetMeshTool.h" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "Properties for Implicit Offsetting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Smoothness_MetaData[] = {
		{ "Category", "ImplicitOffsettingOptions" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How tightly we should constrain the constrained implicit offset to the explicit offset */" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "How tightly we should constrain the constrained implicit offset to the explicit offset" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveUVs_MetaData[] = {
		{ "Category", "ImplicitOffsettingOptions" },
		{ "Comment", "/** If this is false, triangles will be reshaped to be more regular, which will distort UVs */" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "If this is false, triangles will be reshaped to be more regular, which will distort UVs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Smoothness;
	static void NewProp_bPreserveUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveUVs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImplicitOffsetProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImplicitOffsetProperties_Statics::NewProp_Smoothness = { "Smoothness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImplicitOffsetProperties, Smoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Smoothness_MetaData), NewProp_Smoothness_MetaData) };
void Z_Construct_UClass_UImplicitOffsetProperties_Statics::NewProp_bPreserveUVs_SetBit(void* Obj)
{
	((UImplicitOffsetProperties*)Obj)->bPreserveUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImplicitOffsetProperties_Statics::NewProp_bPreserveUVs = { "bPreserveUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UImplicitOffsetProperties), &Z_Construct_UClass_UImplicitOffsetProperties_Statics::NewProp_bPreserveUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveUVs_MetaData), NewProp_bPreserveUVs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImplicitOffsetProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImplicitOffsetProperties_Statics::NewProp_Smoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImplicitOffsetProperties_Statics::NewProp_bPreserveUVs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImplicitOffsetProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UImplicitOffsetProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImplicitOffsetProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImplicitOffsetProperties_Statics::ClassParams = {
	&UImplicitOffsetProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UImplicitOffsetProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UImplicitOffsetProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImplicitOffsetProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UImplicitOffsetProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImplicitOffsetProperties()
{
	if (!Z_Registration_Info_UClass_UImplicitOffsetProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImplicitOffsetProperties.OuterSingleton, Z_Construct_UClass_UImplicitOffsetProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImplicitOffsetProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UImplicitOffsetProperties>()
{
	return UImplicitOffsetProperties::StaticClass();
}
UImplicitOffsetProperties::UImplicitOffsetProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImplicitOffsetProperties);
UImplicitOffsetProperties::~UImplicitOffsetProperties() {}
// End Class UImplicitOffsetProperties

// Begin Class UOffsetMeshTool
void UOffsetMeshTool::StaticRegisterNativesUOffsetMeshTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOffsetMeshTool);
UClass* Z_Construct_UClass_UOffsetMeshTool_NoRegister()
{
	return UOffsetMeshTool::StaticClass();
}
struct Z_Construct_UClass_UOffsetMeshTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Offsetting Tool\n */" },
		{ "IncludePath", "OffsetMeshTool.h" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
		{ "ToolTip", "Mesh Offsetting Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IterativeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImplicitProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMapProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OffsetProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IterativeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImplicitProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeightMapProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOffsetMeshTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOffsetMeshTool_Statics::NewProp_OffsetProperties = { "OffsetProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshTool, OffsetProperties), Z_Construct_UClass_UOffsetMeshToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetProperties_MetaData), NewProp_OffsetProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOffsetMeshTool_Statics::NewProp_IterativeProperties = { "IterativeProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshTool, IterativeProperties), Z_Construct_UClass_UIterativeOffsetProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IterativeProperties_MetaData), NewProp_IterativeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOffsetMeshTool_Statics::NewProp_ImplicitProperties = { "ImplicitProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshTool, ImplicitProperties), Z_Construct_UClass_UImplicitOffsetProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImplicitProperties_MetaData), NewProp_ImplicitProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOffsetMeshTool_Statics::NewProp_WeightMapProperties = { "WeightMapProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshTool, WeightMapProperties), Z_Construct_UClass_UOffsetWeightMapSetProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMapProperties_MetaData), NewProp_WeightMapProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOffsetMeshTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshTool_Statics::NewProp_OffsetProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshTool_Statics::NewProp_IterativeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshTool_Statics::NewProp_ImplicitProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshTool_Statics::NewProp_WeightMapProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOffsetMeshTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMeshProcessingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOffsetMeshTool_Statics::ClassParams = {
	&UOffsetMeshTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOffsetMeshTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UOffsetMeshTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOffsetMeshTool()
{
	if (!Z_Registration_Info_UClass_UOffsetMeshTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOffsetMeshTool.OuterSingleton, Z_Construct_UClass_UOffsetMeshTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOffsetMeshTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UOffsetMeshTool>()
{
	return UOffsetMeshTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOffsetMeshTool);
UOffsetMeshTool::~UOffsetMeshTool() {}
// End Class UOffsetMeshTool

// Begin Class UOffsetMeshToolBuilder
void UOffsetMeshToolBuilder::StaticRegisterNativesUOffsetMeshToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOffsetMeshToolBuilder);
UClass* Z_Construct_UClass_UOffsetMeshToolBuilder_NoRegister()
{
	return UOffsetMeshToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UOffsetMeshToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "OffsetMeshTool.h" },
		{ "ModuleRelativePath", "Public/OffsetMeshTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOffsetMeshToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOffsetMeshToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMeshProcessingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOffsetMeshToolBuilder_Statics::ClassParams = {
	&UOffsetMeshToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UOffsetMeshToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOffsetMeshToolBuilder()
{
	if (!Z_Registration_Info_UClass_UOffsetMeshToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOffsetMeshToolBuilder.OuterSingleton, Z_Construct_UClass_UOffsetMeshToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOffsetMeshToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UOffsetMeshToolBuilder>()
{
	return UOffsetMeshToolBuilder::StaticClass();
}
UOffsetMeshToolBuilder::UOffsetMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOffsetMeshToolBuilder);
UOffsetMeshToolBuilder::~UOffsetMeshToolBuilder() {}
// End Class UOffsetMeshToolBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_OffsetMeshTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOffsetMeshToolOffsetType_StaticEnum, TEXT("EOffsetMeshToolOffsetType"), &Z_Registration_Info_UEnum_EOffsetMeshToolOffsetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3924933845U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOffsetMeshToolProperties, UOffsetMeshToolProperties::StaticClass, TEXT("UOffsetMeshToolProperties"), &Z_Registration_Info_UClass_UOffsetMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOffsetMeshToolProperties), 2762623055U) },
		{ Z_Construct_UClass_UOffsetWeightMapSetProperties, UOffsetWeightMapSetProperties::StaticClass, TEXT("UOffsetWeightMapSetProperties"), &Z_Registration_Info_UClass_UOffsetWeightMapSetProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOffsetWeightMapSetProperties), 3423041387U) },
		{ Z_Construct_UClass_UIterativeOffsetProperties, UIterativeOffsetProperties::StaticClass, TEXT("UIterativeOffsetProperties"), &Z_Registration_Info_UClass_UIterativeOffsetProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIterativeOffsetProperties), 3146874808U) },
		{ Z_Construct_UClass_UImplicitOffsetProperties, UImplicitOffsetProperties::StaticClass, TEXT("UImplicitOffsetProperties"), &Z_Registration_Info_UClass_UImplicitOffsetProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImplicitOffsetProperties), 960446151U) },
		{ Z_Construct_UClass_UOffsetMeshTool, UOffsetMeshTool::StaticClass, TEXT("UOffsetMeshTool"), &Z_Registration_Info_UClass_UOffsetMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOffsetMeshTool), 864769584U) },
		{ Z_Construct_UClass_UOffsetMeshToolBuilder, UOffsetMeshToolBuilder::StaticClass, TEXT("UOffsetMeshToolBuilder"), &Z_Registration_Info_UClass_UOffsetMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOffsetMeshToolBuilder), 1478939305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_OffsetMeshTool_h_4226349644(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_OffsetMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_OffsetMeshTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_OffsetMeshTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_OffsetMeshTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
