// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieScene3DConstraintSection.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DConstraintSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieScene3DConstraintSection Function GetConstraintBindingID
struct Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics
{
	struct MovieScene3DConstraintSection_eventGetConstraintBindingID_Parms
	{
		FMovieSceneObjectBindingID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Gets the constraint binding for this Constraint section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "Gets the constraint binding for this Constraint section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieScene3DConstraintSection_eventGetConstraintBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScene3DConstraintSection, nullptr, "GetConstraintBindingID", nullptr, nullptr, Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::MovieScene3DConstraintSection_eventGetConstraintBindingID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::MovieScene3DConstraintSection_eventGetConstraintBindingID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieScene3DConstraintSection::execGetConstraintBindingID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->GetConstraintBindingID();
	P_NATIVE_END;
}
// End Class UMovieScene3DConstraintSection Function GetConstraintBindingID

// Begin Class UMovieScene3DConstraintSection Function SetConstraintBindingID
struct Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics
{
	struct MovieScene3DConstraintSection_eventSetConstraintBindingID_Parms
	{
		FMovieSceneObjectBindingID InConstraintBindingID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Sets the constraint binding for this Constraint section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "Sets the constraint binding for this Constraint section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConstraintBindingID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConstraintBindingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::NewProp_InConstraintBindingID = { "InConstraintBindingID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieScene3DConstraintSection_eventSetConstraintBindingID_Parms, InConstraintBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConstraintBindingID_MetaData), NewProp_InConstraintBindingID_MetaData) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::NewProp_InConstraintBindingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScene3DConstraintSection, nullptr, "SetConstraintBindingID", nullptr, nullptr, Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::MovieScene3DConstraintSection_eventSetConstraintBindingID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::MovieScene3DConstraintSection_eventSetConstraintBindingID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieScene3DConstraintSection::execSetConstraintBindingID)
{
	P_GET_STRUCT_REF(FMovieSceneObjectBindingID,Z_Param_Out_InConstraintBindingID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConstraintBindingID(Z_Param_Out_InConstraintBindingID);
	P_NATIVE_END;
}
// End Class UMovieScene3DConstraintSection Function SetConstraintBindingID

// Begin Class UMovieScene3DConstraintSection
void UMovieScene3DConstraintSection::StaticRegisterNativesUMovieScene3DConstraintSection()
{
	UClass* Class = UMovieScene3DConstraintSection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetConstraintBindingID", &UMovieScene3DConstraintSection::execGetConstraintBindingID },
		{ "SetConstraintBindingID", &UMovieScene3DConstraintSection::execSetConstraintBindingID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DConstraintSection);
UClass* Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister()
{
	return UMovieScene3DConstraintSection::StaticClass();
}
struct Z_Construct_UClass_UMovieScene3DConstraintSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for 3D constraint section\n */" },
		{ "IncludePath", "Sections/MovieScene3DConstraintSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "Base class for 3D constraint section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintId_MetaData[] = {
		{ "Comment", "/** The possessable guid that this constraint uses */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "The possessable guid that this constraint uses" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBindingID_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** The constraint binding that this movie Constraint uses */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "The constraint binding that this movie Constraint uses" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintBindingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID, "GetConstraintBindingID" }, // 3755055800
		{ &Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID, "SetConstraintBindingID" }, // 661967599
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DConstraintSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId = { "ConstraintId", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DConstraintSection, ConstraintId_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintId_MetaData), NewProp_ConstraintId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID = { "ConstraintBindingID", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene3DConstraintSection, ConstraintBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintBindingID_MetaData), NewProp_ConstraintBindingID_MetaData) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::ClassParams = {
	&UMovieScene3DConstraintSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScene3DConstraintSection()
{
	if (!Z_Registration_Info_UClass_UMovieScene3DConstraintSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DConstraintSection.OuterSingleton, Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScene3DConstraintSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DConstraintSection>()
{
	return UMovieScene3DConstraintSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DConstraintSection);
UMovieScene3DConstraintSection::~UMovieScene3DConstraintSection() {}
// End Class UMovieScene3DConstraintSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DConstraintSection, UMovieScene3DConstraintSection::StaticClass, TEXT("UMovieScene3DConstraintSection"), &Z_Registration_Info_UClass_UMovieScene3DConstraintSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DConstraintSection), 3872304751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_730816700(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
