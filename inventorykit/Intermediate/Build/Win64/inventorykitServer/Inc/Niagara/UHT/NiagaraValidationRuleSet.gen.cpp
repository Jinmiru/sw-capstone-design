// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraValidationRuleSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraValidationRuleSet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRuleSet();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraValidationRuleSet
void UNiagaraValidationRuleSet::StaticRegisterNativesUNiagaraValidationRuleSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRuleSet);
UClass* Z_Construct_UClass_UNiagaraValidationRuleSet_NoRegister()
{
	return UNiagaraValidationRuleSet::StaticClass();
}
struct Z_Construct_UClass_UNiagaraValidationRuleSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A set of reusable validation rules. */" },
		{ "IncludePath", "NiagaraValidationRuleSet.h" },
		{ "ModuleRelativePath", "Classes/NiagaraValidationRuleSet.h" },
		{ "ToolTip", "A set of reusable validation rules." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRules_Inner_MetaData[] = {
		{ "Category", "Validation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraValidationRuleSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRules_MetaData[] = {
		{ "Category", "Validation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraValidationRuleSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidationRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRuleSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules_Inner = { "ValidationRules", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraValidationRule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationRules_Inner_MetaData), NewProp_ValidationRules_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules = { "ValidationRules", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraValidationRuleSet, ValidationRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationRules_MetaData), NewProp_ValidationRules_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::NewProp_ValidationRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::ClassParams = {
	&UNiagaraValidationRuleSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraValidationRuleSet()
{
	if (!Z_Registration_Info_UClass_UNiagaraValidationRuleSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRuleSet.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRuleSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraValidationRuleSet.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraValidationRuleSet>()
{
	return UNiagaraValidationRuleSet::StaticClass();
}
UNiagaraValidationRuleSet::UNiagaraValidationRuleSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRuleSet);
UNiagaraValidationRuleSet::~UNiagaraValidationRuleSet() {}
// End Class UNiagaraValidationRuleSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraValidationRuleSet, UNiagaraValidationRuleSet::StaticClass, TEXT("UNiagaraValidationRuleSet"), &Z_Registration_Info_UClass_UNiagaraValidationRuleSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRuleSet), 2287800368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_3902200350(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRuleSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
