// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Binding/Int32Binding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInt32Binding() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UInt32Binding();
UMG_API UClass* Z_Construct_UClass_UInt32Binding_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UInt32Binding Function GetValue
struct Z_Construct_UFunction_UInt32Binding_GetValue_Statics
{
	struct Int32Binding_eventGetValue_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/Int32Binding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInt32Binding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Int32Binding_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32Binding_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32Binding_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32Binding_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32Binding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32Binding, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UInt32Binding_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32Binding_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInt32Binding_GetValue_Statics::Int32Binding_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32Binding_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInt32Binding_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInt32Binding_GetValue_Statics::Int32Binding_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInt32Binding_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInt32Binding_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInt32Binding::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class UInt32Binding Function GetValue

// Begin Class UInt32Binding
void UInt32Binding::StaticRegisterNativesUInt32Binding()
{
	UClass* Class = UInt32Binding::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetValue", &UInt32Binding::execGetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInt32Binding);
UClass* Z_Construct_UClass_UInt32Binding_NoRegister()
{
	return UInt32Binding::StaticClass();
}
struct Z_Construct_UClass_UInt32Binding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/Int32Binding.h" },
		{ "ModuleRelativePath", "Public/Binding/Int32Binding.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInt32Binding_GetValue, "GetValue" }, // 2557523934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInt32Binding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInt32Binding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInt32Binding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInt32Binding_Statics::ClassParams = {
	&UInt32Binding::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInt32Binding_Statics::Class_MetaDataParams), Z_Construct_UClass_UInt32Binding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInt32Binding()
{
	if (!Z_Registration_Info_UClass_UInt32Binding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInt32Binding.OuterSingleton, Z_Construct_UClass_UInt32Binding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInt32Binding.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UInt32Binding>()
{
	return UInt32Binding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInt32Binding);
UInt32Binding::~UInt32Binding() {}
// End Class UInt32Binding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInt32Binding, UInt32Binding::StaticClass, TEXT("UInt32Binding"), &Z_Registration_Info_UClass_UInt32Binding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInt32Binding), 3861906453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_1243340451(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
