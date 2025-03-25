// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Trace() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Trace();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Trace_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryTest_Trace
void UEnvQueryTest_Trace::StaticRegisterNativesUEnvQueryTest_Trace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_Trace);
UClass* Z_Construct_UClass_UEnvQueryTest_Trace_NoRegister()
{
	return UEnvQueryTest_Trace::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryTest_Trace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceData_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** trace data */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
		{ "ToolTip", "trace data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceFromContext_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** trace direction */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
		{ "ToolTip", "trace direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemHeightOffset_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** Z offset from item */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
		{ "ToolTip", "Z offset from item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextHeightOffset_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** Z offset from querier */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
		{ "ToolTip", "Z offset from querier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** context: other end of trace test */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h" },
		{ "ToolTip", "context: other end of trace test" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceFromContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemHeightOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextHeightOffset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Trace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Trace_Statics::NewProp_TraceData = { "TraceData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Trace, TraceData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceData_MetaData), NewProp_TraceData_MetaData) }; // 2349835990
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Trace_Statics::NewProp_TraceFromContext = { "TraceFromContext", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Trace, TraceFromContext), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceFromContext_MetaData), NewProp_TraceFromContext_MetaData) }; // 4208764161
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Trace_Statics::NewProp_ItemHeightOffset = { "ItemHeightOffset", nullptr, (EPropertyFlags)0x0010048000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Trace, ItemHeightOffset), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemHeightOffset_MetaData), NewProp_ItemHeightOffset_MetaData) }; // 1384630506
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Trace_Statics::NewProp_ContextHeightOffset = { "ContextHeightOffset", nullptr, (EPropertyFlags)0x0010048000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Trace, ContextHeightOffset), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextHeightOffset_MetaData), NewProp_ContextHeightOffset_MetaData) }; // 1384630506
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_Trace_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryTest_Trace, Context), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Trace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Trace_Statics::NewProp_TraceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Trace_Statics::NewProp_TraceFromContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Trace_Statics::NewProp_ItemHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Trace_Statics::NewProp_ContextHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Trace_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Trace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryTest_Trace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Trace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Trace_Statics::ClassParams = {
	&UEnvQueryTest_Trace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryTest_Trace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Trace_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Trace_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryTest_Trace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryTest_Trace()
{
	if (!Z_Registration_Info_UClass_UEnvQueryTest_Trace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_Trace.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Trace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryTest_Trace.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Trace>()
{
	return UEnvQueryTest_Trace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Trace);
UEnvQueryTest_Trace::~UEnvQueryTest_Trace() {}
// End Class UEnvQueryTest_Trace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Trace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_Trace, UEnvQueryTest_Trace::StaticClass, TEXT("UEnvQueryTest_Trace"), &Z_Registration_Info_UClass_UEnvQueryTest_Trace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_Trace), 3214561426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Trace_h_1907262782(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Trace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Trace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
