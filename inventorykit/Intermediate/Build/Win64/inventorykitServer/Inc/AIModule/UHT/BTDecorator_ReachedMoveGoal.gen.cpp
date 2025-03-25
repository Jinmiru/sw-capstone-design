// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_ReachedMoveGoal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ReachedMoveGoal() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ReachedMoveGoal();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator_ReachedMoveGoal
void UBTDecorator_ReachedMoveGoal::StaticRegisterNativesUBTDecorator_ReachedMoveGoal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_ReachedMoveGoal);
UClass* Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_NoRegister()
{
	return UBTDecorator_ReachedMoveGoal::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Reached Move Goal decorator node.\n * A decorator node that bases its condition on whether the AI controller's path following component returns that it has reached its goal.\n */" },
		{ "DeprecatedNode", "" },
		{ "DeprecationMessage", "Please use IsAtLocation decorator instead." },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_ReachedMoveGoal.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ReachedMoveGoal.h" },
		{ "ToolTip", "Reached Move Goal decorator node.\nA decorator node that bases its condition on whether the AI controller's path following component returns that it has reached its goal." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ReachedMoveGoal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_Statics::ClassParams = {
	&UBTDecorator_ReachedMoveGoal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_ReachedMoveGoal()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_ReachedMoveGoal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_ReachedMoveGoal.OuterSingleton, Z_Construct_UClass_UBTDecorator_ReachedMoveGoal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_ReachedMoveGoal.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_ReachedMoveGoal>()
{
	return UBTDecorator_ReachedMoveGoal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ReachedMoveGoal);
UBTDecorator_ReachedMoveGoal::~UBTDecorator_ReachedMoveGoal() {}
// End Class UBTDecorator_ReachedMoveGoal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ReachedMoveGoal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_ReachedMoveGoal, UBTDecorator_ReachedMoveGoal::StaticClass, TEXT("UBTDecorator_ReachedMoveGoal"), &Z_Registration_Info_UClass_UBTDecorator_ReachedMoveGoal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_ReachedMoveGoal), 3176545457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ReachedMoveGoal_h_3890567494(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ReachedMoveGoal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ReachedMoveGoal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
