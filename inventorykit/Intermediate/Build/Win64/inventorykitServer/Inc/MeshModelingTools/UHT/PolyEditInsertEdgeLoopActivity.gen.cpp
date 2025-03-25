// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditInsertEdgeLoopActivity() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEdgeLoopInsertionProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEdgeLoopInsertionProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_NoRegister();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Enum EEdgeLoopPositioningMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEdgeLoopPositioningMode;
static UEnum* EEdgeLoopPositioningMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EEdgeLoopPositioningMode"));
	}
	return Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EEdgeLoopPositioningMode>()
{
	return EEdgeLoopPositioningMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DistanceOffset.Comment", "/** Edge loops will fall a constant distance away from the start of each edge they intersect\n\x09 (e.g., 20 units down). Clamps to end if edge is too short. */" },
		{ "DistanceOffset.Name", "EEdgeLoopPositioningMode::DistanceOffset" },
		{ "DistanceOffset.ToolTip", "Edge loops will fall a constant distance away from the start of each edge they intersect\n       (e.g., 20 units down). Clamps to end if edge is too short." },
		{ "Even.Comment", "/** Edge loops will be evenly centered within a group. Allows for multiple insertions at a time. */" },
		{ "Even.Name", "EEdgeLoopPositioningMode::Even" },
		{ "Even.ToolTip", "Edge loops will be evenly centered within a group. Allows for multiple insertions at a time." },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ProportionOffset.Comment", "/** Edge loops will fall at the same length proportion at each edge they intersect (e.g., a quarter way down). */" },
		{ "ProportionOffset.Name", "EEdgeLoopPositioningMode::ProportionOffset" },
		{ "ProportionOffset.ToolTip", "Edge loops will fall at the same length proportion at each edge they intersect (e.g., a quarter way down)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEdgeLoopPositioningMode::Even", (int64)EEdgeLoopPositioningMode::Even },
		{ "EEdgeLoopPositioningMode::ProportionOffset", (int64)EEdgeLoopPositioningMode::ProportionOffset },
		{ "EEdgeLoopPositioningMode::DistanceOffset", (int64)EEdgeLoopPositioningMode::DistanceOffset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EEdgeLoopPositioningMode",
	"EEdgeLoopPositioningMode",
	Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode()
{
	if (!Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.InnerSingleton;
}
// End Enum EEdgeLoopPositioningMode

// Begin Enum EEdgeLoopInsertionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEdgeLoopInsertionMode;
static UEnum* EEdgeLoopInsertionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EEdgeLoopInsertionMode"));
	}
	return Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EEdgeLoopInsertionMode>()
{
	return EEdgeLoopInsertionMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "PlaneCut.Comment", "/** Keeps existing triangles and cuts them to create a new path. May result in fragmented triangles over time.*/" },
		{ "PlaneCut.Name", "EEdgeLoopInsertionMode::PlaneCut" },
		{ "PlaneCut.ToolTip", "Keeps existing triangles and cuts them to create a new path. May result in fragmented triangles over time." },
		{ "Retriangulate.Comment", "/** Existing groups will be deleted and new triangles will be created for the new groups.\n\x09 Keeps topology simple but breaks non-planar groups. */" },
		{ "Retriangulate.Name", "EEdgeLoopInsertionMode::Retriangulate" },
		{ "Retriangulate.ToolTip", "Existing groups will be deleted and new triangles will be created for the new groups.\n       Keeps topology simple but breaks non-planar groups." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEdgeLoopInsertionMode::Retriangulate", (int64)EEdgeLoopInsertionMode::Retriangulate },
		{ "EEdgeLoopInsertionMode::PlaneCut", (int64)EEdgeLoopInsertionMode::PlaneCut },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EEdgeLoopInsertionMode",
	"EEdgeLoopInsertionMode",
	Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode()
{
	if (!Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.InnerSingleton;
}
// End Enum EEdgeLoopInsertionMode

// Begin Class UEdgeLoopInsertionProperties
void UEdgeLoopInsertionProperties::StaticRegisterNativesUEdgeLoopInsertionProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdgeLoopInsertionProperties);
UClass* Z_Construct_UClass_UEdgeLoopInsertionProperties_NoRegister()
{
	return UEdgeLoopInsertionProperties::StaticClass();
}
struct Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionMode_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "Comment", "/** Determines how edge loops position themselves vertically relative to loop direction. */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "Determines how edge loops position themselves vertically relative to loop direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertionMode_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "Comment", "/** Determines how edge loops are added to the geometry */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "Determines how edge loops are added to the geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLoops_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "ClampMax", "500" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How many loops to insert at a time. Only used with \"even\" positioning mode. */" },
		{ "EditCondition", "PositionMode == EEdgeLoopPositioningMode::Even" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "How many loops to insert at a time. Only used with \"even\" positioning mode." },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProportionOffset_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "EditCondition", "PositionMode == EEdgeLoopPositioningMode::ProportionOffset && !bInteractive" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceOffset_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "ClampMin", "0" },
		{ "EditCondition", "PositionMode == EEdgeLoopPositioningMode::DistanceOffset && !bInteractive" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInteractive_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "Comment", "/** When false, the distance/proportion offset is numerically specified, and mouse clicks just choose the edge. */" },
		{ "EditCondition", "PositionMode != EEdgeLoopPositioningMode::Even" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "When false, the distance/proportion offset is numerically specified, and mouse clicks just choose the edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipOffsetDirection_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "Comment", "/** Measure the distance offset from the opposite side of the edges. */" },
		{ "EditCondition", "PositionMode == EEdgeLoopPositioningMode::DistanceOffset" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "Measure the distance offset from the opposite side of the edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighlightProblemGroups_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "Comment", "/** When true, non-quad-like groups that stop the loop will be highlighted, with X's marking the corners. */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "When true, non-quad-like groups that stop the loop will be highlighted, with X's marking the corners." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexTolerance_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How close a new loop edge needs to pass next to an existing vertex to use that vertex rather than creating a new one. */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "How close a new loop edge needs to pass next to an existing vertex to use that vertex rather than creating a new one." },
		{ "UIMax", "0.01" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PositionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PositionMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InsertionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InsertionMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoops;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ProportionOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceOffset;
	static void NewProp_bInteractive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteractive;
	static void NewProp_bFlipOffsetDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipOffsetDirection;
	static void NewProp_bHighlightProblemGroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlightProblemGroups;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_VertexTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdgeLoopInsertionProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_PositionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_PositionMode = { "PositionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeLoopInsertionProperties, PositionMode), Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionMode_MetaData), NewProp_PositionMode_MetaData) }; // 1306859899
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_InsertionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_InsertionMode = { "InsertionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeLoopInsertionProperties, InsertionMode), Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertionMode_MetaData), NewProp_InsertionMode_MetaData) }; // 1457938389
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeLoopInsertionProperties, NumLoops), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLoops_MetaData), NewProp_NumLoops_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_ProportionOffset = { "ProportionOffset", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeLoopInsertionProperties, ProportionOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProportionOffset_MetaData), NewProp_ProportionOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_DistanceOffset = { "DistanceOffset", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeLoopInsertionProperties, DistanceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceOffset_MetaData), NewProp_DistanceOffset_MetaData) };
void Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bInteractive_SetBit(void* Obj)
{
	((UEdgeLoopInsertionProperties*)Obj)->bInteractive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bInteractive = { "bInteractive", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdgeLoopInsertionProperties), &Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bInteractive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInteractive_MetaData), NewProp_bInteractive_MetaData) };
void Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bFlipOffsetDirection_SetBit(void* Obj)
{
	((UEdgeLoopInsertionProperties*)Obj)->bFlipOffsetDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bFlipOffsetDirection = { "bFlipOffsetDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdgeLoopInsertionProperties), &Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bFlipOffsetDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipOffsetDirection_MetaData), NewProp_bFlipOffsetDirection_MetaData) };
void Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bHighlightProblemGroups_SetBit(void* Obj)
{
	((UEdgeLoopInsertionProperties*)Obj)->bHighlightProblemGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bHighlightProblemGroups = { "bHighlightProblemGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdgeLoopInsertionProperties), &Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bHighlightProblemGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighlightProblemGroups_MetaData), NewProp_bHighlightProblemGroups_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_VertexTolerance = { "VertexTolerance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeLoopInsertionProperties, VertexTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexTolerance_MetaData), NewProp_VertexTolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_PositionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_PositionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_InsertionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_InsertionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_NumLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_ProportionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_DistanceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bInteractive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bFlipOffsetDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bHighlightProblemGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_VertexTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::ClassParams = {
	&UEdgeLoopInsertionProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdgeLoopInsertionProperties()
{
	if (!Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.OuterSingleton, Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UEdgeLoopInsertionProperties>()
{
	return UEdgeLoopInsertionProperties::StaticClass();
}
UEdgeLoopInsertionProperties::UEdgeLoopInsertionProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdgeLoopInsertionProperties);
UEdgeLoopInsertionProperties::~UEdgeLoopInsertionProperties() {}
// End Class UEdgeLoopInsertionProperties

// Begin Class UPolyEditInsertEdgeLoopActivity
void UPolyEditInsertEdgeLoopActivity::StaticRegisterNativesUPolyEditInsertEdgeLoopActivity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditInsertEdgeLoopActivity);
UClass* Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_NoRegister()
{
	return UPolyEditInsertEdgeLoopActivity::StaticClass();
}
struct Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Interactive activity for inserting (group) edge loops into a mesh. */" },
		{ "IncludePath", "ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "Interactive activity for inserting (group) edge loops into a mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditInsertEdgeLoopActivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditInsertEdgeLoopActivity, Settings), Z_Construct_UClass_UEdgeLoopInsertionProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditInsertEdgeLoopActivity, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityContext_MetaData), NewProp_ActivityContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_ActivityContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolActivity,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::ClassParams = {
	&UPolyEditInsertEdgeLoopActivity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity()
{
	if (!Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.OuterSingleton, Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditInsertEdgeLoopActivity>()
{
	return UPolyEditInsertEdgeLoopActivity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditInsertEdgeLoopActivity);
UPolyEditInsertEdgeLoopActivity::~UPolyEditInsertEdgeLoopActivity() {}
// End Class UPolyEditInsertEdgeLoopActivity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEdgeLoopPositioningMode_StaticEnum, TEXT("EEdgeLoopPositioningMode"), &Z_Registration_Info_UEnum_EEdgeLoopPositioningMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1306859899U) },
		{ EEdgeLoopInsertionMode_StaticEnum, TEXT("EEdgeLoopInsertionMode"), &Z_Registration_Info_UEnum_EEdgeLoopInsertionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1457938389U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdgeLoopInsertionProperties, UEdgeLoopInsertionProperties::StaticClass, TEXT("UEdgeLoopInsertionProperties"), &Z_Registration_Info_UClass_UEdgeLoopInsertionProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdgeLoopInsertionProperties), 2201350448U) },
		{ Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity, UPolyEditInsertEdgeLoopActivity::StaticClass, TEXT("UPolyEditInsertEdgeLoopActivity"), &Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditInsertEdgeLoopActivity), 3099937351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_3381337959(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
