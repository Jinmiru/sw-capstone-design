// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/InputVectorAxisDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputVectorAxisDelegateBinding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding();
ENGINE_API UClass* Z_Construct_UClass_UInputVectorAxisDelegateBinding();
ENGINE_API UClass* Z_Construct_UClass_UInputVectorAxisDelegateBinding_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UInputVectorAxisDelegateBinding
void UInputVectorAxisDelegateBinding::StaticRegisterNativesUInputVectorAxisDelegateBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputVectorAxisDelegateBinding);
UClass* Z_Construct_UClass_UInputVectorAxisDelegateBinding_NoRegister()
{
	return UInputVectorAxisDelegateBinding::StaticClass();
}
struct Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputVectorAxisDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputVectorAxisDelegateBinding.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputVectorAxisDelegateBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputAxisKeyDelegateBinding,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::ClassParams = {
	&UInputVectorAxisDelegateBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputVectorAxisDelegateBinding()
{
	if (!Z_Registration_Info_UClass_UInputVectorAxisDelegateBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputVectorAxisDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputVectorAxisDelegateBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputVectorAxisDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInputVectorAxisDelegateBinding>()
{
	return UInputVectorAxisDelegateBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputVectorAxisDelegateBinding);
UInputVectorAxisDelegateBinding::~UInputVectorAxisDelegateBinding() {}
// End Class UInputVectorAxisDelegateBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputVectorAxisDelegateBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputVectorAxisDelegateBinding, UInputVectorAxisDelegateBinding::StaticClass, TEXT("UInputVectorAxisDelegateBinding"), &Z_Registration_Info_UClass_UInputVectorAxisDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputVectorAxisDelegateBinding), 2955171693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputVectorAxisDelegateBinding_h_3150741604(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputVectorAxisDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputVectorAxisDelegateBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
