// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Private/Evaluation/MovieScene3DPathTemplate.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DPathTemplate() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieScene3DPathSectionTemplate
static_assert(std::is_polymorphic<FMovieScene3DPathSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieScene3DPathSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScene3DPathSectionTemplate;
class UScriptStruct* FMovieScene3DPathSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScene3DPathSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScene3DPathSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DPathSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScene3DPathSectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScene3DPathSectionTemplate>()
{
	return FMovieScene3DPathSectionTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathBindingID_MetaData[] = {
		{ "Comment", "/** The object binding ID of the path we should attach to */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "The object binding ID of the path we should attach to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimingCurve_MetaData[] = {
		{ "Comment", "/** The timing curve */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "The timing curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontAxisEnum_MetaData[] = {
		{ "Comment", "/** Front Axis */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "Front Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpAxisEnum_MetaData[] = {
		{ "Comment", "/** Up Axis */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "Up Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[] = {
		{ "Comment", "/** Follow Curve */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "Follow Curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
		{ "Comment", "/** Reverse Timing */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "Reverse Timing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceUpright_MetaData[] = {
		{ "Comment", "/** Force Upright */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "Force Upright" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathBindingID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimingCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FrontAxisEnum_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FrontAxisEnum;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpAxisEnum_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpAxisEnum;
	static void NewProp_bFollow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollow;
	static void NewProp_bReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
	static void NewProp_bForceUpright_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUpright;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DPathSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_PathBindingID = { "PathBindingID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScene3DPathSectionTemplate, PathBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathBindingID_MetaData), NewProp_PathBindingID_MetaData) }; // 2701874266
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_TimingCurve = { "TimingCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScene3DPathSectionTemplate, TimingCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimingCurve_MetaData), NewProp_TimingCurve_MetaData) }; // 139010471
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_FrontAxisEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_FrontAxisEnum = { "FrontAxisEnum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScene3DPathSectionTemplate, FrontAxisEnum), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontAxisEnum_MetaData), NewProp_FrontAxisEnum_MetaData) }; // 1484932074
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_UpAxisEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_UpAxisEnum = { "UpAxisEnum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScene3DPathSectionTemplate, UpAxisEnum), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpAxisEnum_MetaData), NewProp_UpAxisEnum_MetaData) }; // 1484932074
void Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bFollow_SetBit(void* Obj)
{
	((FMovieScene3DPathSectionTemplate*)Obj)->bFollow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieScene3DPathSectionTemplate), &Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollow_MetaData), NewProp_bFollow_MetaData) };
void Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bReverse_SetBit(void* Obj)
{
	((FMovieScene3DPathSectionTemplate*)Obj)->bReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieScene3DPathSectionTemplate), &Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverse_MetaData), NewProp_bReverse_MetaData) };
void Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bForceUpright_SetBit(void* Obj)
{
	((FMovieScene3DPathSectionTemplate*)Obj)->bForceUpright = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bForceUpright = { "bForceUpright", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieScene3DPathSectionTemplate), &Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bForceUpright_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceUpright_MetaData), NewProp_bForceUpright_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_PathBindingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_TimingCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_FrontAxisEnum_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_FrontAxisEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_UpAxisEnum_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_UpAxisEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bFollow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bForceUpright,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieScene3DPathSectionTemplate",
	Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::PropPointers),
	sizeof(FMovieScene3DPathSectionTemplate),
	alignof(FMovieScene3DPathSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScene3DPathSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScene3DPathSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieScene3DPathSectionTemplate.InnerSingleton;
}
// End ScriptStruct FMovieScene3DPathSectionTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScene3DPathTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieScene3DPathSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewStructOps, TEXT("MovieScene3DPathSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieScene3DPathSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScene3DPathSectionTemplate), 1601608334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScene3DPathTemplate_h_1746702737(TEXT("/Script/MovieSceneTracks"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScene3DPathTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScene3DPathTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
