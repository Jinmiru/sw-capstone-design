// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/Properties/RemeshProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemeshProperties() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshConstraintProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshConstraintProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Enum EMeshBoundaryConstraint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshBoundaryConstraint;
static UEnum* EMeshBoundaryConstraint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshBoundaryConstraint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshBoundaryConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshBoundaryConstraint"));
	}
	return Z_Registration_Info_UEnum_EMeshBoundaryConstraint.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshBoundaryConstraint>()
{
	return EMeshBoundaryConstraint_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Mesh Boundary Constraint Types */" },
		{ "Fixed.DisplayName", "Fixed" },
		{ "Fixed.Name", "EMeshBoundaryConstraint::Fixed" },
		{ "Free.DisplayName", "Free" },
		{ "Free.Name", "EMeshBoundaryConstraint::Free" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "Refine.DisplayName", "Refine" },
		{ "Refine.Name", "EMeshBoundaryConstraint::Refine" },
		{ "ToolTip", "Mesh Boundary Constraint Types" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshBoundaryConstraint::Fixed", (int64)EMeshBoundaryConstraint::Fixed },
		{ "EMeshBoundaryConstraint::Refine", (int64)EMeshBoundaryConstraint::Refine },
		{ "EMeshBoundaryConstraint::Free", (int64)EMeshBoundaryConstraint::Free },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshBoundaryConstraint",
	"EMeshBoundaryConstraint",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint()
{
	if (!Z_Registration_Info_UEnum_EMeshBoundaryConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshBoundaryConstraint.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshBoundaryConstraint.InnerSingleton;
}
// End Enum EMeshBoundaryConstraint

// Begin Enum EGroupBoundaryConstraint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroupBoundaryConstraint;
static UEnum* EGroupBoundaryConstraint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroupBoundaryConstraint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroupBoundaryConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EGroupBoundaryConstraint"));
	}
	return Z_Registration_Info_UEnum_EGroupBoundaryConstraint.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EGroupBoundaryConstraint>()
{
	return EGroupBoundaryConstraint_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Group Boundary Constraint Types */" },
		{ "Fixed.DisplayName", "Fixed" },
		{ "Fixed.Name", "EGroupBoundaryConstraint::Fixed" },
		{ "Free.DisplayName", "Free" },
		{ "Free.Name", "EGroupBoundaryConstraint::Free" },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "EGroupBoundaryConstraint::Ignore" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "Refine.DisplayName", "Refine" },
		{ "Refine.Name", "EGroupBoundaryConstraint::Refine" },
		{ "ToolTip", "Group Boundary Constraint Types" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroupBoundaryConstraint::Fixed", (int64)EGroupBoundaryConstraint::Fixed },
		{ "EGroupBoundaryConstraint::Refine", (int64)EGroupBoundaryConstraint::Refine },
		{ "EGroupBoundaryConstraint::Free", (int64)EGroupBoundaryConstraint::Free },
		{ "EGroupBoundaryConstraint::Ignore", (int64)EGroupBoundaryConstraint::Ignore },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EGroupBoundaryConstraint",
	"EGroupBoundaryConstraint",
	Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint()
{
	if (!Z_Registration_Info_UEnum_EGroupBoundaryConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroupBoundaryConstraint.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroupBoundaryConstraint.InnerSingleton;
}
// End Enum EGroupBoundaryConstraint

// Begin Enum EMaterialBoundaryConstraint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialBoundaryConstraint;
static UEnum* EMaterialBoundaryConstraint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMaterialBoundaryConstraint"));
	}
	return Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMaterialBoundaryConstraint>()
{
	return EMaterialBoundaryConstraint_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Material Boundary Constraint Types */" },
		{ "Fixed.DisplayName", "Fixed" },
		{ "Fixed.Name", "EMaterialBoundaryConstraint::Fixed" },
		{ "Free.DisplayName", "Free" },
		{ "Free.Name", "EMaterialBoundaryConstraint::Free" },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "EMaterialBoundaryConstraint::Ignore" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "Refine.DisplayName", "Refine" },
		{ "Refine.Name", "EMaterialBoundaryConstraint::Refine" },
		{ "ToolTip", "Material Boundary Constraint Types" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMaterialBoundaryConstraint::Fixed", (int64)EMaterialBoundaryConstraint::Fixed },
		{ "EMaterialBoundaryConstraint::Refine", (int64)EMaterialBoundaryConstraint::Refine },
		{ "EMaterialBoundaryConstraint::Free", (int64)EMaterialBoundaryConstraint::Free },
		{ "EMaterialBoundaryConstraint::Ignore", (int64)EMaterialBoundaryConstraint::Ignore },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMaterialBoundaryConstraint",
	"EMaterialBoundaryConstraint",
	Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint()
{
	if (!Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.InnerSingleton;
}
// End Enum EMaterialBoundaryConstraint

// Begin Class UMeshConstraintProperties Function IsPreventNormalFlipsEnabled
struct Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics
{
	struct MeshConstraintProperties_eventIsPreventNormalFlipsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshConstraintProperties_eventIsPreventNormalFlipsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshConstraintProperties_eventIsPreventNormalFlipsEnabled_Parms), &Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshConstraintProperties, nullptr, "IsPreventNormalFlipsEnabled", nullptr, nullptr, Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::MeshConstraintProperties_eventIsPreventNormalFlipsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::MeshConstraintProperties_eventIsPreventNormalFlipsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshConstraintProperties::execIsPreventNormalFlipsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPreventNormalFlipsEnabled();
	P_NATIVE_END;
}
// End Class UMeshConstraintProperties Function IsPreventNormalFlipsEnabled

// Begin Class UMeshConstraintProperties Function IsPreventTinyTrianglesEnabled
struct Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics
{
	struct MeshConstraintProperties_eventIsPreventTinyTrianglesEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshConstraintProperties_eventIsPreventTinyTrianglesEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshConstraintProperties_eventIsPreventTinyTrianglesEnabled_Parms), &Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshConstraintProperties, nullptr, "IsPreventTinyTrianglesEnabled", nullptr, nullptr, Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::MeshConstraintProperties_eventIsPreventTinyTrianglesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::MeshConstraintProperties_eventIsPreventTinyTrianglesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshConstraintProperties::execIsPreventTinyTrianglesEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPreventTinyTrianglesEnabled();
	P_NATIVE_END;
}
// End Class UMeshConstraintProperties Function IsPreventTinyTrianglesEnabled

// Begin Class UMeshConstraintProperties
void UMeshConstraintProperties::StaticRegisterNativesUMeshConstraintProperties()
{
	UClass* Class = UMeshConstraintProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsPreventNormalFlipsEnabled", &UMeshConstraintProperties::execIsPreventNormalFlipsEnabled },
		{ "IsPreventTinyTrianglesEnabled", &UMeshConstraintProperties::execIsPreventTinyTrianglesEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshConstraintProperties);
UClass* Z_Construct_UClass_UMeshConstraintProperties_NoRegister()
{
	return UMeshConstraintProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshConstraintProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/RemeshProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveSharpEdges_MetaData[] = {
		{ "Category", "Remeshing|Edge Constraints" },
		{ "Comment", "/** If true, sharp edges are preserved  */" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "If true, sharp edges are preserved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshBoundaryConstraint_MetaData[] = {
		{ "Category", "Remeshing|Boundary Constraints" },
		{ "Comment", "/** Mesh Boundary Constraint Type */" },
		{ "DisplayName", "Mesh Boundary" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Mesh Boundary Constraint Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupBoundaryConstraint_MetaData[] = {
		{ "Category", "Remeshing|Boundary Constraints" },
		{ "Comment", "/** Group Boundary Constraint Type */" },
		{ "DisplayName", "Group Boundary" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Group Boundary Constraint Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBoundaryConstraint_MetaData[] = {
		{ "Category", "Remeshing|Boundary Constraints" },
		{ "Comment", "/** Material Boundary Constraint Type */" },
		{ "DisplayName", "Material Boundary" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Material Boundary Constraint Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventNormalFlips_MetaData[] = {
		{ "Category", "Remeshing|Edge Constraints" },
		{ "Comment", "/** Prevent normal flips */" },
		{ "EditCondition", "IsPreventNormalFlipsEnabled" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Prevent normal flips" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventTinyTriangles_MetaData[] = {
		{ "Category", "Remeshing|Edge Constraints" },
		{ "Comment", "/** Prevent introduction of tiny triangles or slivers */" },
		{ "EditCondition", "IsPreventTinyTrianglesEnabled" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Prevent introduction of tiny triangles or slivers" },
	};
#endif // WITH_METADATA
	static void NewProp_bPreserveSharpEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveSharpEdges;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshBoundaryConstraint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshBoundaryConstraint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupBoundaryConstraint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupBoundaryConstraint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialBoundaryConstraint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialBoundaryConstraint;
	static void NewProp_bPreventNormalFlips_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventNormalFlips;
	static void NewProp_bPreventTinyTriangles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventTinyTriangles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshConstraintProperties_IsPreventNormalFlipsEnabled, "IsPreventNormalFlipsEnabled" }, // 2057125270
		{ &Z_Construct_UFunction_UMeshConstraintProperties_IsPreventTinyTrianglesEnabled, "IsPreventTinyTrianglesEnabled" }, // 268817615
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshConstraintProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreserveSharpEdges_SetBit(void* Obj)
{
	((UMeshConstraintProperties*)Obj)->bPreserveSharpEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreserveSharpEdges = { "bPreserveSharpEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshConstraintProperties), &Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreserveSharpEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveSharpEdges_MetaData), NewProp_bPreserveSharpEdges_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MeshBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MeshBoundaryConstraint = { "MeshBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshConstraintProperties, MeshBoundaryConstraint), Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshBoundaryConstraint_MetaData), NewProp_MeshBoundaryConstraint_MetaData) }; // 678755162
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_GroupBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_GroupBoundaryConstraint = { "GroupBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshConstraintProperties, GroupBoundaryConstraint), Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupBoundaryConstraint_MetaData), NewProp_GroupBoundaryConstraint_MetaData) }; // 2549682029
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MaterialBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MaterialBoundaryConstraint = { "MaterialBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshConstraintProperties, MaterialBoundaryConstraint), Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialBoundaryConstraint_MetaData), NewProp_MaterialBoundaryConstraint_MetaData) }; // 2845785589
void Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventNormalFlips_SetBit(void* Obj)
{
	((UMeshConstraintProperties*)Obj)->bPreventNormalFlips = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventNormalFlips = { "bPreventNormalFlips", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshConstraintProperties), &Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventNormalFlips_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventNormalFlips_MetaData), NewProp_bPreventNormalFlips_MetaData) };
void Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventTinyTriangles_SetBit(void* Obj)
{
	((UMeshConstraintProperties*)Obj)->bPreventTinyTriangles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventTinyTriangles = { "bPreventTinyTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshConstraintProperties), &Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventTinyTriangles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventTinyTriangles_MetaData), NewProp_bPreventTinyTriangles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshConstraintProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreserveSharpEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MeshBoundaryConstraint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MeshBoundaryConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_GroupBoundaryConstraint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_GroupBoundaryConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MaterialBoundaryConstraint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MaterialBoundaryConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventNormalFlips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventTinyTriangles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshConstraintProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshConstraintProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshConstraintProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshConstraintProperties_Statics::ClassParams = {
	&UMeshConstraintProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeshConstraintProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshConstraintProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshConstraintProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshConstraintProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshConstraintProperties()
{
	if (!Z_Registration_Info_UClass_UMeshConstraintProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshConstraintProperties.OuterSingleton, Z_Construct_UClass_UMeshConstraintProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshConstraintProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshConstraintProperties>()
{
	return UMeshConstraintProperties::StaticClass();
}
UMeshConstraintProperties::UMeshConstraintProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshConstraintProperties);
UMeshConstraintProperties::~UMeshConstraintProperties() {}
// End Class UMeshConstraintProperties

// Begin Class URemeshProperties
void URemeshProperties::StaticRegisterNativesURemeshProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemeshProperties);
UClass* Z_Construct_UClass_URemeshProperties_NoRegister()
{
	return URemeshProperties::StaticClass();
}
struct Z_Construct_UClass_URemeshProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/RemeshProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingStrength_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of Vertex Smoothing applied within Remeshing */" },
		{ "DisplayName", "Smoothing Rate" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Amount of Vertex Smoothing applied within Remeshing" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlips_MetaData[] = {
		{ "Category", "Remeshing|Edge Constraints" },
		{ "Comment", "/** Enable edge flips in Remeshing (tends to lose edges/detail) */" },
		{ "DisplayName", "Allow Flips" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Enable edge flips in Remeshing (tends to lose edges/detail)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplits_MetaData[] = {
		{ "Category", "Remeshing|Edge Constraints" },
		{ "Comment", "/** Enable edge splits in Remeshing */" },
		{ "DisplayName", "Allow Splits" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Enable edge splits in Remeshing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollapses_MetaData[] = {
		{ "Category", "Remeshing|Edge Constraints" },
		{ "Comment", "/** Enable edge collapses in Remeshing */" },
		{ "DisplayName", "Allow Collapses" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Enable edge collapses in Remeshing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingStrength;
	static void NewProp_bFlips_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlips;
	static void NewProp_bSplits_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplits;
	static void NewProp_bCollapses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemeshProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemeshProperties_Statics::NewProp_SmoothingStrength = { "SmoothingStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshProperties, SmoothingStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingStrength_MetaData), NewProp_SmoothingStrength_MetaData) };
void Z_Construct_UClass_URemeshProperties_Statics::NewProp_bFlips_SetBit(void* Obj)
{
	((URemeshProperties*)Obj)->bFlips = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshProperties_Statics::NewProp_bFlips = { "bFlips", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URemeshProperties), &Z_Construct_UClass_URemeshProperties_Statics::NewProp_bFlips_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlips_MetaData), NewProp_bFlips_MetaData) };
void Z_Construct_UClass_URemeshProperties_Statics::NewProp_bSplits_SetBit(void* Obj)
{
	((URemeshProperties*)Obj)->bSplits = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshProperties_Statics::NewProp_bSplits = { "bSplits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URemeshProperties), &Z_Construct_UClass_URemeshProperties_Statics::NewProp_bSplits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplits_MetaData), NewProp_bSplits_MetaData) };
void Z_Construct_UClass_URemeshProperties_Statics::NewProp_bCollapses_SetBit(void* Obj)
{
	((URemeshProperties*)Obj)->bCollapses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshProperties_Statics::NewProp_bCollapses = { "bCollapses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URemeshProperties), &Z_Construct_UClass_URemeshProperties_Statics::NewProp_bCollapses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollapses_MetaData), NewProp_bCollapses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemeshProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshProperties_Statics::NewProp_SmoothingStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshProperties_Statics::NewProp_bFlips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshProperties_Statics::NewProp_bSplits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshProperties_Statics::NewProp_bCollapses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemeshProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URemeshProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshConstraintProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemeshProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URemeshProperties_Statics::ClassParams = {
	&URemeshProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URemeshProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URemeshProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemeshProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_URemeshProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URemeshProperties()
{
	if (!Z_Registration_Info_UClass_URemeshProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemeshProperties.OuterSingleton, Z_Construct_UClass_URemeshProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URemeshProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemeshProperties>()
{
	return URemeshProperties::StaticClass();
}
URemeshProperties::URemeshProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URemeshProperties);
URemeshProperties::~URemeshProperties() {}
// End Class URemeshProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMeshBoundaryConstraint_StaticEnum, TEXT("EMeshBoundaryConstraint"), &Z_Registration_Info_UEnum_EMeshBoundaryConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 678755162U) },
		{ EGroupBoundaryConstraint_StaticEnum, TEXT("EGroupBoundaryConstraint"), &Z_Registration_Info_UEnum_EGroupBoundaryConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2549682029U) },
		{ EMaterialBoundaryConstraint_StaticEnum, TEXT("EMaterialBoundaryConstraint"), &Z_Registration_Info_UEnum_EMaterialBoundaryConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2845785589U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshConstraintProperties, UMeshConstraintProperties::StaticClass, TEXT("UMeshConstraintProperties"), &Z_Registration_Info_UClass_UMeshConstraintProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshConstraintProperties), 2360948816U) },
		{ Z_Construct_UClass_URemeshProperties, URemeshProperties::StaticClass, TEXT("URemeshProperties"), &Z_Registration_Info_UClass_URemeshProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemeshProperties), 2719954463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_3513107235(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
