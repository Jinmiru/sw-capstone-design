// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEasingFunction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneEasingFunction Function OnEvaluate
struct MovieSceneEasingFunction_eventOnEvaluate_Parms
{
	float Interp;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	MovieSceneEasingFunction_eventOnEvaluate_Parms()
		: ReturnValue(0)
	{
	}
};
float IMovieSceneEasingFunction::OnEvaluate(float Interp) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEvaluate instead.");
	MovieSceneEasingFunction_eventOnEvaluate_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMovieSceneEasingFunction_OnEvaluate = FName(TEXT("OnEvaluate"));
float IMovieSceneEasingFunction::Execute_OnEvaluate(const UObject* O, float Interp)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMovieSceneEasingFunction::StaticClass()));
	MovieSceneEasingFunction_eventOnEvaluate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMovieSceneEasingFunction_OnEvaluate);
	if (Func)
	{
		Parms.Interp=Interp;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Evaluate the easing with an interpolation value between 0 and 1 */" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingFunction.h" },
		{ "ToolTip", "Evaluate the easing with an interpolation value between 0 and 1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Interp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::NewProp_Interp = { "Interp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneEasingFunction_eventOnEvaluate_Parms, Interp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneEasingFunction_eventOnEvaluate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::NewProp_Interp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneEasingFunction, nullptr, "OnEvaluate", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::PropPointers), sizeof(MovieSceneEasingFunction_eventOnEvaluate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneEasingFunction_eventOnEvaluate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UMovieSceneEasingFunction Function OnEvaluate

// Begin Interface UMovieSceneEasingFunction
void UMovieSceneEasingFunction::StaticRegisterNativesUMovieSceneEasingFunction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEasingFunction);
UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister()
{
	return UMovieSceneEasingFunction::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneEasingFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "Easing Function" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingFunction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate, "OnEvaluate" }, // 607884904
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneEasingFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneEasingFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEasingFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEasingFunction_Statics::ClassParams = {
	&UMovieSceneEasingFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEasingFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneEasingFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneEasingFunction()
{
	if (!Z_Registration_Info_UClass_UMovieSceneEasingFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEasingFunction.OuterSingleton, Z_Construct_UClass_UMovieSceneEasingFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneEasingFunction.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEasingFunction>()
{
	return UMovieSceneEasingFunction::StaticClass();
}
UMovieSceneEasingFunction::UMovieSceneEasingFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEasingFunction);
UMovieSceneEasingFunction::~UMovieSceneEasingFunction() {}
// End Interface UMovieSceneEasingFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEasingFunction, UMovieSceneEasingFunction::StaticClass, TEXT("UMovieSceneEasingFunction"), &Z_Registration_Info_UClass_UMovieSceneEasingFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEasingFunction), 2585027457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_1952171172(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
