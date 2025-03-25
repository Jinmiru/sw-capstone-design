// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/KeyParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyParams() {}

// Begin Cross Module References
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Enum EMovieSceneKeyInterpolation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneKeyInterpolation;
static UEnum* EMovieSceneKeyInterpolation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneKeyInterpolation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneKeyInterpolation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneKeyInterpolation"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneKeyInterpolation.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneKeyInterpolation>()
{
	return EMovieSceneKeyInterpolation_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/** Auto. */" },
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "EMovieSceneKeyInterpolation::Auto" },
		{ "Auto.ToolTip", "Auto." },
		{ "Break.Comment", "/** Break. */" },
		{ "Break.DisplayName", "Break" },
		{ "Break.Name", "EMovieSceneKeyInterpolation::Break" },
		{ "Break.ToolTip", "Break." },
		{ "Constant.Comment", "/** Constant. */" },
		{ "Constant.DisplayName", "Constant" },
		{ "Constant.Name", "EMovieSceneKeyInterpolation::Constant" },
		{ "Constant.ToolTip", "Constant." },
		{ "Linear.Comment", "/** Linear. */" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Name", "EMovieSceneKeyInterpolation::Linear" },
		{ "Linear.ToolTip", "Linear." },
		{ "ModuleRelativePath", "Public/KeyParams.h" },
		{ "SmartAuto.Comment", "/** Smart Auto. */" },
		{ "SmartAuto.DisplayName", "Smart Auto" },
		{ "SmartAuto.Name", "EMovieSceneKeyInterpolation::SmartAuto" },
		{ "SmartAuto.ToolTip", "Smart Auto." },
		{ "User.Comment", "/** User. */" },
		{ "User.DisplayName", "User" },
		{ "User.Name", "EMovieSceneKeyInterpolation::User" },
		{ "User.ToolTip", "User." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneKeyInterpolation::Auto", (int64)EMovieSceneKeyInterpolation::Auto },
		{ "EMovieSceneKeyInterpolation::User", (int64)EMovieSceneKeyInterpolation::User },
		{ "EMovieSceneKeyInterpolation::Break", (int64)EMovieSceneKeyInterpolation::Break },
		{ "EMovieSceneKeyInterpolation::Linear", (int64)EMovieSceneKeyInterpolation::Linear },
		{ "EMovieSceneKeyInterpolation::Constant", (int64)EMovieSceneKeyInterpolation::Constant },
		{ "EMovieSceneKeyInterpolation::SmartAuto", (int64)EMovieSceneKeyInterpolation::SmartAuto },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EMovieSceneKeyInterpolation",
	"EMovieSceneKeyInterpolation",
	Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneKeyInterpolation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneKeyInterpolation.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneKeyInterpolation.InnerSingleton;
}
// End Enum EMovieSceneKeyInterpolation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_KeyParams_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovieSceneKeyInterpolation_StaticEnum, TEXT("EMovieSceneKeyInterpolation"), &Z_Registration_Info_UEnum_EMovieSceneKeyInterpolation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2572474140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_KeyParams_h_1073131790(TEXT("/Script/MovieScene"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_KeyParams_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_KeyParams_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
