// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMFunction_MathRay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_MathRay() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRay();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_MathRayBase
static_assert(std::is_polymorphic<FRigVMFunction_MathRayBase>() == std::is_polymorphic<FRigVMFunction_MathBase>(), "USTRUCT FRigVMFunction_MathRayBase cannot be polymorphic unless super FRigVMFunction_MathBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayBase;
class UScriptStruct* FRigVMFunction_MathRayBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRayBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRayBase>()
{
	return FRigVMFunction_MathRayBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Ray" },
		{ "MenuDescSuffix", "(Ray)" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRayBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathBase,
	&NewStructOps,
	"RigVMFunction_MathRayBase",
	nullptr,
	0,
	sizeof(FRigVMFunction_MathRayBase),
	alignof(FRigVMFunction_MathRayBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayBase.InnerSingleton;
}
// End ScriptStruct FRigVMFunction_MathRayBase

// Begin ScriptStruct FRigVMFunction_MathRayIntersectRay
static_assert(std::is_polymorphic<FRigVMFunction_MathRayIntersectRay>() == std::is_polymorphic<FRigVMFunction_MathRayBase>(), "USTRUCT FRigVMFunction_MathRayIntersectRay cannot be polymorphic unless super FRigVMFunction_MathRayBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectRay;
class UScriptStruct* FRigVMFunction_MathRayIntersectRay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectRay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectRay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRayIntersectRay"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRayIntersectRay_Execute;
		Arguments_FRigVMFunction_MathRayIntersectRay_Execute.Emplace(TEXT("A"), TEXT("FRay"));
		Arguments_FRigVMFunction_MathRayIntersectRay_Execute.Emplace(TEXT("B"), TEXT("FRay"));
		Arguments_FRigVMFunction_MathRayIntersectRay_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRayIntersectRay_Execute.Emplace(TEXT("Distance"), TEXT("float"));
		Arguments_FRigVMFunction_MathRayIntersectRay_Execute.Emplace(TEXT("RatioA"), TEXT("float"));
		Arguments_FRigVMFunction_MathRayIntersectRay_Execute.Emplace(TEXT("RatioB"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRayIntersectRay::Execute"), &FRigVMFunction_MathRayIntersectRay::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectRay.OuterSingleton, Arguments_FRigVMFunction_MathRayIntersectRay_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectRay.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRayIntersectRay>()
{
	return FRigVMFunction_MathRayIntersectRay::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the closest point intersection of a ray with another ray\n */" },
		{ "DisplayName", "Intersect Ray" },
		{ "Keywords", "Closest,Ray,Cross" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "ToolTip", "Returns the closest point intersection of a ray with another ray" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RatioA_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RatioB_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RatioA;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RatioB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRayIntersectRay>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayIntersectRay, A), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayIntersectRay, B), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayIntersectRay, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayIntersectRay, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewProp_RatioA = { "RatioA", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayIntersectRay, RatioA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RatioA_MetaData), NewProp_RatioA_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewProp_RatioB = { "RatioB", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayIntersectRay, RatioB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RatioB_MetaData), NewProp_RatioB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewProp_RatioA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewProp_RatioB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase,
	&NewStructOps,
	"RigVMFunction_MathRayIntersectRay",
	Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::PropPointers),
	sizeof(FRigVMFunction_MathRayIntersectRay),
	alignof(FRigVMFunction_MathRayIntersectRay),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectRay.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectRay.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectRay.InnerSingleton;
}
void FRigVMFunction_MathRayIntersectRay::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathRayIntersectRay::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result,
		Distance,
		RatioA,
		RatioB
	);
}
// End ScriptStruct FRigVMFunction_MathRayIntersectRay

// Begin ScriptStruct FRigVMFunction_MathRayIntersectPlane
static_assert(std::is_polymorphic<FRigVMFunction_MathRayIntersectPlane>() == std::is_polymorphic<FRigVMFunction_MathRayBase>(), "USTRUCT FRigVMFunction_MathRayIntersectPlane cannot be polymorphic unless super FRigVMFunction_MathRayBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectPlane;
class UScriptStruct* FRigVMFunction_MathRayIntersectPlane::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectPlane.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectPlane.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRayIntersectPlane"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRayIntersectPlane_Execute;
		Arguments_FRigVMFunction_MathRayIntersectPlane_Execute.Emplace(TEXT("Ray"), TEXT("FRay"));
		Arguments_FRigVMFunction_MathRayIntersectPlane_Execute.Emplace(TEXT("PlanePoint"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRayIntersectPlane_Execute.Emplace(TEXT("PlaneNormal"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRayIntersectPlane_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigVMFunction_MathRayIntersectPlane_Execute.Emplace(TEXT("Distance"), TEXT("float"));
		Arguments_FRigVMFunction_MathRayIntersectPlane_Execute.Emplace(TEXT("Ratio"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRayIntersectPlane::Execute"), &FRigVMFunction_MathRayIntersectPlane::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectPlane.OuterSingleton, Arguments_FRigVMFunction_MathRayIntersectPlane_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectPlane.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRayIntersectPlane>()
{
	return FRigVMFunction_MathRayIntersectPlane::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the closest point intersection of a ray with a plane\n */" },
		{ "DisplayName", "Intersect Plane" },
		{ "Keywords", "Closest,Ray,Cross" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "ToolTip", "Returns the closest point intersection of a ray with a plane" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ray_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanePoint_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneNormal_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanePoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRayIntersectPlane>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayIntersectPlane, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ray_MetaData), NewProp_Ray_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewProp_PlanePoint = { "PlanePoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayIntersectPlane, PlanePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanePoint_MetaData), NewProp_PlanePoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayIntersectPlane, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneNormal_MetaData), NewProp_PlaneNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayIntersectPlane, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayIntersectPlane, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayIntersectPlane, Ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ratio_MetaData), NewProp_Ratio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewProp_Ray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewProp_PlanePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewProp_PlaneNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewProp_Ratio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase,
	&NewStructOps,
	"RigVMFunction_MathRayIntersectPlane",
	Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::PropPointers),
	sizeof(FRigVMFunction_MathRayIntersectPlane),
	alignof(FRigVMFunction_MathRayIntersectPlane),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectPlane.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectPlane.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectPlane.InnerSingleton;
}
void FRigVMFunction_MathRayIntersectPlane::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathRayIntersectPlane::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Ray,
		PlanePoint,
		PlaneNormal,
		Result,
		Distance,
		Ratio
	);
}
// End ScriptStruct FRigVMFunction_MathRayIntersectPlane

// Begin ScriptStruct FRigVMFunction_MathRayGetAt
static_assert(std::is_polymorphic<FRigVMFunction_MathRayGetAt>() == std::is_polymorphic<FRigVMFunction_MathRayBase>(), "USTRUCT FRigVMFunction_MathRayGetAt cannot be polymorphic unless super FRigVMFunction_MathRayBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayGetAt;
class UScriptStruct* FRigVMFunction_MathRayGetAt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayGetAt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayGetAt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRayGetAt"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRayGetAt_Execute;
		Arguments_FRigVMFunction_MathRayGetAt_Execute.Emplace(TEXT("Ray"), TEXT("FRay"));
		Arguments_FRigVMFunction_MathRayGetAt_Execute.Emplace(TEXT("Ratio"), TEXT("float"));
		Arguments_FRigVMFunction_MathRayGetAt_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRayGetAt::Execute"), &FRigVMFunction_MathRayGetAt::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayGetAt.OuterSingleton, Arguments_FRigVMFunction_MathRayGetAt_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayGetAt.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRayGetAt>()
{
	return FRigVMFunction_MathRayGetAt::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the position on a ray\n */" },
		{ "DisplayName", "GetAt" },
		{ "Keywords", "Ratio,Percentage" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "ToolTip", "Returns the position on a ray" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ray_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRayGetAt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayGetAt, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ray_MetaData), NewProp_Ray_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayGetAt, Ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ratio_MetaData), NewProp_Ratio_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayGetAt, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::NewProp_Ray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::NewProp_Ratio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase,
	&NewStructOps,
	"RigVMFunction_MathRayGetAt",
	Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::PropPointers),
	sizeof(FRigVMFunction_MathRayGetAt),
	alignof(FRigVMFunction_MathRayGetAt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayGetAt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayGetAt.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayGetAt.InnerSingleton;
}
void FRigVMFunction_MathRayGetAt::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathRayGetAt::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Ray,
		Ratio,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathRayGetAt

// Begin ScriptStruct FRigVMFunction_MathRayTransform
static_assert(std::is_polymorphic<FRigVMFunction_MathRayTransform>() == std::is_polymorphic<FRigVMFunction_MathRayBase>(), "USTRUCT FRigVMFunction_MathRayTransform cannot be polymorphic unless super FRigVMFunction_MathRayBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayTransform;
class UScriptStruct* FRigVMFunction_MathRayTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_MathRayTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_MathRayTransform_Execute;
		Arguments_FRigVMFunction_MathRayTransform_Execute.Emplace(TEXT("Ray"), TEXT("FRay"));
		Arguments_FRigVMFunction_MathRayTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigVMFunction_MathRayTransform_Execute.Emplace(TEXT("Result"), TEXT("FRay"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_MathRayTransform::Execute"), &FRigVMFunction_MathRayTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayTransform.OuterSingleton, Arguments_FRigVMFunction_MathRayTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayTransform.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_MathRayTransform>()
{
	return FRigVMFunction_MathRayTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the division of the two values\n */" },
		{ "DisplayName", "Transform Ray" },
		{ "Keywords", "Multiply,Project" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "ToolTip", "Returns the division of the two values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ray_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMFunction_MathRay.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_MathRayTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::NewProp_Ray = { "Ray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayTransform, Ray), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ray_MetaData), NewProp_Ray_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_MathRayTransform, Result), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::NewProp_Ray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase,
	&NewStructOps,
	"RigVMFunction_MathRayTransform",
	Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::PropPointers),
	sizeof(FRigVMFunction_MathRayTransform),
	alignof(FRigVMFunction_MathRayTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayTransform.InnerSingleton;
}
void FRigVMFunction_MathRayTransform::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_MathRayTransform::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Ray,
		Transform,
		Result
	);
}
// End ScriptStruct FRigVMFunction_MathRayTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRay_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_MathRayBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase_Statics::NewStructOps, TEXT("RigVMFunction_MathRayBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRayBase), 3639873413U) },
		{ FRigVMFunction_MathRayIntersectRay::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics::NewStructOps, TEXT("RigVMFunction_MathRayIntersectRay"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectRay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRayIntersectRay), 1850441221U) },
		{ FRigVMFunction_MathRayIntersectPlane::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics::NewStructOps, TEXT("RigVMFunction_MathRayIntersectPlane"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayIntersectPlane, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRayIntersectPlane), 800086250U) },
		{ FRigVMFunction_MathRayGetAt::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics::NewStructOps, TEXT("RigVMFunction_MathRayGetAt"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayGetAt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRayGetAt), 1641241843U) },
		{ FRigVMFunction_MathRayTransform::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics::NewStructOps, TEXT("RigVMFunction_MathRayTransform"), &Z_Registration_Info_UScriptStruct_RigVMFunction_MathRayTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_MathRayTransform), 2094199944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRay_h_2095287270(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRay_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
