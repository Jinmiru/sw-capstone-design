// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_TimeLimit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_TimeLimit() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TimeLimit();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TimeLimit_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator_TimeLimit
void UBTDecorator_TimeLimit::StaticRegisterNativesUBTDecorator_TimeLimit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_TimeLimit);
UClass* Z_Construct_UClass_UBTDecorator_TimeLimit_NoRegister()
{
	return UBTDecorator_TimeLimit::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_TimeLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Time Limit decorator node.\n * A decorator node that bases its condition on whether a timer has exceeded a specified value. The timer is reset each time the node becomes relevant.\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_TimeLimit.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TimeLimit.h" },
		{ "ToolTip", "Time Limit decorator node.\nA decorator node that bases its condition on whether a timer has exceeded a specified value. The timer is reset each time the node becomes relevant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** max allowed time for execution of underlying node */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TimeLimit.h" },
		{ "ToolTip", "max allowed time for execution of underlying node" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_TimeLimit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_TimeLimit, TimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeLimit_MetaData), NewProp_TimeLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::NewProp_TimeLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::ClassParams = {
	&UBTDecorator_TimeLimit::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_TimeLimit()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_TimeLimit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_TimeLimit.OuterSingleton, Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_TimeLimit.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_TimeLimit>()
{
	return UBTDecorator_TimeLimit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_TimeLimit);
UBTDecorator_TimeLimit::~UBTDecorator_TimeLimit() {}
// End Class UBTDecorator_TimeLimit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TimeLimit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_TimeLimit, UBTDecorator_TimeLimit::StaticClass, TEXT("UBTDecorator_TimeLimit"), &Z_Registration_Info_UClass_UBTDecorator_TimeLimit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_TimeLimit), 598689311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TimeLimit_h_4123367997(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TimeLimit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TimeLimit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
