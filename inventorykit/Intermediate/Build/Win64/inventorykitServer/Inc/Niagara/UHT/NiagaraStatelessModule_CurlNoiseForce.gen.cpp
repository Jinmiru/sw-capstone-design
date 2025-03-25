// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_CurlNoiseForce.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_CurlNoiseForce() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENSM_NoiseMode();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENSM_NoiseMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENSM_NoiseMode;
static UEnum* ENSM_NoiseMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENSM_NoiseMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENSM_NoiseMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENSM_NoiseMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENSM_NoiseMode"));
	}
	return Z_Registration_Info_UEnum_ENSM_NoiseMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENSM_NoiseMode>()
{
	return ENSM_NoiseMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENSM_NoiseMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "JacobNoise.Name", "ENSM_NoiseMode::JacobNoise" },
		{ "LUTJacob.Name", "ENSM_NoiseMode::LUTJacob" },
		{ "LUTJacobBicubic.Name", "ENSM_NoiseMode::LUTJacobBicubic" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_CurlNoiseForce.h" },
		{ "VectorField.Name", "ENSM_NoiseMode::VectorField" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENSM_NoiseMode::VectorField", (int64)ENSM_NoiseMode::VectorField },
		{ "ENSM_NoiseMode::JacobNoise", (int64)ENSM_NoiseMode::JacobNoise },
		{ "ENSM_NoiseMode::LUTJacob", (int64)ENSM_NoiseMode::LUTJacob },
		{ "ENSM_NoiseMode::LUTJacobBicubic", (int64)ENSM_NoiseMode::LUTJacobBicubic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENSM_NoiseMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENSM_NoiseMode",
	"ENSM_NoiseMode",
	Z_Construct_UEnum_Niagara_ENSM_NoiseMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENSM_NoiseMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENSM_NoiseMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENSM_NoiseMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENSM_NoiseMode()
{
	if (!Z_Registration_Info_UEnum_ENSM_NoiseMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENSM_NoiseMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENSM_NoiseMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENSM_NoiseMode.InnerSingleton;
}
// End Enum ENSM_NoiseMode

// Begin Class UNiagaraStatelessModule_CurlNoiseForce
void UNiagaraStatelessModule_CurlNoiseForce::StaticRegisterNativesUNiagaraStatelessModule_CurlNoiseForce()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_CurlNoiseForce);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_NoRegister()
{
	return UNiagaraStatelessModule_CurlNoiseForce::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Curl Noise Force" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_CurlNoiseForce.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_CurlNoiseForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseAmplitude_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_CurlNoiseForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFrequency_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_CurlNoiseForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_CurlNoiseForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTexture_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.VectorField,/Script/Engine.VolumeTexture,/Script/Engine.TextureRenderTargetVolume" },
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_CurlNoiseForce.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseAmplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseFrequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NoiseMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NoiseMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_CurlNoiseForce>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::NewProp_NoiseAmplitude = { "NoiseAmplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_CurlNoiseForce, NoiseAmplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseAmplitude_MetaData), NewProp_NoiseAmplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::NewProp_NoiseFrequency = { "NoiseFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_CurlNoiseForce, NoiseFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseFrequency_MetaData), NewProp_NoiseFrequency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::NewProp_NoiseMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::NewProp_NoiseMode = { "NoiseMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_CurlNoiseForce, NoiseMode), Z_Construct_UEnum_Niagara_ENSM_NoiseMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseMode_MetaData), NewProp_NoiseMode_MetaData) }; // 2651766444
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::NewProp_NoiseTexture = { "NoiseTexture", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_CurlNoiseForce, NoiseTexture), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseTexture_MetaData), NewProp_NoiseTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::NewProp_NoiseAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::NewProp_NoiseFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::NewProp_NoiseMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::NewProp_NoiseMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::NewProp_NoiseTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::ClassParams = {
	&UNiagaraStatelessModule_CurlNoiseForce::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_CurlNoiseForce>()
{
	return UNiagaraStatelessModule_CurlNoiseForce::StaticClass();
}
UNiagaraStatelessModule_CurlNoiseForce::UNiagaraStatelessModule_CurlNoiseForce() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_CurlNoiseForce);
UNiagaraStatelessModule_CurlNoiseForce::~UNiagaraStatelessModule_CurlNoiseForce() {}
// End Class UNiagaraStatelessModule_CurlNoiseForce

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENSM_NoiseMode_StaticEnum, TEXT("ENSM_NoiseMode"), &Z_Registration_Info_UEnum_ENSM_NoiseMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2651766444U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce, UNiagaraStatelessModule_CurlNoiseForce::StaticClass, TEXT("UNiagaraStatelessModule_CurlNoiseForce"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_CurlNoiseForce), 708925918U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h_855353075(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
