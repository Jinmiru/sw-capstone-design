// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Engine/Public/Dataflow/DataflowBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowBlueprintLibrary();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowBlueprintLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_DataflowEngine();
// End Cross Module References

// Begin Class UDataflowBlueprintLibrary Function EvaluateTerminalNodeByName
struct Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics
{
	struct DataflowBlueprintLibrary_eventEvaluateTerminalNodeByName_Parms
	{
		UDataflow* Dataflow;
		FName TerminalNodeName;
		UObject* ResultAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "/**\n\x09* Find a specific terminal node by name evaluate it using a specific UObject\n\x09*/" },
		{ "Keywords", "Dataflow graph" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowBlueprintLibrary.h" },
		{ "ToolTip", "Find a specific terminal node by name evaluate it using a specific UObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dataflow;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TerminalNodeName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::NewProp_Dataflow = { "Dataflow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataflowBlueprintLibrary_eventEvaluateTerminalNodeByName_Parms, Dataflow), Z_Construct_UClass_UDataflow_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::NewProp_TerminalNodeName = { "TerminalNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataflowBlueprintLibrary_eventEvaluateTerminalNodeByName_Parms, TerminalNodeName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::NewProp_ResultAsset = { "ResultAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataflowBlueprintLibrary_eventEvaluateTerminalNodeByName_Parms, ResultAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::NewProp_Dataflow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::NewProp_TerminalNodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::NewProp_ResultAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataflowBlueprintLibrary, nullptr, "EvaluateTerminalNodeByName", nullptr, nullptr, Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::DataflowBlueprintLibrary_eventEvaluateTerminalNodeByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::DataflowBlueprintLibrary_eventEvaluateTerminalNodeByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataflowBlueprintLibrary::execEvaluateTerminalNodeByName)
{
	P_GET_OBJECT(UDataflow,Z_Param_Dataflow);
	P_GET_PROPERTY(FNameProperty,Z_Param_TerminalNodeName);
	P_GET_OBJECT(UObject,Z_Param_ResultAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDataflowBlueprintLibrary::EvaluateTerminalNodeByName(Z_Param_Dataflow,Z_Param_TerminalNodeName,Z_Param_ResultAsset);
	P_NATIVE_END;
}
// End Class UDataflowBlueprintLibrary Function EvaluateTerminalNodeByName

// Begin Class UDataflowBlueprintLibrary
void UDataflowBlueprintLibrary::StaticRegisterNativesUDataflowBlueprintLibrary()
{
	UClass* Class = UDataflowBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EvaluateTerminalNodeByName", &UDataflowBlueprintLibrary::execEvaluateTerminalNodeByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowBlueprintLibrary);
UClass* Z_Construct_UClass_UDataflowBlueprintLibrary_NoRegister()
{
	return UDataflowBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UDataflowBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Dataflow/DataflowBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataflowBlueprintLibrary_EvaluateTerminalNodeByName, "EvaluateTerminalNodeByName" }, // 2235832389
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::ClassParams = {
	&UDataflowBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UDataflowBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowBlueprintLibrary.OuterSingleton;
}
template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflowBlueprintLibrary>()
{
	return UDataflowBlueprintLibrary::StaticClass();
}
UDataflowBlueprintLibrary::UDataflowBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowBlueprintLibrary);
UDataflowBlueprintLibrary::~UDataflowBlueprintLibrary() {}
// End Class UDataflowBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowBlueprintLibrary, UDataflowBlueprintLibrary::StaticClass, TEXT("UDataflowBlueprintLibrary"), &Z_Registration_Info_UClass_UDataflowBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowBlueprintLibrary), 243917220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_2078405604(TEXT("/Script/DataflowEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
