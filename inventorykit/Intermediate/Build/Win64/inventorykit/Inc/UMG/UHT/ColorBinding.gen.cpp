// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Binding/ColorBinding.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorBinding() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
UMG_API UClass* Z_Construct_UClass_UColorBinding();
UMG_API UClass* Z_Construct_UClass_UColorBinding_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UColorBinding Function GetLinearValue
struct Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics
{
	struct ColorBinding_eventGetLinearValue_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/ColorBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ColorBinding_eventGetLinearValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorBinding, nullptr, "GetLinearValue", nullptr, nullptr, Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::ColorBinding_eventGetLinearValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::ColorBinding_eventGetLinearValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UColorBinding_GetLinearValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UColorBinding::execGetLinearValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetLinearValue();
	P_NATIVE_END;
}
// End Class UColorBinding Function GetLinearValue

// Begin Class UColorBinding Function GetSlateValue
struct Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics
{
	struct ColorBinding_eventGetSlateValue_Parms
	{
		FSlateColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/ColorBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ColorBinding_eventGetSlateValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(0, nullptr) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorBinding, nullptr, "GetSlateValue", nullptr, nullptr, Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::ColorBinding_eventGetSlateValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::ColorBinding_eventGetSlateValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UColorBinding_GetSlateValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UColorBinding::execGetSlateValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateColor*)Z_Param__Result=P_THIS->GetSlateValue();
	P_NATIVE_END;
}
// End Class UColorBinding Function GetSlateValue

// Begin Class UColorBinding
void UColorBinding::StaticRegisterNativesUColorBinding()
{
	UClass* Class = UColorBinding::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLinearValue", &UColorBinding::execGetLinearValue },
		{ "GetSlateValue", &UColorBinding::execGetSlateValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColorBinding);
UClass* Z_Construct_UClass_UColorBinding_NoRegister()
{
	return UColorBinding::StaticClass();
}
struct Z_Construct_UClass_UColorBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/ColorBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/ColorBinding.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorBinding_GetLinearValue, "GetLinearValue" }, // 2789108889
		{ &Z_Construct_UFunction_UColorBinding_GetSlateValue, "GetSlateValue" }, // 3278633768
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UColorBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UColorBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UColorBinding_Statics::ClassParams = {
	&UColorBinding::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UColorBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UColorBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UColorBinding()
{
	if (!Z_Registration_Info_UClass_UColorBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorBinding.OuterSingleton, Z_Construct_UClass_UColorBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UColorBinding.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UColorBinding>()
{
	return UColorBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UColorBinding);
UColorBinding::~UColorBinding() {}
// End Class UColorBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UColorBinding, UColorBinding::StaticClass, TEXT("UColorBinding"), &Z_Registration_Info_UClass_UColorBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorBinding), 1460063047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_3612381532(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
