// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_CameraOffset.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_CameraOffset() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_CameraOffset
void UNiagaraStatelessModule_CameraOffset::StaticRegisterNativesUNiagaraStatelessModule_CameraOffset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_CameraOffset);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_NoRegister()
{
	return UNiagaraStatelessModule_CameraOffset::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Camera Offset" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_CameraOffset.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_CameraOffset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "CameraOffset" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_CameraOffset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOffsetDistribution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_CameraOffset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::NewProp_CameraOffsetDistribution = { "CameraOffsetDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_CameraOffset, CameraOffsetDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraOffsetDistribution_MetaData), NewProp_CameraOffsetDistribution_MetaData) }; // 1780836428
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::NewProp_CameraOffsetDistribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::ClassParams = {
	&UNiagaraStatelessModule_CameraOffset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_CameraOffset>()
{
	return UNiagaraStatelessModule_CameraOffset::StaticClass();
}
UNiagaraStatelessModule_CameraOffset::UNiagaraStatelessModule_CameraOffset() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_CameraOffset);
UNiagaraStatelessModule_CameraOffset::~UNiagaraStatelessModule_CameraOffset() {}
// End Class UNiagaraStatelessModule_CameraOffset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CameraOffset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset, UNiagaraStatelessModule_CameraOffset::StaticClass, TEXT("UNiagaraStatelessModule_CameraOffset"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_CameraOffset), 2306603241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CameraOffset_h_640271623(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CameraOffset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CameraOffset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
