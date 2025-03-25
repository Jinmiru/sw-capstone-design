// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Tasks/AITask_RunEQS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_RunEQS() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAITask();
AIMODULE_API UClass* Z_Construct_UClass_UAITask_RunEQS();
AIMODULE_API UClass* Z_Construct_UClass_UAITask_RunEQS_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAITask_RunEQS Function RunEQS
struct Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics
{
	struct AITask_RunEQS_eventRunEQS_Parms
	{
		AAIController* Controller;
		UEnvQuery* QueryTemplate;
		UAITask_RunEQS* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "AI|Tasks" },
		{ "DefaultToSelf", "Controller" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask_RunEQS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_RunEQS_eventRunEQS_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_RunEQS_eventRunEQS_Parms, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AITask_RunEQS_eventRunEQS_Parms, ReturnValue), Z_Construct_UClass_UAITask_RunEQS_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::NewProp_QueryTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_RunEQS, nullptr, "RunEQS", nullptr, nullptr, Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::AITask_RunEQS_eventRunEQS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::AITask_RunEQS_eventRunEQS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAITask_RunEQS_RunEQS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAITask_RunEQS::execRunEQS)
{
	P_GET_OBJECT(AAIController,Z_Param_Controller);
	P_GET_OBJECT(UEnvQuery,Z_Param_QueryTemplate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAITask_RunEQS**)Z_Param__Result=UAITask_RunEQS::RunEQS(Z_Param_Controller,Z_Param_QueryTemplate);
	P_NATIVE_END;
}
// End Class UAITask_RunEQS Function RunEQS

// Begin Class UAITask_RunEQS
void UAITask_RunEQS::StaticRegisterNativesUAITask_RunEQS()
{
	UClass* Class = UAITask_RunEQS::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RunEQS", &UAITask_RunEQS::execRunEQS },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAITask_RunEQS);
UClass* Z_Construct_UClass_UAITask_RunEQS_NoRegister()
{
	return UAITask_RunEQS::StaticClass();
}
struct Z_Construct_UClass_UAITask_RunEQS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/AITask_RunEQS.h" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask_RunEQS.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAITask_RunEQS_RunEQS, "RunEQS" }, // 1327955761
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask_RunEQS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAITask_RunEQS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAITask,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_RunEQS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITask_RunEQS_Statics::ClassParams = {
	&UAITask_RunEQS::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_RunEQS_Statics::Class_MetaDataParams), Z_Construct_UClass_UAITask_RunEQS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAITask_RunEQS()
{
	if (!Z_Registration_Info_UClass_UAITask_RunEQS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITask_RunEQS.OuterSingleton, Z_Construct_UClass_UAITask_RunEQS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAITask_RunEQS.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAITask_RunEQS>()
{
	return UAITask_RunEQS::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_RunEQS);
UAITask_RunEQS::~UAITask_RunEQS() {}
// End Class UAITask_RunEQS

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAITask_RunEQS, UAITask_RunEQS::StaticClass, TEXT("UAITask_RunEQS"), &Z_Registration_Info_UClass_UAITask_RunEQS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITask_RunEQS), 800400405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_1590580677(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
