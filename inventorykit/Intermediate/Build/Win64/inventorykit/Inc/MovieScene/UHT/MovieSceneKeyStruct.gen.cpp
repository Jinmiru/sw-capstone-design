// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneKeyStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneKeyStruct() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FGeneratedMovieSceneKeyStruct();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneKeyStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneKeyStruct;
class UScriptStruct* FMovieSceneKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneKeyStruct.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneKeyStruct>()
{
	return FMovieSceneKeyStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for movie scene section key structs that need to manually\n * have their changes propagated to key values.\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneKeyStruct.h" },
		{ "ToolTip", "Base class for movie scene section key structs that need to manually\nhave their changes propagated to key values." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneKeyStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneKeyStruct",
	nullptr,
	0,
	sizeof(FMovieSceneKeyStruct),
	alignof(FMovieSceneKeyStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneKeyStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneKeyStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneKeyStruct

// Begin ScriptStruct FGeneratedMovieSceneKeyStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeneratedMovieSceneKeyStruct;
class UScriptStruct* FGeneratedMovieSceneKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeneratedMovieSceneKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeneratedMovieSceneKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeneratedMovieSceneKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("GeneratedMovieSceneKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_GeneratedMovieSceneKeyStruct.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FGeneratedMovieSceneKeyStruct>()
{
	return FGeneratedMovieSceneKeyStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeneratedMovieSceneKeyStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneKeyStruct.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeneratedMovieSceneKeyStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeneratedMovieSceneKeyStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"GeneratedMovieSceneKeyStruct",
	nullptr,
	0,
	sizeof(FGeneratedMovieSceneKeyStruct),
	alignof(FGeneratedMovieSceneKeyStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedMovieSceneKeyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeneratedMovieSceneKeyStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeneratedMovieSceneKeyStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeneratedMovieSceneKeyStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeneratedMovieSceneKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FGeneratedMovieSceneKeyStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeneratedMovieSceneKeyStruct.InnerSingleton;
}
// End ScriptStruct FGeneratedMovieSceneKeyStruct

// Begin ScriptStruct FMovieSceneKeyTimeStruct
static_assert(std::is_polymorphic<FMovieSceneKeyTimeStruct>() == std::is_polymorphic<FMovieSceneKeyStruct>(), "USTRUCT FMovieSceneKeyTimeStruct cannot be polymorphic unless super FMovieSceneKeyStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneKeyTimeStruct;
class UScriptStruct* FMovieSceneKeyTimeStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneKeyTimeStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneKeyTimeStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneKeyTimeStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneKeyTimeStruct.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneKeyTimeStruct>()
{
	return FMovieSceneKeyTimeStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneKeyStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/MovieSceneKeyStruct.h" },
		{ "Units", "s" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneKeyTimeStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneKeyTimeStruct, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
	&NewStructOps,
	"MovieSceneKeyTimeStruct",
	Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::PropPointers),
	sizeof(FMovieSceneKeyTimeStruct),
	alignof(FMovieSceneKeyTimeStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneKeyTimeStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneKeyTimeStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneKeyTimeStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneKeyTimeStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics::NewStructOps, TEXT("MovieSceneKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneKeyStruct), 4057961443U) },
		{ FGeneratedMovieSceneKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FGeneratedMovieSceneKeyStruct_Statics::NewStructOps, TEXT("GeneratedMovieSceneKeyStruct"), &Z_Registration_Info_UScriptStruct_GeneratedMovieSceneKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeneratedMovieSceneKeyStruct), 1166059856U) },
		{ FMovieSceneKeyTimeStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::NewStructOps, TEXT("MovieSceneKeyTimeStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneKeyTimeStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneKeyTimeStruct), 3197367711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyStruct_h_1552756261(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneKeyStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
