// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Debug/RigUnit_VisualDebug.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_VisualDebug() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBase();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_VisualDebugVector
static_assert(std::is_polymorphic<FRigUnit_VisualDebugVector>() == std::is_polymorphic<FRigUnit_DebugBase>(), "USTRUCT FRigUnit_VisualDebugVector cannot be polymorphic unless super FRigUnit_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector;
class UScriptStruct* FRigUnit_VisualDebugVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VisualDebugVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_VisualDebugVector_Execute;
		Arguments_FRigUnit_VisualDebugVector_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigUnit_VisualDebugVector_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigUnit_VisualDebugVector_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitVisualDebugPointMode"));
		Arguments_FRigUnit_VisualDebugVector_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_VisualDebugVector_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_VisualDebugVector_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigUnit_VisualDebugVector_Execute.Emplace(TEXT("BoneSpace"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VisualDebugVector::Execute"), &FRigUnit_VisualDebugVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.OuterSingleton, Arguments_FRigUnit_VisualDebugVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VisualDebugVector>()
{
	return FRigUnit_VisualDebugVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Visual Debug Vector" },
		{ "Keywords", "Draw,Point" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VisualDebugVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_VisualDebugVector*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_VisualDebugVector), &Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVector, Mode), Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 982209802
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVector, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVector, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVector, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVector, BoneSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneSpace_MetaData), NewProp_BoneSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_BoneSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_DebugBase,
	&NewStructOps,
	"RigUnit_VisualDebugVector",
	Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::PropPointers),
	sizeof(FRigUnit_VisualDebugVector),
	alignof(FRigUnit_VisualDebugVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.InnerSingleton;
}
void FRigUnit_VisualDebugVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_VisualDebugVector::Execute(const FControlRigExecuteContext& InExecuteContext)
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
// End ScriptStruct FRigUnit_VisualDebugVector

// Begin ScriptStruct FRigUnit_VisualDebugVectorItemSpace
static_assert(std::is_polymorphic<FRigUnit_VisualDebugVectorItemSpace>() == std::is_polymorphic<FRigUnit_DebugBase>(), "USTRUCT FRigUnit_VisualDebugVectorItemSpace cannot be polymorphic unless super FRigUnit_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace;
class UScriptStruct* FRigUnit_VisualDebugVectorItemSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VisualDebugVectorItemSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_VisualDebugVectorItemSpace_Execute;
		Arguments_FRigUnit_VisualDebugVectorItemSpace_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigUnit_VisualDebugVectorItemSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigUnit_VisualDebugVectorItemSpace_Execute.Emplace(TEXT("Mode"), TEXT("ERigUnitVisualDebugPointMode"));
		Arguments_FRigUnit_VisualDebugVectorItemSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_VisualDebugVectorItemSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_VisualDebugVectorItemSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigUnit_VisualDebugVectorItemSpace_Execute.Emplace(TEXT("Space"), TEXT("FRigElementKey"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VisualDebugVectorItemSpace::Execute"), &FRigUnit_VisualDebugVectorItemSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.OuterSingleton, Arguments_FRigUnit_VisualDebugVectorItemSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VisualDebugVectorItemSpace>()
{
	return FRigUnit_VisualDebugVectorItemSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Debug draw parameters for a Point or Vector given a vector\n */" },
		{ "Deprecated", "5.2" },
		{ "DisplayName", "Visual Debug Vector" },
		{ "Keywords", "Draw,Point" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
		{ "ToolTip", "Debug draw parameters for a Point or Vector given a vector" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VisualDebugVectorItemSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVectorItemSpace, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_VisualDebugVectorItemSpace*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_VisualDebugVectorItemSpace), &Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVectorItemSpace, Mode), Z_Construct_UEnum_RigVM_ERigUnitVisualDebugPointMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 982209802
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVectorItemSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVectorItemSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVectorItemSpace, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVectorItemSpace, Space), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_DebugBase,
	&NewStructOps,
	"RigUnit_VisualDebugVectorItemSpace",
	Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::PropPointers),
	sizeof(FRigUnit_VisualDebugVectorItemSpace),
	alignof(FRigUnit_VisualDebugVectorItemSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.InnerSingleton;
}
void FRigUnit_VisualDebugVectorItemSpace::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_VisualDebugVectorItemSpace::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Mode,
		Color,
		Thickness,
		Scale,
		Space
	);
}
// End ScriptStruct FRigUnit_VisualDebugVectorItemSpace

// Begin ScriptStruct FRigUnit_VisualDebugQuat
static_assert(std::is_polymorphic<FRigUnit_VisualDebugQuat>() == std::is_polymorphic<FRigUnit_DebugBase>(), "USTRUCT FRigUnit_VisualDebugQuat cannot be polymorphic unless super FRigUnit_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat;
class UScriptStruct* FRigUnit_VisualDebugQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VisualDebugQuat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_VisualDebugQuat_Execute;
		Arguments_FRigUnit_VisualDebugQuat_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigUnit_VisualDebugQuat_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigUnit_VisualDebugQuat_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_VisualDebugQuat_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigUnit_VisualDebugQuat_Execute.Emplace(TEXT("BoneSpace"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VisualDebugQuat::Execute"), &FRigUnit_VisualDebugQuat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.OuterSingleton, Arguments_FRigUnit_VisualDebugQuat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VisualDebugQuat>()
{
	return FRigUnit_VisualDebugQuat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Visual Debug Quat" },
		{ "Keywords", "Draw,Rotation" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VisualDebugQuat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuat, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_VisualDebugQuat*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_VisualDebugQuat), &Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuat, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuat, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuat, BoneSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneSpace_MetaData), NewProp_BoneSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_BoneSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_DebugBase,
	&NewStructOps,
	"RigUnit_VisualDebugQuat",
	Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::PropPointers),
	sizeof(FRigUnit_VisualDebugQuat),
	alignof(FRigUnit_VisualDebugQuat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.InnerSingleton;
}
void FRigUnit_VisualDebugQuat::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_VisualDebugQuat::Execute(const FControlRigExecuteContext& InExecuteContext)
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
// End ScriptStruct FRigUnit_VisualDebugQuat

// Begin ScriptStruct FRigUnit_VisualDebugQuatItemSpace
static_assert(std::is_polymorphic<FRigUnit_VisualDebugQuatItemSpace>() == std::is_polymorphic<FRigUnit_DebugBase>(), "USTRUCT FRigUnit_VisualDebugQuatItemSpace cannot be polymorphic unless super FRigUnit_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace;
class UScriptStruct* FRigUnit_VisualDebugQuatItemSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VisualDebugQuatItemSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_VisualDebugQuatItemSpace_Execute;
		Arguments_FRigUnit_VisualDebugQuatItemSpace_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigUnit_VisualDebugQuatItemSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigUnit_VisualDebugQuatItemSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_VisualDebugQuatItemSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigUnit_VisualDebugQuatItemSpace_Execute.Emplace(TEXT("Space"), TEXT("FRigElementKey"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VisualDebugQuatItemSpace::Execute"), &FRigUnit_VisualDebugQuatItemSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.OuterSingleton, Arguments_FRigUnit_VisualDebugQuatItemSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VisualDebugQuatItemSpace>()
{
	return FRigUnit_VisualDebugQuatItemSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Debug draw parameters for an Axis given a quaternion\n */" },
		{ "Deprecated", "5.2" },
		{ "DisplayName", "Visual Debug Quat" },
		{ "Keywords", "Draw,Rotation" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
		{ "ToolTip", "Debug draw parameters for an Axis given a quaternion" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VisualDebugQuatItemSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuatItemSpace, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_VisualDebugQuatItemSpace*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_VisualDebugQuatItemSpace), &Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuatItemSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuatItemSpace, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuatItemSpace, Space), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_DebugBase,
	&NewStructOps,
	"RigUnit_VisualDebugQuatItemSpace",
	Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::PropPointers),
	sizeof(FRigUnit_VisualDebugQuatItemSpace),
	alignof(FRigUnit_VisualDebugQuatItemSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.InnerSingleton;
}
void FRigUnit_VisualDebugQuatItemSpace::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_VisualDebugQuatItemSpace::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale,
		Space
	);
}
// End ScriptStruct FRigUnit_VisualDebugQuatItemSpace

// Begin ScriptStruct FRigUnit_VisualDebugTransform
static_assert(std::is_polymorphic<FRigUnit_VisualDebugTransform>() == std::is_polymorphic<FRigUnit_DebugBase>(), "USTRUCT FRigUnit_VisualDebugTransform cannot be polymorphic unless super FRigUnit_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform;
class UScriptStruct* FRigUnit_VisualDebugTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VisualDebugTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_VisualDebugTransform_Execute;
		Arguments_FRigUnit_VisualDebugTransform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_VisualDebugTransform_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigUnit_VisualDebugTransform_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_VisualDebugTransform_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigUnit_VisualDebugTransform_Execute.Emplace(TEXT("BoneSpace"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VisualDebugTransform::Execute"), &FRigUnit_VisualDebugTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.OuterSingleton, Arguments_FRigUnit_VisualDebugTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VisualDebugTransform>()
{
	return FRigUnit_VisualDebugTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Visual Debug Transform" },
		{ "Keywords", "Draw,Axes" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VisualDebugTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_VisualDebugTransform*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_VisualDebugTransform), &Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransform, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransform, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransform, BoneSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneSpace_MetaData), NewProp_BoneSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_BoneSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_DebugBase,
	&NewStructOps,
	"RigUnit_VisualDebugTransform",
	Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::PropPointers),
	sizeof(FRigUnit_VisualDebugTransform),
	alignof(FRigUnit_VisualDebugTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.InnerSingleton;
}
void FRigUnit_VisualDebugTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_VisualDebugTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
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
// End ScriptStruct FRigUnit_VisualDebugTransform

// Begin ScriptStruct FRigUnit_VisualDebugTransformItemSpace
static_assert(std::is_polymorphic<FRigUnit_VisualDebugTransformItemSpace>() == std::is_polymorphic<FRigUnit_DebugBase>(), "USTRUCT FRigUnit_VisualDebugTransformItemSpace cannot be polymorphic unless super FRigUnit_DebugBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace;
class UScriptStruct* FRigUnit_VisualDebugTransformItemSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VisualDebugTransformItemSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_VisualDebugTransformItemSpace_Execute;
		Arguments_FRigUnit_VisualDebugTransformItemSpace_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_VisualDebugTransformItemSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		Arguments_FRigUnit_VisualDebugTransformItemSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_VisualDebugTransformItemSpace_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigUnit_VisualDebugTransformItemSpace_Execute.Emplace(TEXT("Space"), TEXT("FRigElementKey"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VisualDebugTransformItemSpace::Execute"), &FRigUnit_VisualDebugTransformItemSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.OuterSingleton, Arguments_FRigUnit_VisualDebugTransformItemSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VisualDebugTransformItemSpace>()
{
	return FRigUnit_VisualDebugTransformItemSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Debug draw parameters for an Axis given a transform\n */" },
		{ "Deprecated", "5.2" },
		{ "DisplayName", "Visual Debug Transform" },
		{ "Keywords", "Draw,Axes" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
		{ "ToolTip", "Debug draw parameters for an Axis given a transform" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VisualDebugTransformItemSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransformItemSpace, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_VisualDebugTransformItemSpace*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_VisualDebugTransformItemSpace), &Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransformItemSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransformItemSpace, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransformItemSpace, Space), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Space,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_DebugBase,
	&NewStructOps,
	"RigUnit_VisualDebugTransformItemSpace",
	Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::PropPointers),
	sizeof(FRigUnit_VisualDebugTransformItemSpace),
	alignof(FRigUnit_VisualDebugTransformItemSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.InnerSingleton;
}
void FRigUnit_VisualDebugTransformItemSpace::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_VisualDebugTransformItemSpace::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale,
		Space
	);
}
// End ScriptStruct FRigUnit_VisualDebugTransformItemSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_VisualDebugVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewStructOps, TEXT("RigUnit_VisualDebugVector"), &Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VisualDebugVector), 1371926871U) },
		{ FRigUnit_VisualDebugVectorItemSpace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewStructOps, TEXT("RigUnit_VisualDebugVectorItemSpace"), &Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VisualDebugVectorItemSpace), 446467425U) },
		{ FRigUnit_VisualDebugQuat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewStructOps, TEXT("RigUnit_VisualDebugQuat"), &Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VisualDebugQuat), 3534867827U) },
		{ FRigUnit_VisualDebugQuatItemSpace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewStructOps, TEXT("RigUnit_VisualDebugQuatItemSpace"), &Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VisualDebugQuatItemSpace), 2680792769U) },
		{ FRigUnit_VisualDebugTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewStructOps, TEXT("RigUnit_VisualDebugTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VisualDebugTransform), 3427442239U) },
		{ FRigUnit_VisualDebugTransformItemSpace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewStructOps, TEXT("RigUnit_VisualDebugTransformItemSpace"), &Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VisualDebugTransformItemSpace), 1246572403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_3051355127(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
