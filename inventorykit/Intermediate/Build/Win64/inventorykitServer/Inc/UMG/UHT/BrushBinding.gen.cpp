// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Binding/BrushBinding.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushBinding() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UBrushBinding();
UMG_API UClass* Z_Construct_UClass_UBrushBinding_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UBrushBinding Function GetValue
struct Z_Construct_UFunction_UBrushBinding_GetValue_Statics
{
	struct BrushBinding_eventGetValue_Parms
	{
		FSlateBrush ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/BrushBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBrushBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrushBinding_eventGetValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrushBinding_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrushBinding_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrushBinding_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrushBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrushBinding, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UBrushBinding_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrushBinding_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrushBinding_GetValue_Statics::BrushBinding_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrushBinding_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrushBinding_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrushBinding_GetValue_Statics::BrushBinding_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrushBinding_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrushBinding_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrushBinding::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateBrush*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class UBrushBinding Function GetValue

// Begin Class UBrushBinding
void UBrushBinding::StaticRegisterNativesUBrushBinding()
{
	UClass* Class = UBrushBinding::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetValue", &UBrushBinding::execGetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushBinding);
UClass* Z_Construct_UClass_UBrushBinding_NoRegister()
{
	return UBrushBinding::StaticClass();
}
struct Z_Construct_UClass_UBrushBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/BrushBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/BrushBinding.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBrushBinding_GetValue, "GetValue" }, // 4288455938
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBrushBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushBinding_Statics::ClassParams = {
	&UBrushBinding::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UBrushBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBrushBinding()
{
	if (!Z_Registration_Info_UClass_UBrushBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushBinding.OuterSingleton, Z_Construct_UClass_UBrushBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBrushBinding.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UBrushBinding>()
{
	return UBrushBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushBinding);
UBrushBinding::~UBrushBinding() {}
// End Class UBrushBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBrushBinding, UBrushBinding::StaticClass, TEXT("UBrushBinding"), &Z_Registration_Info_UClass_UBrushBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushBinding), 2708180285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_3460005306(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
