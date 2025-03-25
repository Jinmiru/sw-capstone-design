// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Binding/CheckedStateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckedStateBinding() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
UMG_API UClass* Z_Construct_UClass_UCheckedStateBinding();
UMG_API UClass* Z_Construct_UClass_UCheckedStateBinding_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UCheckedStateBinding Function GetValue
struct Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics
{
	struct CheckedStateBinding_eventGetValue_Parms
	{
		ECheckBoxState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/CheckedStateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CheckedStateBinding_eventGetValue_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(0, nullptr) }; // 274390384
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckedStateBinding, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::CheckedStateBinding_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::CheckedStateBinding_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCheckedStateBinding_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckedStateBinding_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCheckedStateBinding::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECheckBoxState*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class UCheckedStateBinding Function GetValue

// Begin Class UCheckedStateBinding
void UCheckedStateBinding::StaticRegisterNativesUCheckedStateBinding()
{
	UClass* Class = UCheckedStateBinding::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetValue", &UCheckedStateBinding::execGetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheckedStateBinding);
UClass* Z_Construct_UClass_UCheckedStateBinding_NoRegister()
{
	return UCheckedStateBinding::StaticClass();
}
struct Z_Construct_UClass_UCheckedStateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/CheckedStateBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/CheckedStateBinding.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckedStateBinding_GetValue, "GetValue" }, // 525970189
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckedStateBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCheckedStateBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckedStateBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckedStateBinding_Statics::ClassParams = {
	&UCheckedStateBinding::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckedStateBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UCheckedStateBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCheckedStateBinding()
{
	if (!Z_Registration_Info_UClass_UCheckedStateBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckedStateBinding.OuterSingleton, Z_Construct_UClass_UCheckedStateBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCheckedStateBinding.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UCheckedStateBinding>()
{
	return UCheckedStateBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckedStateBinding);
UCheckedStateBinding::~UCheckedStateBinding() {}
// End Class UCheckedStateBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCheckedStateBinding, UCheckedStateBinding::StaticClass, TEXT("UCheckedStateBinding"), &Z_Registration_Info_UClass_UCheckedStateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckedStateBinding), 3378078861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_3222620436(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
