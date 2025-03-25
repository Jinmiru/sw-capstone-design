// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_BlackboardBase() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator_BlackboardBase
void UBTDecorator_BlackboardBase::StaticRegisterNativesUBTDecorator_BlackboardBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_BlackboardBase);
UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase_NoRegister()
{
	return UBTDecorator_BlackboardBase::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlackboardBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlackboardBase.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackboardKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_BlackboardBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_BlackboardBase, BlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardKey_MetaData), NewProp_BlackboardKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics::NewProp_BlackboardKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics::ClassParams = {
	&UBTDecorator_BlackboardBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_BlackboardBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_BlackboardBase.OuterSingleton, Z_Construct_UClass_UBTDecorator_BlackboardBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_BlackboardBase.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_BlackboardBase>()
{
	return UBTDecorator_BlackboardBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_BlackboardBase);
UBTDecorator_BlackboardBase::~UBTDecorator_BlackboardBase() {}
// End Class UBTDecorator_BlackboardBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlackboardBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_BlackboardBase, UBTDecorator_BlackboardBase::StaticClass, TEXT("UBTDecorator_BlackboardBase"), &Z_Registration_Info_UClass_UBTDecorator_BlackboardBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_BlackboardBase), 1672222410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlackboardBase_h_3863764827(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlackboardBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlackboardBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
