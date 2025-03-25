// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardAssetProvider() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardAssetProvider();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardAssetProvider_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Interface UBlackboardAssetProvider Function GetBlackboardAsset
struct Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics
{
	struct BlackboardAssetProvider_eventGetBlackboardAsset_Parms
	{
		UBlackboardData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Returns BlackboardData referenced by the owner object. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardAssetProvider.h" },
		{ "ToolTip", "Returns BlackboardData referenced by the owner object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardAssetProvider_eventGetBlackboardAsset_Parms, ReturnValue), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardAssetProvider, nullptr, "GetBlackboardAsset", nullptr, nullptr, Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::BlackboardAssetProvider_eventGetBlackboardAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::BlackboardAssetProvider_eventGetBlackboardAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBlackboardAssetProvider::execGetBlackboardAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBlackboardData**)Z_Param__Result=P_THIS->GetBlackboardAsset();
	P_NATIVE_END;
}
// End Interface UBlackboardAssetProvider Function GetBlackboardAsset

// Begin Interface UBlackboardAssetProvider
void UBlackboardAssetProvider::StaticRegisterNativesUBlackboardAssetProvider()
{
	UClass* Class = UBlackboardAssetProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBlackboardAsset", &IBlackboardAssetProvider::execGetBlackboardAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardAssetProvider);
UClass* Z_Construct_UClass_UBlackboardAssetProvider_NoRegister()
{
	return UBlackboardAssetProvider::StaticClass();
}
struct Z_Construct_UClass_UBlackboardAssetProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardAssetProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset, "GetBlackboardAsset" }, // 405876326
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBlackboardAssetProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlackboardAssetProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardAssetProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardAssetProvider_Statics::ClassParams = {
	&UBlackboardAssetProvider::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardAssetProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlackboardAssetProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlackboardAssetProvider()
{
	if (!Z_Registration_Info_UClass_UBlackboardAssetProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardAssetProvider.OuterSingleton, Z_Construct_UClass_UBlackboardAssetProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlackboardAssetProvider.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBlackboardAssetProvider>()
{
	return UBlackboardAssetProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardAssetProvider);
UBlackboardAssetProvider::~UBlackboardAssetProvider() {}
// End Interface UBlackboardAssetProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardAssetProvider, UBlackboardAssetProvider::StaticClass, TEXT("UBlackboardAssetProvider"), &Z_Registration_Info_UClass_UBlackboardAssetProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardAssetProvider), 4044292576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_1157455497(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
