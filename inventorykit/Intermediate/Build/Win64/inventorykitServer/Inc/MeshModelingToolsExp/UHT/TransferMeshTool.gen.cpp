// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/TransferMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransferMeshTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransferMeshTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransferMeshTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransferMeshToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransferMeshToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransferMeshToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTransferMeshToolProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UTransferMeshToolBuilder
void UTransferMeshToolBuilder::StaticRegisterNativesUTransferMeshToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransferMeshToolBuilder);
UClass* Z_Construct_UClass_UTransferMeshToolBuilder_NoRegister()
{
	return UTransferMeshToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UTransferMeshToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "TransferMeshTool.h" },
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransferMeshToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTransferMeshToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransferMeshToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransferMeshToolBuilder_Statics::ClassParams = {
	&UTransferMeshToolBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransferMeshToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransferMeshToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransferMeshToolBuilder()
{
	if (!Z_Registration_Info_UClass_UTransferMeshToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransferMeshToolBuilder.OuterSingleton, Z_Construct_UClass_UTransferMeshToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransferMeshToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UTransferMeshToolBuilder>()
{
	return UTransferMeshToolBuilder::StaticClass();
}
UTransferMeshToolBuilder::UTransferMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransferMeshToolBuilder);
UTransferMeshToolBuilder::~UTransferMeshToolBuilder() {}
// End Class UTransferMeshToolBuilder

// Begin Class UTransferMeshToolProperties Function GetSourceLODNamesFunc
struct Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics
{
	struct TransferMeshToolProperties_eventGetSourceLODNamesFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransferMeshToolProperties_eventGetSourceLODNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTransferMeshToolProperties, nullptr, "GetSourceLODNamesFunc", nullptr, nullptr, Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::TransferMeshToolProperties_eventGetSourceLODNamesFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::TransferMeshToolProperties_eventGetSourceLODNamesFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransferMeshToolProperties::execGetSourceLODNamesFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetSourceLODNamesFunc();
	P_NATIVE_END;
}
// End Class UTransferMeshToolProperties Function GetSourceLODNamesFunc

// Begin Class UTransferMeshToolProperties Function GetTargetLODNamesFunc
struct Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics
{
	struct TransferMeshToolProperties_eventGetTargetLODNamesFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransferMeshToolProperties_eventGetTargetLODNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTransferMeshToolProperties, nullptr, "GetTargetLODNamesFunc", nullptr, nullptr, Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::TransferMeshToolProperties_eventGetTargetLODNamesFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::TransferMeshToolProperties_eventGetTargetLODNamesFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransferMeshToolProperties::execGetTargetLODNamesFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetTargetLODNamesFunc();
	P_NATIVE_END;
}
// End Class UTransferMeshToolProperties Function GetTargetLODNamesFunc

// Begin Class UTransferMeshToolProperties
void UTransferMeshToolProperties::StaticRegisterNativesUTransferMeshToolProperties()
{
	UClass* Class = UTransferMeshToolProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSourceLODNamesFunc", &UTransferMeshToolProperties::execGetSourceLODNamesFunc },
		{ "GetTargetLODNamesFunc", &UTransferMeshToolProperties::execGetTargetLODNamesFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransferMeshToolProperties);
UClass* Z_Construct_UClass_UTransferMeshToolProperties_NoRegister()
{
	return UTransferMeshToolProperties::StaticClass();
}
struct Z_Construct_UClass_UTransferMeshToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Transfer operation\n */" },
		{ "IncludePath", "TransferMeshTool.h" },
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
		{ "ToolTip", "Standard properties of the Transfer operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransferMaterials_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransferCollision_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLOD_MetaData[] = {
		{ "Category", "SourceMesh" },
		{ "Comment", "/** Specify which LOD from the Source (First) mesh to copy from */" },
		{ "DisplayName", "Source LOD" },
		{ "EditCondition", "bIsStaticMeshSource" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetSourceLODNamesFunc" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Specify which LOD from the Source (First) mesh to copy from" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLOD_MetaData[] = {
		{ "Category", "TargetMesh" },
		{ "Comment", "/** Specify which LOD on the Target (Second) mesh to copy to */" },
		{ "DisplayName", "Target LOD" },
		{ "EditCondition", "bIsStaticMeshTarget" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetTargetLODNamesFunc" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Specify which LOD on the Target (Second) mesh to copy to" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStaticMeshSource_MetaData[] = {
		{ "Comment", "//\n// non-exposed properties used to provide custom lists to SourceLOD/TargetLOD\n//\n" },
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
		{ "ToolTip", "non-exposed properties used to provide custom lists to SourceLOD/TargetLOD" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLODNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLODNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStaticMeshTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bTransferMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransferMaterials;
	static void NewProp_bTransferCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransferCollision;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceLOD;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetLOD;
	static void NewProp_bIsStaticMeshSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaticMeshSource;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceLODNamesList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceLODNamesList;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetLODNamesList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetLODNamesList;
	static void NewProp_bIsStaticMeshTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaticMeshTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTransferMeshToolProperties_GetSourceLODNamesFunc, "GetSourceLODNamesFunc" }, // 3313840438
		{ &Z_Construct_UFunction_UTransferMeshToolProperties_GetTargetLODNamesFunc, "GetTargetLODNamesFunc" }, // 2954708593
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransferMeshToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bTransferMaterials_SetBit(void* Obj)
{
	((UTransferMeshToolProperties*)Obj)->bTransferMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bTransferMaterials = { "bTransferMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransferMeshToolProperties), &Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bTransferMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransferMaterials_MetaData), NewProp_bTransferMaterials_MetaData) };
void Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bTransferCollision_SetBit(void* Obj)
{
	((UTransferMeshToolProperties*)Obj)->bTransferCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bTransferCollision = { "bTransferCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransferMeshToolProperties), &Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bTransferCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransferCollision_MetaData), NewProp_bTransferCollision_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_SourceLOD = { "SourceLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransferMeshToolProperties, SourceLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLOD_MetaData), NewProp_SourceLOD_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_TargetLOD = { "TargetLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransferMeshToolProperties, TargetLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLOD_MetaData), NewProp_TargetLOD_MetaData) };
void Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bIsStaticMeshSource_SetBit(void* Obj)
{
	((UTransferMeshToolProperties*)Obj)->bIsStaticMeshSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bIsStaticMeshSource = { "bIsStaticMeshSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransferMeshToolProperties), &Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bIsStaticMeshSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStaticMeshSource_MetaData), NewProp_bIsStaticMeshSource_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_SourceLODNamesList_Inner = { "SourceLODNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_SourceLODNamesList = { "SourceLODNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransferMeshToolProperties, SourceLODNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLODNamesList_MetaData), NewProp_SourceLODNamesList_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_TargetLODNamesList_Inner = { "TargetLODNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_TargetLODNamesList = { "TargetLODNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransferMeshToolProperties, TargetLODNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLODNamesList_MetaData), NewProp_TargetLODNamesList_MetaData) };
void Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bIsStaticMeshTarget_SetBit(void* Obj)
{
	((UTransferMeshToolProperties*)Obj)->bIsStaticMeshTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bIsStaticMeshTarget = { "bIsStaticMeshTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransferMeshToolProperties), &Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bIsStaticMeshTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStaticMeshTarget_MetaData), NewProp_bIsStaticMeshTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransferMeshToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bTransferMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bTransferCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_SourceLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_TargetLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bIsStaticMeshSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_SourceLODNamesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_SourceLODNamesList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_TargetLODNamesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_TargetLODNamesList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransferMeshToolProperties_Statics::NewProp_bIsStaticMeshTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransferMeshToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransferMeshToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransferMeshToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransferMeshToolProperties_Statics::ClassParams = {
	&UTransferMeshToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTransferMeshToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransferMeshToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransferMeshToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransferMeshToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransferMeshToolProperties()
{
	if (!Z_Registration_Info_UClass_UTransferMeshToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransferMeshToolProperties.OuterSingleton, Z_Construct_UClass_UTransferMeshToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransferMeshToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UTransferMeshToolProperties>()
{
	return UTransferMeshToolProperties::StaticClass();
}
UTransferMeshToolProperties::UTransferMeshToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransferMeshToolProperties);
UTransferMeshToolProperties::~UTransferMeshToolProperties() {}
// End Class UTransferMeshToolProperties

// Begin Class UTransferMeshTool
void UTransferMeshTool::StaticRegisterNativesUTransferMeshTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransferMeshTool);
UClass* Z_Construct_UClass_UTransferMeshTool_NoRegister()
{
	return UTransferMeshTool::StaticClass();
}
struct Z_Construct_UClass_UTransferMeshTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TransferMeshTool.h" },
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/TransferMeshTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransferMeshTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransferMeshTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransferMeshTool, BasicProperties), Z_Construct_UClass_UTransferMeshToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicProperties_MetaData), NewProp_BasicProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransferMeshTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransferMeshTool_Statics::NewProp_BasicProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransferMeshTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransferMeshTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransferMeshTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTransferMeshTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister, (int32)VTABLE_OFFSET(UTransferMeshTool, IInteractiveToolExclusiveToolAPI), false },  // 3683580694
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransferMeshTool_Statics::ClassParams = {
	&UTransferMeshTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransferMeshTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransferMeshTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransferMeshTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransferMeshTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransferMeshTool()
{
	if (!Z_Registration_Info_UClass_UTransferMeshTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransferMeshTool.OuterSingleton, Z_Construct_UClass_UTransferMeshTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransferMeshTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UTransferMeshTool>()
{
	return UTransferMeshTool::StaticClass();
}
UTransferMeshTool::UTransferMeshTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransferMeshTool);
UTransferMeshTool::~UTransferMeshTool() {}
// End Class UTransferMeshTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransferMeshToolBuilder, UTransferMeshToolBuilder::StaticClass, TEXT("UTransferMeshToolBuilder"), &Z_Registration_Info_UClass_UTransferMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransferMeshToolBuilder), 2103330279U) },
		{ Z_Construct_UClass_UTransferMeshToolProperties, UTransferMeshToolProperties::StaticClass, TEXT("UTransferMeshToolProperties"), &Z_Registration_Info_UClass_UTransferMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransferMeshToolProperties), 2936036396U) },
		{ Z_Construct_UClass_UTransferMeshTool, UTransferMeshTool::StaticClass, TEXT("UTransferMeshTool"), &Z_Registration_Info_UClass_UTransferMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransferMeshTool), 2070723909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_3123035807(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TransferMeshTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
