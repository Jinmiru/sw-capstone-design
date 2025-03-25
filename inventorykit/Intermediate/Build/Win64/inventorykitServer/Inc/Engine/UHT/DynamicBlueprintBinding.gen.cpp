// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicBlueprintBinding() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDynamicBlueprintBinding
void UDynamicBlueprintBinding::StaticRegisterNativesUDynamicBlueprintBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicBlueprintBinding);
UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister()
{
	return UDynamicBlueprintBinding::StaticClass();
}
struct Z_Construct_UClass_UDynamicBlueprintBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/DynamicBlueprintBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/DynamicBlueprintBinding.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicBlueprintBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDynamicBlueprintBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicBlueprintBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicBlueprintBinding_Statics::ClassParams = {
	&UDynamicBlueprintBinding::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicBlueprintBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicBlueprintBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDynamicBlueprintBinding()
{
	if (!Z_Registration_Info_UClass_UDynamicBlueprintBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicBlueprintBinding.OuterSingleton, Z_Construct_UClass_UDynamicBlueprintBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicBlueprintBinding.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDynamicBlueprintBinding>()
{
	return UDynamicBlueprintBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicBlueprintBinding);
UDynamicBlueprintBinding::~UDynamicBlueprintBinding() {}
// End Class UDynamicBlueprintBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicBlueprintBinding, UDynamicBlueprintBinding::StaticClass, TEXT("UDynamicBlueprintBinding"), &Z_Registration_Info_UClass_UDynamicBlueprintBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicBlueprintBinding), 3377056213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_2692318487(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DynamicBlueprintBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
