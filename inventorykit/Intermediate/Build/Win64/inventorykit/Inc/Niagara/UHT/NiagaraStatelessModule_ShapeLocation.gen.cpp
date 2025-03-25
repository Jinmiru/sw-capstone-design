// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ShapeLocation() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENSM_ShapePrimitive
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENSM_ShapePrimitive;
static UEnum* ENSM_ShapePrimitive_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENSM_ShapePrimitive.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENSM_ShapePrimitive.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENSM_ShapePrimitive"));
	}
	return Z_Registration_Info_UEnum_ENSM_ShapePrimitive.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENSM_ShapePrimitive>()
{
	return ENSM_ShapePrimitive_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.Name", "ENSM_ShapePrimitive::Box" },
		{ "Cylinder.Name", "ENSM_ShapePrimitive::Cylinder" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
		{ "Plane.Name", "ENSM_ShapePrimitive::Plane" },
		{ "Ring.Name", "ENSM_ShapePrimitive::Ring" },
		{ "Sphere.Name", "ENSM_ShapePrimitive::Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENSM_ShapePrimitive::Box", (int64)ENSM_ShapePrimitive::Box },
		{ "ENSM_ShapePrimitive::Cylinder", (int64)ENSM_ShapePrimitive::Cylinder },
		{ "ENSM_ShapePrimitive::Plane", (int64)ENSM_ShapePrimitive::Plane },
		{ "ENSM_ShapePrimitive::Ring", (int64)ENSM_ShapePrimitive::Ring },
		{ "ENSM_ShapePrimitive::Sphere", (int64)ENSM_ShapePrimitive::Sphere },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENSM_ShapePrimitive",
	"ENSM_ShapePrimitive",
	Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive()
{
	if (!Z_Registration_Info_UEnum_ENSM_ShapePrimitive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENSM_ShapePrimitive.InnerSingleton, Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENSM_ShapePrimitive.InnerSingleton;
}
// End Enum ENSM_ShapePrimitive

// Begin Class UNiagaraStatelessModule_ShapeLocation
void UNiagaraStatelessModule_ShapeLocation::StaticRegisterNativesUNiagaraStatelessModule_ShapeLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_ShapeLocation);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_NoRegister()
{
	return UNiagaraStatelessModule_ShapeLocation::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Shape Location" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapePrimitive_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
		{ "ShowInStackItemHeader", "" },
		{ "StackItemHeaderAlignment", "Left" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxSize_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Box" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoxSurfaceOnly_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Box" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxSurfaceThicknessMin_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Box" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxSurfaceThicknessMax_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Box" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneSize_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Plane" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CylinderHeight_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Cylinder" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CylinderRadius_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Cylinder" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CylinderHeightMidpoint_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Cylinder" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RingRadius_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Ring" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscCoverage_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Ring" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RingUDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Ring" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereMin_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Sphere" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereMax_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "ShapePrimitive == ENSM_ShapePrimitive::Sphere" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ShapeLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShapePrimitive_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapePrimitive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxSize;
	static void NewProp_bBoxSurfaceOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoxSurfaceOnly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxSurfaceThicknessMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxSurfaceThicknessMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CylinderHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CylinderRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CylinderHeightMidpoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RingRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DiscCoverage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RingUDistribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_ShapeLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_ShapePrimitive_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_ShapePrimitive = { "ShapePrimitive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, ShapePrimitive), Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapePrimitive_MetaData), NewProp_ShapePrimitive_MetaData) }; // 3052418065
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_BoxSize = { "BoxSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, BoxSize), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxSize_MetaData), NewProp_BoxSize_MetaData) };
void Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_bBoxSurfaceOnly_SetBit(void* Obj)
{
	((UNiagaraStatelessModule_ShapeLocation*)Obj)->bBoxSurfaceOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_bBoxSurfaceOnly = { "bBoxSurfaceOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraStatelessModule_ShapeLocation), &Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_bBoxSurfaceOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoxSurfaceOnly_MetaData), NewProp_bBoxSurfaceOnly_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_BoxSurfaceThicknessMin = { "BoxSurfaceThicknessMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, BoxSurfaceThicknessMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxSurfaceThicknessMin_MetaData), NewProp_BoxSurfaceThicknessMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_BoxSurfaceThicknessMax = { "BoxSurfaceThicknessMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, BoxSurfaceThicknessMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxSurfaceThicknessMax_MetaData), NewProp_BoxSurfaceThicknessMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_PlaneSize = { "PlaneSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, PlaneSize), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneSize_MetaData), NewProp_PlaneSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_CylinderHeight = { "CylinderHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, CylinderHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CylinderHeight_MetaData), NewProp_CylinderHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_CylinderRadius = { "CylinderRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, CylinderRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CylinderRadius_MetaData), NewProp_CylinderRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_CylinderHeightMidpoint = { "CylinderHeightMidpoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, CylinderHeightMidpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CylinderHeightMidpoint_MetaData), NewProp_CylinderHeightMidpoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_RingRadius = { "RingRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, RingRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RingRadius_MetaData), NewProp_RingRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_DiscCoverage = { "DiscCoverage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, DiscCoverage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscCoverage_MetaData), NewProp_DiscCoverage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_RingUDistribution = { "RingUDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, RingUDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RingUDistribution_MetaData), NewProp_RingUDistribution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_SphereMin = { "SphereMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, SphereMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereMin_MetaData), NewProp_SphereMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_SphereMax = { "SphereMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ShapeLocation, SphereMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereMax_MetaData), NewProp_SphereMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_ShapePrimitive_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_ShapePrimitive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_BoxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_bBoxSurfaceOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_BoxSurfaceThicknessMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_BoxSurfaceThicknessMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_PlaneSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_CylinderHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_CylinderRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_CylinderHeightMidpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_RingRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_DiscCoverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_RingUDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_SphereMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_SphereMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::ClassParams = {
	&UNiagaraStatelessModule_ShapeLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_ShapeLocation>()
{
	return UNiagaraStatelessModule_ShapeLocation::StaticClass();
}
UNiagaraStatelessModule_ShapeLocation::UNiagaraStatelessModule_ShapeLocation() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_ShapeLocation);
UNiagaraStatelessModule_ShapeLocation::~UNiagaraStatelessModule_ShapeLocation() {}
// End Class UNiagaraStatelessModule_ShapeLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENSM_ShapePrimitive_StaticEnum, TEXT("ENSM_ShapePrimitive"), &Z_Registration_Info_UEnum_ENSM_ShapePrimitive, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3052418065U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation, UNiagaraStatelessModule_ShapeLocation::StaticClass, TEXT("UNiagaraStatelessModule_ShapeLocation"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_ShapeLocation), 38281254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h_4183587192(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
