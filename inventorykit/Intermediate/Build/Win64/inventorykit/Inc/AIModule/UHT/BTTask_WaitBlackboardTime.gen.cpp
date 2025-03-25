// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_WaitBlackboardTime() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_WaitBlackboardTime
void UBTTask_WaitBlackboardTime::StaticRegisterNativesUBTTask_WaitBlackboardTime()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_WaitBlackboardTime);
UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime_NoRegister()
{
	return UBTTask_WaitBlackboardTime::StaticClass();
}
struct Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Wait task node.\n * Wait for the time specified by a Blackboard key when executed.\n */" },
		{ "HideCategories", "Wait" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h" },
		{ "ToolTip", "Wait task node.\nWait for the time specified by a Blackboard key when executed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackboardKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_WaitBlackboardTime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_WaitBlackboardTime, BlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardKey_MetaData), NewProp_BlackboardKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::NewProp_BlackboardKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_Wait,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::ClassParams = {
	&UBTTask_WaitBlackboardTime::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime()
{
	if (!Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime.OuterSingleton, Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_WaitBlackboardTime>()
{
	return UBTTask_WaitBlackboardTime::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_WaitBlackboardTime);
UBTTask_WaitBlackboardTime::~UBTTask_WaitBlackboardTime() {}
// End Class UBTTask_WaitBlackboardTime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_WaitBlackboardTime, UBTTask_WaitBlackboardTime::StaticClass, TEXT("UBTTask_WaitBlackboardTime"), &Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_WaitBlackboardTime), 3962637595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_2377374987(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
