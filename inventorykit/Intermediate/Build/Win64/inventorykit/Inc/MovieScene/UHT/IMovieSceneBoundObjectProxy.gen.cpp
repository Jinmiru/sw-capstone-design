// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/IMovieSceneBoundObjectProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneBoundObjectProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoundObjectProxy();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneBoundObjectProxy Function BP_GetBoundObjectForSequencer
struct MovieSceneBoundObjectProxy_eventBP_GetBoundObjectForSequencer_Parms
{
	UObject* ResolvedObject;
	UObject* ReturnValue;

	/** Constructor, initializes return property only **/
	MovieSceneBoundObjectProxy_eventBP_GetBoundObjectForSequencer_Parms()
		: ReturnValue(NULL)
	{
	}
};
UObject* IMovieSceneBoundObjectProxy::BP_GetBoundObjectForSequencer(UObject* ResolvedObject)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_GetBoundObjectForSequencer instead.");
	MovieSceneBoundObjectProxy_eventBP_GetBoundObjectForSequencer_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer = FName(TEXT("BP_GetBoundObjectForSequencer"));
UObject* IMovieSceneBoundObjectProxy::Execute_BP_GetBoundObjectForSequencer(UObject* O, UObject* ResolvedObject)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMovieSceneBoundObjectProxy::StaticClass()));
	MovieSceneBoundObjectProxy_eventBP_GetBoundObjectForSequencer_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer);
	if (Func)
	{
		Parms.ResolvedObject=ResolvedObject;
		O->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Sequencer" },
		{ "Comment", "/**\n\x09 * Retrieve the bound object that this interface wants to animate. Could be 'this' or a transient child object.\n\x09 *\n\x09 * @return Pointer to the object that should be animated, or nullptr if it's not valid.\n\x09 */" },
		{ "DisplayName", "GetBoundObjectForSequencer" },
		{ "ModuleRelativePath", "Public/IMovieSceneBoundObjectProxy.h" },
		{ "ToolTip", "Retrieve the bound object that this interface wants to animate. Could be 'this' or a transient child object.\n\n@return Pointer to the object that should be animated, or nullptr if it's not valid." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResolvedObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics::NewProp_ResolvedObject = { "ResolvedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneBoundObjectProxy_eventBP_GetBoundObjectForSequencer_Parms, ResolvedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneBoundObjectProxy_eventBP_GetBoundObjectForSequencer_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics::NewProp_ResolvedObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBoundObjectProxy, nullptr, "BP_GetBoundObjectForSequencer", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics::PropPointers), sizeof(MovieSceneBoundObjectProxy_eventBP_GetBoundObjectForSequencer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneBoundObjectProxy_eventBP_GetBoundObjectForSequencer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UMovieSceneBoundObjectProxy Function BP_GetBoundObjectForSequencer

// Begin Interface UMovieSceneBoundObjectProxy
void UMovieSceneBoundObjectProxy::StaticRegisterNativesUMovieSceneBoundObjectProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBoundObjectProxy);
UClass* Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister()
{
	return UMovieSceneBoundObjectProxy::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBoundObjectProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IMovieSceneBoundObjectProxy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneBoundObjectProxy_BP_GetBoundObjectForSequencer, "BP_GetBoundObjectForSequencer" }, // 841798898
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneBoundObjectProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneBoundObjectProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoundObjectProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBoundObjectProxy_Statics::ClassParams = {
	&UMovieSceneBoundObjectProxy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoundObjectProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBoundObjectProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBoundObjectProxy()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBoundObjectProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBoundObjectProxy.OuterSingleton, Z_Construct_UClass_UMovieSceneBoundObjectProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBoundObjectProxy.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBoundObjectProxy>()
{
	return UMovieSceneBoundObjectProxy::StaticClass();
}
UMovieSceneBoundObjectProxy::UMovieSceneBoundObjectProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBoundObjectProxy);
UMovieSceneBoundObjectProxy::~UMovieSceneBoundObjectProxy() {}
// End Interface UMovieSceneBoundObjectProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBoundObjectProxy, UMovieSceneBoundObjectProxy::StaticClass, TEXT("UMovieSceneBoundObjectProxy"), &Z_Registration_Info_UClass_UMovieSceneBoundObjectProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBoundObjectProxy), 1517707383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_1430908631(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieSceneBoundObjectProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
