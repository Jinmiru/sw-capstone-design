// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/InputDebugKeyDelegateBinding.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDebugKeyDelegateBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputDebugKeyDelegateBinding();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputDebugKeyDelegateBinding_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin ScriptStruct FBlueprintInputDebugKeyDelegateBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputDebugKeyDelegateBinding;
class UScriptStruct* FBlueprintInputDebugKeyDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputDebugKeyDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputDebugKeyDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("BlueprintInputDebugKeyDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputDebugKeyDelegateBinding.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FBlueprintInputDebugKeyDelegateBinding>()
{
	return FBlueprintInputDebugKeyDelegateBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputDebugKeyDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputChord_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputDebugKeyDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputDebugKeyDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputDebugKeyDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputDebugKeyDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputChord;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputKeyEvent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
	static void NewProp_bExecuteWhenPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputDebugKeyDelegateBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::NewProp_InputChord = { "InputChord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputDebugKeyDelegateBinding, InputChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputChord_MetaData), NewProp_InputChord_MetaData) }; // 4109060215
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::NewProp_InputKeyEvent = { "InputKeyEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputDebugKeyDelegateBinding, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputKeyEvent_MetaData), NewProp_InputKeyEvent_MetaData) }; // 2776698617
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputDebugKeyDelegateBinding, FunctionNameToBind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData), NewProp_FunctionNameToBind_MetaData) };
void Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
{
	((FBlueprintInputDebugKeyDelegateBinding*)Obj)->bExecuteWhenPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBlueprintInputDebugKeyDelegateBinding), &Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExecuteWhenPaused_MetaData), NewProp_bExecuteWhenPaused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::NewProp_InputChord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::NewProp_InputKeyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::NewProp_FunctionNameToBind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::NewProp_bExecuteWhenPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"BlueprintInputDebugKeyDelegateBinding",
	Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::PropPointers),
	sizeof(FBlueprintInputDebugKeyDelegateBinding),
	alignof(FBlueprintInputDebugKeyDelegateBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputDebugKeyDelegateBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputDebugKeyDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputDebugKeyDelegateBinding.InnerSingleton;
}
// End ScriptStruct FBlueprintInputDebugKeyDelegateBinding

// Begin Class UInputDebugKeyDelegateBinding
void UInputDebugKeyDelegateBinding::StaticRegisterNativesUInputDebugKeyDelegateBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDebugKeyDelegateBinding);
UClass* Z_Construct_UClass_UInputDebugKeyDelegateBinding_NoRegister()
{
	return UInputDebugKeyDelegateBinding::StaticClass();
}
struct Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InputDebugKeyDelegateBinding.h" },
		{ "ModuleRelativePath", "Public/InputDebugKeyDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDebugKeyDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputDebugKeyDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputDebugKeyDelegateBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputDebugKeyDelegateBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDebugKeyDelegateBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::NewProp_InputDebugKeyDelegateBindings_Inner = { "InputDebugKeyDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding, METADATA_PARAMS(0, nullptr) }; // 3209117256
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::NewProp_InputDebugKeyDelegateBindings = { "InputDebugKeyDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDebugKeyDelegateBinding, InputDebugKeyDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDebugKeyDelegateBindings_MetaData), NewProp_InputDebugKeyDelegateBindings_MetaData) }; // 3209117256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::NewProp_InputDebugKeyDelegateBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::NewProp_InputDebugKeyDelegateBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::ClassParams = {
	&UInputDebugKeyDelegateBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDebugKeyDelegateBinding()
{
	if (!Z_Registration_Info_UClass_UInputDebugKeyDelegateBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDebugKeyDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputDebugKeyDelegateBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDebugKeyDelegateBinding.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputDebugKeyDelegateBinding>()
{
	return UInputDebugKeyDelegateBinding::StaticClass();
}
UInputDebugKeyDelegateBinding::UInputDebugKeyDelegateBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDebugKeyDelegateBinding);
UInputDebugKeyDelegateBinding::~UInputDebugKeyDelegateBinding() {}
// End Class UInputDebugKeyDelegateBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintInputDebugKeyDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputDebugKeyDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputDebugKeyDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputDebugKeyDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputDebugKeyDelegateBinding), 3209117256U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputDebugKeyDelegateBinding, UInputDebugKeyDelegateBinding::StaticClass, TEXT("UInputDebugKeyDelegateBinding"), &Z_Registration_Info_UClass_UInputDebugKeyDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDebugKeyDelegateBinding), 2482863454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_1772533576(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputDebugKeyDelegateBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
