// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RunEQSQuery() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunEQSQuery();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunEQSQuery_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_RunEQSQuery
void UBTTask_RunEQSQuery::StaticRegisterNativesUBTTask_RunEQSQuery()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RunEQSQuery);
UClass* Z_Construct_UClass_UBTTask_RunEQSQuery_NoRegister()
{
	return UBTTask_RunEQSQuery::StaticClass();
}
struct Z_Construct_UClass_UBTTask_RunEQSQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Run Environment Query System Query task node.\n * Runs the specified environment query when executed.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
		{ "ToolTip", "Run Environment Query System Query task node.\nRuns the specified environment query when executed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryConfig_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EQSQueryBlackboardKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBBKey_MetaData[] = {
		{ "Category", "Node" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateBBOnFail_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunEQSQuery.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryParams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QueryParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryConfig_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QueryConfig;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RunMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EQSQueryBlackboardKey;
	static void NewProp_bUseBBKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBBKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
	static void NewProp_bUpdateBBOnFail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateBBOnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RunEQSQuery>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RunEQSQuery, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryTemplate_MetaData), NewProp_QueryTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams_Inner = { "QueryParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnvNamedValue, METADATA_PARAMS(0, nullptr) }; // 1315413069
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RunEQSQuery, QueryParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryParams_MetaData), NewProp_QueryParams_MetaData) }; // 1315413069
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig_Inner = { "QueryConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAIDynamicParam, METADATA_PARAMS(0, nullptr) }; // 2862259968
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig = { "QueryConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RunEQSQuery, QueryConfig), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryConfig_MetaData), NewProp_QueryConfig_MetaData) }; // 2862259968
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_RunMode = { "RunMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RunEQSQuery, RunMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunMode_MetaData), NewProp_RunMode_MetaData) }; // 3794952332
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSQueryBlackboardKey = { "EQSQueryBlackboardKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RunEQSQuery, EQSQueryBlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EQSQueryBlackboardKey_MetaData), NewProp_EQSQueryBlackboardKey_MetaData) }; // 3940742986
void Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey_SetBit(void* Obj)
{
	((UBTTask_RunEQSQuery*)Obj)->bUseBBKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey = { "bUseBBKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_RunEQSQuery), &Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBBKey_MetaData), NewProp_bUseBBKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RunEQSQuery, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EQSRequest_MetaData), NewProp_EQSRequest_MetaData) }; // 1212105169
void Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUpdateBBOnFail_SetBit(void* Obj)
{
	((UBTTask_RunEQSQuery*)Obj)->bUpdateBBOnFail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUpdateBBOnFail = { "bUpdateBBOnFail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_RunEQSQuery), &Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUpdateBBOnFail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateBBOnFail_MetaData), NewProp_bUpdateBBOnFail_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_QueryConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_RunMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSQueryBlackboardKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUseBBKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_EQSRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::NewProp_bUpdateBBOnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::ClassParams = {
	&UBTTask_RunEQSQuery::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_RunEQSQuery()
{
	if (!Z_Registration_Info_UClass_UBTTask_RunEQSQuery.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RunEQSQuery.OuterSingleton, Z_Construct_UClass_UBTTask_RunEQSQuery_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_RunEQSQuery.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_RunEQSQuery>()
{
	return UBTTask_RunEQSQuery::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RunEQSQuery);
UBTTask_RunEQSQuery::~UBTTask_RunEQSQuery() {}
// End Class UBTTask_RunEQSQuery

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RunEQSQuery, UBTTask_RunEQSQuery::StaticClass, TEXT("UBTTask_RunEQSQuery"), &Z_Registration_Info_UClass_UBTTask_RunEQSQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RunEQSQuery), 3315585341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_2166507600(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunEQSQuery_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
