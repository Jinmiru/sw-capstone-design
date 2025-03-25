// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingChannel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin Class UMovieSceneScriptingKey
void UMovieSceneScriptingKey::StaticRegisterNativesUMovieSceneScriptingKey()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingKey);
UClass* Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister()
{
	return UMovieSceneScriptingKey::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScriptingKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingChannel.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingChannel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneScriptingKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingKey_Statics::ClassParams = {
	&UMovieSceneScriptingKey::StaticClass,
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
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScriptingKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScriptingKey()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScriptingKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScriptingKey.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingKey>()
{
	return UMovieSceneScriptingKey::StaticClass();
}
UMovieSceneScriptingKey::UMovieSceneScriptingKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingKey);
UMovieSceneScriptingKey::~UMovieSceneScriptingKey() {}
// End Class UMovieSceneScriptingKey

// Begin Class UMovieSceneScriptingChannel
void UMovieSceneScriptingChannel::StaticRegisterNativesUMovieSceneScriptingChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingChannel);
UClass* Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister()
{
	return UMovieSceneScriptingChannel::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScriptingChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingChannel.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[] = {
		{ "Category", "Sequencer|Keys" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingChannel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneScriptingChannel, ChannelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelName_MetaData), NewProp_ChannelName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::NewProp_ChannelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::ClassParams = {
	&UMovieSceneScriptingChannel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::PropPointers),
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScriptingChannel()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScriptingChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingChannel.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScriptingChannel.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingChannel>()
{
	return UMovieSceneScriptingChannel::StaticClass();
}
UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingChannel);
UMovieSceneScriptingChannel::~UMovieSceneScriptingChannel() {}
// End Class UMovieSceneScriptingChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingChannel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneScriptingKey, UMovieSceneScriptingKey::StaticClass, TEXT("UMovieSceneScriptingKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingKey), 1160916959U) },
		{ Z_Construct_UClass_UMovieSceneScriptingChannel, UMovieSceneScriptingChannel::StaticClass, TEXT("UMovieSceneScriptingChannel"), &Z_Registration_Info_UClass_UMovieSceneScriptingChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingChannel), 3184323054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingChannel_h_3796988735(TEXT("/Script/SequencerScripting"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingChannel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
