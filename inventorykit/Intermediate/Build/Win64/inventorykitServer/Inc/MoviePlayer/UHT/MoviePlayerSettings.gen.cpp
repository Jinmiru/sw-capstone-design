// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MoviePlayer/Public/MoviePlayerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePlayerSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVIEPLAYER_API UClass* Z_Construct_UClass_UMoviePlayerSettings();
MOVIEPLAYER_API UClass* Z_Construct_UClass_UMoviePlayerSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoviePlayer();
// End Cross Module References

// Begin Class UMoviePlayerSettings
void UMoviePlayerSettings::StaticRegisterNativesUMoviePlayerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePlayerSettings);
UClass* Z_Construct_UClass_UMoviePlayerSettings_NoRegister()
{
	return UMoviePlayerSettings::StaticClass();
}
struct Z_Construct_UClass_UMoviePlayerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Windows target platform.\n */" },
		{ "IncludePath", "MoviePlayerSettings.h" },
		{ "ModuleRelativePath", "Public/MoviePlayerSettings.h" },
		{ "ToolTip", "Implements the settings for the Windows target platform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForMoviesToComplete_MetaData[] = {
		{ "Category", "Movies" },
		{ "Comment", "/** If enabled, The game waits for startup movies to complete even if loading has finished. */" },
		{ "ModuleRelativePath", "Public/MoviePlayerSettings.h" },
		{ "ToolTip", "If enabled, The game waits for startup movies to complete even if loading has finished." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMoviesAreSkippable_MetaData[] = {
		{ "Category", "Movies" },
		{ "Comment", "/** If enabled, Startup movies can be skipped by the user when a mouse button is pressed. */" },
		{ "ModuleRelativePath", "Public/MoviePlayerSettings.h" },
		{ "ToolTip", "If enabled, Startup movies can be skipped by the user when a mouse button is pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupMovies_MetaData[] = {
		{ "Category", "Movies" },
		{ "Comment", "/** Movies to play on startup. Note that these must be in your game's Game/Content/Movies directory. */" },
		{ "ModuleRelativePath", "Public/MoviePlayerSettings.h" },
		{ "ToolTip", "Movies to play on startup. Note that these must be in your game's Game/Content/Movies directory." },
	};
#endif // WITH_METADATA
	static void NewProp_bWaitForMoviesToComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForMoviesToComplete;
	static void NewProp_bMoviesAreSkippable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoviesAreSkippable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartupMovies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupMovies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePlayerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bWaitForMoviesToComplete_SetBit(void* Obj)
{
	((UMoviePlayerSettings*)Obj)->bWaitForMoviesToComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bWaitForMoviesToComplete = { "bWaitForMoviesToComplete", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoviePlayerSettings), &Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bWaitForMoviesToComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForMoviesToComplete_MetaData), NewProp_bWaitForMoviesToComplete_MetaData) };
void Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bMoviesAreSkippable_SetBit(void* Obj)
{
	((UMoviePlayerSettings*)Obj)->bMoviesAreSkippable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bMoviesAreSkippable = { "bMoviesAreSkippable", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoviePlayerSettings), &Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bMoviesAreSkippable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMoviesAreSkippable_MetaData), NewProp_bMoviesAreSkippable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_StartupMovies_Inner = { "StartupMovies", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_StartupMovies = { "StartupMovies", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePlayerSettings, StartupMovies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupMovies_MetaData), NewProp_StartupMovies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePlayerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bWaitForMoviesToComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bMoviesAreSkippable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_StartupMovies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_StartupMovies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePlayerSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoviePlayerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MoviePlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePlayerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePlayerSettings_Statics::ClassParams = {
	&UMoviePlayerSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoviePlayerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePlayerSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePlayerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePlayerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoviePlayerSettings()
{
	if (!Z_Registration_Info_UClass_UMoviePlayerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePlayerSettings.OuterSingleton, Z_Construct_UClass_UMoviePlayerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoviePlayerSettings.OuterSingleton;
}
template<> MOVIEPLAYER_API UClass* StaticClass<UMoviePlayerSettings>()
{
	return UMoviePlayerSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePlayerSettings);
UMoviePlayerSettings::~UMoviePlayerSettings() {}
// End Class UMoviePlayerSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePlayerSettings, UMoviePlayerSettings::StaticClass, TEXT("UMoviePlayerSettings"), &Z_Registration_Info_UClass_UMoviePlayerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePlayerSettings), 1908187844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_1503794031(TEXT("/Script/MoviePlayer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MoviePlayer_Public_MoviePlayerSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
