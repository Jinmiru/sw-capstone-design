// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/Variant.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariant() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariant();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariant_NoRegister();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantObjectBinding_NoRegister();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantSet_NoRegister();
VARIANTMANAGERCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FVariantDependency();
// End Cross Module References

// Begin ScriptStruct FVariantDependency
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VariantDependency;
class UScriptStruct* FVariantDependency::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VariantDependency.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VariantDependency.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVariantDependency, (UObject*)Z_Construct_UPackage__Script_VariantManagerContent(), TEXT("VariantDependency"));
	}
	return Z_Registration_Info_UScriptStruct_VariantDependency.OuterSingleton;
}
template<> VARIANTMANAGERCONTENT_API UScriptStruct* StaticStruct<FVariantDependency>()
{
	return FVariantDependency::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVariantDependency_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariantSet_MetaData[] = {
		{ "Category", "Dependency" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[] = {
		{ "Category", "Dependency" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Dependency" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_VariantSet;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Variant;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVariantDependency>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVariantDependency_Statics::NewProp_VariantSet = { "VariantSet", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVariantDependency, VariantSet), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariantSet_MetaData), NewProp_VariantSet_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVariantDependency_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVariantDependency, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variant_MetaData), NewProp_Variant_MetaData) };
void Z_Construct_UScriptStruct_FVariantDependency_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FVariantDependency*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVariantDependency_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVariantDependency), &Z_Construct_UScriptStruct_FVariantDependency_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVariantDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDependency_Statics::NewProp_VariantSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDependency_Statics::NewProp_Variant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariantDependency_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVariantDependency_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	nullptr,
	&NewStructOps,
	"VariantDependency",
	Z_Construct_UScriptStruct_FVariantDependency_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDependency_Statics::PropPointers),
	sizeof(FVariantDependency),
	alignof(FVariantDependency),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariantDependency_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVariantDependency_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVariantDependency()
{
	if (!Z_Registration_Info_UScriptStruct_VariantDependency.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VariantDependency.InnerSingleton, Z_Construct_UScriptStruct_FVariantDependency_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VariantDependency.InnerSingleton;
}
// End ScriptStruct FVariantDependency

// Begin Class UVariant Function AddDependency
struct Z_Construct_UFunction_UVariant_AddDependency_Statics
{
	struct Variant_eventAddDependency_Parms
	{
		FVariantDependency Dependency;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant|Dependencies" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dependency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariant_AddDependency_Statics::NewProp_Dependency = { "Dependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventAddDependency_Parms, Dependency), Z_Construct_UScriptStruct_FVariantDependency, METADATA_PARAMS(0, nullptr) }; // 933723323
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariant_AddDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventAddDependency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_AddDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_AddDependency_Statics::NewProp_Dependency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_AddDependency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_AddDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_AddDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "AddDependency", nullptr, nullptr, Z_Construct_UFunction_UVariant_AddDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_AddDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_AddDependency_Statics::Variant_eventAddDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_AddDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_AddDependency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_AddDependency_Statics::Variant_eventAddDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_AddDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_AddDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execAddDependency)
{
	P_GET_STRUCT_REF(FVariantDependency,Z_Param_Out_Dependency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddDependency(Z_Param_Out_Dependency);
	P_NATIVE_END;
}
// End Class UVariant Function AddDependency

// Begin Class UVariant Function DeleteDependency
struct Z_Construct_UFunction_UVariant_DeleteDependency_Statics
{
	struct Variant_eventDeleteDependency_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant|Dependencies" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariant_DeleteDependency_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventDeleteDependency_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_DeleteDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_DeleteDependency_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_DeleteDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_DeleteDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "DeleteDependency", nullptr, nullptr, Z_Construct_UFunction_UVariant_DeleteDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_DeleteDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_DeleteDependency_Statics::Variant_eventDeleteDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_DeleteDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_DeleteDependency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_DeleteDependency_Statics::Variant_eventDeleteDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_DeleteDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_DeleteDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execDeleteDependency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteDependency(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UVariant Function DeleteDependency

// Begin Class UVariant Function GetActor
struct Z_Construct_UFunction_UVariant_GetActor_Statics
{
	struct Variant_eventGetActor_Parms
	{
		int32 ActorIndex;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActorIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariant_GetActor_Statics::NewProp_ActorIndex = { "ActorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventGetActor_Parms, ActorIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariant_GetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventGetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetActor_Statics::NewProp_ActorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetActor", nullptr, nullptr, Z_Construct_UFunction_UVariant_GetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_GetActor_Statics::Variant_eventGetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_GetActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_GetActor_Statics::Variant_eventGetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_GetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_GetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execGetActor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ActorIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetActor(Z_Param_ActorIndex);
	P_NATIVE_END;
}
// End Class UVariant Function GetActor

// Begin Class UVariant Function GetDependency
struct Z_Construct_UFunction_UVariant_GetDependency_Statics
{
	struct Variant_eventGetDependency_Parms
	{
		int32 Index;
		FVariantDependency ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant|Dependencies" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "ToolTip", "Get the dependency at index 'Index' by value. Will crash if index is invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariant_GetDependency_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventGetDependency_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariant_GetDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventGetDependency_Parms, ReturnValue), Z_Construct_UScriptStruct_FVariantDependency, METADATA_PARAMS(0, nullptr) }; // 933723323
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetDependency_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetDependency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetDependency", nullptr, nullptr, Z_Construct_UFunction_UVariant_GetDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_GetDependency_Statics::Variant_eventGetDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_GetDependency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_GetDependency_Statics::Variant_eventGetDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_GetDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_GetDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execGetDependency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVariantDependency*)Z_Param__Result=P_THIS->GetDependency(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UVariant Function GetDependency

// Begin Class UVariant Function GetDependents
struct Z_Construct_UFunction_UVariant_GetDependents_Statics
{
	struct Variant_eventGetDependents_Parms
	{
		ULevelVariantSets* LevelVariantSets;
		bool bOnlyEnabledDependencies;
		TArray<UVariant*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant|Dependencies" },
		{ "Comment", "// Returns all the variants that have this variant as a dependency\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "ToolTip", "Returns all the variants that have this variant as a dependency" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelVariantSets;
	static void NewProp_bOnlyEnabledDependencies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyEnabledDependencies;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariant_GetDependents_Statics::NewProp_LevelVariantSets = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventGetDependents_Parms, LevelVariantSets), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVariant_GetDependents_Statics::NewProp_bOnlyEnabledDependencies_SetBit(void* Obj)
{
	((Variant_eventGetDependents_Parms*)Obj)->bOnlyEnabledDependencies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVariant_GetDependents_Statics::NewProp_bOnlyEnabledDependencies = { "bOnlyEnabledDependencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Variant_eventGetDependents_Parms), &Z_Construct_UFunction_UVariant_GetDependents_Statics::NewProp_bOnlyEnabledDependencies_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariant_GetDependents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVariant_GetDependents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventGetDependents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetDependents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetDependents_Statics::NewProp_LevelVariantSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetDependents_Statics::NewProp_bOnlyEnabledDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetDependents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetDependents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDependents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetDependents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetDependents", nullptr, nullptr, Z_Construct_UFunction_UVariant_GetDependents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDependents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_GetDependents_Statics::Variant_eventGetDependents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDependents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_GetDependents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_GetDependents_Statics::Variant_eventGetDependents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_GetDependents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_GetDependents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execGetDependents)
{
	P_GET_OBJECT(ULevelVariantSets,Z_Param_LevelVariantSets);
	P_GET_UBOOL(Z_Param_bOnlyEnabledDependencies);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UVariant*>*)Z_Param__Result=P_THIS->GetDependents(Z_Param_LevelVariantSets,Z_Param_bOnlyEnabledDependencies);
	P_NATIVE_END;
}
// End Class UVariant Function GetDependents

// Begin Class UVariant Function GetDisplayText
struct Z_Construct_UFunction_UVariant_GetDisplayText_Statics
{
	struct Variant_eventGetDisplayText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVariant_GetDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventGetDisplayText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetDisplayText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetDisplayText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDisplayText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetDisplayText", nullptr, nullptr, Z_Construct_UFunction_UVariant_GetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDisplayText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_GetDisplayText_Statics::Variant_eventGetDisplayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDisplayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_GetDisplayText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_GetDisplayText_Statics::Variant_eventGetDisplayText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_GetDisplayText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_GetDisplayText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execGetDisplayText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDisplayText();
	P_NATIVE_END;
}
// End Class UVariant Function GetDisplayText

// Begin Class UVariant Function GetNumActors
struct Z_Construct_UFunction_UVariant_GetNumActors_Statics
{
	struct Variant_eventGetNumActors_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariant_GetNumActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventGetNumActors_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetNumActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetNumActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetNumActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetNumActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetNumActors", nullptr, nullptr, Z_Construct_UFunction_UVariant_GetNumActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetNumActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_GetNumActors_Statics::Variant_eventGetNumActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetNumActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_GetNumActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_GetNumActors_Statics::Variant_eventGetNumActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_GetNumActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_GetNumActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execGetNumActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumActors();
	P_NATIVE_END;
}
// End Class UVariant Function GetNumActors

// Begin Class UVariant Function GetNumDependencies
struct Z_Construct_UFunction_UVariant_GetNumDependencies_Statics
{
	struct Variant_eventGetNumDependencies_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant|Dependencies" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventGetNumDependencies_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetNumDependencies", nullptr, nullptr, Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::Variant_eventGetNumDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::Variant_eventGetNumDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_GetNumDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execGetNumDependencies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumDependencies();
	P_NATIVE_END;
}
// End Class UVariant Function GetNumDependencies

// Begin Class UVariant Function GetParent
struct Z_Construct_UFunction_UVariant_GetParent_Statics
{
	struct Variant_eventGetParent_Parms
	{
		UVariantSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariant_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetParent", nullptr, nullptr, Z_Construct_UFunction_UVariant_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_GetParent_Statics::Variant_eventGetParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_GetParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_GetParent_Statics::Variant_eventGetParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_GetParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_GetParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execGetParent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVariantSet**)Z_Param__Result=P_THIS->GetParent();
	P_NATIVE_END;
}
// End Class UVariant Function GetParent

// Begin Class UVariant Function GetThumbnail
struct Z_Construct_UFunction_UVariant_GetThumbnail_Statics
{
	struct Variant_eventGetThumbnail_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant|Thumbnail" },
		{ "Comment", "// Gets the thumbnail currently used for this variant\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "ToolTip", "Gets the thumbnail currently used for this variant" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariant_GetThumbnail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventGetThumbnail_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetThumbnail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetThumbnail_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetThumbnail_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetThumbnail", nullptr, nullptr, Z_Construct_UFunction_UVariant_GetThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetThumbnail_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_GetThumbnail_Statics::Variant_eventGetThumbnail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetThumbnail_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_GetThumbnail_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_GetThumbnail_Statics::Variant_eventGetThumbnail_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_GetThumbnail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_GetThumbnail_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execGetThumbnail)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetThumbnail();
	P_NATIVE_END;
}
// End Class UVariant Function GetThumbnail

// Begin Class UVariant Function IsActive
struct Z_Construct_UFunction_UVariant_IsActive_Statics
{
	struct Variant_eventIsActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "Comment", "// Returns true if none of our properties are dirty\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "ToolTip", "Returns true if none of our properties are dirty" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVariant_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Variant_eventIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVariant_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Variant_eventIsActive_Parms), &Z_Construct_UFunction_UVariant_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_IsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_IsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_IsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "IsActive", nullptr, nullptr, Z_Construct_UFunction_UVariant_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_IsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_IsActive_Statics::Variant_eventIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_IsActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_IsActive_Statics::Variant_eventIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_IsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_IsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActive();
	P_NATIVE_END;
}
// End Class UVariant Function IsActive

// Begin Class UVariant Function SetDependency
struct Z_Construct_UFunction_UVariant_SetDependency_Statics
{
	struct Variant_eventSetDependency_Parms
	{
		int32 Index;
		FVariantDependency Dependency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant|Dependencies" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dependency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariant_SetDependency_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventSetDependency_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariant_SetDependency_Statics::NewProp_Dependency = { "Dependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventSetDependency_Parms, Dependency), Z_Construct_UScriptStruct_FVariantDependency, METADATA_PARAMS(0, nullptr) }; // 933723323
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_SetDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_SetDependency_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_SetDependency_Statics::NewProp_Dependency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_SetDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "SetDependency", nullptr, nullptr, Z_Construct_UFunction_UVariant_SetDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_SetDependency_Statics::Variant_eventSetDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_SetDependency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_SetDependency_Statics::Variant_eventSetDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_SetDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_SetDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execSetDependency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FVariantDependency,Z_Param_Out_Dependency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDependency(Z_Param_Index,Z_Param_Out_Dependency);
	P_NATIVE_END;
}
// End Class UVariant Function SetDependency

// Begin Class UVariant Function SetDisplayText
struct Z_Construct_UFunction_UVariant_SetDisplayText_Statics
{
	struct Variant_eventSetDisplayText_Parms
	{
		FText NewDisplayText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "Comment", "//~ End UObject Interface\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDisplayText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewDisplayText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVariant_SetDisplayText_Statics::NewProp_NewDisplayText = { "NewDisplayText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventSetDisplayText_Parms, NewDisplayText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDisplayText_MetaData), NewProp_NewDisplayText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_SetDisplayText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_SetDisplayText_Statics::NewProp_NewDisplayText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_SetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "SetDisplayText", nullptr, nullptr, Z_Construct_UFunction_UVariant_SetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::Variant_eventSetDisplayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_SetDisplayText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::Variant_eventSetDisplayText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_SetDisplayText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_SetDisplayText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execSetDisplayText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewDisplayText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisplayText(Z_Param_Out_NewDisplayText);
	P_NATIVE_END;
}
// End Class UVariant Function SetDisplayText

// Begin Class UVariant Function SetThumbnailFromCamera
struct Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics
{
	struct Variant_eventSetThumbnailFromCamera_Parms
	{
		UObject* WorldContextObject;
		FTransform CameraTransform;
		float FOVDegrees;
		float MinZ;
		float Gamma;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant|Thumbnail" },
		{ "CPP_Default_FOVDegrees", "50.000000" },
		{ "CPP_Default_Gamma", "2.200000" },
		{ "CPP_Default_MinZ", "50.000000" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gamma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventSetThumbnailFromCamera_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventSetThumbnailFromCamera_Parms, CameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTransform_MetaData), NewProp_CameraTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::NewProp_FOVDegrees = { "FOVDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventSetThumbnailFromCamera_Parms, FOVDegrees), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::NewProp_MinZ = { "MinZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventSetThumbnailFromCamera_Parms, MinZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventSetThumbnailFromCamera_Parms, Gamma), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::NewProp_CameraTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::NewProp_FOVDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::NewProp_MinZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::NewProp_Gamma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "SetThumbnailFromCamera", nullptr, nullptr, Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::Variant_eventSetThumbnailFromCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::Variant_eventSetThumbnailFromCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_SetThumbnailFromCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execSetThumbnailFromCamera)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FOVDegrees);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinZ);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Gamma);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetThumbnailFromCamera(Z_Param_WorldContextObject,Z_Param_Out_CameraTransform,Z_Param_FOVDegrees,Z_Param_MinZ,Z_Param_Gamma);
	P_NATIVE_END;
}
// End Class UVariant Function SetThumbnailFromCamera

// Begin Class UVariant Function SetThumbnailFromEditorViewport
struct Z_Construct_UFunction_UVariant_SetThumbnailFromEditorViewport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Variant|Thumbnail" },
		{ "Comment", "// Sets the thumbnail from the active editor viewport. Doesn't do anything if the Editor is not available\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "ToolTip", "Sets the thumbnail from the active editor viewport. Doesn't do anything if the Editor is not available" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_SetThumbnailFromEditorViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "SetThumbnailFromEditorViewport", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetThumbnailFromEditorViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_SetThumbnailFromEditorViewport_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVariant_SetThumbnailFromEditorViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_SetThumbnailFromEditorViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execSetThumbnailFromEditorViewport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetThumbnailFromEditorViewport();
	P_NATIVE_END;
}
// End Class UVariant Function SetThumbnailFromEditorViewport

// Begin Class UVariant Function SetThumbnailFromFile
struct Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics
{
	struct Variant_eventSetThumbnailFromFile_Parms
	{
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant|Thumbnail" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventSetThumbnailFromFile_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "SetThumbnailFromFile", nullptr, nullptr, Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::Variant_eventSetThumbnailFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::Variant_eventSetThumbnailFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_SetThumbnailFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execSetThumbnailFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetThumbnailFromFile(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UVariant Function SetThumbnailFromFile

// Begin Class UVariant Function SetThumbnailFromTexture
struct Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics
{
	struct Variant_eventSetThumbnailFromTexture_Parms
	{
		UTexture2D* NewThumbnail;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant|Thumbnail" },
		{ "Comment", "// Sets the thumbnail to use for this variant. Can receive nullptr to clear it\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "ToolTip", "Sets the thumbnail to use for this variant. Can receive nullptr to clear it" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewThumbnail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::NewProp_NewThumbnail = { "NewThumbnail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Variant_eventSetThumbnailFromTexture_Parms, NewThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::NewProp_NewThumbnail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "SetThumbnailFromTexture", nullptr, nullptr, Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::Variant_eventSetThumbnailFromTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::Variant_eventSetThumbnailFromTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVariant_SetThumbnailFromTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execSetThumbnailFromTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewThumbnail);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetThumbnailFromTexture(Z_Param_NewThumbnail);
	P_NATIVE_END;
}
// End Class UVariant Function SetThumbnailFromTexture

// Begin Class UVariant Function SwitchOn
struct Z_Construct_UFunction_UVariant_SwitchOn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_SwitchOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "SwitchOn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVariant_SwitchOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVariant_SwitchOn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVariant_SwitchOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariant_SwitchOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVariant::execSwitchOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchOn();
	P_NATIVE_END;
}
// End Class UVariant Function SwitchOn

// Begin Class UVariant
void UVariant::StaticRegisterNativesUVariant()
{
	UClass* Class = UVariant::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDependency", &UVariant::execAddDependency },
		{ "DeleteDependency", &UVariant::execDeleteDependency },
		{ "GetActor", &UVariant::execGetActor },
		{ "GetDependency", &UVariant::execGetDependency },
		{ "GetDependents", &UVariant::execGetDependents },
		{ "GetDisplayText", &UVariant::execGetDisplayText },
		{ "GetNumActors", &UVariant::execGetNumActors },
		{ "GetNumDependencies", &UVariant::execGetNumDependencies },
		{ "GetParent", &UVariant::execGetParent },
		{ "GetThumbnail", &UVariant::execGetThumbnail },
		{ "IsActive", &UVariant::execIsActive },
		{ "SetDependency", &UVariant::execSetDependency },
		{ "SetDisplayText", &UVariant::execSetDisplayText },
		{ "SetThumbnailFromCamera", &UVariant::execSetThumbnailFromCamera },
		{ "SetThumbnailFromEditorViewport", &UVariant::execSetThumbnailFromEditorViewport },
		{ "SetThumbnailFromFile", &UVariant::execSetThumbnailFromFile },
		{ "SetThumbnailFromTexture", &UVariant::execSetThumbnailFromTexture },
		{ "SwitchOn", &UVariant::execSwitchOn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVariant);
UClass* Z_Construct_UClass_UVariant_NoRegister()
{
	return UVariant::StaticClass();
}
struct Z_Construct_UClass_UVariant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Variant.h" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[] = {
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[] = {
		{ "Comment", "// The display name used to be a property. Use the non-deprecated, non-property version from now on\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "ToolTip", "The display name used to be a property. Use the non-deprecated, non-property version from now on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindings_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[] = {
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectBindings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariant_AddDependency, "AddDependency" }, // 832509458
		{ &Z_Construct_UFunction_UVariant_DeleteDependency, "DeleteDependency" }, // 1919558028
		{ &Z_Construct_UFunction_UVariant_GetActor, "GetActor" }, // 4121857531
		{ &Z_Construct_UFunction_UVariant_GetDependency, "GetDependency" }, // 691617500
		{ &Z_Construct_UFunction_UVariant_GetDependents, "GetDependents" }, // 2921046164
		{ &Z_Construct_UFunction_UVariant_GetDisplayText, "GetDisplayText" }, // 1076952144
		{ &Z_Construct_UFunction_UVariant_GetNumActors, "GetNumActors" }, // 1720319719
		{ &Z_Construct_UFunction_UVariant_GetNumDependencies, "GetNumDependencies" }, // 3120582854
		{ &Z_Construct_UFunction_UVariant_GetParent, "GetParent" }, // 1514827082
		{ &Z_Construct_UFunction_UVariant_GetThumbnail, "GetThumbnail" }, // 2845748181
		{ &Z_Construct_UFunction_UVariant_IsActive, "IsActive" }, // 3848595626
		{ &Z_Construct_UFunction_UVariant_SetDependency, "SetDependency" }, // 3913235902
		{ &Z_Construct_UFunction_UVariant_SetDisplayText, "SetDisplayText" }, // 1571211314
		{ &Z_Construct_UFunction_UVariant_SetThumbnailFromCamera, "SetThumbnailFromCamera" }, // 221785174
		{ &Z_Construct_UFunction_UVariant_SetThumbnailFromEditorViewport, "SetThumbnailFromEditorViewport" }, // 877266041
		{ &Z_Construct_UFunction_UVariant_SetThumbnailFromFile, "SetThumbnailFromFile" }, // 2904952163
		{ &Z_Construct_UFunction_UVariant_SetThumbnailFromTexture, "SetThumbnailFromTexture" }, // 1714179137
		{ &Z_Construct_UFunction_UVariant_SwitchOn, "SwitchOn" }, // 2949072602
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVariantDependency, METADATA_PARAMS(0, nullptr) }; // 933723323
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVariant, Dependencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dependencies_MetaData), NewProp_Dependencies_MetaData) }; // 933723323
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVariant, DisplayText_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayText_MetaData), NewProp_DisplayText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings_Inner = { "ObjectBindings", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVariantObjectBinding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings = { "ObjectBindings", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVariant, ObjectBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectBindings_MetaData), NewProp_ObjectBindings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVariant, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thumbnail_MetaData), NewProp_Thumbnail_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVariant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_Dependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_Dependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_DisplayText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_Thumbnail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVariant_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVariant_Statics::ClassParams = {
	&UVariant::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVariant_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::Class_MetaDataParams), Z_Construct_UClass_UVariant_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVariant()
{
	if (!Z_Registration_Info_UClass_UVariant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVariant.OuterSingleton, Z_Construct_UClass_UVariant_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVariant.OuterSingleton;
}
template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UVariant>()
{
	return UVariant::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVariant);
UVariant::~UVariant() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVariant)
// End Class UVariant

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVariantDependency::StaticStruct, Z_Construct_UScriptStruct_FVariantDependency_Statics::NewStructOps, TEXT("VariantDependency"), &Z_Registration_Info_UScriptStruct_VariantDependency, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVariantDependency), 933723323U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVariant, UVariant::StaticClass, TEXT("UVariant"), &Z_Registration_Info_UClass_UVariant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVariant), 1050004760U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_259126601(TEXT("/Script/VariantManagerContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
