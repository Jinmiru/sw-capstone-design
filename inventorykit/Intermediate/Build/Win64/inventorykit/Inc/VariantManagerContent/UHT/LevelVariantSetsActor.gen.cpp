// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/LevelVariantSetsActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelVariantSetsActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ALevelVariantSetsActor();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ALevelVariantSetsActor_NoRegister();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSetsFunctionDirector_NoRegister();
// End Cross Module References

// Begin Class ALevelVariantSetsActor Function GetLevelVariantSets
struct Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics
{
	struct LevelVariantSetsActor_eventGetLevelVariantSets_Parms
	{
		bool bLoad;
		ULevelVariantSets* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "CPP_Default_bLoad", "false" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
		{ "ToolTip", "Returns the LevelVariantSets asset, optionally loading it if necessary" },
	};
#endif // WITH_METADATA
	static void NewProp_bLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad_SetBit(void* Obj)
{
	((LevelVariantSetsActor_eventGetLevelVariantSets_Parms*)Obj)->bLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad = { "bLoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelVariantSetsActor_eventGetLevelVariantSets_Parms), &Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelVariantSetsActor_eventGetLevelVariantSets_Parms, ReturnValue), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelVariantSetsActor, nullptr, "GetLevelVariantSets", nullptr, nullptr, Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::LevelVariantSetsActor_eventGetLevelVariantSets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::LevelVariantSetsActor_eventGetLevelVariantSets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelVariantSetsActor::execGetLevelVariantSets)
{
	P_GET_UBOOL(Z_Param_bLoad);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevelVariantSets**)Z_Param__Result=P_THIS->GetLevelVariantSets(Z_Param_bLoad);
	P_NATIVE_END;
}
// End Class ALevelVariantSetsActor Function GetLevelVariantSets

// Begin Class ALevelVariantSetsActor Function SetLevelVariantSets
struct Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics
{
	struct LevelVariantSetsActor_eventSetLevelVariantSets_Parms
	{
		ULevelVariantSets* InVariantSets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InVariantSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::NewProp_InVariantSets = { "InVariantSets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelVariantSetsActor_eventSetLevelVariantSets_Parms, InVariantSets), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::NewProp_InVariantSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelVariantSetsActor, nullptr, "SetLevelVariantSets", nullptr, nullptr, Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::LevelVariantSetsActor_eventSetLevelVariantSets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::LevelVariantSetsActor_eventSetLevelVariantSets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelVariantSetsActor::execSetLevelVariantSets)
{
	P_GET_OBJECT(ULevelVariantSets,Z_Param_InVariantSets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLevelVariantSets(Z_Param_InVariantSets);
	P_NATIVE_END;
}
// End Class ALevelVariantSetsActor Function SetLevelVariantSets

// Begin Class ALevelVariantSetsActor Function SwitchOnVariantByIndex
struct Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics
{
	struct LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms
	{
		int32 VariantSetIndex;
		int32 VariantIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VariantSetIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VariantIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_VariantSetIndex = { "VariantSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms, VariantSetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_VariantIndex = { "VariantIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms, VariantIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms), &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_VariantSetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_VariantIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelVariantSetsActor, nullptr, "SwitchOnVariantByIndex", nullptr, nullptr, Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::LevelVariantSetsActor_eventSwitchOnVariantByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelVariantSetsActor::execSwitchOnVariantByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_VariantSetIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_VariantIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SwitchOnVariantByIndex(Z_Param_VariantSetIndex,Z_Param_VariantIndex);
	P_NATIVE_END;
}
// End Class ALevelVariantSetsActor Function SwitchOnVariantByIndex

// Begin Class ALevelVariantSetsActor Function SwitchOnVariantByName
struct Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics
{
	struct LevelVariantSetsActor_eventSwitchOnVariantByName_Parms
	{
		FString VariantSetName;
		FString VariantName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariantSetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariantName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_VariantSetName = { "VariantSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelVariantSetsActor_eventSwitchOnVariantByName_Parms, VariantSetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_VariantName = { "VariantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelVariantSetsActor_eventSwitchOnVariantByName_Parms, VariantName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LevelVariantSetsActor_eventSwitchOnVariantByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelVariantSetsActor_eventSwitchOnVariantByName_Parms), &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_VariantSetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_VariantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelVariantSetsActor, nullptr, "SwitchOnVariantByName", nullptr, nullptr, Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::LevelVariantSetsActor_eventSwitchOnVariantByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::LevelVariantSetsActor_eventSwitchOnVariantByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelVariantSetsActor::execSwitchOnVariantByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_VariantSetName);
	P_GET_PROPERTY(FStrProperty,Z_Param_VariantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SwitchOnVariantByName(Z_Param_VariantSetName,Z_Param_VariantName);
	P_NATIVE_END;
}
// End Class ALevelVariantSetsActor Function SwitchOnVariantByName

// Begin Class ALevelVariantSetsActor
void ALevelVariantSetsActor::StaticRegisterNativesALevelVariantSetsActor()
{
	UClass* Class = ALevelVariantSetsActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLevelVariantSets", &ALevelVariantSetsActor::execGetLevelVariantSets },
		{ "SetLevelVariantSets", &ALevelVariantSetsActor::execSetLevelVariantSets },
		{ "SwitchOnVariantByIndex", &ALevelVariantSetsActor::execSwitchOnVariantByIndex },
		{ "SwitchOnVariantByName", &ALevelVariantSetsActor::execSwitchOnVariantByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelVariantSetsActor);
UClass* Z_Construct_UClass_ALevelVariantSetsActor_NoRegister()
{
	return ALevelVariantSetsActor::StaticClass();
}
struct Z_Construct_UClass_ALevelVariantSetsActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Physics HLOD Activation Input Actor Cooking" },
		{ "IncludePath", "LevelVariantSetsActor.h" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelVariantSets_MetaData[] = {
		{ "AllowedClasses", "/Script/VariantManagerContent.LevelVariantSets" },
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelVariantSetsActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelVariantSets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectorInstances_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DirectorInstances_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DirectorInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets, "GetLevelVariantSets" }, // 2227604565
		{ &Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets, "SetLevelVariantSets" }, // 737154610
		{ &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex, "SwitchOnVariantByIndex" }, // 3346834586
		{ &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName, "SwitchOnVariantByName" }, // 164308183
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelVariantSetsActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_LevelVariantSets = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelVariantSetsActor, LevelVariantSets), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelVariantSets_MetaData), NewProp_LevelVariantSets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances_ValueProp = { "DirectorInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ULevelVariantSetsFunctionDirector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances_Key_KeyProp = { "DirectorInstances_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances = { "DirectorInstances", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelVariantSetsActor, DirectorInstances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorInstances_MetaData), NewProp_DirectorInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelVariantSetsActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_LevelVariantSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelVariantSetsActor_Statics::NewProp_DirectorInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelVariantSetsActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALevelVariantSetsActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelVariantSetsActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelVariantSetsActor_Statics::ClassParams = {
	&ALevelVariantSetsActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALevelVariantSetsActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALevelVariantSetsActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelVariantSetsActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelVariantSetsActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelVariantSetsActor()
{
	if (!Z_Registration_Info_UClass_ALevelVariantSetsActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelVariantSetsActor.OuterSingleton, Z_Construct_UClass_ALevelVariantSetsActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelVariantSetsActor.OuterSingleton;
}
template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<ALevelVariantSetsActor>()
{
	return ALevelVariantSetsActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelVariantSetsActor);
ALevelVariantSetsActor::~ALevelVariantSetsActor() {}
// End Class ALevelVariantSetsActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelVariantSetsActor, ALevelVariantSetsActor::StaticClass, TEXT("ALevelVariantSetsActor"), &Z_Registration_Info_UClass_ALevelVariantSetsActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelVariantSetsActor), 1270574822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_3295096457(TEXT("/Script/VariantManagerContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
