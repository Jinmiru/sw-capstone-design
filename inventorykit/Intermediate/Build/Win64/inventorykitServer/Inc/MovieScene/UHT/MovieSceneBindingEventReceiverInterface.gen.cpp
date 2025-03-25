// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneBindingEventReceiverInterface.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBindingEventReceiverInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Interface UMovieSceneBindingEventReceiverInterface Function OnObjectBoundBySequencer
struct MovieSceneBindingEventReceiverInterface_eventOnObjectBoundBySequencer_Parms
{
	UMovieSceneSequencePlayer* Player;
	FMovieSceneObjectBindingID BindingID;
};
void IMovieSceneBindingEventReceiverInterface::OnObjectBoundBySequencer(UMovieSceneSequencePlayer* Player, FMovieSceneObjectBindingID BindingID)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnObjectBoundBySequencer instead.");
}
static FName NAME_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer = FName(TEXT("OnObjectBoundBySequencer"));
void IMovieSceneBindingEventReceiverInterface::Execute_OnObjectBoundBySequencer(UObject* O, UMovieSceneSequencePlayer* Player, FMovieSceneObjectBindingID BindingID)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMovieSceneBindingEventReceiverInterface::StaticClass()));
	MovieSceneBindingEventReceiverInterface_eventOnObjectBoundBySequencer_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer);
	if (Func)
	{
		Parms.Player=Player;
		Parms.BindingID=BindingID;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMovieSceneBindingEventReceiverInterface*)(O->GetNativeInterfaceAddress(UMovieSceneBindingEventReceiverInterface::StaticClass())))
	{
		I->OnObjectBoundBySequencer_Implementation(Player,BindingID);
	}
}
struct Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingEventReceiverInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneBindingEventReceiverInterface_eventOnObjectBoundBySequencer_Parms, Player), Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics::NewProp_BindingID = { "BindingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneBindingEventReceiverInterface_eventOnObjectBoundBySequencer_Parms, BindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics::NewProp_BindingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface, nullptr, "OnObjectBoundBySequencer", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics::PropPointers), sizeof(MovieSceneBindingEventReceiverInterface_eventOnObjectBoundBySequencer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneBindingEventReceiverInterface_eventOnObjectBoundBySequencer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMovieSceneBindingEventReceiverInterface::execOnObjectBoundBySequencer)
{
	P_GET_OBJECT(UMovieSceneSequencePlayer,Z_Param_Player);
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_BindingID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnObjectBoundBySequencer_Implementation(Z_Param_Player,Z_Param_BindingID);
	P_NATIVE_END;
}
// End Interface UMovieSceneBindingEventReceiverInterface Function OnObjectBoundBySequencer

// Begin Interface UMovieSceneBindingEventReceiverInterface Function OnObjectUnboundBySequencer
struct MovieSceneBindingEventReceiverInterface_eventOnObjectUnboundBySequencer_Parms
{
	UMovieSceneSequencePlayer* Player;
	FMovieSceneObjectBindingID BindingID;
};
void IMovieSceneBindingEventReceiverInterface::OnObjectUnboundBySequencer(UMovieSceneSequencePlayer* Player, FMovieSceneObjectBindingID BindingID)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnObjectUnboundBySequencer instead.");
}
static FName NAME_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer = FName(TEXT("OnObjectUnboundBySequencer"));
void IMovieSceneBindingEventReceiverInterface::Execute_OnObjectUnboundBySequencer(UObject* O, UMovieSceneSequencePlayer* Player, FMovieSceneObjectBindingID BindingID)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMovieSceneBindingEventReceiverInterface::StaticClass()));
	MovieSceneBindingEventReceiverInterface_eventOnObjectUnboundBySequencer_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer);
	if (Func)
	{
		Parms.Player=Player;
		Parms.BindingID=BindingID;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMovieSceneBindingEventReceiverInterface*)(O->GetNativeInterfaceAddress(UMovieSceneBindingEventReceiverInterface::StaticClass())))
	{
		I->OnObjectUnboundBySequencer_Implementation(Player,BindingID);
	}
}
struct Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingEventReceiverInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneBindingEventReceiverInterface_eventOnObjectUnboundBySequencer_Parms, Player), Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics::NewProp_BindingID = { "BindingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneBindingEventReceiverInterface_eventOnObjectUnboundBySequencer_Parms, BindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics::NewProp_BindingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface, nullptr, "OnObjectUnboundBySequencer", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics::PropPointers), sizeof(MovieSceneBindingEventReceiverInterface_eventOnObjectUnboundBySequencer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneBindingEventReceiverInterface_eventOnObjectUnboundBySequencer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMovieSceneBindingEventReceiverInterface::execOnObjectUnboundBySequencer)
{
	P_GET_OBJECT(UMovieSceneSequencePlayer,Z_Param_Player);
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_BindingID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnObjectUnboundBySequencer_Implementation(Z_Param_Player,Z_Param_BindingID);
	P_NATIVE_END;
}
// End Interface UMovieSceneBindingEventReceiverInterface Function OnObjectUnboundBySequencer

// Begin Interface UMovieSceneBindingEventReceiverInterface
void UMovieSceneBindingEventReceiverInterface::StaticRegisterNativesUMovieSceneBindingEventReceiverInterface()
{
	UClass* Class = UMovieSceneBindingEventReceiverInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnObjectBoundBySequencer", &IMovieSceneBindingEventReceiverInterface::execOnObjectBoundBySequencer },
		{ "OnObjectUnboundBySequencer", &IMovieSceneBindingEventReceiverInterface::execOnObjectUnboundBySequencer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBindingEventReceiverInterface);
UClass* Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_NoRegister()
{
	return UMovieSceneBindingEventReceiverInterface::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneBindingEventReceiverInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectBoundBySequencer, "OnObjectBoundBySequencer" }, // 90443271
		{ &Z_Construct_UFunction_UMovieSceneBindingEventReceiverInterface_OnObjectUnboundBySequencer, "OnObjectUnboundBySequencer" }, // 3799933171
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneBindingEventReceiverInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_Statics::ClassParams = {
	&UMovieSceneBindingEventReceiverInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBindingEventReceiverInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBindingEventReceiverInterface.OuterSingleton, Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBindingEventReceiverInterface.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBindingEventReceiverInterface>()
{
	return UMovieSceneBindingEventReceiverInterface::StaticClass();
}
UMovieSceneBindingEventReceiverInterface::UMovieSceneBindingEventReceiverInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBindingEventReceiverInterface);
UMovieSceneBindingEventReceiverInterface::~UMovieSceneBindingEventReceiverInterface() {}
// End Interface UMovieSceneBindingEventReceiverInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface, UMovieSceneBindingEventReceiverInterface::StaticClass, TEXT("UMovieSceneBindingEventReceiverInterface"), &Z_Registration_Info_UClass_UMovieSceneBindingEventReceiverInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBindingEventReceiverInterface), 2236016614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_334846377(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
