// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/VoiceChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceChannel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UChannel();
ENGINE_API UClass* Z_Construct_UClass_UVoiceChannel();
ENGINE_API UClass* Z_Construct_UClass_UVoiceChannel_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UVoiceChannel
void UVoiceChannel::StaticRegisterNativesUVoiceChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoiceChannel);
UClass* Z_Construct_UClass_UVoiceChannel_NoRegister()
{
	return UVoiceChannel::StaticClass();
}
struct Z_Construct_UClass_UVoiceChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/VoiceChannel.h" },
		{ "ModuleRelativePath", "Classes/Engine/VoiceChannel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoiceChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoiceChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoiceChannel_Statics::ClassParams = {
	&UVoiceChannel::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoiceChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoiceChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoiceChannel()
{
	if (!Z_Registration_Info_UClass_UVoiceChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoiceChannel.OuterSingleton, Z_Construct_UClass_UVoiceChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoiceChannel.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVoiceChannel>()
{
	return UVoiceChannel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceChannel);
UVoiceChannel::~UVoiceChannel() {}
// End Class UVoiceChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoiceChannel, UVoiceChannel::StaticClass, TEXT("UVoiceChannel"), &Z_Registration_Info_UClass_UVoiceChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoiceChannel), 2194299206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_3109040543(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
