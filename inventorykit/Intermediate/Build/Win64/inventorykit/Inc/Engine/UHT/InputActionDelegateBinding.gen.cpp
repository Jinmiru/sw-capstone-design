// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputActionDelegateBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInputActionDelegateBinding();
ENGINE_API UClass* Z_Construct_UClass_UInputActionDelegateBinding_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FBlueprintInputActionDelegateBinding
static_assert(std::is_polymorphic<FBlueprintInputActionDelegateBinding>() == std::is_polymorphic<FBlueprintInputDelegateBinding>(), "USTRUCT FBlueprintInputActionDelegateBinding cannot be polymorphic unless super FBlueprintInputDelegateBinding is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding;
class UScriptStruct* FBlueprintInputActionDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputActionDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputActionDelegateBinding>()
{
	return FBlueprintInputActionDelegateBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputActionName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputKeyEvent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputActionDelegateBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputActionName = { "InputActionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputActionDelegateBinding, InputActionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionName_MetaData), NewProp_InputActionName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputKeyEvent = { "InputKeyEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputActionDelegateBinding, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputKeyEvent_MetaData), NewProp_InputKeyEvent_MetaData) }; // 2776698617
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputActionDelegateBinding, FunctionNameToBind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData), NewProp_FunctionNameToBind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputKeyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_FunctionNameToBind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
	&NewStructOps,
	"BlueprintInputActionDelegateBinding",
	Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::PropPointers),
	sizeof(FBlueprintInputActionDelegateBinding),
	alignof(FBlueprintInputActionDelegateBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding.InnerSingleton;
}
// End ScriptStruct FBlueprintInputActionDelegateBinding

// Begin Class UInputActionDelegateBinding
void UInputActionDelegateBinding::StaticRegisterNativesUInputActionDelegateBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputActionDelegateBinding);
UClass* Z_Construct_UClass_UInputActionDelegateBinding_NoRegister()
{
	return UInputActionDelegateBinding::StaticClass();
}
struct Z_Construct_UClass_UInputActionDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputActionDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionDelegateBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActionDelegateBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputActionDelegateBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings_Inner = { "InputActionDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding, METADATA_PARAMS(0, nullptr) }; // 1536061336
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings = { "InputActionDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputActionDelegateBinding, InputActionDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionDelegateBindings_MetaData), NewProp_InputActionDelegateBindings_MetaData) }; // 1536061336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputActionDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionDelegateBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputActionDelegateBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionDelegateBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputActionDelegateBinding_Statics::ClassParams = {
	&UInputActionDelegateBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputActionDelegateBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionDelegateBinding_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionDelegateBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputActionDelegateBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputActionDelegateBinding()
{
	if (!Z_Registration_Info_UClass_UInputActionDelegateBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputActionDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputActionDelegateBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputActionDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputActionDelegateBinding>()
{
	return UInputActionDelegateBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputActionDelegateBinding);
UInputActionDelegateBinding::~UInputActionDelegateBinding() {}
// End Class UInputActionDelegateBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintInputActionDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputActionDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputActionDelegateBinding), 1536061336U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputActionDelegateBinding, UInputActionDelegateBinding::StaticClass, TEXT("UInputActionDelegateBinding"), &Z_Registration_Info_UClass_UInputActionDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputActionDelegateBinding), 3509685000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_3596394481(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
