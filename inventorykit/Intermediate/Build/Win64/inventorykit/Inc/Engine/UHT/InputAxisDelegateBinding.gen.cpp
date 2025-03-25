// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputAxisDelegateBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInputAxisDelegateBinding();
ENGINE_API UClass* Z_Construct_UClass_UInputAxisDelegateBinding_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FBlueprintInputAxisDelegateBinding
static_assert(std::is_polymorphic<FBlueprintInputAxisDelegateBinding>() == std::is_polymorphic<FBlueprintInputDelegateBinding>(), "USTRUCT FBlueprintInputAxisDelegateBinding cannot be polymorphic unless super FBlueprintInputDelegateBinding is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding;
class UScriptStruct* FBlueprintInputAxisDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputAxisDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputAxisDelegateBinding>()
{
	return FBlueprintInputAxisDelegateBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAxisName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputAxisName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputAxisDelegateBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_InputAxisName = { "InputAxisName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputAxisDelegateBinding, InputAxisName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAxisName_MetaData), NewProp_InputAxisName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputAxisDelegateBinding, FunctionNameToBind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData), NewProp_FunctionNameToBind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_InputAxisName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_FunctionNameToBind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
	&NewStructOps,
	"BlueprintInputAxisDelegateBinding",
	Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::PropPointers),
	sizeof(FBlueprintInputAxisDelegateBinding),
	alignof(FBlueprintInputAxisDelegateBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding.InnerSingleton;
}
// End ScriptStruct FBlueprintInputAxisDelegateBinding

// Begin Class UInputAxisDelegateBinding
void UInputAxisDelegateBinding::StaticRegisterNativesUInputAxisDelegateBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputAxisDelegateBinding);
UClass* Z_Construct_UClass_UInputAxisDelegateBinding_NoRegister()
{
	return UInputAxisDelegateBinding::StaticClass();
}
struct Z_Construct_UClass_UInputAxisDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputAxisDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAxisDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputAxisDelegateBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputAxisDelegateBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputAxisDelegateBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputAxisDelegateBinding_Statics::NewProp_InputAxisDelegateBindings_Inner = { "InputAxisDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding, METADATA_PARAMS(0, nullptr) }; // 2068707027
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputAxisDelegateBinding_Statics::NewProp_InputAxisDelegateBindings = { "InputAxisDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAxisDelegateBinding, InputAxisDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAxisDelegateBindings_MetaData), NewProp_InputAxisDelegateBindings_MetaData) }; // 2068707027
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputAxisDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisDelegateBinding_Statics::NewProp_InputAxisDelegateBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisDelegateBinding_Statics::NewProp_InputAxisDelegateBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisDelegateBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputAxisDelegateBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisDelegateBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputAxisDelegateBinding_Statics::ClassParams = {
	&UInputAxisDelegateBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputAxisDelegateBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisDelegateBinding_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisDelegateBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputAxisDelegateBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputAxisDelegateBinding()
{
	if (!Z_Registration_Info_UClass_UInputAxisDelegateBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputAxisDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputAxisDelegateBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputAxisDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputAxisDelegateBinding>()
{
	return UInputAxisDelegateBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputAxisDelegateBinding);
UInputAxisDelegateBinding::~UInputAxisDelegateBinding() {}
// End Class UInputAxisDelegateBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintInputAxisDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputAxisDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputAxisDelegateBinding), 2068707027U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputAxisDelegateBinding, UInputAxisDelegateBinding::StaticClass, TEXT("UInputAxisDelegateBinding"), &Z_Registration_Info_UClass_UInputAxisDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputAxisDelegateBinding), 2748201446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_1592215773(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
