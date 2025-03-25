// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/IMovieSceneTransformOrigin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneTransformOrigin() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Interface UMovieSceneTransformOrigin Function BP_GetTransformOrigin
struct MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms
{
	FTransform ReturnValue;
};
FTransform IMovieSceneTransformOrigin::BP_GetTransformOrigin() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_GetTransformOrigin instead.");
	MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMovieSceneTransformOrigin_BP_GetTransformOrigin = FName(TEXT("BP_GetTransformOrigin"));
FTransform IMovieSceneTransformOrigin::Execute_BP_GetTransformOrigin(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMovieSceneTransformOrigin::StaticClass()));
	MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMovieSceneTransformOrigin_BP_GetTransformOrigin);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Get the transform from which all absolute component transform sections should be relative. Scale is ignored. */" },
		{ "DisplayName", "GetTransformOrigin" },
		{ "ModuleRelativePath", "Public/Tracks/IMovieSceneTransformOrigin.h" },
		{ "ToolTip", "Get the transform from which all absolute component transform sections should be relative. Scale is ignored." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTransformOrigin, nullptr, "BP_GetTransformOrigin", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::PropPointers), sizeof(MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UMovieSceneTransformOrigin Function BP_GetTransformOrigin

// Begin Interface UMovieSceneTransformOrigin
void UMovieSceneTransformOrigin::StaticRegisterNativesUMovieSceneTransformOrigin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTransformOrigin);
UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister()
{
	return UMovieSceneTransformOrigin::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTransformOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "Transform Origin" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tracks/IMovieSceneTransformOrigin.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin, "BP_GetTransformOrigin" }, // 1085918101
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneTransformOrigin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::ClassParams = {
	&UMovieSceneTransformOrigin::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTransformOrigin()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTransformOrigin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTransformOrigin.OuterSingleton, Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTransformOrigin.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneTransformOrigin>()
{
	return UMovieSceneTransformOrigin::StaticClass();
}
UMovieSceneTransformOrigin::UMovieSceneTransformOrigin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTransformOrigin);
UMovieSceneTransformOrigin::~UMovieSceneTransformOrigin() {}
// End Interface UMovieSceneTransformOrigin

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTransformOrigin, UMovieSceneTransformOrigin::StaticClass, TEXT("UMovieSceneTransformOrigin"), &Z_Registration_Info_UClass_UMovieSceneTransformOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTransformOrigin), 3756855739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_2271622337(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
