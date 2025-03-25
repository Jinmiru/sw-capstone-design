// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBlendType() {}

// Begin Cross Module References
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Enum EMovieSceneBlendType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneBlendType;
static UEnum* EMovieSceneBlendType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneBlendType"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneBlendType.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneBlendType>()
{
	return EMovieSceneBlendType_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EMovieSceneBlendType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Absolute.Comment", "/** Blends all other weighted values together as an average of the total weight */" },
		{ "Absolute.Name", "EMovieSceneBlendType::Absolute" },
		{ "Absolute.ToolTip", "Blends all other weighted values together as an average of the total weight" },
		{ "Additive.Comment", "/** Applies this value as a sum total of all other additives */" },
		{ "Additive.Name", "EMovieSceneBlendType::Additive" },
		{ "Additive.ToolTip", "Applies this value as a sum total of all other additives" },
		{ "AdditiveFromBase.Comment", "/** Applies this value as an additive equal to the difference between the current value and the first value */" },
		{ "AdditiveFromBase.Name", "EMovieSceneBlendType::AdditiveFromBase" },
		{ "AdditiveFromBase.ToolTip", "Applies this value as an additive equal to the difference between the current value and the first value" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Movie scene blend type enumeration */" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EMovieSceneBlendType::Invalid" },
		{ "ModuleRelativePath", "Public/Evaluation/Blending/MovieSceneBlendType.h" },
		{ "Relative.Comment", "/** Applies this value as a sum total of all other additives and the initial value before the animation */" },
		{ "Relative.Name", "EMovieSceneBlendType::Relative" },
		{ "Relative.ToolTip", "Applies this value as a sum total of all other additives and the initial value before the animation" },
		{ "ToolTip", "Movie scene blend type enumeration" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneBlendType::Invalid", (int64)EMovieSceneBlendType::Invalid },
		{ "EMovieSceneBlendType::Absolute", (int64)EMovieSceneBlendType::Absolute },
		{ "EMovieSceneBlendType::Additive", (int64)EMovieSceneBlendType::Additive },
		{ "EMovieSceneBlendType::Relative", (int64)EMovieSceneBlendType::Relative },
		{ "EMovieSceneBlendType::AdditiveFromBase", (int64)EMovieSceneBlendType::AdditiveFromBase },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneBlendType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EMovieSceneBlendType",
	"EMovieSceneBlendType",
	Z_Construct_UEnum_MovieScene_EMovieSceneBlendType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneBlendType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneBlendType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneBlendType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneBlendType.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneBlendType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneBlendType.InnerSingleton;
}
// End Enum EMovieSceneBlendType

// Begin ScriptStruct FOptionalMovieSceneBlendType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptionalMovieSceneBlendType;
class UScriptStruct* FOptionalMovieSceneBlendType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptionalMovieSceneBlendType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptionalMovieSceneBlendType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("OptionalMovieSceneBlendType"));
	}
	return Z_Registration_Info_UScriptStruct_OptionalMovieSceneBlendType.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FOptionalMovieSceneBlendType>()
{
	return FOptionalMovieSceneBlendType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Optional blend type structure */" },
		{ "ModuleRelativePath", "Public/Evaluation/Blending/MovieSceneBlendType.h" },
		{ "ToolTip", "Optional blend type structure" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
		{ "Category", "Blend Type" },
		{ "Comment", "/** The actual blend type */" },
		{ "ModuleRelativePath", "Public/Evaluation/Blending/MovieSceneBlendType.h" },
		{ "ToolTip", "The actual blend type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "Blend Type" },
		{ "Comment", "/** Boolean indicating whether BlendType is valid */" },
		{ "ModuleRelativePath", "Public/Evaluation/Blending/MovieSceneBlendType.h" },
		{ "ToolTip", "Boolean indicating whether BlendType is valid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendType;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptionalMovieSceneBlendType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptionalMovieSceneBlendType, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendType_MetaData), NewProp_BlendType_MetaData) }; // 2309838689
void Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FOptionalMovieSceneBlendType*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOptionalMovieSceneBlendType), &Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_BlendType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_BlendType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewProp_bIsValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"OptionalMovieSceneBlendType",
	Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::PropPointers),
	sizeof(FOptionalMovieSceneBlendType),
	alignof(FOptionalMovieSceneBlendType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType()
{
	if (!Z_Registration_Info_UScriptStruct_OptionalMovieSceneBlendType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptionalMovieSceneBlendType.InnerSingleton, Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OptionalMovieSceneBlendType.InnerSingleton;
}
// End ScriptStruct FOptionalMovieSceneBlendType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovieSceneBlendType_StaticEnum, TEXT("EMovieSceneBlendType"), &Z_Registration_Info_UEnum_EMovieSceneBlendType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2309838689U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOptionalMovieSceneBlendType::StaticStruct, Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics::NewStructOps, TEXT("OptionalMovieSceneBlendType"), &Z_Registration_Info_UScriptStruct_OptionalMovieSceneBlendType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptionalMovieSceneBlendType), 262689479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h_1612468092(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
