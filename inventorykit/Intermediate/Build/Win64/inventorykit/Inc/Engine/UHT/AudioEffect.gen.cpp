// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/AudioEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioEffect() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioEffectParameters();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioReverbEffect();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAudioReverbEffect
static_assert(std::is_polymorphic<FAudioReverbEffect>() == std::is_polymorphic<FAudioEffectParameters>(), "USTRUCT FAudioReverbEffect cannot be polymorphic unless super FAudioEffectParameters is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioReverbEffect;
class UScriptStruct* FAudioReverbEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioReverbEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioReverbEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioReverbEffect, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AudioReverbEffect"));
	}
	return Z_Registration_Info_UScriptStruct_AudioReverbEffect.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioReverbEffect>()
{
	return FAudioReverbEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioReverbEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioEffect.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioReverbEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAudioEffectParameters,
	&NewStructOps,
	"AudioReverbEffect",
	nullptr,
	0,
	sizeof(FAudioReverbEffect),
	alignof(FAudioReverbEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioReverbEffect()
{
	if (!Z_Registration_Info_UScriptStruct_AudioReverbEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioReverbEffect.InnerSingleton, Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioReverbEffect.InnerSingleton;
}
// End ScriptStruct FAudioReverbEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AudioEffect_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioReverbEffect::StaticStruct, Z_Construct_UScriptStruct_FAudioReverbEffect_Statics::NewStructOps, TEXT("AudioReverbEffect"), &Z_Registration_Info_UScriptStruct_AudioReverbEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioReverbEffect), 1913604293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AudioEffect_h_2772202002(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AudioEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AudioEffect_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
