// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputKeyDelegateBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
ENGINE_API UClass* Z_Construct_UClass_UInputKeyDelegateBinding();
ENGINE_API UClass* Z_Construct_UClass_UInputKeyDelegateBinding_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FBlueprintInputKeyDelegateBinding
static_assert(std::is_polymorphic<FBlueprintInputKeyDelegateBinding>() == std::is_polymorphic<FBlueprintInputDelegateBinding>(), "USTRUCT FBlueprintInputKeyDelegateBinding cannot be polymorphic unless super FBlueprintInputDelegateBinding is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding;
class UScriptStruct* FBlueprintInputKeyDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputKeyDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputKeyDelegateBinding>()
{
	return FBlueprintInputKeyDelegateBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputChord_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputChord;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputKeyEvent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputKeyDelegateBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputChord = { "InputChord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputKeyDelegateBinding, InputChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputChord_MetaData), NewProp_InputChord_MetaData) }; // 4109060215
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputKeyEvent = { "InputKeyEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputKeyDelegateBinding, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputKeyEvent_MetaData), NewProp_InputKeyEvent_MetaData) }; // 2776698617
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintInputKeyDelegateBinding, FunctionNameToBind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData), NewProp_FunctionNameToBind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputChord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputKeyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_FunctionNameToBind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
	&NewStructOps,
	"BlueprintInputKeyDelegateBinding",
	Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::PropPointers),
	sizeof(FBlueprintInputKeyDelegateBinding),
	alignof(FBlueprintInputKeyDelegateBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding.InnerSingleton;
}
// End ScriptStruct FBlueprintInputKeyDelegateBinding

// Begin Class UInputKeyDelegateBinding
void UInputKeyDelegateBinding::StaticRegisterNativesUInputKeyDelegateBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputKeyDelegateBinding);
UClass* Z_Construct_UClass_UInputKeyDelegateBinding_NoRegister()
{
	return UInputKeyDelegateBinding::StaticClass();
}
struct Z_Construct_UClass_UInputKeyDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputKeyDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputKeyDelegateBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputKeyDelegateBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputKeyDelegateBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings_Inner = { "InputKeyDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding, METADATA_PARAMS(0, nullptr) }; // 3039933964
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings = { "InputKeyDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputKeyDelegateBinding, InputKeyDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputKeyDelegateBindings_MetaData), NewProp_InputKeyDelegateBindings_MetaData) }; // 3039933964
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputKeyDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputKeyDelegateBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputKeyDelegateBinding_Statics::ClassParams = {
	&UInputKeyDelegateBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputKeyDelegateBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputKeyDelegateBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputKeyDelegateBinding()
{
	if (!Z_Registration_Info_UClass_UInputKeyDelegateBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputKeyDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputKeyDelegateBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputKeyDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputKeyDelegateBinding>()
{
	return UInputKeyDelegateBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputKeyDelegateBinding);
UInputKeyDelegateBinding::~UInputKeyDelegateBinding() {}
// End Class UInputKeyDelegateBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintInputKeyDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputKeyDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputKeyDelegateBinding), 3039933964U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputKeyDelegateBinding, UInputKeyDelegateBinding::StaticClass, TEXT("UInputKeyDelegateBinding"), &Z_Registration_Info_UClass_UInputKeyDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputKeyDelegateBinding), 2827106908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_1013608000(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
