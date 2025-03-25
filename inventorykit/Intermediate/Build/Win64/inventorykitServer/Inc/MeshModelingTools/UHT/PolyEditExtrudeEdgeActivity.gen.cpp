// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Private/ToolActivities/PolyEditExtrudeEdgeActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditExtrudeEdgeActivity() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditExtrudeEdgeActivity();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_NoRegister();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Enum EPolyEditExtrudeEdgeDirectionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode;
static UEnum* EPolyEditExtrudeEdgeDirectionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EPolyEditExtrudeEdgeDirectionMode"));
	}
	return Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EPolyEditExtrudeEdgeDirectionMode>()
{
	return EPolyEditExtrudeEdgeDirectionMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LocalExtrudeFrames.Comment", "/** Each vertex gets its own local frame to extrude along. */" },
		{ "LocalExtrudeFrames.Name", "EPolyEditExtrudeEdgeDirectionMode::LocalExtrudeFrames" },
		{ "LocalExtrudeFrames.ToolTip", "Each vertex gets its own local frame to extrude along." },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
		{ "SingleDirection.Comment", "/** All vertices are extruded in the same direction */" },
		{ "SingleDirection.Name", "EPolyEditExtrudeEdgeDirectionMode::SingleDirection" },
		{ "SingleDirection.ToolTip", "All vertices are extruded in the same direction" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPolyEditExtrudeEdgeDirectionMode::LocalExtrudeFrames", (int64)EPolyEditExtrudeEdgeDirectionMode::LocalExtrudeFrames },
		{ "EPolyEditExtrudeEdgeDirectionMode::SingleDirection", (int64)EPolyEditExtrudeEdgeDirectionMode::SingleDirection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EPolyEditExtrudeEdgeDirectionMode",
	"EPolyEditExtrudeEdgeDirectionMode",
	Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode()
{
	if (!Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode.InnerSingleton;
}
// End Enum EPolyEditExtrudeEdgeDirectionMode

// Begin Enum EPolyEditExtrudeEdgeDistanceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode;
static UEnum* EPolyEditExtrudeEdgeDistanceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EPolyEditExtrudeEdgeDistanceMode"));
	}
	return Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EPolyEditExtrudeEdgeDistanceMode>()
{
	return EPolyEditExtrudeEdgeDistanceMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Fixed.Comment", "/** Sets the distance numerically using the Distance parameter. */" },
		{ "Fixed.Name", "EPolyEditExtrudeEdgeDistanceMode::Fixed" },
		{ "Fixed.ToolTip", "Sets the distance numerically using the Distance parameter." },
		{ "Gizmo.Comment", "/** Uses a gizmo attached to one of the vertices to determine distance to extrude. */" },
		{ "Gizmo.Name", "EPolyEditExtrudeEdgeDistanceMode::Gizmo" },
		{ "Gizmo.ToolTip", "Uses a gizmo attached to one of the vertices to determine distance to extrude." },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPolyEditExtrudeEdgeDistanceMode::Fixed", (int64)EPolyEditExtrudeEdgeDistanceMode::Fixed },
		{ "EPolyEditExtrudeEdgeDistanceMode::Gizmo", (int64)EPolyEditExtrudeEdgeDistanceMode::Gizmo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EPolyEditExtrudeEdgeDistanceMode",
	"EPolyEditExtrudeEdgeDistanceMode",
	Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode()
{
	if (!Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode.InnerSingleton;
}
// End Enum EPolyEditExtrudeEdgeDistanceMode

// Begin Class UPolyEditExtrudeEdgeActivityProperties
void UPolyEditExtrudeEdgeActivityProperties::StaticRegisterNativesUPolyEditExtrudeEdgeActivityProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditExtrudeEdgeActivityProperties);
UClass* Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_NoRegister()
{
	return UPolyEditExtrudeEdgeActivityProperties::StaticClass();
}
struct Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditExtrudeEdgeActivity.h" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionMode_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** How direction to move the vertices is determined. */" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
		{ "ToolTip", "How direction to move the vertices is determined." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMode_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** How distance to extrude along a given direction is determined. */" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
		{ "ToolTip", "How distance to extrude along a given direction is determined." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Extrude" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "-100000" },
		{ "EditCondition", "DistanceMode == EPolyEditExtrudeEdgeDistanceMode::Fixed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
		{ "UIMax", "200" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseUnselectedForFrames_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** When a vertex has both a selected and nonselected neighbor, use the unselected neighbor in picking an extrude frame as well. */" },
		{ "EditCondition", "DirectionMode == EPolyEditExtrudeEdgeDirectionMode::LocalExtrudeFrames" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
		{ "ToolTip", "When a vertex has both a selected and nonselected neighbor, use the unselected neighbor in picking an extrude frame as well." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustToExtrudeEvenly_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** Adjust individual extrude directions in an effort to make extruded edges parallel to their original edges. */" },
		{ "EditCondition", "DirectionMode == EPolyEditExtrudeEdgeDirectionMode::LocalExtrudeFrames" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
		{ "ToolTip", "Adjust individual extrude directions in an effort to make extruded edges parallel to their original edges." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DirectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DistanceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static void NewProp_bUseUnselectedForFrames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUnselectedForFrames;
	static void NewProp_bAdjustToExtrudeEvenly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustToExtrudeEvenly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditExtrudeEdgeActivityProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_DirectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_DirectionMode = { "DirectionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeEdgeActivityProperties, DirectionMode), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDirectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionMode_MetaData), NewProp_DirectionMode_MetaData) }; // 2428092767
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_DistanceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_DistanceMode = { "DistanceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeEdgeActivityProperties, DistanceMode), Z_Construct_UEnum_MeshModelingTools_EPolyEditExtrudeEdgeDistanceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMode_MetaData), NewProp_DistanceMode_MetaData) }; // 2461168440
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeEdgeActivityProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
void Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_bUseUnselectedForFrames_SetBit(void* Obj)
{
	((UPolyEditExtrudeEdgeActivityProperties*)Obj)->bUseUnselectedForFrames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_bUseUnselectedForFrames = { "bUseUnselectedForFrames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditExtrudeEdgeActivityProperties), &Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_bUseUnselectedForFrames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseUnselectedForFrames_MetaData), NewProp_bUseUnselectedForFrames_MetaData) };
void Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_bAdjustToExtrudeEvenly_SetBit(void* Obj)
{
	((UPolyEditExtrudeEdgeActivityProperties*)Obj)->bAdjustToExtrudeEvenly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_bAdjustToExtrudeEvenly = { "bAdjustToExtrudeEvenly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPolyEditExtrudeEdgeActivityProperties), &Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_bAdjustToExtrudeEvenly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdjustToExtrudeEvenly_MetaData), NewProp_bAdjustToExtrudeEvenly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_DirectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_DirectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_DistanceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_DistanceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_bUseUnselectedForFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::NewProp_bAdjustToExtrudeEvenly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::ClassParams = {
	&UPolyEditExtrudeEdgeActivityProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::PropPointers),
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties()
{
	if (!Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.OuterSingleton, Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditExtrudeEdgeActivityProperties>()
{
	return UPolyEditExtrudeEdgeActivityProperties::StaticClass();
}
UPolyEditExtrudeEdgeActivityProperties::UPolyEditExtrudeEdgeActivityProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditExtrudeEdgeActivityProperties);
UPolyEditExtrudeEdgeActivityProperties::~UPolyEditExtrudeEdgeActivityProperties() {}
// End Class UPolyEditExtrudeEdgeActivityProperties

// Begin Class UPolyEditExtrudeEdgeActivity
void UPolyEditExtrudeEdgeActivity::StaticRegisterNativesUPolyEditExtrudeEdgeActivity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditExtrudeEdgeActivity);
UClass* Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_NoRegister()
{
	return UPolyEditExtrudeEdgeActivity::StaticClass();
}
struct Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Extrudes boundary edges.\n */" },
		{ "IncludePath", "ToolActivities/PolyEditExtrudeEdgeActivity.h" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
		{ "ToolTip", "Extrudes boundary edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeFrameProxy_MetaData[] = {
		{ "Comment", "// Support for gizmos.\n" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
		{ "ToolTip", "Support for gizmos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeFrameGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleDirectionProxy_MetaData[] = {
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleDirectionGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometry_MetaData[] = {
		{ "Comment", "// Used for drawing the boundaries of the new faces to make them look similar to the\n// rest of the mesh.\n" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditExtrudeEdgeActivity.h" },
		{ "ToolTip", "Used for drawing the boundaries of the new faces to make them look similar to the\nrest of the mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtrudeFrameProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtrudeFrameGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SingleDirectionProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SingleDirectionGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewGeometry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditExtrudeEdgeActivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeEdgeActivity, Settings), Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeEdgeActivity, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityContext_MetaData), NewProp_ActivityContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_ExtrudeFrameProxy = { "ExtrudeFrameProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeEdgeActivity, ExtrudeFrameProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrudeFrameProxy_MetaData), NewProp_ExtrudeFrameProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_ExtrudeFrameGizmo = { "ExtrudeFrameGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeEdgeActivity, ExtrudeFrameGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrudeFrameGizmo_MetaData), NewProp_ExtrudeFrameGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_SingleDirectionProxy = { "SingleDirectionProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeEdgeActivity, SingleDirectionProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleDirectionProxy_MetaData), NewProp_SingleDirectionProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_SingleDirectionGizmo = { "SingleDirectionGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeEdgeActivity, SingleDirectionGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleDirectionGizmo_MetaData), NewProp_SingleDirectionGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_PreviewGeometry = { "PreviewGeometry", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolyEditExtrudeEdgeActivity, PreviewGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewGeometry_MetaData), NewProp_PreviewGeometry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_ActivityContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_ExtrudeFrameProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_ExtrudeFrameGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_SingleDirectionProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_SingleDirectionGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::NewProp_PreviewGeometry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolActivity,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::ClassParams = {
	&UPolyEditExtrudeEdgeActivity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::PropPointers),
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditExtrudeEdgeActivity()
{
	if (!Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.OuterSingleton, Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditExtrudeEdgeActivity>()
{
	return UPolyEditExtrudeEdgeActivity::StaticClass();
}
UPolyEditExtrudeEdgeActivity::UPolyEditExtrudeEdgeActivity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditExtrudeEdgeActivity);
UPolyEditExtrudeEdgeActivity::~UPolyEditExtrudeEdgeActivity() {}
// End Class UPolyEditExtrudeEdgeActivity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPolyEditExtrudeEdgeDirectionMode_StaticEnum, TEXT("EPolyEditExtrudeEdgeDirectionMode"), &Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDirectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2428092767U) },
		{ EPolyEditExtrudeEdgeDistanceMode_StaticEnum, TEXT("EPolyEditExtrudeEdgeDistanceMode"), &Z_Registration_Info_UEnum_EPolyEditExtrudeEdgeDistanceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2461168440U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties, UPolyEditExtrudeEdgeActivityProperties::StaticClass, TEXT("UPolyEditExtrudeEdgeActivityProperties"), &Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivityProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditExtrudeEdgeActivityProperties), 1793293101U) },
		{ Z_Construct_UClass_UPolyEditExtrudeEdgeActivity, UPolyEditExtrudeEdgeActivity::StaticClass, TEXT("UPolyEditExtrudeEdgeActivity"), &Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditExtrudeEdgeActivity), 1199071376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_3464474017(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
