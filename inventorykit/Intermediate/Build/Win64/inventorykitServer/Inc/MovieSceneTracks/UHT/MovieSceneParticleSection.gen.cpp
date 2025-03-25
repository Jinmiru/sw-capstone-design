// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneParticleSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParticleSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParticleSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParticleSection_NoRegister();
MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EParticleKey();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParticleChannel();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Enum EParticleKey
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleKey;
static UEnum* EParticleKey_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EParticleKey.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EParticleKey.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EParticleKey, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EParticleKey"));
	}
	return Z_Registration_Info_UEnum_EParticleKey.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EParticleKey>()
{
	return EParticleKey_StaticEnum();
}
struct Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Activate.Name", "EParticleKey::Activate" },
		{ "Comment", "/**\n * Defines the types of particle keys.\n */" },
		{ "Deactivate.Name", "EParticleKey::Deactivate" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
		{ "ToolTip", "Defines the types of particle keys." },
		{ "Trigger.Name", "EParticleKey::Trigger" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EParticleKey::Activate", (int64)EParticleKey::Activate },
		{ "EParticleKey::Deactivate", (int64)EParticleKey::Deactivate },
		{ "EParticleKey::Trigger", (int64)EParticleKey::Trigger },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	"EParticleKey",
	"EParticleKey",
	Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieSceneTracks_EParticleKey()
{
	if (!Z_Registration_Info_UEnum_EParticleKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleKey.InnerSingleton, Z_Construct_UEnum_MovieSceneTracks_EParticleKey_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EParticleKey.InnerSingleton;
}
// End Enum EParticleKey

// Begin ScriptStruct FMovieSceneParticleChannel
static_assert(std::is_polymorphic<FMovieSceneParticleChannel>() == std::is_polymorphic<FMovieSceneByteChannel>(), "USTRUCT FMovieSceneParticleChannel cannot be polymorphic unless super FMovieSceneByteChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel;
class UScriptStruct* FMovieSceneParticleChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParticleChannel, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneParticleChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneParticleChannel>()
{
	return FMovieSceneParticleChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneParticleChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneByteChannel,
	&NewStructOps,
	"MovieSceneParticleChannel",
	nullptr,
	0,
	sizeof(FMovieSceneParticleChannel),
	alignof(FMovieSceneParticleChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParticleChannel()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel.InnerSingleton;
}
// End ScriptStruct FMovieSceneParticleChannel

// Begin Class UMovieSceneParticleSection
void UMovieSceneParticleSection::StaticRegisterNativesUMovieSceneParticleSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneParticleSection);
UClass* Z_Construct_UClass_UMovieSceneParticleSection_NoRegister()
{
	return UMovieSceneParticleSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneParticleSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Particle section, for particle toggling and triggering.\n */" },
		{ "IncludePath", "Sections/MovieSceneParticleSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
		{ "ToolTip", "Particle section, for particle toggling and triggering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleKeys_MetaData[] = {
		{ "Comment", "/** Curve containing the particle keys. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
		{ "ToolTip", "Curve containing the particle keys." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneParticleSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParticleSection_Statics::NewProp_ParticleKeys = { "ParticleKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneParticleSection, ParticleKeys), Z_Construct_UScriptStruct_FMovieSceneParticleChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleKeys_MetaData), NewProp_ParticleKeys_MetaData) }; // 1173361643
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneParticleSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParticleSection_Statics::NewProp_ParticleKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneParticleSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneParticleSection_Statics::ClassParams = {
	&UMovieSceneParticleSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneParticleSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleSection_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneParticleSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneParticleSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneParticleSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneParticleSection.OuterSingleton, Z_Construct_UClass_UMovieSceneParticleSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneParticleSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneParticleSection>()
{
	return UMovieSceneParticleSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParticleSection);
UMovieSceneParticleSection::~UMovieSceneParticleSection() {}
// End Class UMovieSceneParticleSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EParticleKey_StaticEnum, TEXT("EParticleKey"), &Z_Registration_Info_UEnum_EParticleKey, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 870093678U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneParticleChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::NewStructOps, TEXT("MovieSceneParticleChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneParticleChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneParticleChannel), 1173361643U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneParticleSection, UMovieSceneParticleSection::StaticClass, TEXT("UMovieSceneParticleSection"), &Z_Registration_Info_UClass_UMovieSceneParticleSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneParticleSection), 2849601884U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_938438686(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
