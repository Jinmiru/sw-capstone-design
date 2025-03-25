// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneColorSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorSection_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneColorKeyStruct
static_assert(std::is_polymorphic<FMovieSceneColorKeyStruct>() == std::is_polymorphic<FMovieSceneKeyStruct>(), "USTRUCT FMovieSceneColorKeyStruct cannot be polymorphic unless super FMovieSceneKeyStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct;
class UScriptStruct* FMovieSceneColorKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneColorKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneColorKeyStruct>()
{
	return FMovieSceneColorKeyStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Proxy structure for color section key data.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "Proxy structure for color section key data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's color value. */" },
		{ "InlineColorPicker", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "The key's color value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's time. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneColorKeyStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneColorKeyStruct, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneColorKeyStruct, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
	&NewStructOps,
	"MovieSceneColorKeyStruct",
	Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::PropPointers),
	sizeof(FMovieSceneColorKeyStruct),
	alignof(FMovieSceneColorKeyStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneColorKeyStruct

// Begin Class UMovieSceneColorSection
void UMovieSceneColorSection::StaticRegisterNativesUMovieSceneColorSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneColorSection);
UClass* Z_Construct_UClass_UMovieSceneColorSection_NoRegister()
{
	return UMovieSceneColorSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneColorSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single floating point section\n */" },
		{ "IncludePath", "Sections/MovieSceneColorSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "A single floating point section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedCurve_MetaData[] = {
		{ "Comment", "/** Red curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "Red curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GreenCurve_MetaData[] = {
		{ "Comment", "/** Green curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "Green curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueCurve_MetaData[] = {
		{ "Comment", "/** Blue curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "Blue curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurve_MetaData[] = {
		{ "Comment", "/** Alpha curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "Alpha curve data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RedCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GreenCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneColorSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_RedCurve = { "RedCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneColorSection, RedCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedCurve_MetaData), NewProp_RedCurve_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_GreenCurve = { "GreenCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneColorSection, GreenCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GreenCurve_MetaData), NewProp_GreenCurve_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_BlueCurve = { "BlueCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneColorSection, BlueCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueCurve_MetaData), NewProp_BlueCurve_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_AlphaCurve = { "AlphaCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneColorSection, AlphaCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaCurve_MetaData), NewProp_AlphaCurve_MetaData) }; // 139010471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneColorSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_RedCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_GreenCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_BlueCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_AlphaCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneColorSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneColorSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneColorSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneColorSection_Statics::ClassParams = {
	&UMovieSceneColorSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneColorSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneColorSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneColorSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneColorSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneColorSection.OuterSingleton, Z_Construct_UClass_UMovieSceneColorSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneColorSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneColorSection>()
{
	return UMovieSceneColorSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneColorSection);
UMovieSceneColorSection::~UMovieSceneColorSection() {}
// End Class UMovieSceneColorSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneColorKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewStructOps, TEXT("MovieSceneColorKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneColorKeyStruct), 1399506959U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneColorSection, UMovieSceneColorSection::StaticClass, TEXT("UMovieSceneColorSection"), &Z_Registration_Info_UClass_UMovieSceneColorSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneColorSection), 268929321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_763172663(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
