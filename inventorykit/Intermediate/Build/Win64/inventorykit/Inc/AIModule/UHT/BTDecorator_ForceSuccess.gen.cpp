// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_ForceSuccess.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ForceSuccess() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ForceSuccess();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ForceSuccess_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator_ForceSuccess
void UBTDecorator_ForceSuccess::StaticRegisterNativesUBTDecorator_ForceSuccess()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_ForceSuccess);
UClass* Z_Construct_UClass_UBTDecorator_ForceSuccess_NoRegister()
{
	return UBTDecorator_ForceSuccess::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_ForceSuccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Change node result to Success\n * useful for creating optional branches in sequence\n *\n * Forcing failed result was not implemented, because it doesn't make sense in both basic composites:\n * - sequence = child nodes behind it will be never run\n * - selector = would allow executing multiple nodes, turning it into a sequence...\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_ForceSuccess.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ForceSuccess.h" },
		{ "ToolTip", "Change node result to Success\nuseful for creating optional branches in sequence\n\nForcing failed result was not implemented, because it doesn't make sense in both basic composites:\n- sequence = child nodes behind it will be never run\n- selector = would allow executing multiple nodes, turning it into a sequence..." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ForceSuccess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTDecorator_ForceSuccess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ForceSuccess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ForceSuccess_Statics::ClassParams = {
	&UBTDecorator_ForceSuccess::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ForceSuccess_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_ForceSuccess_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_ForceSuccess()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_ForceSuccess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_ForceSuccess.OuterSingleton, Z_Construct_UClass_UBTDecorator_ForceSuccess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_ForceSuccess.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_ForceSuccess>()
{
	return UBTDecorator_ForceSuccess::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ForceSuccess);
UBTDecorator_ForceSuccess::~UBTDecorator_ForceSuccess() {}
// End Class UBTDecorator_ForceSuccess

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ForceSuccess_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_ForceSuccess, UBTDecorator_ForceSuccess::StaticClass, TEXT("UBTDecorator_ForceSuccess"), &Z_Registration_Info_UClass_UBTDecorator_ForceSuccess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_ForceSuccess), 791575415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ForceSuccess_h_3015565648(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ForceSuccess_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ForceSuccess_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
