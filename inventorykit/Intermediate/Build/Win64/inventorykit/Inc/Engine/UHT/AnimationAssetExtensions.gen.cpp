// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimationAssetExtensions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationAssetExtensions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAssetExtensions();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAssetExtensions_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimationAssetExtensions Function GetSkeleton
#if WITH_EDITOR
struct Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics
{
	struct AnimationAssetExtensions_eventGetSkeleton_Parms
	{
		UAnimationAsset* InAsset;
		USkeleton* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationAsset" },
		{ "Comment", "/**\n\x09* @param\x09InAsset\x09\x09""Animation Asset to retrieve the Skeleton for\n\x09*\n\x09* @return\x09The target USkeleton for the provided UAnimationAsset\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAssetExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "@param        InAsset         Animation Asset to retrieve the Skeleton for\n\n@return       The target USkeleton for the provided UAnimationAsset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationAssetExtensions_eventGetSkeleton_Parms, InAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationAssetExtensions_eventGetSkeleton_Parms, ReturnValue), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::NewProp_InAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationAssetExtensions, nullptr, "GetSkeleton", nullptr, nullptr, Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::AnimationAssetExtensions_eventGetSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::AnimationAssetExtensions_eventGetSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAnimationAssetExtensions::execGetSkeleton)
{
	P_GET_OBJECT(UAnimationAsset,Z_Param_InAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeleton**)Z_Param__Result=UAnimationAssetExtensions::GetSkeleton(Z_Param_InAsset);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAnimationAssetExtensions Function GetSkeleton

// Begin Class UAnimationAssetExtensions
void UAnimationAssetExtensions::StaticRegisterNativesUAnimationAssetExtensions()
{
#if WITH_EDITOR
	UClass* Class = UAnimationAssetExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSkeleton", &UAnimationAssetExtensions::execGetSkeleton },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationAssetExtensions);
UClass* Z_Construct_UClass_UAnimationAssetExtensions_NoRegister()
{
	return UAnimationAssetExtensions::StaticClass();
}
struct Z_Construct_UClass_UAnimationAssetExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimationAssetExtensions.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAssetExtensions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationAssetExtensions_GetSkeleton, "GetSkeleton" }, // 2745830873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationAssetExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimationAssetExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAssetExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationAssetExtensions_Statics::ClassParams = {
	&UAnimationAssetExtensions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAssetExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationAssetExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationAssetExtensions()
{
	if (!Z_Registration_Info_UClass_UAnimationAssetExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationAssetExtensions.OuterSingleton, Z_Construct_UClass_UAnimationAssetExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationAssetExtensions.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimationAssetExtensions>()
{
	return UAnimationAssetExtensions::StaticClass();
}
UAnimationAssetExtensions::UAnimationAssetExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationAssetExtensions);
UAnimationAssetExtensions::~UAnimationAssetExtensions() {}
// End Class UAnimationAssetExtensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationAssetExtensions, UAnimationAssetExtensions::StaticClass, TEXT("UAnimationAssetExtensions"), &Z_Registration_Info_UClass_UAnimationAssetExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationAssetExtensions), 1320914416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_1250444549(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAssetExtensions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
