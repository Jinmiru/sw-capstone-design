// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_VisualDebug() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Enum ERigUnitVisualDebugPointMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode;
static UEnum* ERigUnitVisualDebugPointMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigUnitVisualDebugPointMode"));
	}
	return Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.OuterSingleton;
}
template<> RIGVM_API UEnum* StaticEnum<ERigUnitVisualDebugPointMode>()
{
	return ERigUnitVisualDebugPointMode_StaticEnum();
}
struct Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigUnitVisualDebugPointMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Point.Comment", "/** Draw as point */" },
		{ "Point.Name", "ERigUnitVisualDebugPointMode::Point" },
		{ "Point.ToolTip", "Draw as point" },
		{ "RigVMTypeAllowed", "" },
		{ "Vector.Comment", "/** Draw as vector */" },
		{ "Vector.Name", "ERigUnitVisualDebugPointMode::Vector" },
		{ "Vector.ToolTip", "Draw as vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigUnitVisualDebugPointMode::Point", (int64)ERigUnitVisualDebugPointMode::Point },
		{ "ERigUnitVisualDebugPointMode::Vector", (int64)ERigUnitVisualDebugPointMode::Vector },
		{ "ERigUnitVisualDebugPointMode::Max", (int64)ERigUnitVisualDebugPointMode::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	"ERigUnitVisualDebugPointMode",
	"ERigUnitVisualDebugPointMode",
	Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode()
{
	if (!Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.InnerSingleton, Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.InnerSingleton;
}
// End Enum ERigUnitVisualDebugPointMode

// Begin ScriptStruct FRigVMFunction_VisualDebugVector
static_assert(std::is_polymorphic<FRigVMFunction_VisualDebugVector>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_VisualDebugVector cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector;
class UScriptStruct* FRigVMFunction_VisualDebugVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VisualDebugVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VisualDebugVector_Execute;
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitVisualDebugPointMode"));
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugVector_Execute.Emplace(TEXT("BoneSpace"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VisualDebugVector::Execute"), &FRigVMFunction_VisualDebugVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.OuterSingleton, Arguments_FRigVMFunction_VisualDebugVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VisualDebugVector>()
{
	return FRigVMFunction_VisualDebugVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Visual Debug Vector" },
		{ "Keywords", "Draw,Point" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VisualDebugVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_VisualDebugVector*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_VisualDebugVector), &Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugVector, Mode), Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 982209802
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugVector, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugVector, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugVector, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugVector, BoneSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneSpace_MetaData), NewProp_BoneSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewProp_BoneSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
	&NewStructOps,
	"RigVMFunction_VisualDebugVector",
	Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::PropPointers),
	sizeof(FRigVMFunction_VisualDebugVector),
	alignof(FRigVMFunction_VisualDebugVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector.InnerSingleton;
}
void FRigVMFunction_VisualDebugVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_VisualDebugVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Mode,
		Color,
		Thickness,
		Scale,
		BoneSpace
	);
}
// End ScriptStruct FRigVMFunction_VisualDebugVector

// Begin ScriptStruct FRigVMFunction_VisualDebugVectorNoSpace
static_assert(std::is_polymorphic<FRigVMFunction_VisualDebugVectorNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_VisualDebugVectorNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace;
class UScriptStruct* FRigVMFunction_VisualDebugVectorNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VisualDebugVectorNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute;
		Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitVisualDebugPointMode"));
		Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VisualDebugVectorNoSpace::Execute"), &FRigVMFunction_VisualDebugVectorNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.OuterSingleton, Arguments_FRigVMFunction_VisualDebugVectorNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VisualDebugVectorNoSpace>()
{
	return FRigVMFunction_VisualDebugVectorNoSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Debug draw parameters for a Point or Vector given a vector\n */" },
		{ "DisplayName", "Visual Debug Vector" },
		{ "Keywords", "Draw,Point" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "TemplateName", "VisualDebug" },
		{ "ToolTip", "Debug draw parameters for a Point or Vector given a vector" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VisualDebugVectorNoSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugVectorNoSpace, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_VisualDebugVectorNoSpace*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_VisualDebugVectorNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugVectorNoSpace, Mode), Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 982209802
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugVectorNoSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugVectorNoSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugVectorNoSpace, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
	&NewStructOps,
	"RigVMFunction_VisualDebugVectorNoSpace",
	Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::PropPointers),
	sizeof(FRigVMFunction_VisualDebugVectorNoSpace),
	alignof(FRigVMFunction_VisualDebugVectorNoSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace.InnerSingleton;
}
void FRigVMFunction_VisualDebugVectorNoSpace::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_VisualDebugVectorNoSpace::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Mode,
		Color,
		Thickness,
		Scale
	);
}
// End ScriptStruct FRigVMFunction_VisualDebugVectorNoSpace

// Begin ScriptStruct FRigVMFunction_VisualDebugQuat
static_assert(std::is_polymorphic<FRigVMFunction_VisualDebugQuat>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_VisualDebugQuat cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat;
class UScriptStruct* FRigVMFunction_VisualDebugQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VisualDebugQuat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VisualDebugQuat_Execute;
		Arguments_FRigVMFunction_VisualDebugQuat_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_VisualDebugQuat_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_VisualDebugQuat_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugQuat_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugQuat_Execute.Emplace(TEXT("BoneSpace"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VisualDebugQuat::Execute"), &FRigVMFunction_VisualDebugQuat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.OuterSingleton, Arguments_FRigVMFunction_VisualDebugQuat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VisualDebugQuat>()
{
	return FRigVMFunction_VisualDebugQuat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Visual Debug Quat" },
		{ "Keywords", "Draw,Rotation" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VisualDebugQuat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuat, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_VisualDebugQuat*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_VisualDebugQuat), &Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuat, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuat, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuat, BoneSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneSpace_MetaData), NewProp_BoneSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewProp_BoneSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
	&NewStructOps,
	"RigVMFunction_VisualDebugQuat",
	Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::PropPointers),
	sizeof(FRigVMFunction_VisualDebugQuat),
	alignof(FRigVMFunction_VisualDebugQuat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat.InnerSingleton;
}
void FRigVMFunction_VisualDebugQuat::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_VisualDebugQuat::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale,
		BoneSpace
	);
}
// End ScriptStruct FRigVMFunction_VisualDebugQuat

// Begin ScriptStruct FRigVMFunction_VisualDebugQuatNoSpace
static_assert(std::is_polymorphic<FRigVMFunction_VisualDebugQuatNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_VisualDebugQuatNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace;
class UScriptStruct* FRigVMFunction_VisualDebugQuatNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VisualDebugQuatNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VisualDebugQuatNoSpace_Execute;
		Arguments_FRigVMFunction_VisualDebugQuatNoSpace_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigVMFunction_VisualDebugQuatNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_VisualDebugQuatNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugQuatNoSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VisualDebugQuatNoSpace::Execute"), &FRigVMFunction_VisualDebugQuatNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.OuterSingleton, Arguments_FRigVMFunction_VisualDebugQuatNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VisualDebugQuatNoSpace>()
{
	return FRigVMFunction_VisualDebugQuatNoSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Debug draw parameters for an Axis given a quaternion\n */" },
		{ "DisplayName", "Visual Debug Quat" },
		{ "Keywords", "Draw,Rotation" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "TemplateName", "VisualDebug" },
		{ "ToolTip", "Debug draw parameters for an Axis given a quaternion" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VisualDebugQuatNoSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuatNoSpace, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_VisualDebugQuatNoSpace*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_VisualDebugQuatNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuatNoSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugQuatNoSpace, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
	&NewStructOps,
	"RigVMFunction_VisualDebugQuatNoSpace",
	Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::PropPointers),
	sizeof(FRigVMFunction_VisualDebugQuatNoSpace),
	alignof(FRigVMFunction_VisualDebugQuatNoSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace.InnerSingleton;
}
void FRigVMFunction_VisualDebugQuatNoSpace::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_VisualDebugQuatNoSpace::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale
	);
}
// End ScriptStruct FRigVMFunction_VisualDebugQuatNoSpace

// Begin ScriptStruct FRigVMFunction_VisualDebugTransform
static_assert(std::is_polymorphic<FRigVMFunction_VisualDebugTransform>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_VisualDebugTransform cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform;
class UScriptStruct* FRigVMFunction_VisualDebugTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VisualDebugTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VisualDebugTransform_Execute;
		Arguments_FRigVMFunction_VisualDebugTransform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigVMFunction_VisualDebugTransform_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_VisualDebugTransform_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugTransform_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugTransform_Execute.Emplace(TEXT("BoneSpace"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VisualDebugTransform::Execute"), &FRigVMFunction_VisualDebugTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.OuterSingleton, Arguments_FRigVMFunction_VisualDebugTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VisualDebugTransform>()
{
	return FRigVMFunction_VisualDebugTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Visual Debug Transform" },
		{ "Keywords", "Draw,Axes" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VisualDebugTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_VisualDebugTransform*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_VisualDebugTransform), &Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransform, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransform, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransform, BoneSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneSpace_MetaData), NewProp_BoneSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewProp_BoneSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
	&NewStructOps,
	"RigVMFunction_VisualDebugTransform",
	Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::PropPointers),
	sizeof(FRigVMFunction_VisualDebugTransform),
	alignof(FRigVMFunction_VisualDebugTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform.InnerSingleton;
}
void FRigVMFunction_VisualDebugTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_VisualDebugTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale,
		BoneSpace
	);
}
// End ScriptStruct FRigVMFunction_VisualDebugTransform

// Begin ScriptStruct FRigVMFunction_VisualDebugTransformNoSpace
static_assert(std::is_polymorphic<FRigVMFunction_VisualDebugTransformNoSpace>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigVMFunction_VisualDebugTransformNoSpace cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace;
class UScriptStruct* FRigVMFunction_VisualDebugTransformNoSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_VisualDebugTransformNoSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_VisualDebugTransformNoSpace_Execute;
		Arguments_FRigVMFunction_VisualDebugTransformNoSpace_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigVMFunction_VisualDebugTransformNoSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigVMFunction_VisualDebugTransformNoSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigVMFunction_VisualDebugTransformNoSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_VisualDebugTransformNoSpace::Execute"), &FRigVMFunction_VisualDebugTransformNoSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.OuterSingleton, Arguments_FRigVMFunction_VisualDebugTransformNoSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_VisualDebugTransformNoSpace>()
{
	return FRigVMFunction_VisualDebugTransformNoSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Debug draw parameters for an Axis given a transform\n */" },
		{ "DisplayName", "Visual Debug Transform" },
		{ "Keywords", "Draw,Axes" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "TemplateName", "VisualDebug" },
		{ "ToolTip", "Debug draw parameters for an Axis given a transform" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_VisualDebug.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_VisualDebugTransformNoSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransformNoSpace, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigVMFunction_VisualDebugTransformNoSpace*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigVMFunction_VisualDebugTransformNoSpace), &Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransformNoSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_VisualDebugTransformNoSpace, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
	&NewStructOps,
	"RigVMFunction_VisualDebugTransformNoSpace",
	Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::PropPointers),
	sizeof(FRigVMFunction_VisualDebugTransformNoSpace),
	alignof(FRigVMFunction_VisualDebugTransformNoSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace.InnerSingleton;
}
void FRigVMFunction_VisualDebugTransformNoSpace::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_VisualDebugTransformNoSpace::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale
	);
}
// End ScriptStruct FRigVMFunction_VisualDebugTransformNoSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERigUnitVisualDebugPointMode_StaticEnum, TEXT("ERigUnitVisualDebugPointMode"), &Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 982209802U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_VisualDebugVector::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics::NewStructOps, TEXT("RigVMFunction_VisualDebugVector"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VisualDebugVector), 2751165572U) },
		{ FRigVMFunction_VisualDebugVectorNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_VisualDebugVectorNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugVectorNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VisualDebugVectorNoSpace), 2871045470U) },
		{ FRigVMFunction_VisualDebugQuat::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics::NewStructOps, TEXT("RigVMFunction_VisualDebugQuat"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VisualDebugQuat), 2541202056U) },
		{ FRigVMFunction_VisualDebugQuatNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_VisualDebugQuatNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugQuatNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VisualDebugQuatNoSpace), 3378634498U) },
		{ FRigVMFunction_VisualDebugTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics::NewStructOps, TEXT("RigVMFunction_VisualDebugTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VisualDebugTransform), 3293960395U) },
		{ FRigVMFunction_VisualDebugTransformNoSpace::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics::NewStructOps, TEXT("RigVMFunction_VisualDebugTransformNoSpace"), &Z_Registration_Info_UScriptStruct_RigVMFunction_VisualDebugTransformNoSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_VisualDebugTransformNoSpace), 1467535502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_334237220(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
