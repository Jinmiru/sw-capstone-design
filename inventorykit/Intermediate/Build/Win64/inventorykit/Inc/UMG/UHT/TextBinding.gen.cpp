// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Binding/TextBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBinding() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
UMG_API UClass* Z_Construct_UClass_UTextBinding();
UMG_API UClass* Z_Construct_UClass_UTextBinding_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UTextBinding Function GetStringValue
struct Z_Construct_UFunction_UTextBinding_GetStringValue_Statics
{
	struct TextBinding_eventGetStringValue_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/TextBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBinding_eventGetStringValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBinding, nullptr, "GetStringValue", nullptr, nullptr, Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::TextBinding_eventGetStringValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::TextBinding_eventGetStringValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBinding_GetStringValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBinding::execGetStringValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringValue();
	P_NATIVE_END;
}
// End Class UTextBinding Function GetStringValue

// Begin Class UTextBinding Function GetTextValue
struct Z_Construct_UFunction_UTextBinding_GetTextValue_Statics
{
	struct TextBinding_eventGetTextValue_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/TextBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextBinding_eventGetTextValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBinding, nullptr, "GetTextValue", nullptr, nullptr, Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::TextBinding_eventGetTextValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::TextBinding_eventGetTextValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextBinding_GetTextValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextBinding::execGetTextValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTextValue();
	P_NATIVE_END;
}
// End Class UTextBinding Function GetTextValue

// Begin Class UTextBinding
void UTextBinding::StaticRegisterNativesUTextBinding()
{
	UClass* Class = UTextBinding::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStringValue", &UTextBinding::execGetStringValue },
		{ "GetTextValue", &UTextBinding::execGetTextValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextBinding);
UClass* Z_Construct_UClass_UTextBinding_NoRegister()
{
	return UTextBinding::StaticClass();
}
struct Z_Construct_UClass_UTextBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/TextBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/TextBinding.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextBinding_GetStringValue, "GetStringValue" }, // 2507263813
		{ &Z_Construct_UFunction_UTextBinding_GetTextValue, "GetTextValue" }, // 2356025191
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTextBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextBinding_Statics::ClassParams = {
	&UTextBinding::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextBinding()
{
	if (!Z_Registration_Info_UClass_UTextBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextBinding.OuterSingleton, Z_Construct_UClass_UTextBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextBinding.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UTextBinding>()
{
	return UTextBinding::StaticClass();
}
UTextBinding::UTextBinding() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBinding);
UTextBinding::~UTextBinding() {}
// End Class UTextBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextBinding, UTextBinding::StaticClass, TEXT("UTextBinding"), &Z_Registration_Info_UClass_UTextBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextBinding), 4158769481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_2430062685(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
