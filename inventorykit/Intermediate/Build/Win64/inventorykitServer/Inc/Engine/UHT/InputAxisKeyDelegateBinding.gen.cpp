// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/InputAxisKeyDelegateBinding.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputAxisKeyDelegateBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding();
ENGINE_API UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FBlueprintInputAxisKeyDelegateBinding
static_assert(std::is_polymorphic<FBlueprintInputAxisKeyDelegateBinding>() == std::is_polymorphic<FBlueprintInputDelegateBinding>(), "USTRUCT FBlueprintInputAxisKeyDelegateBinding cannot be polymorphic unless super FBlueprintInputDelegateBinding is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding;
class UScriptStruct* FBlueprintInputAxisKeyDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputAxisKeyDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputAxisKeyDelegateBinding>()
{
	return FBlueprintInputAxisKeyDelegateBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputAxisKeyDelegateBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_AxisKey = { "AxisKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputAxisKeyDelegateBinding, AxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisKey_MetaData), NewProp_AxisKey_MetaData) }; // 658672854
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputAxisKeyDelegateBinding, FunctionNameToBind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData), NewProp_FunctionNameToBind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_AxisKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_FunctionNameToBind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
	&NewStructOps,
	"BlueprintInputAxisKeyDelegateBinding",
	Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::PropPointers),
	sizeof(FBlueprintInputAxisKeyDelegateBinding),
	alignof(FBlueprintInputAxisKeyDelegateBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding.InnerSingleton;
}
// End ScriptStruct FBlueprintInputAxisKeyDelegateBinding

// Begin Class UInputAxisKeyDelegateBinding
void UInputAxisKeyDelegateBinding::StaticRegisterNativesUInputAxisKeyDelegateBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputAxisKeyDelegateBinding);
UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding_NoRegister()
{
	return UInputAxisKeyDelegateBinding::StaticClass();
}
struct Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputAxisKeyDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAxisKeyDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputAxisKeyDelegateBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputAxisKeyDelegateBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputAxisKeyDelegateBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings_Inner = { "InputAxisKeyDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding, METADATA_PARAMS(0, nullptr) }; // 120404012
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings = { "InputAxisKeyDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputAxisKeyDelegateBinding, InputAxisKeyDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAxisKeyDelegateBindings_MetaData), NewProp_InputAxisKeyDelegateBindings_MetaData) }; // 120404012
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::ClassParams = {
	&UInputAxisKeyDelegateBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding()
{
	if (!Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputAxisKeyDelegateBinding>()
{
	return UInputAxisKeyDelegateBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputAxisKeyDelegateBinding);
UInputAxisKeyDelegateBinding::~UInputAxisKeyDelegateBinding() {}
// End Class UInputAxisKeyDelegateBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintInputAxisKeyDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputAxisKeyDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputAxisKeyDelegateBinding), 120404012U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputAxisKeyDelegateBinding, UInputAxisKeyDelegateBinding::StaticClass, TEXT("UInputAxisKeyDelegateBinding"), &Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputAxisKeyDelegateBinding), 3602329472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_2239331426(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
