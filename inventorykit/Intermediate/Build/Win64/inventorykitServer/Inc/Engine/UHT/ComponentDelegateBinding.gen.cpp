// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentDelegateBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UComponentDelegateBinding();
ENGINE_API UClass* Z_Construct_UClass_UComponentDelegateBinding_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FBlueprintComponentDelegateBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding;
class UScriptStruct* FBlueprintComponentDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintComponentDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintComponentDelegateBinding>()
{
	return FBlueprintComponentDelegateBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Entry for a delegate to assign after a blueprint has been instanced */" },
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
		{ "ToolTip", "Entry for a delegate to assign after a blueprint has been instanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentPropertyName_MetaData[] = {
		{ "Comment", "/** Name of component property that contains delegate we want to assign to. */" },
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
		{ "ToolTip", "Name of component property that contains delegate we want to assign to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyName_MetaData[] = {
		{ "Comment", "/** Name of property on the component that we want to assign to. */" },
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
		{ "ToolTip", "Name of property on the component that we want to assign to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
		{ "Comment", "/** Name of function that we want to bind to the delegate. */" },
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
		{ "ToolTip", "Name of function that we want to bind to the delegate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentPropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DelegatePropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintComponentDelegateBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_ComponentPropertyName = { "ComponentPropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintComponentDelegateBinding, ComponentPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentPropertyName_MetaData), NewProp_ComponentPropertyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_DelegatePropertyName = { "DelegatePropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintComponentDelegateBinding, DelegatePropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelegatePropertyName_MetaData), NewProp_DelegatePropertyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintComponentDelegateBinding, FunctionNameToBind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData), NewProp_FunctionNameToBind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_ComponentPropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_DelegatePropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_FunctionNameToBind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BlueprintComponentDelegateBinding",
	Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::PropPointers),
	sizeof(FBlueprintComponentDelegateBinding),
	alignof(FBlueprintComponentDelegateBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding.InnerSingleton;
}
// End ScriptStruct FBlueprintComponentDelegateBinding

// Begin Class UComponentDelegateBinding
void UComponentDelegateBinding::StaticRegisterNativesUComponentDelegateBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentDelegateBinding);
UClass* Z_Construct_UClass_UComponentDelegateBinding_NoRegister()
{
	return UComponentDelegateBinding::StaticClass();
}
struct Z_Construct_UClass_UComponentDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ComponentDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentDelegateBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentDelegateBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentDelegateBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings_Inner = { "ComponentDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding, METADATA_PARAMS(0, nullptr) }; // 1565584655
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings = { "ComponentDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComponentDelegateBinding, ComponentDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentDelegateBindings_MetaData), NewProp_ComponentDelegateBindings_MetaData) }; // 1565584655
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponentDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComponentDelegateBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComponentDelegateBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDynamicBlueprintBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComponentDelegateBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentDelegateBinding_Statics::ClassParams = {
	&UComponentDelegateBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UComponentDelegateBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UComponentDelegateBinding_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComponentDelegateBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UComponentDelegateBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComponentDelegateBinding()
{
	if (!Z_Registration_Info_UClass_UComponentDelegateBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentDelegateBinding.OuterSingleton, Z_Construct_UClass_UComponentDelegateBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComponentDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UComponentDelegateBinding>()
{
	return UComponentDelegateBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentDelegateBinding);
UComponentDelegateBinding::~UComponentDelegateBinding() {}
// End Class UComponentDelegateBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintComponentDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewStructOps, TEXT("BlueprintComponentDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintComponentDelegateBinding), 1565584655U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComponentDelegateBinding, UComponentDelegateBinding::StaticClass, TEXT("UComponentDelegateBinding"), &Z_Registration_Info_UClass_UComponentDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentDelegateBinding), 2436406445U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_2213270031(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
