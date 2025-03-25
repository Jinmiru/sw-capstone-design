// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedInputActionDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputActionDelegateBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputActionDelegateBinding();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputActionDelegateBinding_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputActionValueBinding();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputActionValueBinding_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin ScriptStruct FBlueprintEnhancedInputActionBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintEnhancedInputActionBinding;
class UScriptStruct* FBlueprintEnhancedInputActionBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintEnhancedInputActionBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintEnhancedInputActionBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("BlueprintEnhancedInputActionBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintEnhancedInputActionBinding.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FBlueprintEnhancedInputActionBinding>()
{
	return FBlueprintEnhancedInputActionBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnhancedInputActionDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnhancedInputActionDelegateBinding.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnhancedInputActionDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnhancedInputActionDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintEnhancedInputActionBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintEnhancedInputActionBinding, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintEnhancedInputActionBinding, TriggerEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEvent_MetaData), NewProp_TriggerEvent_MetaData) }; // 3771639830
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintEnhancedInputActionBinding, FunctionNameToBind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData), NewProp_FunctionNameToBind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::NewProp_TriggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::NewProp_TriggerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::NewProp_FunctionNameToBind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"BlueprintEnhancedInputActionBinding",
	Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::PropPointers),
	sizeof(FBlueprintEnhancedInputActionBinding),
	alignof(FBlueprintEnhancedInputActionBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintEnhancedInputActionBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintEnhancedInputActionBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintEnhancedInputActionBinding.InnerSingleton;
}
// End ScriptStruct FBlueprintEnhancedInputActionBinding

// Begin Class UEnhancedInputActionDelegateBinding
void UEnhancedInputActionDelegateBinding::StaticRegisterNativesUEnhancedInputActionDelegateBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputActionDelegateBinding);
UClass* Z_Construct_UClass_UEnhancedInputActionDelegateBinding_NoRegister()
{
	return UEnhancedInputActionDelegateBinding::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnhancedInputActionDelegateBinding.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputActionDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnhancedInputActionDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionDelegateBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActionDelegateBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputActionDelegateBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings_Inner = { "InputActionDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding, METADATA_PARAMS(0, nullptr) }; // 1159795005
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings = { "InputActionDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputActionDelegateBinding, InputActionDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionDelegateBindings_MetaData), NewProp_InputActionDelegateBindings_MetaData) }; // 1159795005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::ClassParams = {
	&UEnhancedInputActionDelegateBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputActionDelegateBinding()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputActionDelegateBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputActionDelegateBinding.OuterSingleton, Z_Construct_UClass_UEnhancedInputActionDelegateBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputActionDelegateBinding.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputActionDelegateBinding>()
{
	return UEnhancedInputActionDelegateBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputActionDelegateBinding);
UEnhancedInputActionDelegateBinding::~UEnhancedInputActionDelegateBinding() {}
// End Class UEnhancedInputActionDelegateBinding

// Begin Class UEnhancedInputActionValueBinding
void UEnhancedInputActionValueBinding::StaticRegisterNativesUEnhancedInputActionValueBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputActionValueBinding);
UClass* Z_Construct_UClass_UEnhancedInputActionValueBinding_NoRegister()
{
	return UEnhancedInputActionValueBinding::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnhancedInputActionDelegateBinding.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputActionDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionValueBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnhancedInputActionDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionValueBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActionValueBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputActionValueBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::NewProp_InputActionValueBindings_Inner = { "InputActionValueBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding, METADATA_PARAMS(0, nullptr) }; // 1159795005
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::NewProp_InputActionValueBindings = { "InputActionValueBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputActionValueBinding, InputActionValueBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionValueBindings_MetaData), NewProp_InputActionValueBindings_MetaData) }; // 1159795005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::NewProp_InputActionValueBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::NewProp_InputActionValueBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::ClassParams = {
	&UEnhancedInputActionValueBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputActionValueBinding()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputActionValueBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputActionValueBinding.OuterSingleton, Z_Construct_UClass_UEnhancedInputActionValueBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputActionValueBinding.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputActionValueBinding>()
{
	return UEnhancedInputActionValueBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputActionValueBinding);
UEnhancedInputActionValueBinding::~UEnhancedInputActionValueBinding() {}
// End Class UEnhancedInputActionValueBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputActionDelegateBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintEnhancedInputActionBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintEnhancedInputActionBinding_Statics::NewStructOps, TEXT("BlueprintEnhancedInputActionBinding"), &Z_Registration_Info_UScriptStruct_BlueprintEnhancedInputActionBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintEnhancedInputActionBinding), 1159795005U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputActionDelegateBinding, UEnhancedInputActionDelegateBinding::StaticClass, TEXT("UEnhancedInputActionDelegateBinding"), &Z_Registration_Info_UClass_UEnhancedInputActionDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputActionDelegateBinding), 1035062021U) },
		{ Z_Construct_UClass_UEnhancedInputActionValueBinding, UEnhancedInputActionValueBinding::StaticClass, TEXT("UEnhancedInputActionValueBinding"), &Z_Registration_Info_UClass_UEnhancedInputActionValueBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputActionValueBinding), 1944904105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputActionDelegateBinding_h_2155879931(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputActionDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputActionDelegateBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputActionDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputActionDelegateBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
