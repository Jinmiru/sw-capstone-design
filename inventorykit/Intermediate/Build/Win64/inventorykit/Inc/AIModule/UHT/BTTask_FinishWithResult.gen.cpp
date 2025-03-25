// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_FinishWithResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FinishWithResult() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_FinishWithResult();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_FinishWithResult_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_FinishWithResult
void UBTTask_FinishWithResult::StaticRegisterNativesUBTTask_FinishWithResult()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FinishWithResult);
UClass* Z_Construct_UClass_UBTTask_FinishWithResult_NoRegister()
{
	return UBTTask_FinishWithResult::StaticClass();
}
struct Z_Construct_UClass_UBTTask_FinishWithResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Instantly finishes with given result\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_FinishWithResult.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_FinishWithResult.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Instantly finishes with given result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Result" },
		{ "Comment", "/** allows adding random time to wait time */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_FinishWithResult.h" },
		{ "ToolTip", "allows adding random time to wait time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FinishWithResult>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_FinishWithResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FinishWithResult, Result), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3742194854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FinishWithResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FinishWithResult_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FinishWithResult_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_FinishWithResult_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FinishWithResult_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FinishWithResult_Statics::ClassParams = {
	&UBTTask_FinishWithResult::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_FinishWithResult_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FinishWithResult_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FinishWithResult_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FinishWithResult_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_FinishWithResult()
{
	if (!Z_Registration_Info_UClass_UBTTask_FinishWithResult.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FinishWithResult.OuterSingleton, Z_Construct_UClass_UBTTask_FinishWithResult_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_FinishWithResult.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_FinishWithResult>()
{
	return UBTTask_FinishWithResult::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FinishWithResult);
UBTTask_FinishWithResult::~UBTTask_FinishWithResult() {}
// End Class UBTTask_FinishWithResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_FinishWithResult_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FinishWithResult, UBTTask_FinishWithResult::StaticClass, TEXT("UBTTask_FinishWithResult"), &Z_Registration_Info_UClass_UBTTask_FinishWithResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FinishWithResult), 995214771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_FinishWithResult_h_3089866613(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_FinishWithResult_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_FinishWithResult_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
