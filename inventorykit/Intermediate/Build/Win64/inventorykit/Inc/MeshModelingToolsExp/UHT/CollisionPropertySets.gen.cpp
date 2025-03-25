// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/Physics/CollisionPropertySets.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionPropertySets() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode();
MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsBoxData();
MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsCapsuleData();
MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsConvexData();
MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsLevelSetData();
MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsSphereData();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Enum ECollisionGeometryMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionGeometryMode;
static UEnum* ECollisionGeometryMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECollisionGeometryMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECollisionGeometryMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ECollisionGeometryMode"));
	}
	return Z_Registration_Info_UEnum_ECollisionGeometryMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ECollisionGeometryMode>()
{
	return ECollisionGeometryMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Comment", "/** Use project physics settings (DefaultShapeComplexity) */" },
		{ "Default.Name", "ECollisionGeometryMode::Default" },
		{ "Default.ToolTip", "Use project physics settings (DefaultShapeComplexity)" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "SimpleAndComplex.Comment", "/** Create both simple and complex shapes. Simple shapes are used for regular scene queries and collision tests. Complex shape (per poly) is used for complex scene queries.*/" },
		{ "SimpleAndComplex.Name", "ECollisionGeometryMode::SimpleAndComplex" },
		{ "SimpleAndComplex.ToolTip", "Create both simple and complex shapes. Simple shapes are used for regular scene queries and collision tests. Complex shape (per poly) is used for complex scene queries." },
		{ "UseComplexAsSimple.Comment", "/** Create only complex shapes (per poly). Use complex shapes for all scene queries and collision tests. Can be used in simulation for static shapes only (i.e can be collided against but not moved through forces or velocity.) */" },
		{ "UseComplexAsSimple.Name", "ECollisionGeometryMode::UseComplexAsSimple" },
		{ "UseComplexAsSimple.ToolTip", "Create only complex shapes (per poly). Use complex shapes for all scene queries and collision tests. Can be used in simulation for static shapes only (i.e can be collided against but not moved through forces or velocity.)" },
		{ "UseSimpleAsComplex.Comment", "/** Create only simple shapes. Use simple shapes for all scene queries and collision tests.*/" },
		{ "UseSimpleAsComplex.Name", "ECollisionGeometryMode::UseSimpleAsComplex" },
		{ "UseSimpleAsComplex.ToolTip", "Create only simple shapes. Use simple shapes for all scene queries and collision tests." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECollisionGeometryMode::Default", (int64)ECollisionGeometryMode::Default },
		{ "ECollisionGeometryMode::SimpleAndComplex", (int64)ECollisionGeometryMode::SimpleAndComplex },
		{ "ECollisionGeometryMode::UseSimpleAsComplex", (int64)ECollisionGeometryMode::UseSimpleAsComplex },
		{ "ECollisionGeometryMode::UseComplexAsSimple", (int64)ECollisionGeometryMode::UseComplexAsSimple },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ECollisionGeometryMode",
	"ECollisionGeometryMode",
	Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode()
{
	if (!Z_Registration_Info_UEnum_ECollisionGeometryMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionGeometryMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECollisionGeometryMode.InnerSingleton;
}
// End Enum ECollisionGeometryMode

// Begin ScriptStruct FPhysicsSphereData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsSphereData;
class UScriptStruct* FPhysicsSphereData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsSphereData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsSphereData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsSphereData, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("PhysicsSphereData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsSphereData.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FPhysicsSphereData>()
{
	return FPhysicsSphereData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicsSphereData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "/** Shape Element storing standard collision and physics properties for a shape */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Shape Element storing standard collision and physics properties for a shape" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Element;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsSphereData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsSphereData, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsSphereData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsSphereData, Element), Z_Construct_UScriptStruct_FKShapeElem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Element_MetaData), NewProp_Element_MetaData) }; // 1986755504
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Element,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	&NewStructOps,
	"PhysicsSphereData",
	Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::PropPointers),
	sizeof(FPhysicsSphereData),
	alignof(FPhysicsSphereData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicsSphereData()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsSphereData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsSphereData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicsSphereData.InnerSingleton;
}
// End ScriptStruct FPhysicsSphereData

// Begin ScriptStruct FPhysicsBoxData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsBoxData;
class UScriptStruct* FPhysicsBoxData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsBoxData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsBoxData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsBoxData, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("PhysicsBoxData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsBoxData.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FPhysicsBoxData>()
{
	return FPhysicsBoxData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicsBoxData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "/** Shape Element storing standard collision and physics properties for a shape */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Shape Element storing standard collision and physics properties for a shape" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Element;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsBoxData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsBoxData, Dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dimensions_MetaData), NewProp_Dimensions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsBoxData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsBoxData, Element), Z_Construct_UScriptStruct_FKShapeElem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Element_MetaData), NewProp_Element_MetaData) }; // 1986755504
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Dimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Element,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	&NewStructOps,
	"PhysicsBoxData",
	Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::PropPointers),
	sizeof(FPhysicsBoxData),
	alignof(FPhysicsBoxData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicsBoxData()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsBoxData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsBoxData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicsBoxData.InnerSingleton;
}
// End ScriptStruct FPhysicsBoxData

// Begin ScriptStruct FPhysicsCapsuleData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsCapsuleData;
class UScriptStruct* FPhysicsCapsuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsCapsuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsCapsuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsCapsuleData, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("PhysicsCapsuleData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsCapsuleData.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FPhysicsCapsuleData>()
{
	return FPhysicsCapsuleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "/** Shape Element storing standard collision and physics properties for a shape */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Shape Element storing standard collision and physics properties for a shape" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Element;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsCapsuleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsCapsuleData, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsCapsuleData, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsCapsuleData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsCapsuleData, Element), Z_Construct_UScriptStruct_FKShapeElem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Element_MetaData), NewProp_Element_MetaData) }; // 1986755504
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Element,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	&NewStructOps,
	"PhysicsCapsuleData",
	Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::PropPointers),
	sizeof(FPhysicsCapsuleData),
	alignof(FPhysicsCapsuleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicsCapsuleData()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsCapsuleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsCapsuleData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicsCapsuleData.InnerSingleton;
}
// End ScriptStruct FPhysicsCapsuleData

// Begin ScriptStruct FPhysicsConvexData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsConvexData;
class UScriptStruct* FPhysicsConvexData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsConvexData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsConvexData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsConvexData, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("PhysicsConvexData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsConvexData.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FPhysicsConvexData>()
{
	return FPhysicsConvexData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicsConvexData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumVertices_MetaData[] = {
		{ "Category", "Convex" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFaces_MetaData[] = {
		{ "Category", "Convex" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "/** Shape Element storing standard collision and physics properties for a shape */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Shape Element storing standard collision and physics properties for a shape" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumVertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumFaces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Element;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsConvexData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumVertices = { "NumVertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsConvexData, NumVertices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumVertices_MetaData), NewProp_NumVertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumFaces = { "NumFaces", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsConvexData, NumFaces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFaces_MetaData), NewProp_NumFaces_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsConvexData, Element), Z_Construct_UScriptStruct_FKShapeElem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Element_MetaData), NewProp_Element_MetaData) }; // 1986755504
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumFaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_Element,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	&NewStructOps,
	"PhysicsConvexData",
	Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::PropPointers),
	sizeof(FPhysicsConvexData),
	alignof(FPhysicsConvexData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicsConvexData()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsConvexData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsConvexData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicsConvexData.InnerSingleton;
}
// End ScriptStruct FPhysicsConvexData

// Begin ScriptStruct FPhysicsLevelSetData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsLevelSetData;
class UScriptStruct* FPhysicsLevelSetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsLevelSetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsLevelSetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsLevelSetData, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("PhysicsLevelSetData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsLevelSetData.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FPhysicsLevelSetData>()
{
	return FPhysicsLevelSetData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[] = {
		{ "Category", "LevelSet" },
		{ "Comment", "/** Shape Element storing standard collision and physics properties for a shape */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Shape Element storing standard collision and physics properties for a shape" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Element;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsLevelSetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsLevelSetData, Element), Z_Construct_UScriptStruct_FKShapeElem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Element_MetaData), NewProp_Element_MetaData) }; // 1986755504
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::NewProp_Element,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	&NewStructOps,
	"PhysicsLevelSetData",
	Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::PropPointers),
	sizeof(FPhysicsLevelSetData),
	alignof(FPhysicsLevelSetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicsLevelSetData()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsLevelSetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsLevelSetData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicsLevelSetData.InnerSingleton;
}
// End ScriptStruct FPhysicsLevelSetData

// Begin Class UPhysicsObjectToolPropertySet
void UPhysicsObjectToolPropertySet::StaticRegisterNativesUPhysicsObjectToolPropertySet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsObjectToolPropertySet);
UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister()
{
	return UPhysicsObjectToolPropertySet::StaticClass();
}
struct Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/CollisionPropertySets.h" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "Comment", "/** Source Object Name */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Source Object Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "Comment", "/** Collision Flags controlling how simple and complex collision shapes are used */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Collision Flags controlling how simple and complex collision shapes are used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spheres_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boxes_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capsules_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Convexes_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelSets_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spheres_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Spheres;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boxes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Boxes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Capsules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Capsules;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Convexes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Convexes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsObjectToolPropertySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, ObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectName_MetaData), NewProp_ObjectName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, CollisionType), Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionType_MetaData), NewProp_CollisionType_MetaData) }; // 3394822269
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Spheres_Inner = { "Spheres", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPhysicsSphereData, METADATA_PARAMS(0, nullptr) }; // 2742249603
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Spheres = { "Spheres", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, Spheres), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spheres_MetaData), NewProp_Spheres_MetaData) }; // 2742249603
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Boxes_Inner = { "Boxes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPhysicsBoxData, METADATA_PARAMS(0, nullptr) }; // 1985378289
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Boxes = { "Boxes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, Boxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boxes_MetaData), NewProp_Boxes_MetaData) }; // 1985378289
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Capsules_Inner = { "Capsules", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPhysicsCapsuleData, METADATA_PARAMS(0, nullptr) }; // 1218344591
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Capsules = { "Capsules", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, Capsules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capsules_MetaData), NewProp_Capsules_MetaData) }; // 1218344591
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Convexes_Inner = { "Convexes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPhysicsConvexData, METADATA_PARAMS(0, nullptr) }; // 962646602
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Convexes = { "Convexes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, Convexes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Convexes_MetaData), NewProp_Convexes_MetaData) }; // 962646602
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_LevelSets_Inner = { "LevelSets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPhysicsLevelSetData, METADATA_PARAMS(0, nullptr) }; // 1644754628
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_LevelSets = { "LevelSets", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, LevelSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelSets_MetaData), NewProp_LevelSets_MetaData) }; // 1644754628
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_ObjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_CollisionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_CollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Spheres_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Spheres,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Boxes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Boxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Capsules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Capsules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Convexes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Convexes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_LevelSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_LevelSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::ClassParams = {
	&UPhysicsObjectToolPropertySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet()
{
	if (!Z_Registration_Info_UClass_UPhysicsObjectToolPropertySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsObjectToolPropertySet.OuterSingleton, Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsObjectToolPropertySet.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPhysicsObjectToolPropertySet>()
{
	return UPhysicsObjectToolPropertySet::StaticClass();
}
UPhysicsObjectToolPropertySet::UPhysicsObjectToolPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsObjectToolPropertySet);
UPhysicsObjectToolPropertySet::~UPhysicsObjectToolPropertySet() {}
// End Class UPhysicsObjectToolPropertySet

// Begin Class UCollisionGeometryVisualizationProperties
void UCollisionGeometryVisualizationProperties::StaticRegisterNativesUCollisionGeometryVisualizationProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollisionGeometryVisualizationProperties);
UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister()
{
	return UCollisionGeometryVisualizationProperties::StaticClass();
}
struct Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/CollisionPropertySets.h" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowCollision_MetaData[] = {
		{ "Category", "Collision Visualization" },
		{ "Comment", "/** Show/hide collision geometry */" },
		{ "EditCondition", "bEnableShowCollision" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Show/hide collision geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSolid_MetaData[] = {
		{ "Category", "Collision Visualization" },
		{ "Comment", "/** Whether to show solid shapes in addition to wireframes */" },
		{ "EditCondition", "bEnableShowSolid" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Whether to show solid shapes in addition to wireframes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Category", "Collision Visualization" },
		{ "Comment", "/** Thickness of lines used to visualize collision shapes */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Thickness of lines used to visualize collision shapes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowHidden_MetaData[] = {
		{ "Category", "Collision Visualization" },
		{ "Comment", "/** Show occluded parts of the collision geometry, rendered with dashed lines */" },
		{ "DisplayName", "Show Hidden Lines" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Show occluded parts of the collision geometry, rendered with dashed lines" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomColors_MetaData[] = {
		{ "Category", "Collision Visualization" },
		{ "Comment", "/** Render each collision geometry with a randomly-chosen color */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Render each collision geometry with a randomly-chosen color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Collision Visualization" },
		{ "Comment", "/** The color to use for all collision visualizations, if random colors are not used */" },
		{ "EditCondition", "!bRandomColors" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "The color to use for all collision visualizations, if random colors are not used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[] = {
		{ "Comment", "//~Used if bShowHidden is false\n" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterialShowingHidden_MetaData[] = {
		{ "Comment", "//~Used if bShowHidden is true\n" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriangleMaterial_MetaData[] = {
		{ "Comment", "//~Used if bShowHidden is false\n" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableShowCollision_MetaData[] = {
		{ "Comment", "//~Some tools will want showing collision geometry to be non-optional\n" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableShowSolid_MetaData[] = {
		{ "Comment", "//~Some tools will not want the 'show solid' option\n" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCollision;
	static void NewProp_bShowSolid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSolid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static void NewProp_bShowHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHidden;
	static void NewProp_bRandomColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineMaterialShowingHidden;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriangleMaterial;
	static void NewProp_bEnableShowCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableShowCollision;
	static void NewProp_bEnableShowSolid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableShowSolid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionGeometryVisualizationProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowCollision_SetBit(void* Obj)
{
	((UCollisionGeometryVisualizationProperties*)Obj)->bShowCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowCollision = { "bShowCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCollisionGeometryVisualizationProperties), &Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCollision_MetaData), NewProp_bShowCollision_MetaData) };
void Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowSolid_SetBit(void* Obj)
{
	((UCollisionGeometryVisualizationProperties*)Obj)->bShowSolid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowSolid = { "bShowSolid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCollisionGeometryVisualizationProperties), &Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowSolid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSolid_MetaData), NewProp_bShowSolid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionGeometryVisualizationProperties, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
void Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowHidden_SetBit(void* Obj)
{
	((UCollisionGeometryVisualizationProperties*)Obj)->bShowHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowHidden = { "bShowHidden", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCollisionGeometryVisualizationProperties), &Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowHidden_MetaData), NewProp_bShowHidden_MetaData) };
void Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bRandomColors_SetBit(void* Obj)
{
	((UCollisionGeometryVisualizationProperties*)Obj)->bRandomColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bRandomColors = { "bRandomColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCollisionGeometryVisualizationProperties), &Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bRandomColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomColors_MetaData), NewProp_bRandomColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionGeometryVisualizationProperties, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionGeometryVisualizationProperties, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineMaterial_MetaData), NewProp_LineMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_LineMaterialShowingHidden = { "LineMaterialShowingHidden", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionGeometryVisualizationProperties, LineMaterialShowingHidden), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineMaterialShowingHidden_MetaData), NewProp_LineMaterialShowingHidden_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_TriangleMaterial = { "TriangleMaterial", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionGeometryVisualizationProperties, TriangleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriangleMaterial_MetaData), NewProp_TriangleMaterial_MetaData) };
void Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bEnableShowCollision_SetBit(void* Obj)
{
	((UCollisionGeometryVisualizationProperties*)Obj)->bEnableShowCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bEnableShowCollision = { "bEnableShowCollision", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCollisionGeometryVisualizationProperties), &Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bEnableShowCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableShowCollision_MetaData), NewProp_bEnableShowCollision_MetaData) };
void Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bEnableShowSolid_SetBit(void* Obj)
{
	((UCollisionGeometryVisualizationProperties*)Obj)->bEnableShowSolid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bEnableShowSolid = { "bEnableShowSolid", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCollisionGeometryVisualizationProperties), &Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bEnableShowSolid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableShowSolid_MetaData), NewProp_bEnableShowSolid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowSolid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bRandomColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_LineMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_LineMaterialShowingHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_TriangleMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bEnableShowCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bEnableShowSolid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::ClassParams = {
	&UCollisionGeometryVisualizationProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties()
{
	if (!Z_Registration_Info_UClass_UCollisionGeometryVisualizationProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollisionGeometryVisualizationProperties.OuterSingleton, Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCollisionGeometryVisualizationProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UCollisionGeometryVisualizationProperties>()
{
	return UCollisionGeometryVisualizationProperties::StaticClass();
}
UCollisionGeometryVisualizationProperties::UCollisionGeometryVisualizationProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionGeometryVisualizationProperties);
UCollisionGeometryVisualizationProperties::~UCollisionGeometryVisualizationProperties() {}
// End Class UCollisionGeometryVisualizationProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECollisionGeometryMode_StaticEnum, TEXT("ECollisionGeometryMode"), &Z_Registration_Info_UEnum_ECollisionGeometryMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3394822269U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPhysicsSphereData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewStructOps, TEXT("PhysicsSphereData"), &Z_Registration_Info_UScriptStruct_PhysicsSphereData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsSphereData), 2742249603U) },
		{ FPhysicsBoxData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewStructOps, TEXT("PhysicsBoxData"), &Z_Registration_Info_UScriptStruct_PhysicsBoxData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsBoxData), 1985378289U) },
		{ FPhysicsCapsuleData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewStructOps, TEXT("PhysicsCapsuleData"), &Z_Registration_Info_UScriptStruct_PhysicsCapsuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsCapsuleData), 1218344591U) },
		{ FPhysicsConvexData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewStructOps, TEXT("PhysicsConvexData"), &Z_Registration_Info_UScriptStruct_PhysicsConvexData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsConvexData), 962646602U) },
		{ FPhysicsLevelSetData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::NewStructOps, TEXT("PhysicsLevelSetData"), &Z_Registration_Info_UScriptStruct_PhysicsLevelSetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsLevelSetData), 1644754628U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsObjectToolPropertySet, UPhysicsObjectToolPropertySet::StaticClass, TEXT("UPhysicsObjectToolPropertySet"), &Z_Registration_Info_UClass_UPhysicsObjectToolPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsObjectToolPropertySet), 1167920501U) },
		{ Z_Construct_UClass_UCollisionGeometryVisualizationProperties, UCollisionGeometryVisualizationProperties::StaticClass, TEXT("UCollisionGeometryVisualizationProperties"), &Z_Registration_Info_UClass_UCollisionGeometryVisualizationProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollisionGeometryVisualizationProperties), 279632950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_631806873(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
