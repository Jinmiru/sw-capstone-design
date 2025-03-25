// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Debug/RigUnit_DebugBezier.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_DebugBezier() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBezier();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFourPointBezier();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_DebugBezier
static_assert(std::is_polymorphic<FRigUnit_DebugBezier>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigUnit_DebugBezier cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DebugBezier;
class UScriptStruct* FRigUnit_DebugBezier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugBezier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DebugBezier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugBezier, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DebugBezier"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DebugBezier_Execute;
		Arguments_FRigUnit_DebugBezier_Execute.Emplace(TEXT("Bezier"), TEXT("FRigVMFourPointBezier"));
		Arguments_FRigUnit_DebugBezier_Execute.Emplace(TEXT("MinimumU"), TEXT("float"));
		Arguments_FRigUnit_DebugBezier_Execute.Emplace(TEXT("MaximumU"), TEXT("float"));
		Arguments_FRigUnit_DebugBezier_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_DebugBezier_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_DebugBezier_Execute.Emplace(TEXT("Detail"), TEXT("int32"));
		Arguments_FRigUnit_DebugBezier_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigUnit_DebugBezier_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigUnit_DebugBezier_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DebugBezier::Execute"), &FRigUnit_DebugBezier::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DebugBezier.OuterSingleton, Arguments_FRigUnit_DebugBezier_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugBezier.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DebugBezier>()
{
	return FRigUnit_DebugBezier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Draw Bezier" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bezier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumU_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumU_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bezier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumU;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Detail;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DebugBezier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_Bezier = { "Bezier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezier, Bezier), Z_Construct_UScriptStruct_FRigVMFourPointBezier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bezier_MetaData), NewProp_Bezier_MetaData) }; // 2766953902
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_MinimumU = { "MinimumU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezier, MinimumU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumU_MetaData), NewProp_MinimumU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_MaximumU = { "MaximumU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezier, MaximumU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumU_MetaData), NewProp_MaximumU_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezier, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezier, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezier, Detail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Detail_MetaData), NewProp_Detail_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezier, Space), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezier, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_DebugBezier*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_DebugBezier), &Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_Bezier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_MinimumU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_MaximumU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_Detail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_WorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
	&NewStructOps,
	"RigUnit_DebugBezier",
	Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::PropPointers),
	sizeof(FRigUnit_DebugBezier),
	alignof(FRigUnit_DebugBezier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBezier()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugBezier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DebugBezier.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugBezier.InnerSingleton;
}
void FRigUnit_DebugBezier::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DebugBezier::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Bezier,
		MinimumU,
		MaximumU,
		Color,
		Thickness,
		Detail,
		Space,
		WorldOffset,
		bEnabled
	);
}
// End ScriptStruct FRigUnit_DebugBezier

// Begin ScriptStruct FRigUnit_DebugBezierItemSpace
static_assert(std::is_polymorphic<FRigUnit_DebugBezierItemSpace>() == std::is_polymorphic<FRigVMFunction_DebugBaseMutable>(), "USTRUCT FRigUnit_DebugBezierItemSpace cannot be polymorphic unless super FRigVMFunction_DebugBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DebugBezierItemSpace;
class UScriptStruct* FRigUnit_DebugBezierItemSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugBezierItemSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DebugBezierItemSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DebugBezierItemSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DebugBezierItemSpace_Execute;
		Arguments_FRigUnit_DebugBezierItemSpace_Execute.Emplace(TEXT("Bezier"), TEXT("FRigVMFourPointBezier"));
		Arguments_FRigUnit_DebugBezierItemSpace_Execute.Emplace(TEXT("MinimumU"), TEXT("float"));
		Arguments_FRigUnit_DebugBezierItemSpace_Execute.Emplace(TEXT("MaximumU"), TEXT("float"));
		Arguments_FRigUnit_DebugBezierItemSpace_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_DebugBezierItemSpace_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_DebugBezierItemSpace_Execute.Emplace(TEXT("Detail"), TEXT("int32"));
		Arguments_FRigUnit_DebugBezierItemSpace_Execute.Emplace(TEXT("Space"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_DebugBezierItemSpace_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigUnit_DebugBezierItemSpace_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DebugBezierItemSpace::Execute"), &FRigUnit_DebugBezierItemSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DebugBezierItemSpace.OuterSingleton, Arguments_FRigUnit_DebugBezierItemSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugBezierItemSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DebugBezierItemSpace>()
{
	return FRigUnit_DebugBezierItemSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Draw Bezier" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bezier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumU_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumU_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBezier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bezier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumU;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Detail;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DebugBezierItemSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_Bezier = { "Bezier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezierItemSpace, Bezier), Z_Construct_UScriptStruct_FRigVMFourPointBezier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bezier_MetaData), NewProp_Bezier_MetaData) }; // 2766953902
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_MinimumU = { "MinimumU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezierItemSpace, MinimumU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumU_MetaData), NewProp_MinimumU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_MaximumU = { "MaximumU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezierItemSpace, MaximumU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumU_MetaData), NewProp_MaximumU_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezierItemSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezierItemSpace, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezierItemSpace, Detail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Detail_MetaData), NewProp_Detail_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezierItemSpace, Space), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DebugBezierItemSpace, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOffset_MetaData), NewProp_WorldOffset_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FRigUnit_DebugBezierItemSpace*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_DebugBezierItemSpace), &Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_Bezier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_MinimumU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_MaximumU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_Detail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_WorldOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable,
	&NewStructOps,
	"RigUnit_DebugBezierItemSpace",
	Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::PropPointers),
	sizeof(FRigUnit_DebugBezierItemSpace),
	alignof(FRigUnit_DebugBezierItemSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugBezierItemSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DebugBezierItemSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugBezierItemSpace.InnerSingleton;
}
void FRigUnit_DebugBezierItemSpace::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DebugBezierItemSpace::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Bezier,
		MinimumU,
		MaximumU,
		Color,
		Thickness,
		Detail,
		Space,
		WorldOffset,
		bEnabled
	);
}
// End ScriptStruct FRigUnit_DebugBezierItemSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBezier_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_DebugBezier::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics::NewStructOps, TEXT("RigUnit_DebugBezier"), &Z_Registration_Info_UScriptStruct_RigUnit_DebugBezier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DebugBezier), 2614018787U) },
		{ FRigUnit_DebugBezierItemSpace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics::NewStructOps, TEXT("RigUnit_DebugBezierItemSpace"), &Z_Registration_Info_UScriptStruct_RigUnit_DebugBezierItemSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DebugBezierItemSpace), 2108521007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBezier_h_118382181(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBezier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBezier_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
