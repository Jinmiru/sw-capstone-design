// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Engine/Public/InterchangeManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceData_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeWriterBase_NoRegister();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_NoRegister();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeBlueprintPipelineBase_NoRegister();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeManager();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeManager_NoRegister();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePipelineStackOverride();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePipelineStackOverride_NoRegister();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister();
INTERCHANGEENGINE_API UFunction* Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature();
INTERCHANGEENGINE_API UFunction* Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature();
INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FImportAssetParameters();
UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References

// Begin Delegate FOnObjectImportDoneDynamic
struct Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics
{
	struct _Script_InterchangeEngine_eventOnObjectImportDoneDynamic_Parms
	{
		UObject* Object;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Some utility delegates for automating Interchange. */" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Some utility delegates for automating Interchange." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InterchangeEngine_eventOnObjectImportDoneDynamic_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InterchangeEngine, nullptr, "OnObjectImportDoneDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::_Script_InterchangeEngine_eventOnObjectImportDoneDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::_Script_InterchangeEngine_eventOnObjectImportDoneDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnObjectImportDoneDynamic_DelegateWrapper(const FScriptDelegate& OnObjectImportDoneDynamic, UObject* Object)
{
	struct _Script_InterchangeEngine_eventOnObjectImportDoneDynamic_Parms
	{
		UObject* Object;
	};
	_Script_InterchangeEngine_eventOnObjectImportDoneDynamic_Parms Parms;
	Parms.Object=Object;
	OnObjectImportDoneDynamic.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnObjectImportDoneDynamic

// Begin Delegate FOnImportDoneDynamic
struct Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics
{
	struct _Script_InterchangeEngine_eventOnImportDoneDynamic_Parms
	{
		TArray<UObject*> Objects;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InterchangeEngine_eventOnImportDoneDynamic_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::NewProp_Objects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::NewProp_Objects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InterchangeEngine, nullptr, "OnImportDoneDynamic__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::_Script_InterchangeEngine_eventOnImportDoneDynamic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::_Script_InterchangeEngine_eventOnImportDoneDynamic_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnImportDoneDynamic_DelegateWrapper(const FScriptDelegate& OnImportDoneDynamic, TArray<UObject*> const& Objects)
{
	struct _Script_InterchangeEngine_eventOnImportDoneDynamic_Parms
	{
		TArray<UObject*> Objects;
	};
	_Script_InterchangeEngine_eventOnImportDoneDynamic_Parms Parms;
	Parms.Objects=Objects;
	OnImportDoneDynamic.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnImportDoneDynamic

// Begin Class UInterchangePipelineStackOverride Function AddBlueprintPipeline
struct Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics
{
	struct InterchangePipelineStackOverride_eventAddBlueprintPipeline_Parms
	{
		UInterchangeBlueprintPipelineBase* PipelineBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | PipelineStackOverride" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PipelineBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics::NewProp_PipelineBase = { "PipelineBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineStackOverride_eventAddBlueprintPipeline_Parms, PipelineBase), Z_Construct_UClass_UInterchangeBlueprintPipelineBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics::NewProp_PipelineBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineStackOverride, nullptr, "AddBlueprintPipeline", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics::InterchangePipelineStackOverride_eventAddBlueprintPipeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics::InterchangePipelineStackOverride_eventAddBlueprintPipeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineStackOverride::execAddBlueprintPipeline)
{
	P_GET_OBJECT(UInterchangeBlueprintPipelineBase,Z_Param_PipelineBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBlueprintPipeline(Z_Param_PipelineBase);
	P_NATIVE_END;
}
// End Class UInterchangePipelineStackOverride Function AddBlueprintPipeline

// Begin Class UInterchangePipelineStackOverride Function AddPipeline
struct Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics
{
	struct InterchangePipelineStackOverride_eventAddPipeline_Parms
	{
		UInterchangePipelineBase* PipelineBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | PipelineStackOverride" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PipelineBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::NewProp_PipelineBase = { "PipelineBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineStackOverride_eventAddPipeline_Parms, PipelineBase), Z_Construct_UClass_UInterchangePipelineBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::NewProp_PipelineBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineStackOverride, nullptr, "AddPipeline", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::InterchangePipelineStackOverride_eventAddPipeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::InterchangePipelineStackOverride_eventAddPipeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineStackOverride::execAddPipeline)
{
	P_GET_OBJECT(UInterchangePipelineBase,Z_Param_PipelineBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPipeline(Z_Param_PipelineBase);
	P_NATIVE_END;
}
// End Class UInterchangePipelineStackOverride Function AddPipeline

// Begin Class UInterchangePipelineStackOverride Function AddPythonPipeline
struct Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics
{
	struct InterchangePipelineStackOverride_eventAddPythonPipeline_Parms
	{
		UInterchangePythonPipelineBase* PipelineBase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | PipelineStackOverride" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PipelineBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::NewProp_PipelineBase = { "PipelineBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineStackOverride_eventAddPythonPipeline_Parms, PipelineBase), Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::NewProp_PipelineBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineStackOverride, nullptr, "AddPythonPipeline", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::InterchangePipelineStackOverride_eventAddPythonPipeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::InterchangePipelineStackOverride_eventAddPythonPipeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangePipelineStackOverride::execAddPythonPipeline)
{
	P_GET_OBJECT(UInterchangePythonPipelineBase,Z_Param_PipelineBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPythonPipeline(Z_Param_PipelineBase);
	P_NATIVE_END;
}
// End Class UInterchangePipelineStackOverride Function AddPythonPipeline

// Begin Class UInterchangePipelineStackOverride
void UInterchangePipelineStackOverride::StaticRegisterNativesUInterchangePipelineStackOverride()
{
	UClass* Class = UInterchangePipelineStackOverride::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBlueprintPipeline", &UInterchangePipelineStackOverride::execAddBlueprintPipeline },
		{ "AddPipeline", &UInterchangePipelineStackOverride::execAddPipeline },
		{ "AddPythonPipeline", &UInterchangePipelineStackOverride::execAddPythonPipeline },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePipelineStackOverride);
UClass* Z_Construct_UClass_UInterchangePipelineStackOverride_NoRegister()
{
	return UInterchangePipelineStackOverride::StaticClass();
}
struct Z_Construct_UClass_UInterchangePipelineStackOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This class is used to pass override pipelines in the ImportAssetTask Options member.\n */" },
		{ "IncludePath", "InterchangeManager.h" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "This class is used to pass override pipelines in the ImportAssetTask Options member." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverridePipelines_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverridePipelines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverridePipelines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePipelineStackOverride_AddBlueprintPipeline, "AddBlueprintPipeline" }, // 840618703
		{ &Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPipeline, "AddPipeline" }, // 2142214121
		{ &Z_Construct_UFunction_UInterchangePipelineStackOverride_AddPythonPipeline, "AddPythonPipeline" }, // 105455117
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePipelineStackOverride>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::NewProp_OverridePipelines_Inner = { "OverridePipelines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::NewProp_OverridePipelines = { "OverridePipelines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangePipelineStackOverride, OverridePipelines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverridePipelines_MetaData), NewProp_OverridePipelines_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::NewProp_OverridePipelines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::NewProp_OverridePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::ClassParams = {
	&UInterchangePipelineStackOverride::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangePipelineStackOverride()
{
	if (!Z_Registration_Info_UClass_UInterchangePipelineStackOverride.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePipelineStackOverride.OuterSingleton, Z_Construct_UClass_UInterchangePipelineStackOverride_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangePipelineStackOverride.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangePipelineStackOverride>()
{
	return UInterchangePipelineStackOverride::StaticClass();
}
UInterchangePipelineStackOverride::UInterchangePipelineStackOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePipelineStackOverride);
UInterchangePipelineStackOverride::~UInterchangePipelineStackOverride() {}
// End Class UInterchangePipelineStackOverride

// Begin ScriptStruct FImportAssetParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportAssetParameters;
class UScriptStruct* FImportAssetParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportAssetParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportAssetParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportAssetParameters, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("ImportAssetParameters"));
	}
	return Z_Registration_Info_UScriptStruct_ImportAssetParameters.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FImportAssetParameters>()
{
	return FImportAssetParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FImportAssetParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReimportAsset_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// If the import is a reimport for a specific asset, set the asset to reimport here.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "If the import is a reimport for a specific asset, set the asset to reimport here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReimportSourceIndex_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// If we are doing a reimport, set the source index here. Some assets have more then one source file that each contains part of the asset content.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "If we are doing a reimport, set the source index here. Some assets have more then one source file that each contains part of the asset content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAutomated_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// Tell Interchange that import is automated and it shouldn't present a modal window.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Tell Interchange that import is automated and it shouldn't present a modal window." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollowRedirectors_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// Tell Interchange to follow redirectors when determining the location an asset will be imported.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Tell Interchange to follow redirectors when determining the location an asset will be imported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverridePipelines_MetaData[] = {
		{ "AllowedClasses", "/Script/InterchangeCore.InterchangePipelineBase, /Script/InterchangeEngine.InterchangeBlueprintPipelineBase, /Script/InterchangeEngine.InterchangePythonPipelineAsset" },
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// Adding overrides tells Interchange to use the specific custom set of pipelines instead of letting the user or the system choose.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Adding overrides tells Interchange to use the specific custom set of pipelines instead of letting the user or the system choose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportLevel_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "//Level to import into when doing a scene import.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Level to import into when doing a scene import." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationName_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "/** Optional custom name for the import. */" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Optional custom name for the import." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceExisting_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "/** Determies whether to overwrite existing assets. */" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Determies whether to overwrite existing assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetDone_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "/* Delegates used to track the imported objects. */// This is called each time an asset is imported or reimported from the import call.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Delegates used to track the imported objects. // This is called each time an asset is imported or reimported from the import call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetsImportDone_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// This is called when all the assets were imported from the source data.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "This is called when all the assets were imported from the source data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSceneObjectDone_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// This is called each time an object in the scene is imported or reimported from the import call.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "This is called each time an object in the scene is imported or reimported from the import call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSceneImportDone_MetaData[] = {
		{ "Category", "Interchange|ImportAsset" },
		{ "Comment", "// This is called when all the scene objects were imported from the source data.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "This is called when all the scene objects were imported from the source data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReimportAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReimportSourceIndex;
	static void NewProp_bIsAutomated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutomated;
	static void NewProp_bFollowRedirectors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowRedirectors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverridePipelines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverridePipelines;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationName;
	static void NewProp_bReplaceExisting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExisting;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnAssetDone;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnAssetsImportDone;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSceneObjectDone;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSceneImportDone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportAssetParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportAsset = { "ReimportAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportAssetParameters, ReimportAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReimportAsset_MetaData), NewProp_ReimportAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportSourceIndex = { "ReimportSourceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportAssetParameters, ReimportSourceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReimportSourceIndex_MetaData), NewProp_ReimportSourceIndex_MetaData) };
void Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bIsAutomated_SetBit(void* Obj)
{
	((FImportAssetParameters*)Obj)->bIsAutomated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bIsAutomated = { "bIsAutomated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportAssetParameters), &Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bIsAutomated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAutomated_MetaData), NewProp_bIsAutomated_MetaData) };
void Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bFollowRedirectors_SetBit(void* Obj)
{
	((FImportAssetParameters*)Obj)->bFollowRedirectors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bFollowRedirectors = { "bFollowRedirectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportAssetParameters), &Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bFollowRedirectors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollowRedirectors_MetaData), NewProp_bFollowRedirectors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OverridePipelines_Inner = { "OverridePipelines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OverridePipelines = { "OverridePipelines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportAssetParameters, OverridePipelines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverridePipelines_MetaData), NewProp_OverridePipelines_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ImportLevel = { "ImportLevel", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportAssetParameters, ImportLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportLevel_MetaData), NewProp_ImportLevel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_DestinationName = { "DestinationName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportAssetParameters, DestinationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationName_MetaData), NewProp_DestinationName_MetaData) };
void Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bReplaceExisting_SetBit(void* Obj)
{
	((FImportAssetParameters*)Obj)->bReplaceExisting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bReplaceExisting = { "bReplaceExisting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImportAssetParameters), &Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bReplaceExisting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplaceExisting_MetaData), NewProp_bReplaceExisting_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetDone = { "OnAssetDone", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportAssetParameters, OnAssetDone), Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAssetDone_MetaData), NewProp_OnAssetDone_MetaData) }; // 4105515292
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetsImportDone = { "OnAssetsImportDone", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportAssetParameters, OnAssetsImportDone), Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAssetsImportDone_MetaData), NewProp_OnAssetsImportDone_MetaData) }; // 3802140253
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneObjectDone = { "OnSceneObjectDone", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportAssetParameters, OnSceneObjectDone), Z_Construct_UDelegateFunction_InterchangeEngine_OnObjectImportDoneDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSceneObjectDone_MetaData), NewProp_OnSceneObjectDone_MetaData) }; // 4105515292
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneImportDone = { "OnSceneImportDone", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportAssetParameters, OnSceneImportDone), Z_Construct_UDelegateFunction_InterchangeEngine_OnImportDoneDynamic__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSceneImportDone_MetaData), NewProp_OnSceneImportDone_MetaData) }; // 3802140253
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportAssetParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ReimportSourceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bIsAutomated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bFollowRedirectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OverridePipelines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OverridePipelines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_ImportLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_DestinationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_bReplaceExisting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetDone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnAssetsImportDone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneObjectDone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewProp_OnSceneImportDone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportAssetParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	nullptr,
	&NewStructOps,
	"ImportAssetParameters",
	Z_Construct_UScriptStruct_FImportAssetParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::PropPointers),
	sizeof(FImportAssetParameters),
	alignof(FImportAssetParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportAssetParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImportAssetParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImportAssetParameters()
{
	if (!Z_Registration_Info_UScriptStruct_ImportAssetParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportAssetParameters.InnerSingleton, Z_Construct_UScriptStruct_FImportAssetParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ImportAssetParameters.InnerSingleton;
}
// End ScriptStruct FImportAssetParameters

// Begin Class UInterchangeManager Function CreateSourceData
struct Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics
{
	struct InterchangeManager_eventCreateSourceData_Parms
	{
		FString InFileName;
		UInterchangeSourceData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "Comment", "/*\n\x09* Script helper to create a source data object that points to a file on disk.\n\x09* @Param InFilename: Specify a file on disk.\n\x09* @return: A new UInterchangeSourceData.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "* Script helper to create a source data object that points to a file on disk.\n* @Param InFilename: Specify a file on disk.\n* @return: A new UInterchangeSourceData." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventCreateSourceData_Parms, InFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFileName_MetaData), NewProp_InFileName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventCreateSourceData_Parms, ReturnValue), Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::NewProp_InFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "CreateSourceData", nullptr, nullptr, Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::InterchangeManager_eventCreateSourceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::InterchangeManager_eventCreateSourceData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeManager_CreateSourceData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_CreateSourceData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeManager::execCreateSourceData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInterchangeSourceData**)Z_Param__Result=UInterchangeManager::CreateSourceData(Z_Param_InFileName);
	P_NATIVE_END;
}
// End Class UInterchangeManager Function CreateSourceData

// Begin Class UInterchangeManager Function ExportAsset
struct Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics
{
	struct InterchangeManager_eventExportAsset_Parms
	{
		const UObject* Asset;
		bool bIsAutomated;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Export Manager" },
		{ "Comment", "/**\n\x09 * Call this to start an asset export process. The caller must specify a source data.\n\x09 * \n\x09 * @Param Asset - The asset to export.\n\x09 * @Param bIsAutomated - If true, the exporter will not show any UI or dialogs.\n\x09 * @return true if the export succeeds, or false otherwise.\n\x09 */" },
		{ "CPP_Default_bIsAutomated", "false" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Call this to start an asset export process. The caller must specify a source data.\n\n@Param Asset - The asset to export.\n@Param bIsAutomated - If true, the exporter will not show any UI or dialogs.\n@return true if the export succeeds, or false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static void NewProp_bIsAutomated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutomated;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventExportAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
void Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_bIsAutomated_SetBit(void* Obj)
{
	((InterchangeManager_eventExportAsset_Parms*)Obj)->bIsAutomated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_bIsAutomated = { "bIsAutomated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeManager_eventExportAsset_Parms), &Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_bIsAutomated_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeManager_eventExportAsset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeManager_eventExportAsset_Parms), &Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_bIsAutomated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "ExportAsset", nullptr, nullptr, Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::InterchangeManager_eventExportAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::InterchangeManager_eventExportAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeManager_ExportAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_ExportAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeManager::execExportAsset)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_GET_UBOOL(Z_Param_bIsAutomated);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ExportAsset(Z_Param_Asset,Z_Param_bIsAutomated);
	P_NATIVE_END;
}
// End Class UInterchangeManager Function ExportAsset

// Begin Class UInterchangeManager Function ExportScene
struct Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics
{
	struct InterchangeManager_eventExportScene_Parms
	{
		const UObject* World;
		bool bIsAutomated;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Export Manager" },
		{ "Comment", "/**\n\x09 * Call this to start a scene export process. The caller must specify a source data.\n\x09 * @Param World - The scene to export.\n\x09 * @Param bIsAutomated - If true, the import process will not show any UI or dialogs.\n\x09 * @return true if the export succeeds, or false otherwise.\n\x09 */" },
		{ "CPP_Default_bIsAutomated", "false" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Call this to start a scene export process. The caller must specify a source data.\n@Param World - The scene to export.\n@Param bIsAutomated - If true, the import process will not show any UI or dialogs.\n@return true if the export succeeds, or false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_bIsAutomated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutomated;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventExportScene_Parms, World), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
void Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_bIsAutomated_SetBit(void* Obj)
{
	((InterchangeManager_eventExportScene_Parms*)Obj)->bIsAutomated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_bIsAutomated = { "bIsAutomated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeManager_eventExportScene_Parms), &Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_bIsAutomated_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeManager_eventExportScene_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeManager_eventExportScene_Parms), &Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_bIsAutomated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "ExportScene", nullptr, nullptr, Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::InterchangeManager_eventExportScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::InterchangeManager_eventExportScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeManager_ExportScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_ExportScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeManager::execExportScene)
{
	P_GET_OBJECT(UObject,Z_Param_World);
	P_GET_UBOOL(Z_Param_bIsAutomated);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ExportScene(Z_Param_World,Z_Param_bIsAutomated);
	P_NATIVE_END;
}
// End Class UInterchangeManager Function ExportScene

// Begin Class UInterchangeManager Function GetInterchangeManagerScripted
struct Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics
{
	struct InterchangeManager_eventGetInterchangeManagerScripted_Parms
	{
		UInterchangeManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "Comment", "/**\n\x09 * Return the pointer to the Interchange Manager singleton.\n\x09 *\n\x09 * @note - We need to return a pointer to have a valid Blueprint-callable function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Return the pointer to the Interchange Manager singleton.\n\n@note - We need to return a pointer to have a valid Blueprint-callable function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventGetInterchangeManagerScripted_Parms, ReturnValue), Z_Construct_UClass_UInterchangeManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "GetInterchangeManagerScripted", nullptr, nullptr, Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::InterchangeManager_eventGetInterchangeManagerScripted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::InterchangeManager_eventGetInterchangeManagerScripted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeManager::execGetInterchangeManagerScripted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInterchangeManager**)Z_Param__Result=UInterchangeManager::GetInterchangeManagerScripted();
	P_NATIVE_END;
}
// End Class UInterchangeManager Function GetInterchangeManagerScripted

// Begin Class UInterchangeManager Function GetRegisteredFactoryClass
struct Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics
{
	struct InterchangeManager_eventGetRegisteredFactoryClass_Parms
	{
		const UClass* ClassToMake;
		const UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "Comment", "/**\n\x09* Script helper to get a registered factory for a specified class.\n\x09* @Param FactoryClass: The class whose registered factory you want to find.\n\x09* @return: The registered factory class if found, or NULL if no registered factory was found.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Script helper to get a registered factory for a specified class.\n@Param FactoryClass: The class whose registered factory you want to find.\n@return: The registered factory class if found, or NULL if no registered factory was found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassToMake_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToMake;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ClassToMake = { "ClassToMake", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventGetRegisteredFactoryClass_Parms, ClassToMake), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassToMake_MetaData), NewProp_ClassToMake_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventGetRegisteredFactoryClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ClassToMake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "GetRegisteredFactoryClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::InterchangeManager_eventGetRegisteredFactoryClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::InterchangeManager_eventGetRegisteredFactoryClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeManager::execGetRegisteredFactoryClass)
{
	P_GET_OBJECT(UClass,Z_Param_ClassToMake);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UClass**)Z_Param__Result=P_THIS->GetRegisteredFactoryClass(Z_Param_ClassToMake);
	P_NATIVE_END;
}
// End Class UInterchangeManager Function GetRegisteredFactoryClass

// Begin Class UInterchangeManager Function ImportAsset
struct Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics
{
	struct InterchangeManager_eventImportAsset_Parms
	{
		FString ContentPath;
		const UInterchangeSourceData* SourceData;
		FImportAssetParameters ImportAssetParameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "Comment", "/**\n\x09 * Call this to start an asset import process. The caller must specify the source data.\n\x09 * This process can import many different assets into the game content.\n\x09 *\n\x09 * @Param ContentPath - The path where the imported assets will be created.\n\x09 * @Param SourceData - The source data input to translate.\n\x09 * @param ImportAssetParameters - All parameters that need to be passed to the import asset function.\n\x09 * @return true if the import succeeds, or false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Call this to start an asset import process. The caller must specify the source data.\nThis process can import many different assets into the game content.\n\n@Param ContentPath - The path where the imported assets will be created.\n@Param SourceData - The source data input to translate.\n@param ImportAssetParameters - All parameters that need to be passed to the import asset function.\n@return true if the import succeeds, or false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportAssetParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportAssetParameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventImportAsset_Parms, ContentPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentPath_MetaData), NewProp_ContentPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventImportAsset_Parms, SourceData), Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceData_MetaData), NewProp_SourceData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ImportAssetParameters = { "ImportAssetParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventImportAsset_Parms, ImportAssetParameters), Z_Construct_UScriptStruct_FImportAssetParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportAssetParameters_MetaData), NewProp_ImportAssetParameters_MetaData) }; // 175541553
void Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeManager_eventImportAsset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeManager_eventImportAsset_Parms), &Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ContentPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_SourceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ImportAssetParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "ImportAsset", nullptr, nullptr, Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::InterchangeManager_eventImportAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::InterchangeManager_eventImportAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeManager_ImportAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_ImportAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeManager::execImportAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentPath);
	P_GET_OBJECT(UInterchangeSourceData,Z_Param_SourceData);
	P_GET_STRUCT_REF(FImportAssetParameters,Z_Param_Out_ImportAssetParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ImportAsset(Z_Param_ContentPath,Z_Param_SourceData,Z_Param_Out_ImportAssetParameters);
	P_NATIVE_END;
}
// End Class UInterchangeManager Function ImportAsset

// Begin Class UInterchangeManager Function ImportScene
struct Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics
{
	struct InterchangeManager_eventImportScene_Parms
	{
		FString ContentPath;
		const UInterchangeSourceData* SourceData;
		FImportAssetParameters ImportAssetParameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "Comment", "/**\n\x09 * Call this to start a scene import process. The caller must specify the source data.\n\x09 * This process can import many different assets and their transforms (USceneComponent), store the result in a Blueprint, and add the Blueprint to the level.\n\x09 *\n\x09 * @Param ContentPath - The path where the imported assets will be created.\n\x09 * @Param SourceData - The source data input to translate. This object will be duplicated to allow thread-safe operations.\n\x09 * @param ImportAssetParameters - All parameters that need to be passed to the import asset function.\n\x09 * @return true if the import succeeds, or false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Call this to start a scene import process. The caller must specify the source data.\nThis process can import many different assets and their transforms (USceneComponent), store the result in a Blueprint, and add the Blueprint to the level.\n\n@Param ContentPath - The path where the imported assets will be created.\n@Param SourceData - The source data input to translate. This object will be duplicated to allow thread-safe operations.\n@param ImportAssetParameters - All parameters that need to be passed to the import asset function.\n@return true if the import succeeds, or false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportAssetParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportAssetParameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventImportScene_Parms, ContentPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentPath_MetaData), NewProp_ContentPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventImportScene_Parms, SourceData), Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceData_MetaData), NewProp_SourceData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ImportAssetParameters = { "ImportAssetParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeManager_eventImportScene_Parms, ImportAssetParameters), Z_Construct_UScriptStruct_FImportAssetParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportAssetParameters_MetaData), NewProp_ImportAssetParameters_MetaData) }; // 175541553
void Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeManager_eventImportScene_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeManager_eventImportScene_Parms), &Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ContentPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_SourceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ImportAssetParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeManager, nullptr, "ImportScene", nullptr, nullptr, Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::InterchangeManager_eventImportScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::InterchangeManager_eventImportScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeManager_ImportScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeManager_ImportScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeManager::execImportScene)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentPath);
	P_GET_OBJECT(UInterchangeSourceData,Z_Param_SourceData);
	P_GET_STRUCT_REF(FImportAssetParameters,Z_Param_Out_ImportAssetParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ImportScene(Z_Param_ContentPath,Z_Param_SourceData,Z_Param_Out_ImportAssetParameters);
	P_NATIVE_END;
}
// End Class UInterchangeManager Function ImportScene

// Begin Class UInterchangeManager
void UInterchangeManager::StaticRegisterNativesUInterchangeManager()
{
	UClass* Class = UInterchangeManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSourceData", &UInterchangeManager::execCreateSourceData },
		{ "ExportAsset", &UInterchangeManager::execExportAsset },
		{ "ExportScene", &UInterchangeManager::execExportScene },
		{ "GetInterchangeManagerScripted", &UInterchangeManager::execGetInterchangeManagerScripted },
		{ "GetRegisteredFactoryClass", &UInterchangeManager::execGetRegisteredFactoryClass },
		{ "ImportAsset", &UInterchangeManager::execImportAsset },
		{ "ImportScene", &UInterchangeManager::execImportScene },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeManager);
UClass* Z_Construct_UClass_UInterchangeManager_NoRegister()
{
	return UInterchangeManager::StaticClass();
}
struct Z_Construct_UClass_UInterchangeManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeManager.h" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredTranslatorsClass_MetaData[] = {
		{ "Comment", "// Caching the registered translator classes to avoid double registration.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "Caching the registered translator classes to avoid double registration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredFactoryClasses_MetaData[] = {
		{ "Comment", "//The manager will create only one factory per type.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "The manager will create only one factory per type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredWriters_MetaData[] = {
		{ "Comment", "//The manager will create only one writer per type.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "The manager will create only one writer per type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredConverters_MetaData[] = {
		{ "Comment", "//The manager will create only one converter per type.\n" },
		{ "ModuleRelativePath", "Public/InterchangeManager.h" },
		{ "ToolTip", "The manager will create only one converter per type." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RegisteredTranslatorsClass_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RegisteredTranslatorsClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RegisteredFactoryClasses_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RegisteredFactoryClasses_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredFactoryClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredWriters_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RegisteredWriters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredWriters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredConverters_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RegisteredConverters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredConverters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeManager_CreateSourceData, "CreateSourceData" }, // 2102581509
		{ &Z_Construct_UFunction_UInterchangeManager_ExportAsset, "ExportAsset" }, // 3329044368
		{ &Z_Construct_UFunction_UInterchangeManager_ExportScene, "ExportScene" }, // 2785835727
		{ &Z_Construct_UFunction_UInterchangeManager_GetInterchangeManagerScripted, "GetInterchangeManagerScripted" }, // 63270486
		{ &Z_Construct_UFunction_UInterchangeManager_GetRegisteredFactoryClass, "GetRegisteredFactoryClass" }, // 685402763
		{ &Z_Construct_UFunction_UInterchangeManager_ImportAsset, "ImportAsset" }, // 551330221
		{ &Z_Construct_UFunction_UInterchangeManager_ImportScene, "ImportScene" }, // 1603336725
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredTranslatorsClass_ElementProp = { "RegisteredTranslatorsClass", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredTranslatorsClass = { "RegisteredTranslatorsClass", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeManager, RegisteredTranslatorsClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredTranslatorsClass_MetaData), NewProp_RegisteredTranslatorsClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses_ValueProp = { "RegisteredFactoryClasses", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses_Key_KeyProp = { "RegisteredFactoryClasses_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses = { "RegisteredFactoryClasses", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeManager, RegisteredFactoryClasses), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredFactoryClasses_MetaData), NewProp_RegisteredFactoryClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters_ValueProp = { "RegisteredWriters", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInterchangeWriterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters_Key_KeyProp = { "RegisteredWriters_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters = { "RegisteredWriters", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeManager, RegisteredWriters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredWriters_MetaData), NewProp_RegisteredWriters_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredConverters_ValueProp = { "RegisteredConverters", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInterchangeAssetImportDataConverterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredConverters_Key_KeyProp = { "RegisteredConverters_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredConverters = { "RegisteredConverters", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeManager, RegisteredConverters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredConverters_MetaData), NewProp_RegisteredConverters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredTranslatorsClass_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredTranslatorsClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredFactoryClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredWriters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredConverters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredConverters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeManager_Statics::NewProp_RegisteredConverters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeManager_Statics::ClassParams = {
	&UInterchangeManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInterchangeManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeManager_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeManager()
{
	if (!Z_Registration_Info_UClass_UInterchangeManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeManager.OuterSingleton, Z_Construct_UClass_UInterchangeManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeManager.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangeManager>()
{
	return UInterchangeManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeManager);
UInterchangeManager::~UInterchangeManager() {}
// End Class UInterchangeManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FImportAssetParameters::StaticStruct, Z_Construct_UScriptStruct_FImportAssetParameters_Statics::NewStructOps, TEXT("ImportAssetParameters"), &Z_Registration_Info_UScriptStruct_ImportAssetParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportAssetParameters), 175541553U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePipelineStackOverride, UInterchangePipelineStackOverride::StaticClass, TEXT("UInterchangePipelineStackOverride"), &Z_Registration_Info_UClass_UInterchangePipelineStackOverride, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePipelineStackOverride), 3124607356U) },
		{ Z_Construct_UClass_UInterchangeManager, UInterchangeManager::StaticClass, TEXT("UInterchangeManager"), &Z_Registration_Info_UClass_UInterchangeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeManager), 789264263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_2979395889(TEXT("/Script/InterchangeEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
