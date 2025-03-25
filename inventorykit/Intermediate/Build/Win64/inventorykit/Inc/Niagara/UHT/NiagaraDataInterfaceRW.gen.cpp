// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceRW.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRW() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ESetResolutionMethod();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ESetResolutionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESetResolutionMethod;
static UEnum* ESetResolutionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESetResolutionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESetResolutionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ESetResolutionMethod, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ESetResolutionMethod"));
	}
	return Z_Registration_Info_UEnum_ESetResolutionMethod.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ESetResolutionMethod>()
{
	return ESetResolutionMethod_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CellSize.Name", "ESetResolutionMethod::CellSize" },
		{ "Independent.Name", "ESetResolutionMethod::Independent" },
		{ "MaxAxis.Name", "ESetResolutionMethod::MaxAxis" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESetResolutionMethod::Independent", (int64)ESetResolutionMethod::Independent },
		{ "ESetResolutionMethod::MaxAxis", (int64)ESetResolutionMethod::MaxAxis },
		{ "ESetResolutionMethod::CellSize", (int64)ESetResolutionMethod::CellSize },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ESetResolutionMethod",
	"ESetResolutionMethod",
	Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ESetResolutionMethod()
{
	if (!Z_Registration_Info_UEnum_ESetResolutionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESetResolutionMethod.InnerSingleton, Z_Construct_UEnum_Niagara_ESetResolutionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESetResolutionMethod.InnerSingleton;
}
// End Enum ESetResolutionMethod

// Begin Class UNiagaraDataInterfaceRWBase
void UNiagaraDataInterfaceRWBase::StaticRegisterNativesUNiagaraDataInterfaceRWBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceRWBase);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase_NoRegister()
{
	return UNiagaraDataInterfaceRWBase::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceRW.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceRWBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::ClassParams = {
	&UNiagaraDataInterfaceRWBase::StaticClass,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceRWBase>()
{
	return UNiagaraDataInterfaceRWBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceRWBase);
UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase() {}
// End Class UNiagaraDataInterfaceRWBase

// Begin Class UNiagaraDataInterfaceGrid3D
void UNiagaraDataInterfaceGrid3D::StaticRegisterNativesUNiagaraDataInterfaceGrid3D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceGrid3D);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_NoRegister()
{
	return UNiagaraDataInterfaceGrid3D::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceRW.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearBeforeNonIterationStage_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Option to clear the buffer prior to a stage where the iteration count does not match the grid resolution.  Useful for stages where one wants to do sparse writes\n// and accumulate values.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Option to clear the buffer prior to a stage where the iteration count does not match the grid resolution.  Useful for stages where one wants to do sparse writes\nand accumulate values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCells_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of cells\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Number of cells" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// World space size of a cell\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "World space size of a cell" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCellsMaxAxis_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of cells on the longest axis\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Number of cells on the longest axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetResolutionMethod_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Method for setting the grid resolution\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Method for setting the grid resolution" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBBoxSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// World size of the grid\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "World size of the grid" },
	};
#endif // WITH_METADATA
	static void NewProp_ClearBeforeNonIterationStage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearBeforeNonIterationStage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumCells;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCellsMaxAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SetResolutionMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SetResolutionMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBBoxSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGrid3D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_ClearBeforeNonIterationStage_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceGrid3D*)Obj)->ClearBeforeNonIterationStage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_ClearBeforeNonIterationStage = { "ClearBeforeNonIterationStage", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceGrid3D), &Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_ClearBeforeNonIterationStage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearBeforeNonIterationStage_MetaData), NewProp_ClearBeforeNonIterationStage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCells = { "NumCells", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, NumCells), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCells_MetaData), NewProp_NumCells_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCellsMaxAxis = { "NumCellsMaxAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, NumCellsMaxAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCellsMaxAxis_MetaData), NewProp_NumCellsMaxAxis_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetResolutionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetResolutionMethod = { "SetResolutionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, SetResolutionMethod), Z_Construct_UEnum_Niagara_ESetResolutionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetResolutionMethod_MetaData), NewProp_SetResolutionMethod_MetaData) }; // 696400378
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_WorldBBoxSize = { "WorldBBoxSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3D, WorldBBoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBBoxSize_MetaData), NewProp_WorldBBoxSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_ClearBeforeNonIterationStage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_NumCellsMaxAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetResolutionMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_SetResolutionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::NewProp_WorldBBoxSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::ClassParams = {
	&UNiagaraDataInterfaceGrid3D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGrid3D>()
{
	return UNiagaraDataInterfaceGrid3D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGrid3D);
UNiagaraDataInterfaceGrid3D::~UNiagaraDataInterfaceGrid3D() {}
// End Class UNiagaraDataInterfaceGrid3D

// Begin Class UNiagaraDataInterfaceGrid2D
void UNiagaraDataInterfaceGrid2D::StaticRegisterNativesUNiagaraDataInterfaceGrid2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceGrid2D);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_NoRegister()
{
	return UNiagaraDataInterfaceGrid2D::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceRW.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearBeforeNonIterationStage_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Option to clear the buffer prior to a stage where the iteration count does not match the grid resolution.  Useful for stages where one wants to do sparse writes\n// and accumulate values.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Option to clear the buffer prior to a stage where the iteration count does not match the grid resolution.  Useful for stages where one wants to do sparse writes\nand accumulate values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCellsX_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of cells in X\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Number of cells in X" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCellsY_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of cells in Y\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Number of cells in Y" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCellsMaxAxis_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of cells on the longest axis\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Number of cells on the longest axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumAttributes_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of Attributes\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Number of Attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetGridFromMaxAxis_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Set grid resolution according to longest axis\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "Set grid resolution according to longest axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBBoxSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// World size of the grid\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceRW.h" },
		{ "ToolTip", "World size of the grid" },
	};
#endif // WITH_METADATA
	static void NewProp_ClearBeforeNonIterationStage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearBeforeNonIterationStage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCellsX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCellsY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCellsMaxAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAttributes;
	static void NewProp_SetGridFromMaxAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SetGridFromMaxAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBBoxSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGrid2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_ClearBeforeNonIterationStage_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceGrid2D*)Obj)->ClearBeforeNonIterationStage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_ClearBeforeNonIterationStage = { "ClearBeforeNonIterationStage", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceGrid2D), &Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_ClearBeforeNonIterationStage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearBeforeNonIterationStage_MetaData), NewProp_ClearBeforeNonIterationStage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsX = { "NumCellsX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, NumCellsX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCellsX_MetaData), NewProp_NumCellsX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsY = { "NumCellsY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, NumCellsY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCellsY_MetaData), NewProp_NumCellsY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsMaxAxis = { "NumCellsMaxAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, NumCellsMaxAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCellsMaxAxis_MetaData), NewProp_NumCellsMaxAxis_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumAttributes = { "NumAttributes", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, NumAttributes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumAttributes_MetaData), NewProp_NumAttributes_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceGrid2D*)Obj)->SetGridFromMaxAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis = { "SetGridFromMaxAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceGrid2D), &Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetGridFromMaxAxis_MetaData), NewProp_SetGridFromMaxAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_WorldBBoxSize = { "WorldBBoxSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceGrid2D, WorldBBoxSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBBoxSize_MetaData), NewProp_WorldBBoxSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_ClearBeforeNonIterationStage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumCellsMaxAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_NumAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_SetGridFromMaxAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::NewProp_WorldBBoxSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::ClassParams = {
	&UNiagaraDataInterfaceGrid2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid2D()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGrid2D>()
{
	return UNiagaraDataInterfaceGrid2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGrid2D);
UNiagaraDataInterfaceGrid2D::~UNiagaraDataInterfaceGrid2D() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceGrid2D)
// End Class UNiagaraDataInterfaceGrid2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESetResolutionMethod_StaticEnum, TEXT("ESetResolutionMethod"), &Z_Registration_Info_UEnum_ESetResolutionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 696400378U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceRWBase, UNiagaraDataInterfaceRWBase::StaticClass, TEXT("UNiagaraDataInterfaceRWBase"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceRWBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceRWBase), 4036920520U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceGrid3D, UNiagaraDataInterfaceGrid3D::StaticClass, TEXT("UNiagaraDataInterfaceGrid3D"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceGrid3D), 1932484573U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceGrid2D, UNiagaraDataInterfaceGrid2D::StaticClass, TEXT("UNiagaraDataInterfaceGrid2D"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceGrid2D), 1952092955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_1453353519(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
