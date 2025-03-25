// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneTimeUnit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTimeUnit() {}

// Begin Cross Module References
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Enum EMovieSceneTimeUnit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneTimeUnit;
static UEnum* EMovieSceneTimeUnit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneTimeUnit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneTimeUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneTimeUnit"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneTimeUnit.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneTimeUnit>()
{
	return EMovieSceneTimeUnit_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Specifies which frame of reference you want to set/get time values in. This allows users to work\n* in reference space without having to manually convert back and forth all of the time.\n*/" },
		{ "DisplayRate.Comment", "/** Display Rate matches the values shown in the UI such as 30fps giving you 30 frames per second. Supports sub-frame values (precision limited to Tick Resolution) */" },
		{ "DisplayRate.Name", "EMovieSceneTimeUnit::DisplayRate" },
		{ "DisplayRate.ToolTip", "Display Rate matches the values shown in the UI such as 30fps giving you 30 frames per second. Supports sub-frame values (precision limited to Tick Resolution)" },
		{ "ModuleRelativePath", "Public/MovieSceneTimeUnit.h" },
		{ "TickResolution.Comment", "/** Tick Resolution is the internal resolution that data is actually stored in, such as 24000 giving you 24,000 frames per second. This is the smallest interval that data can be stored on. */" },
		{ "TickResolution.Name", "EMovieSceneTimeUnit::TickResolution" },
		{ "TickResolution.ToolTip", "Tick Resolution is the internal resolution that data is actually stored in, such as 24000 giving you 24,000 frames per second. This is the smallest interval that data can be stored on." },
		{ "ToolTip", "Specifies which frame of reference you want to set/get time values in. This allows users to work\nin reference space without having to manually convert back and forth all of the time." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneTimeUnit::DisplayRate", (int64)EMovieSceneTimeUnit::DisplayRate },
		{ "EMovieSceneTimeUnit::TickResolution", (int64)EMovieSceneTimeUnit::TickResolution },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EMovieSceneTimeUnit",
	"EMovieSceneTimeUnit",
	Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneTimeUnit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneTimeUnit.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneTimeUnit.InnerSingleton;
}
// End Enum EMovieSceneTimeUnit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTimeUnit_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovieSceneTimeUnit_StaticEnum, TEXT("EMovieSceneTimeUnit"), &Z_Registration_Info_UEnum_EMovieSceneTimeUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4120247350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTimeUnit_h_3444445510(TEXT("/Script/MovieScene"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTimeUnit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTimeUnit_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
