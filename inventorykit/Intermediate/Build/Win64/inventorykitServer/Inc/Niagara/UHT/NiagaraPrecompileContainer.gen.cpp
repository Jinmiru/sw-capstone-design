// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/NiagaraPrecompileContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraPrecompileContainer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPrecompileContainer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPrecompileContainer_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraPrecompileContainer
void UNiagaraPrecompileContainer::StaticRegisterNativesUNiagaraPrecompileContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPrecompileContainer);
UClass* Z_Construct_UClass_UNiagaraPrecompileContainer_NoRegister()
{
	return UNiagaraPrecompileContainer::StaticClass();
}
struct Z_Construct_UClass_UNiagaraPrecompileContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraPrecompileContainer.h" },
		{ "ModuleRelativePath", "Internal/NiagaraPrecompileContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scripts_MetaData[] = {
		{ "ModuleRelativePath", "Internal/NiagaraPrecompileContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[] = {
		{ "ModuleRelativePath", "Internal/NiagaraPrecompileContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scripts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Scripts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_System;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPrecompileContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts_Inner = { "Scripts", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts = { "Scripts", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPrecompileContainer, Scripts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scripts_MetaData), NewProp_Scripts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPrecompileContainer, System), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_System_MetaData), NewProp_System_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_Scripts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::NewProp_System,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::ClassParams = {
	&UNiagaraPrecompileContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraPrecompileContainer()
{
	if (!Z_Registration_Info_UClass_UNiagaraPrecompileContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPrecompileContainer.OuterSingleton, Z_Construct_UClass_UNiagaraPrecompileContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraPrecompileContainer.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraPrecompileContainer>()
{
	return UNiagaraPrecompileContainer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPrecompileContainer);
UNiagaraPrecompileContainer::~UNiagaraPrecompileContainer() {}
// End Class UNiagaraPrecompileContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraPrecompileContainer, UNiagaraPrecompileContainer::StaticClass, TEXT("UNiagaraPrecompileContainer"), &Z_Registration_Info_UClass_UNiagaraPrecompileContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPrecompileContainer), 3069079860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h_2857983070(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraPrecompileContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
