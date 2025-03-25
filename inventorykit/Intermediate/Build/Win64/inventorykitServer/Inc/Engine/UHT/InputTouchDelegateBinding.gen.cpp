// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/InputTouchDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputTouchDelegateBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
ENGINE_API UClass* Z_Construct_UClass_UInputTouchDelegateBinding();
ENGINE_API UClass* Z_Construct_UClass_UInputTouchDelegateBinding_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FBlueprintInputTouchDelegateBinding
static_assert(std::is_polymorphic<FBlueprintInputTouchDelegateBinding>() == std::is_polymorphic<FBlueprintInputDelegateBinding>(), "USTRUCT FBlueprintInputTouchDelegateBinding cannot be polymorphic unless super FBlueprintInputDelegateBinding is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding;
class UScriptStruct* FBlueprintInputTouchDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputTouchDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputTouchDelegateBinding>()
{
	return FBlueprintInputTouchDelegateBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputKeyEvent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputTouchDelegateBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_InputKeyEvent = { "InputKeyEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputTouchDelegateBinding, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputKeyEvent_MetaData), NewProp_InputKeyEvent_MetaData) }; // 2776698617
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputTouchDelegateBinding, FunctionNameToBind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData), NewProp_FunctionNameToBind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_InputKeyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_FunctionNameToBind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
	&NewStructOps,
	"BlueprintInputTouchDelegateBinding",
	Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::PropPointers),
	sizeof(FBlueprintInputTouchDelegateBinding),
	alignof(FBlueprintInputTouchDelegateBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding.InnerSingleton;
}
// End ScriptStruct FBlueprintInputTouchDelegateBinding

// Begin Class UInputTouchDelegateBinding
void UInputTouchDelegateBinding::StaticRegisterNativesUInputTouchDelegateBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTouchDelegateBinding);
UClass* Z_Construct_UClass_UInputTouchDelegateBinding_NoRegister()
{
	return UInputTouchDelegateBinding::StaticClass();
}
struct Z_Construct_UClass_UInputTouchDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputTouchDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTouchDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTouchDelegateBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputTouchDelegateBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTouchDelegateBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings_Inner = { "InputTouchDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding, METADATA_PARAMS(0, nullptr) }; // 2168270748
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings = { "InputTouchDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputTouchDelegateBinding, InputTouchDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTouchDelegateBindings_MetaData), NewProp_InputTouchDelegateBindings_MetaData) }; // 2168270748
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTouchDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputTouchDelegateBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTouchDelegateBinding_Statics::ClassParams = {
	&UInputTouchDelegateBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputTouchDelegateBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputTouchDelegateBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputTouchDelegateBinding()
{
	if (!Z_Registration_Info_UClass_UInputTouchDelegateBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTouchDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputTouchDelegateBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputTouchDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputTouchDelegateBinding>()
{
	return UInputTouchDelegateBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTouchDelegateBinding);
UInputTouchDelegateBinding::~UInputTouchDelegateBinding() {}
// End Class UInputTouchDelegateBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintInputTouchDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputTouchDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputTouchDelegateBinding), 2168270748U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputTouchDelegateBinding, UInputTouchDelegateBinding::StaticClass, TEXT("UInputTouchDelegateBinding"), &Z_Registration_Info_UClass_UInputTouchDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTouchDelegateBinding), 3576243477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_1291639189(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
