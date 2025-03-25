// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimationDelegateBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding_NoRegister();
UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetAnimationEvent();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FBlueprintWidgetAnimationDelegateBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding;
class UScriptStruct* FBlueprintWidgetAnimationDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("BlueprintWidgetAnimationDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FBlueprintWidgetAnimationDelegateBinding>()
{
	return FBlueprintWidgetAnimationDelegateBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationToBind_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationToBind;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UserTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintWidgetAnimationDelegateBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintWidgetAnimationDelegateBinding, Action), Z_Construct_UEnum_UMG_EWidgetAnimationEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) }; // 2729152464
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_AnimationToBind = { "AnimationToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintWidgetAnimationDelegateBinding, AnimationToBind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationToBind_MetaData), NewProp_AnimationToBind_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintWidgetAnimationDelegateBinding, FunctionNameToBind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionNameToBind_MetaData), NewProp_FunctionNameToBind_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintWidgetAnimationDelegateBinding, UserTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserTag_MetaData), NewProp_UserTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_AnimationToBind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_FunctionNameToBind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_UserTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"BlueprintWidgetAnimationDelegateBinding",
	Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::PropPointers),
	sizeof(FBlueprintWidgetAnimationDelegateBinding),
	alignof(FBlueprintWidgetAnimationDelegateBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding.InnerSingleton;
}
// End ScriptStruct FBlueprintWidgetAnimationDelegateBinding

// Begin Class UWidgetAnimationDelegateBinding
void UWidgetAnimationDelegateBinding::StaticRegisterNativesUWidgetAnimationDelegateBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetAnimationDelegateBinding);
UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding_NoRegister()
{
	return UWidgetAnimationDelegateBinding::StaticClass();
}
struct Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/WidgetAnimationDelegateBinding.h" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetAnimationDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetAnimationDelegateBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetAnimationDelegateBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetAnimationDelegateBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings_Inner = { "WidgetAnimationDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding, METADATA_PARAMS(0, nullptr) }; // 418238534
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings = { "WidgetAnimationDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetAnimationDelegateBinding, WidgetAnimationDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetAnimationDelegateBindings_MetaData), NewProp_WidgetAnimationDelegateBindings_MetaData) }; // 418238534
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDynamicBlueprintBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::ClassParams = {
	&UWidgetAnimationDelegateBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding()
{
	if (!Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.OuterSingleton, Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetAnimationDelegateBinding>()
{
	return UWidgetAnimationDelegateBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetAnimationDelegateBinding);
UWidgetAnimationDelegateBinding::~UWidgetAnimationDelegateBinding() {}
// End Class UWidgetAnimationDelegateBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintWidgetAnimationDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewStructOps, TEXT("BlueprintWidgetAnimationDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintWidgetAnimationDelegateBinding), 418238534U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetAnimationDelegateBinding, UWidgetAnimationDelegateBinding::StaticClass, TEXT("UWidgetAnimationDelegateBinding"), &Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetAnimationDelegateBinding), 107819058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_2933035814(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
