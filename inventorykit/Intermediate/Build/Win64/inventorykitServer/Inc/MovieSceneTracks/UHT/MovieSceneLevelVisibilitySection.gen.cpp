// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneLevelVisibilitySection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLevelVisibilitySection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister();
MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Enum ELevelVisibility
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelVisibility;
static UEnum* ELevelVisibility_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELevelVisibility.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELevelVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ELevelVisibility"));
	}
	return Z_Registration_Info_UEnum_ELevelVisibility.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<ELevelVisibility>()
{
	return ELevelVisibility_StaticEnum();
}
struct Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Visibility options for the level visibility section.\n */" },
		{ "Hidden.Comment", "/** The streamed levels should be hidden. */" },
		{ "Hidden.Name", "ELevelVisibility::Hidden" },
		{ "Hidden.ToolTip", "The streamed levels should be hidden." },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ToolTip", "Visibility options for the level visibility section." },
		{ "Visible.Comment", "/** The streamed levels should be visible. */" },
		{ "Visible.Name", "ELevelVisibility::Visible" },
		{ "Visible.ToolTip", "The streamed levels should be visible." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELevelVisibility::Visible", (int64)ELevelVisibility::Visible },
		{ "ELevelVisibility::Hidden", (int64)ELevelVisibility::Hidden },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	"ELevelVisibility",
	"ELevelVisibility",
	Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility()
{
	if (!Z_Registration_Info_UEnum_ELevelVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelVisibility.InnerSingleton, Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELevelVisibility.InnerSingleton;
}
// End Enum ELevelVisibility

// Begin Class UMovieSceneLevelVisibilitySection Function GetLevelNames
struct Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics
{
	struct MovieSceneLevelVisibilitySection_eventGetLevelNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneLevelVisibilitySection_eventGetLevelNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneLevelVisibilitySection, nullptr, "GetLevelNames", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::MovieSceneLevelVisibilitySection_eventGetLevelNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::MovieSceneLevelVisibilitySection_eventGetLevelNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneLevelVisibilitySection::execGetLevelNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetLevelNames();
	P_NATIVE_END;
}
// End Class UMovieSceneLevelVisibilitySection Function GetLevelNames

// Begin Class UMovieSceneLevelVisibilitySection Function GetVisibility
struct Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics
{
	struct MovieSceneLevelVisibilitySection_eventGetVisibility_Parms
	{
		ELevelVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneLevelVisibilitySection_eventGetVisibility_Parms, ReturnValue), Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility, METADATA_PARAMS(0, nullptr) }; // 125220631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneLevelVisibilitySection, nullptr, "GetVisibility", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::MovieSceneLevelVisibilitySection_eventGetVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::MovieSceneLevelVisibilitySection_eventGetVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneLevelVisibilitySection::execGetVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ELevelVisibility*)Z_Param__Result=P_THIS->GetVisibility();
	P_NATIVE_END;
}
// End Class UMovieSceneLevelVisibilitySection Function GetVisibility

// Begin Class UMovieSceneLevelVisibilitySection Function SetLevelNames
struct Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics
{
	struct MovieSceneLevelVisibilitySection_eventSetLevelNames_Parms
	{
		TArray<FName> InLevelNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLevelNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InLevelNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InLevelNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::NewProp_InLevelNames_Inner = { "InLevelNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::NewProp_InLevelNames = { "InLevelNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneLevelVisibilitySection_eventSetLevelNames_Parms, InLevelNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLevelNames_MetaData), NewProp_InLevelNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::NewProp_InLevelNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::NewProp_InLevelNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneLevelVisibilitySection, nullptr, "SetLevelNames", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::MovieSceneLevelVisibilitySection_eventSetLevelNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::MovieSceneLevelVisibilitySection_eventSetLevelNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneLevelVisibilitySection::execSetLevelNames)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_InLevelNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLevelNames(Z_Param_Out_InLevelNames);
	P_NATIVE_END;
}
// End Class UMovieSceneLevelVisibilitySection Function SetLevelNames

// Begin Class UMovieSceneLevelVisibilitySection Function SetVisibility
struct Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics
{
	struct MovieSceneLevelVisibilitySection_eventSetVisibility_Parms
	{
		ELevelVisibility InVisibility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneLevelVisibilitySection_eventSetVisibility_Parms, InVisibility), Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility, METADATA_PARAMS(0, nullptr) }; // 125220631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::NewProp_InVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::NewProp_InVisibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneLevelVisibilitySection, nullptr, "SetVisibility", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::MovieSceneLevelVisibilitySection_eventSetVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::MovieSceneLevelVisibilitySection_eventSetVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneLevelVisibilitySection::execSetVisibility)
{
	P_GET_ENUM(ELevelVisibility,Z_Param_InVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVisibility(ELevelVisibility(Z_Param_InVisibility));
	P_NATIVE_END;
}
// End Class UMovieSceneLevelVisibilitySection Function SetVisibility

// Begin Class UMovieSceneLevelVisibilitySection
void UMovieSceneLevelVisibilitySection::StaticRegisterNativesUMovieSceneLevelVisibilitySection()
{
	UClass* Class = UMovieSceneLevelVisibilitySection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLevelNames", &UMovieSceneLevelVisibilitySection::execGetLevelNames },
		{ "GetVisibility", &UMovieSceneLevelVisibilitySection::execGetVisibility },
		{ "SetLevelNames", &UMovieSceneLevelVisibilitySection::execSetLevelNames },
		{ "SetVisibility", &UMovieSceneLevelVisibilitySection::execSetVisibility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLevelVisibilitySection);
UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister()
{
	return UMovieSceneLevelVisibilitySection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A section for use with the movie scene level visibility track, which controls streamed level visibility.\n */" },
		{ "IncludePath", "Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ToolTip", "A section for use with the movie scene level visibility track, which controls streamed level visibility." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[] = {
		{ "Category", "LevelVisibility" },
		{ "Comment", "/** Whether or not the levels in this section should be visible or hidden. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ToolTip", "Whether or not the levels in this section should be visible or hidden." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelNames_MetaData[] = {
		{ "Category", "LevelVisibility" },
		{ "Comment", "/** The short names of the levels who's visibility is controlled by this section. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ToolTip", "The short names of the levels who's visibility is controlled by this section." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames, "GetLevelNames" }, // 3926256327
		{ &Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility, "GetVisibility" }, // 125379373
		{ &Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames, "SetLevelNames" }, // 3215379253
		{ &Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility, "SetVisibility" }, // 1030894926
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLevelVisibilitySection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLevelVisibilitySection, Visibility), Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visibility_MetaData), NewProp_Visibility_MetaData) }; // 125220631
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames_Inner = { "LevelNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames = { "LevelNames", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneLevelVisibilitySection, LevelNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelNames_MetaData), NewProp_LevelNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneLevelVisibilitySection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::ClassParams = {
	&UMovieSceneLevelVisibilitySection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySection.OuterSingleton, Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneLevelVisibilitySection>()
{
	return UMovieSceneLevelVisibilitySection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLevelVisibilitySection);
UMovieSceneLevelVisibilitySection::~UMovieSceneLevelVisibilitySection() {}
// End Class UMovieSceneLevelVisibilitySection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELevelVisibility_StaticEnum, TEXT("ELevelVisibility"), &Z_Registration_Info_UEnum_ELevelVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 125220631U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLevelVisibilitySection, UMovieSceneLevelVisibilitySection::StaticClass, TEXT("UMovieSceneLevelVisibilitySection"), &Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLevelVisibilitySection), 2696473702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_2319220131(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
