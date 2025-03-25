// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Binding/FloatBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatBinding() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UFloatBinding();
UMG_API UClass* Z_Construct_UClass_UFloatBinding_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UFloatBinding Function GetValue
struct Z_Construct_UFunction_UFloatBinding_GetValue_Statics
{
	struct FloatBinding_eventGetValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/FloatBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloatBinding_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatBinding_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatBinding_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatBinding_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatBinding, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UFloatBinding_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatBinding_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloatBinding_GetValue_Statics::FloatBinding_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatBinding_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloatBinding_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFloatBinding_GetValue_Statics::FloatBinding_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloatBinding_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloatBinding_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloatBinding::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class UFloatBinding Function GetValue

// Begin Class UFloatBinding
void UFloatBinding::StaticRegisterNativesUFloatBinding()
{
	UClass* Class = UFloatBinding::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetValue", &UFloatBinding::execGetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatBinding);
UClass* Z_Construct_UClass_UFloatBinding_NoRegister()
{
	return UFloatBinding::StaticClass();
}
struct Z_Construct_UClass_UFloatBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/FloatBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/FloatBinding.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloatBinding_GetValue, "GetValue" }, // 4240930373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFloatBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatBinding_Statics::ClassParams = {
	&UFloatBinding::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloatBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFloatBinding()
{
	if (!Z_Registration_Info_UClass_UFloatBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatBinding.OuterSingleton, Z_Construct_UClass_UFloatBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFloatBinding.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UFloatBinding>()
{
	return UFloatBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatBinding);
UFloatBinding::~UFloatBinding() {}
// End Class UFloatBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFloatBinding, UFloatBinding::StaticClass, TEXT("UFloatBinding"), &Z_Registration_Info_UClass_UFloatBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatBinding), 926462857U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_479721383(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
