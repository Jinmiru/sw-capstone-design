// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessEmitterTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessEmitterTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessEmitterDefault();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessEmitterDefault_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessEmitterExample1();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessEmitterExample1_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessEmitterTemplate();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessEmitterTemplate_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessEmitterTemplate
void UNiagaraStatelessEmitterTemplate::StaticRegisterNativesUNiagaraStatelessEmitterTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessEmitterTemplate);
UClass* Z_Construct_UClass_UNiagaraStatelessEmitterTemplate_NoRegister()
{
	return UNiagaraStatelessEmitterTemplate::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessEmitterTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Stateless/NiagaraStatelessEmitterTemplate.h" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitterTemplate.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessEmitterTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraStatelessEmitterTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessEmitterTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessEmitterTemplate_Statics::ClassParams = {
	&UNiagaraStatelessEmitterTemplate::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessEmitterTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessEmitterTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessEmitterTemplate()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessEmitterTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessEmitterTemplate>()
{
	return UNiagaraStatelessEmitterTemplate::StaticClass();
}
UNiagaraStatelessEmitterTemplate::UNiagaraStatelessEmitterTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessEmitterTemplate);
UNiagaraStatelessEmitterTemplate::~UNiagaraStatelessEmitterTemplate() {}
// End Class UNiagaraStatelessEmitterTemplate

// Begin Class UNiagaraStatelessEmitterDefault
void UNiagaraStatelessEmitterDefault::StaticRegisterNativesUNiagaraStatelessEmitterDefault()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessEmitterDefault);
UClass* Z_Construct_UClass_UNiagaraStatelessEmitterDefault_NoRegister()
{
	return UNiagaraStatelessEmitterDefault::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessEmitterDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Statless" },
		{ "DisplayName", "Emitter Example 0" },
		{ "IncludePath", "Stateless/NiagaraStatelessEmitterTemplate.h" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitterTemplate.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessEmitterDefault>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraStatelessEmitterDefault_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessEmitterTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessEmitterDefault_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessEmitterDefault_Statics::ClassParams = {
	&UNiagaraStatelessEmitterDefault::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessEmitterDefault_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessEmitterDefault_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessEmitterDefault()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessEmitterDefault_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessEmitterDefault>()
{
	return UNiagaraStatelessEmitterDefault::StaticClass();
}
UNiagaraStatelessEmitterDefault::UNiagaraStatelessEmitterDefault(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessEmitterDefault);
UNiagaraStatelessEmitterDefault::~UNiagaraStatelessEmitterDefault() {}
// End Class UNiagaraStatelessEmitterDefault

// Begin Class UNiagaraStatelessEmitterExample1
void UNiagaraStatelessEmitterExample1::StaticRegisterNativesUNiagaraStatelessEmitterExample1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessEmitterExample1);
UClass* Z_Construct_UClass_UNiagaraStatelessEmitterExample1_NoRegister()
{
	return UNiagaraStatelessEmitterExample1::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessEmitterExample1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Statless" },
		{ "DisplayName", "Emitter Example 1" },
		{ "IncludePath", "Stateless/NiagaraStatelessEmitterTemplate.h" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessEmitterTemplate.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessEmitterExample1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraStatelessEmitterExample1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessEmitterTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessEmitterExample1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessEmitterExample1_Statics::ClassParams = {
	&UNiagaraStatelessEmitterExample1::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessEmitterExample1_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessEmitterExample1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessEmitterExample1()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessEmitterExample1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessEmitterExample1.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessEmitterExample1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessEmitterExample1.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessEmitterExample1>()
{
	return UNiagaraStatelessEmitterExample1::StaticClass();
}
UNiagaraStatelessEmitterExample1::UNiagaraStatelessEmitterExample1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessEmitterExample1);
UNiagaraStatelessEmitterExample1::~UNiagaraStatelessEmitterExample1() {}
// End Class UNiagaraStatelessEmitterExample1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitterTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessEmitterTemplate, UNiagaraStatelessEmitterTemplate::StaticClass, TEXT("UNiagaraStatelessEmitterTemplate"), &Z_Registration_Info_UClass_UNiagaraStatelessEmitterTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessEmitterTemplate), 2179989944U) },
		{ Z_Construct_UClass_UNiagaraStatelessEmitterDefault, UNiagaraStatelessEmitterDefault::StaticClass, TEXT("UNiagaraStatelessEmitterDefault"), &Z_Registration_Info_UClass_UNiagaraStatelessEmitterDefault, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessEmitterDefault), 1018294786U) },
		{ Z_Construct_UClass_UNiagaraStatelessEmitterExample1, UNiagaraStatelessEmitterExample1::StaticClass, TEXT("UNiagaraStatelessEmitterExample1"), &Z_Registration_Info_UClass_UNiagaraStatelessEmitterExample1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessEmitterExample1), 3805530713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitterTemplate_h_1230911505(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitterTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitterTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
