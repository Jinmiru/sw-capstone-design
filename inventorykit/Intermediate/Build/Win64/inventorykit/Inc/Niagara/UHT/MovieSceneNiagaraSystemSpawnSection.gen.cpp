// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraSystemSpawnSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection();
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraSystemSpawnSectionStartBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionStartBehavior;
static UEnum* ENiagaraSystemSpawnSectionStartBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionStartBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionStartBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSystemSpawnSectionStartBehavior"));
	}
	return Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionStartBehavior.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemSpawnSectionStartBehavior>()
{
	return ENiagaraSystemSpawnSectionStartBehavior_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Activate.Comment", "/** When the time before the section evaluates the particle system's component will be deactivated and on the first frame of the section the\n\x09 system's component will be activated. */" },
		{ "Activate.Name", "ENiagaraSystemSpawnSectionStartBehavior::Activate" },
		{ "Activate.ToolTip", "When the time before the section evaluates the particle system's component will be deactivated and on the first frame of the section the\n       system's component will be activated." },
		{ "Comment", "/** Defines options for system life cycle for before the section is evaluating up to the first frame the section evaluates. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "ToolTip", "Defines options for system life cycle for before the section is evaluating up to the first frame the section evaluates." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraSystemSpawnSectionStartBehavior::Activate", (int64)ENiagaraSystemSpawnSectionStartBehavior::Activate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraSystemSpawnSectionStartBehavior",
	"ENiagaraSystemSpawnSectionStartBehavior",
	Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionStartBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionStartBehavior.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionStartBehavior.InnerSingleton;
}
// End Enum ENiagaraSystemSpawnSectionStartBehavior

// Begin Enum ENiagaraSystemSpawnSectionEvaluateBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEvaluateBehavior;
static UEnum* ENiagaraSystemSpawnSectionEvaluateBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEvaluateBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEvaluateBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSystemSpawnSectionEvaluateBehavior"));
	}
	return Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEvaluateBehavior.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemSpawnSectionEvaluateBehavior>()
{
	return ENiagaraSystemSpawnSectionEvaluateBehavior_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActivateIfInactive.Comment", "/** The system's component will be activated on any frame where it is inactive.  This is useful for continuous emitters, especially if the sequencer will start in the middle of the section. */" },
		{ "ActivateIfInactive.Name", "ENiagaraSystemSpawnSectionEvaluateBehavior::ActivateIfInactive" },
		{ "ActivateIfInactive.ToolTip", "The system's component will be activated on any frame where it is inactive.  This is useful for continuous emitters, especially if the sequencer will start in the middle of the section." },
		{ "Comment", "/** Defines options for system life cycle for when the section is evaluating from the 2nd frame until the last frame of the section. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "None.Comment", "/** There sill be no changes to the system life cycle while the section is evaluating. */" },
		{ "None.Name", "ENiagaraSystemSpawnSectionEvaluateBehavior::None" },
		{ "None.ToolTip", "There sill be no changes to the system life cycle while the section is evaluating." },
		{ "ToolTip", "Defines options for system life cycle for when the section is evaluating from the 2nd frame until the last frame of the section." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraSystemSpawnSectionEvaluateBehavior::ActivateIfInactive", (int64)ENiagaraSystemSpawnSectionEvaluateBehavior::ActivateIfInactive },
		{ "ENiagaraSystemSpawnSectionEvaluateBehavior::None", (int64)ENiagaraSystemSpawnSectionEvaluateBehavior::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraSystemSpawnSectionEvaluateBehavior",
	"ENiagaraSystemSpawnSectionEvaluateBehavior",
	Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEvaluateBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEvaluateBehavior.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEvaluateBehavior.InnerSingleton;
}
// End Enum ENiagaraSystemSpawnSectionEvaluateBehavior

// Begin Enum ENiagaraSystemSpawnSectionEndBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEndBehavior;
static UEnum* ENiagaraSystemSpawnSectionEndBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEndBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEndBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSystemSpawnSectionEndBehavior"));
	}
	return Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEndBehavior.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemSpawnSectionEndBehavior>()
{
	return ENiagaraSystemSpawnSectionEndBehavior_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines options for system life cycle for the time after the section. */" },
		{ "Deactivate.Comment", "//** When the section ends the system's component is deactivated which will kill all existing particles.\n" },
		{ "Deactivate.Name", "ENiagaraSystemSpawnSectionEndBehavior::Deactivate" },
		{ "Deactivate.ToolTip", "/ When the section ends the system's component is deactivated which will kill all existing particles." },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "None.Comment", "//** Does nothing when the section ends and allows the system to continue to run as normal.\n" },
		{ "None.Name", "ENiagaraSystemSpawnSectionEndBehavior::None" },
		{ "None.ToolTip", "/ Does nothing when the section ends and allows the system to continue to run as normal." },
		{ "SetSystemInactive.Comment", "//** When the section ends the system is set to inactive which stops spawning but lets existing particles simulate until death.\n" },
		{ "SetSystemInactive.Name", "ENiagaraSystemSpawnSectionEndBehavior::SetSystemInactive" },
		{ "SetSystemInactive.ToolTip", "/ When the section ends the system is set to inactive which stops spawning but lets existing particles simulate until death." },
		{ "ToolTip", "Defines options for system life cycle for the time after the section." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraSystemSpawnSectionEndBehavior::SetSystemInactive", (int64)ENiagaraSystemSpawnSectionEndBehavior::SetSystemInactive },
		{ "ENiagaraSystemSpawnSectionEndBehavior::Deactivate", (int64)ENiagaraSystemSpawnSectionEndBehavior::Deactivate },
		{ "ENiagaraSystemSpawnSectionEndBehavior::None", (int64)ENiagaraSystemSpawnSectionEndBehavior::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraSystemSpawnSectionEndBehavior",
	"ENiagaraSystemSpawnSectionEndBehavior",
	Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEndBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEndBehavior.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEndBehavior.InnerSingleton;
}
// End Enum ENiagaraSystemSpawnSectionEndBehavior

// Begin Class UMovieSceneNiagaraSystemSpawnSection
void UMovieSceneNiagaraSystemSpawnSection::StaticRegisterNativesUMovieSceneNiagaraSystemSpawnSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraSystemSpawnSection);
UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_NoRegister()
{
	return UMovieSceneNiagaraSystemSpawnSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartBehavior_MetaData[] = {
		{ "Category", "Life Cycle" },
		{ "Comment", "/** Specifies what should happen to the niagara system from before the section evaluates up until the first frame of the section. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "ToolTip", "Specifies what should happen to the niagara system from before the section evaluates up until the first frame of the section." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionEvaluateBehavior_MetaData[] = {
		{ "Category", "Life Cycle" },
		{ "Comment", "/** Specifies what should happen to the niagara system when section is evaluating from the 2nd frame until the last frame. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "ToolTip", "Specifies what should happen to the niagara system when section is evaluating from the 2nd frame until the last frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionEndBehavior_MetaData[] = {
		{ "Category", "Life Cycle" },
		{ "Comment", "/** Specifies what should happen to the niagara system when section evaluation finishes. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "ToolTip", "Specifies what should happen to the niagara system when section evaluation finishes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgeUpdateMode_MetaData[] = {
		{ "Category", "Life Cycle" },
		{ "Comment", "/** Specifies how sequencer should update the age of the controlled niagara system. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
		{ "ToolTip", "Specifies how sequencer should update the age of the controlled niagara system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowScalability_MetaData[] = {
		{ "Category", "Life Cycle" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionStartBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SectionStartBehavior;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionEvaluateBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SectionEvaluateBehavior;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionEndBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SectionEndBehavior;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AgeUpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AgeUpdateMode;
	static void NewProp_bAllowScalability_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowScalability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraSystemSpawnSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionStartBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionStartBehavior = { "SectionStartBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneNiagaraSystemSpawnSection, SectionStartBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionStartBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionStartBehavior_MetaData), NewProp_SectionStartBehavior_MetaData) }; // 78137209
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEvaluateBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEvaluateBehavior = { "SectionEvaluateBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneNiagaraSystemSpawnSection, SectionEvaluateBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionEvaluateBehavior_MetaData), NewProp_SectionEvaluateBehavior_MetaData) }; // 707415321
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEndBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEndBehavior = { "SectionEndBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneNiagaraSystemSpawnSection, SectionEndBehavior), Z_Construct_UEnum_Niagara_ENiagaraSystemSpawnSectionEndBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionEndBehavior_MetaData), NewProp_SectionEndBehavior_MetaData) }; // 2894984328
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_AgeUpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_AgeUpdateMode = { "AgeUpdateMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneNiagaraSystemSpawnSection, AgeUpdateMode), Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgeUpdateMode_MetaData), NewProp_AgeUpdateMode_MetaData) }; // 1196070179
void Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_bAllowScalability_SetBit(void* Obj)
{
	((UMovieSceneNiagaraSystemSpawnSection*)Obj)->bAllowScalability = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_bAllowScalability = { "bAllowScalability", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneNiagaraSystemSpawnSection), &Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_bAllowScalability_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowScalability_MetaData), NewProp_bAllowScalability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionStartBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionStartBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEvaluateBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEvaluateBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEndBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_SectionEndBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_AgeUpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_AgeUpdateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::NewProp_bAllowScalability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::ClassParams = {
	&UMovieSceneNiagaraSystemSpawnSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneNiagaraSystemSpawnSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraSystemSpawnSection.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneNiagaraSystemSpawnSection.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraSystemSpawnSection>()
{
	return UMovieSceneNiagaraSystemSpawnSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraSystemSpawnSection);
UMovieSceneNiagaraSystemSpawnSection::~UMovieSceneNiagaraSystemSpawnSection() {}
// End Class UMovieSceneNiagaraSystemSpawnSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraSystemSpawnSectionStartBehavior_StaticEnum, TEXT("ENiagaraSystemSpawnSectionStartBehavior"), &Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionStartBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 78137209U) },
		{ ENiagaraSystemSpawnSectionEvaluateBehavior_StaticEnum, TEXT("ENiagaraSystemSpawnSectionEvaluateBehavior"), &Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEvaluateBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 707415321U) },
		{ ENiagaraSystemSpawnSectionEndBehavior_StaticEnum, TEXT("ENiagaraSystemSpawnSectionEndBehavior"), &Z_Registration_Info_UEnum_ENiagaraSystemSpawnSectionEndBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2894984328U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection, UMovieSceneNiagaraSystemSpawnSection::StaticClass, TEXT("UMovieSceneNiagaraSystemSpawnSection"), &Z_Registration_Info_UClass_UMovieSceneNiagaraSystemSpawnSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraSystemSpawnSection), 2898846079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_479608375(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
