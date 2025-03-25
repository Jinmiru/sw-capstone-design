// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Public/LevelSequenceActor.h"
#include "Runtime/Engine/Public/WorldPartition/IWorldPartitionObjectResolver.h"
#include "Runtime/LevelSequence/Public/LevelSequenceCameraSettings.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/MovieSceneSequencePlaybackSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionObjectResolver_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionResolveData();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_AReplicatedLevelSequenceActor();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_AReplicatedLevelSequenceActor_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
LEVELSEQUENCE_API UFunction* Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceCameraSettings();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin Class ULevelSequenceBurnInInitSettings
void ULevelSequenceBurnInInitSettings::StaticRegisterNativesULevelSequenceBurnInInitSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceBurnInInitSettings);
UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister()
{
	return ULevelSequenceBurnInInitSettings::StaticClass();
}
struct Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceBurnInInitSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::ClassParams = {
	&ULevelSequenceBurnInInitSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings()
{
	if (!Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.OuterSingleton, Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.OuterSingleton;
}
template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceBurnInInitSettings>()
{
	return ULevelSequenceBurnInInitSettings::StaticClass();
}
ULevelSequenceBurnInInitSettings::ULevelSequenceBurnInInitSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInInitSettings);
ULevelSequenceBurnInInitSettings::~ULevelSequenceBurnInInitSettings() {}
// End Class ULevelSequenceBurnInInitSettings

// Begin Class ULevelSequenceBurnInOptions Function SetBurnIn
struct Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct LevelSequenceBurnInOptions_eventSetBurnIn_Parms
	{
		FSoftClassPath InBurnInClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General" },
		{ "Comment", "/** Loads the specified class path and initializes an instance, then stores it in Settings. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Loads the specified class path and initializes an instance, then stores it in Settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBurnInClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::NewProp_InBurnInClass = { "InBurnInClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceBurnInOptions_eventSetBurnIn_Parms, InBurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::NewProp_InBurnInClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceBurnInOptions, nullptr, "SetBurnIn", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::LevelSequenceBurnInOptions_eventSetBurnIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::LevelSequenceBurnInOptions_eventSetBurnIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequenceBurnInOptions::execSetBurnIn)
{
	P_GET_STRUCT(FSoftClassPath,Z_Param_InBurnInClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBurnIn(Z_Param_InBurnInClass);
	P_NATIVE_END;
}
// End Class ULevelSequenceBurnInOptions Function SetBurnIn

// Begin Class ULevelSequenceBurnInOptions
void ULevelSequenceBurnInOptions::StaticRegisterNativesULevelSequenceBurnInOptions()
{
	UClass* Class = ULevelSequenceBurnInOptions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetBurnIn", &ULevelSequenceBurnInOptions::execSetBurnIn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceBurnInOptions);
UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister()
{
	return ULevelSequenceBurnInOptions::StaticClass();
}
struct Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBurnIn_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurnInClass_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseBurnIn" },
		{ "MetaClass", "/Script/LevelSequence.LevelSequenceBurnIn" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseBurnIn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseBurnIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBurnIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BurnInClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn, "SetBurnIn" }, // 1716933136
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceBurnInOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_SetBit(void* Obj)
{
	((ULevelSequenceBurnInOptions*)Obj)->bUseBurnIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn = { "bUseBurnIn", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULevelSequenceBurnInOptions), &Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBurnIn_MetaData), NewProp_bUseBurnIn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass = { "BurnInClass", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceBurnInOptions, BurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurnInClass_MetaData), NewProp_BurnInClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x011600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceBurnInOptions, Settings), Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::ClassParams = {
	&ULevelSequenceBurnInOptions::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers),
	0,
	0x00A804A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions()
{
	if (!Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.OuterSingleton, Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.OuterSingleton;
}
template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceBurnInOptions>()
{
	return ULevelSequenceBurnInOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInOptions);
ULevelSequenceBurnInOptions::~ULevelSequenceBurnInOptions() {}
// End Class ULevelSequenceBurnInOptions

// Begin Delegate FOnLevelSequenceLoaded
struct Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "OnLevelSequenceLoaded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void ALevelSequenceActor::FOnLevelSequenceLoaded_DelegateWrapper(const FScriptDelegate& OnLevelSequenceLoaded)
{
	OnLevelSequenceLoaded.ProcessDelegate<UObject>(NULL);
}
// End Delegate FOnLevelSequenceLoaded

// Begin Class ALevelSequenceActor Function AddBinding
struct Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics
{
	struct LevelSequenceActor_eventAddBinding_Parms
	{
		FMovieSceneObjectBindingID Binding;
		AActor* Actor;
		bool bAllowBindingsFromAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Adds the specified actor to the overridden bindings for the specified binding ID, optionally still allowing the bindings defined in the Level Sequence asset\n\x09 *\n\x09 * @param Binding Binding to modify\n\x09 * @param Actor Actor to bind\n\x09 * @param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by \n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  set in Sequencer UI. This function will not modify the original asset.\n\x09 */" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Adds the specified actor to the overridden bindings for the specified binding ID, optionally still allowing the bindings defined in the Level Sequence asset\n\n@param Binding Binding to modify\n@param Actor Actor to bind\n@param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by\n                                                               Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n                                                               set in Sequencer UI. This function will not modify the original asset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventAddBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventAddBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
{
	((LevelSequenceActor_eventAddBinding_Parms*)Obj)->bAllowBindingsFromAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceActor_eventAddBinding_Parms), &Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Binding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "AddBinding", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::LevelSequenceActor_eventAddBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::LevelSequenceActor_eventAddBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execAddBinding)
{
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_Binding);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_UBOOL(Z_Param_bAllowBindingsFromAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBinding(Z_Param_Binding,Z_Param_Actor,Z_Param_bAllowBindingsFromAsset);
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function AddBinding

// Begin Class ALevelSequenceActor Function AddBindingByTag
struct Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics
{
	struct LevelSequenceActor_eventAddBindingByTag_Parms
	{
		FName BindingTag;
		AActor* Actor;
		bool bAllowBindingsFromAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Binds an actor to all the bindings tagged with the specified name in this sequence. Does not remove any exising bindings that have been set up through this API. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\x09 *\n\x09 * @param BindingTag   The unique tag name to lookup bindings with\n\x09 * @param Actor        The actor to assign to all the tagged bindings\n\x09 * @param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by \n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  set in Sequencer UI. This function will not modify the original asset.\n\x09 */" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Binds an actor to all the bindings tagged with the specified name in this sequence. Does not remove any exising bindings that have been set up through this API. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\n@param BindingTag   The unique tag name to lookup bindings with\n@param Actor        The actor to assign to all the tagged bindings\n@param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by\n                                                               Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n                                                               set in Sequencer UI. This function will not modify the original asset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BindingTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_BindingTag = { "BindingTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventAddBindingByTag_Parms, BindingTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventAddBindingByTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
{
	((LevelSequenceActor_eventAddBindingByTag_Parms*)Obj)->bAllowBindingsFromAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceActor_eventAddBindingByTag_Parms), &Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_BindingTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_bAllowBindingsFromAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "AddBindingByTag", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::LevelSequenceActor_eventAddBindingByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::LevelSequenceActor_eventAddBindingByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execAddBindingByTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BindingTag);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_UBOOL(Z_Param_bAllowBindingsFromAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBindingByTag(Z_Param_BindingTag,Z_Param_Actor,Z_Param_bAllowBindingsFromAsset);
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function AddBindingByTag

// Begin Class ALevelSequenceActor Function FindNamedBinding
struct Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics
{
	struct LevelSequenceActor_eventFindNamedBinding_Parms
	{
		FName Tag;
		FMovieSceneObjectBindingID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Retrieve the first object binding that has been tagged with the specified name\n\x09 */" },
		{ "DisplayName", "Find Binding by Tag" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Retrieve the first object binding that has been tagged with the specified name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventFindNamedBinding_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventFindNamedBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "FindNamedBinding", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::LevelSequenceActor_eventFindNamedBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::LevelSequenceActor_eventFindNamedBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execFindNamedBinding)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->FindNamedBinding(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function FindNamedBinding

// Begin Class ALevelSequenceActor Function FindNamedBindings
struct Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics
{
	struct LevelSequenceActor_eventFindNamedBindings_Parms
	{
		FName Tag;
		TArray<FMovieSceneObjectBindingID> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Retrieve all the bindings that have been tagged with the specified name\n\x09 *\n\x09 * @param Tag  The unique tag name to lookup bindings with. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\x09 * @return An array containing all the bindings that are tagged with this name, potentially empty.\n\x09 */" },
		{ "DisplayName", "Find Bindings by Tag" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Retrieve all the bindings that have been tagged with the specified name\n\n@param Tag  The unique tag name to lookup bindings with. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n@return An array containing all the bindings that are tagged with this name, potentially empty." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventFindNamedBindings_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventFindNamedBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "FindNamedBindings", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::LevelSequenceActor_eventFindNamedBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::LevelSequenceActor_eventFindNamedBindings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execFindNamedBindings)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMovieSceneObjectBindingID>*)Z_Param__Result=P_THIS->FindNamedBindings(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function FindNamedBindings

// Begin Class ALevelSequenceActor Function GetSequence
struct Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics
{
	struct LevelSequenceActor_eventGetSequence_Parms
	{
		ULevelSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the level sequence being played by this actor.\n\x09 *\n\x09 * @return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n\x09 * @see SetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Get the level sequence being played by this actor.\n\n@return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n@see SetSequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "GetSequence", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::LevelSequenceActor_eventGetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::LevelSequenceActor_eventGetSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execGetSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevelSequence**)Z_Param__Result=P_THIS->GetSequence();
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function GetSequence

// Begin Class ALevelSequenceActor Function GetSequencePlayer
struct Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics
{
	struct LevelSequenceActor_eventGetSequencePlayer_Parms
	{
		ULevelSequencePlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/**\n\x09 * Access this actor's sequence player, or None if it is not yet initialized\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Access this actor's sequence player, or None if it is not yet initialized" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventGetSequencePlayer_Parms, ReturnValue), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "GetSequencePlayer", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::LevelSequenceActor_eventGetSequencePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::LevelSequenceActor_eventGetSequencePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execGetSequencePlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevelSequencePlayer**)Z_Param__Result=P_THIS->GetSequencePlayer();
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function GetSequencePlayer

// Begin Class ALevelSequenceActor Function HideBurnin
struct Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/* Hide burnin */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Hide burnin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "HideBurnin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALevelSequenceActor_HideBurnin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execHideBurnin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideBurnin();
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function HideBurnin

// Begin Class ALevelSequenceActor Function RemoveBinding
struct Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics
{
	struct LevelSequenceActor_eventRemoveBinding_Parms
	{
		FMovieSceneObjectBindingID Binding;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Removes the specified actor from the specified binding's actor array\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Removes the specified actor from the specified binding's actor array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Binding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "RemoveBinding", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::LevelSequenceActor_eventRemoveBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::LevelSequenceActor_eventRemoveBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execRemoveBinding)
{
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_Binding);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBinding(Z_Param_Binding,Z_Param_Actor);
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function RemoveBinding

// Begin Class ALevelSequenceActor Function RemoveBindingByTag
struct Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics
{
	struct LevelSequenceActor_eventRemoveBindingByTag_Parms
	{
		FName Tag;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Removes the specified actor from the specified binding's actor array\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Removes the specified actor from the specified binding's actor array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBindingByTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBindingByTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "RemoveBindingByTag", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::LevelSequenceActor_eventRemoveBindingByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::LevelSequenceActor_eventRemoveBindingByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execRemoveBindingByTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBindingByTag(Z_Param_Tag,Z_Param_Actor);
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function RemoveBindingByTag

// Begin Class ALevelSequenceActor Function ResetBinding
struct Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics
{
	struct LevelSequenceActor_eventResetBinding_Parms
	{
		FMovieSceneObjectBindingID Binding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Resets the specified binding back to the defaults defined by the Level Sequence asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Resets the specified binding back to the defaults defined by the Level Sequence asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventResetBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::NewProp_Binding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "ResetBinding", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::LevelSequenceActor_eventResetBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::LevelSequenceActor_eventResetBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execResetBinding)
{
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_Binding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetBinding(Z_Param_Binding);
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function ResetBinding

// Begin Class ALevelSequenceActor Function ResetBindings
struct Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Resets all overridden bindings back to the defaults defined by the Level Sequence asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Resets all overridden bindings back to the defaults defined by the Level Sequence asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "ResetBindings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execResetBindings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetBindings();
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function ResetBindings

// Begin Class ALevelSequenceActor Function SetBinding
struct Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics
{
	struct LevelSequenceActor_eventSetBinding_Parms
	{
		FMovieSceneObjectBindingID Binding;
		TArray<AActor*> Actors;
		bool bAllowBindingsFromAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Overrides the specified binding with the specified actors, optionally still allowing the bindings defined in the Level Sequence asset\n\x09 *\n\x09 * @param Binding Binding to modify\n\x09 * @param Actors Actors to bind\n\x09 * @param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by \n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  set in Sequencer UI. This function will not modify the original asset.\n\x09 */" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Overrides the specified binding with the specified actors, optionally still allowing the bindings defined in the Level Sequence asset\n\n@param Binding Binding to modify\n@param Actors Actors to bind\n@param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by\n                                                               Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n                                                               set in Sequencer UI. This function will not modify the original asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetBinding_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
void Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
{
	((LevelSequenceActor_eventSetBinding_Parms*)Obj)->bAllowBindingsFromAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceActor_eventSetBinding_Parms), &Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Binding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetBinding", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::LevelSequenceActor_eventSetBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::LevelSequenceActor_eventSetBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execSetBinding)
{
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_Binding);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
	P_GET_UBOOL(Z_Param_bAllowBindingsFromAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBinding(Z_Param_Binding,Z_Param_Out_Actors,Z_Param_bAllowBindingsFromAsset);
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function SetBinding

// Begin Class ALevelSequenceActor Function SetBindingByTag
struct Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics
{
	struct LevelSequenceActor_eventSetBindingByTag_Parms
	{
		FName BindingTag;
		TArray<AActor*> Actors;
		bool bAllowBindingsFromAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Assigns an set of actors to all the bindings tagged with the specified name in this sequence. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\x09 *\n\x09 * @param BindingTag   The unique tag name to lookup bindings with\n\x09 * @param Actors       The actors to assign to all the tagged bindings\n\x09 * @param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by \n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  set in Sequencer UI. This function will not modify the original asset.\n\x09 */" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Assigns an set of actors to all the bindings tagged with the specified name in this sequence. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\n@param BindingTag   The unique tag name to lookup bindings with\n@param Actors       The actors to assign to all the tagged bindings\n@param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by\n                                                               Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n                                                               set in Sequencer UI. This function will not modify the original asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BindingTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_BindingTag = { "BindingTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetBindingByTag_Parms, BindingTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetBindingByTag_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
void Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
{
	((LevelSequenceActor_eventSetBindingByTag_Parms*)Obj)->bAllowBindingsFromAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceActor_eventSetBindingByTag_Parms), &Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_BindingTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_bAllowBindingsFromAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetBindingByTag", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::LevelSequenceActor_eventSetBindingByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::LevelSequenceActor_eventSetBindingByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execSetBindingByTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BindingTag);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
	P_GET_UBOOL(Z_Param_bAllowBindingsFromAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBindingByTag(Z_Param_BindingTag,Z_Param_Out_Actors,Z_Param_bAllowBindingsFromAsset);
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function SetBindingByTag

// Begin Class ALevelSequenceActor Function SetReplicatePlayback
struct Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics
{
	struct LevelSequenceActor_eventSetReplicatePlayback_Parms
	{
		bool ReplicatePlayback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/**\n\x09 * Set whether or not to replicate playback for this actor\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Set whether or not to replicate playback for this actor" },
	};
#endif // WITH_METADATA
	static void NewProp_ReplicatePlayback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReplicatePlayback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback_SetBit(void* Obj)
{
	((LevelSequenceActor_eventSetReplicatePlayback_Parms*)Obj)->ReplicatePlayback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback = { "ReplicatePlayback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceActor_eventSetReplicatePlayback_Parms), &Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetReplicatePlayback", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::LevelSequenceActor_eventSetReplicatePlayback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::LevelSequenceActor_eventSetReplicatePlayback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execSetReplicatePlayback)
{
	P_GET_UBOOL(Z_Param_ReplicatePlayback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReplicatePlayback(Z_Param_ReplicatePlayback);
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function SetReplicatePlayback

// Begin Class ALevelSequenceActor Function SetSequence
struct Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics
{
	struct LevelSequenceActor_eventSetSequence_Parms
	{
		ULevelSequence* InSequence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the level sequence being played by this actor.\n\x09 *\n\x09 * @param InSequence The sequence object to set.\n\x09 * @see GetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Set the level sequence being played by this actor.\n\n@param InSequence The sequence object to set.\n@see GetSequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetSequence_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::NewProp_InSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetSequence", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::LevelSequenceActor_eventSetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::LevelSequenceActor_eventSetSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execSetSequence)
{
	P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSequence(Z_Param_InSequence);
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function SetSequence

// Begin Class ALevelSequenceActor Function ShowBurnin
struct Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/* Show burnin */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Show burnin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "ShowBurnin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceActor::execShowBurnin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowBurnin();
	P_NATIVE_END;
}
// End Class ALevelSequenceActor Function ShowBurnin

// Begin Class ALevelSequenceActor
void ALevelSequenceActor::StaticRegisterNativesALevelSequenceActor()
{
	UClass* Class = ALevelSequenceActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBinding", &ALevelSequenceActor::execAddBinding },
		{ "AddBindingByTag", &ALevelSequenceActor::execAddBindingByTag },
		{ "FindNamedBinding", &ALevelSequenceActor::execFindNamedBinding },
		{ "FindNamedBindings", &ALevelSequenceActor::execFindNamedBindings },
		{ "GetSequence", &ALevelSequenceActor::execGetSequence },
		{ "GetSequencePlayer", &ALevelSequenceActor::execGetSequencePlayer },
		{ "HideBurnin", &ALevelSequenceActor::execHideBurnin },
		{ "RemoveBinding", &ALevelSequenceActor::execRemoveBinding },
		{ "RemoveBindingByTag", &ALevelSequenceActor::execRemoveBindingByTag },
		{ "ResetBinding", &ALevelSequenceActor::execResetBinding },
		{ "ResetBindings", &ALevelSequenceActor::execResetBindings },
		{ "SetBinding", &ALevelSequenceActor::execSetBinding },
		{ "SetBindingByTag", &ALevelSequenceActor::execSetBindingByTag },
		{ "SetReplicatePlayback", &ALevelSequenceActor::execSetReplicatePlayback },
		{ "SetSequence", &ALevelSequenceActor::execSetSequence },
		{ "ShowBurnin", &ALevelSequenceActor::execShowBurnin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelSequenceActor);
UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister()
{
	return ALevelSequenceActor::StaticClass();
}
struct Z_Construct_UClass_ALevelSequenceActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor responsible for controlling a specific level sequence in the world.\n */" },
		{ "HideCategories", "Rendering Physics HLOD Activation Input" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor responsible for controlling a specific level sequence in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[] = {
		{ "Category", "Playback" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "BlueprintGetter", "GetSequencePlayer" },
		{ "Category", "Playback" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sequencer|Player" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceAsset_MetaData[] = {
		{ "AllowedClasses", "/Script/LevelSequence.LevelSequence" },
		{ "Category", "General" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraSettings_MetaData[] = {
		{ "Category", "Cameras" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurnInOptions_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingOverrides_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Mapping of actors to override the sequence bindings with */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Mapping of actors to override the sequence bindings with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideInstanceData_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Enable specification of dynamic instance data to be supplied to the sequence during playback */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Enable specification of dynamic instance data to be supplied to the sequence during playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicatePlayback_MetaData[] = {
		{ "BlueprintSetter", "SetReplicatePlayback" },
		{ "Category", "Replication" },
		{ "Comment", "/** If true, playback of this level sequence on the server will be synchronized across other clients */" },
		{ "DisplayName", "Replicate Playback" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "If true, playback of this level sequence on the server will be synchronized across other clients" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInstanceData_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Instance data that can be used to dynamically control sequence evaluation at runtime */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Instance data that can be used to dynamically control sequence evaluation at runtime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurnInInstance_MetaData[] = {
		{ "Comment", "/** Burn-in widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Burn-in widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowBurnin_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionResolveData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequenceAsset;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelSequence;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BurnInOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BindingOverrides;
	static void NewProp_bAutoPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static void NewProp_bOverrideInstanceData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInstanceData;
	static void NewProp_bReplicatePlayback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicatePlayback;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultInstanceData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BurnInInstance;
	static void NewProp_bShowBurnin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBurnin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPartitionResolveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelSequenceActor_AddBinding, "AddBinding" }, // 2518842692
		{ &Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag, "AddBindingByTag" }, // 2108058912
		{ &Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding, "FindNamedBinding" }, // 3840617783
		{ &Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings, "FindNamedBindings" }, // 269387436
		{ &Z_Construct_UFunction_ALevelSequenceActor_GetSequence, "GetSequence" }, // 1709703548
		{ &Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer, "GetSequencePlayer" }, // 4022428919
		{ &Z_Construct_UFunction_ALevelSequenceActor_HideBurnin, "HideBurnin" }, // 3865868766
		{ &Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature, "OnLevelSequenceLoaded__DelegateSignature" }, // 2680739149
		{ &Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding, "RemoveBinding" }, // 3683125847
		{ &Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag, "RemoveBindingByTag" }, // 4084823250
		{ &Z_Construct_UFunction_ALevelSequenceActor_ResetBinding, "ResetBinding" }, // 4966700
		{ &Z_Construct_UFunction_ALevelSequenceActor_ResetBindings, "ResetBindings" }, // 2785403798
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetBinding, "SetBinding" }, // 2512508227
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag, "SetBindingByTag" }, // 2873896096
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback, "SetReplicatePlayback" }, // 524797277
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetSequence, "SetSequence" }, // 1353415701
		{ &Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin, "ShowBurnin" }, // 2222169885
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelSequenceActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceActor, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackSettings_MetaData), NewProp_PlaybackSettings_MetaData) }; // 1561414897
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x011600000008203c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceActor, SequencePlayer), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequenceAsset = { "LevelSequenceAsset", nullptr, (EPropertyFlags)0x0115000000000035, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceActor, LevelSequenceAsset), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelSequenceAsset_MetaData), NewProp_LevelSequenceAsset_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceActor, LevelSequence_DEPRECATED), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelSequence_MetaData), NewProp_LevelSequence_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceActor, CameraSettings), Z_Construct_UScriptStruct_FLevelSequenceCameraSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraSettings_MetaData), NewProp_CameraSettings_MetaData) }; // 687641197
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions = { "BurnInOptions", nullptr, (EPropertyFlags)0x011600000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceActor, BurnInOptions), Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurnInOptions_MetaData), NewProp_BurnInOptions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides = { "BindingOverrides", nullptr, (EPropertyFlags)0x011600000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceActor, BindingOverrides), Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingOverrides_MetaData), NewProp_BindingOverrides_MetaData) };
void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
{
	((ALevelSequenceActor*)Obj)->bAutoPlay_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoPlay_MetaData), NewProp_bAutoPlay_MetaData) };
void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_SetBit(void* Obj)
{
	((ALevelSequenceActor*)Obj)->bOverrideInstanceData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData = { "bOverrideInstanceData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideInstanceData_MetaData), NewProp_bOverrideInstanceData_MetaData) };
void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_SetBit(void* Obj)
{
	((ALevelSequenceActor*)Obj)->bReplicatePlayback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback = { "bReplicatePlayback", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicatePlayback_MetaData), NewProp_bReplicatePlayback_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData = { "DefaultInstanceData", nullptr, (EPropertyFlags)0x011600000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceActor, DefaultInstanceData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInstanceData_MetaData), NewProp_DefaultInstanceData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance = { "BurnInInstance", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceActor, BurnInInstance), Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurnInInstance_MetaData), NewProp_BurnInInstance_MetaData) };
void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_SetBit(void* Obj)
{
	((ALevelSequenceActor*)Obj)->bShowBurnin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin = { "bShowBurnin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowBurnin_MetaData), NewProp_bShowBurnin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_WorldPartitionResolveData = { "WorldPartitionResolveData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceActor, WorldPartitionResolveData), Z_Construct_UScriptStruct_FWorldPartitionResolveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPartitionResolveData_MetaData), NewProp_WorldPartitionResolveData_MetaData) }; // 3461544685
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequenceAsset,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_CameraSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_WorldPartitionResolveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALevelSequenceActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALevelSequenceActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceActor, IMovieScenePlaybackClient), false },  // 401751226
	{ Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceActor, IMovieSceneBindingOwnerInterface), false },  // 305914322
	{ Z_Construct_UClass_UWorldPartitionObjectResolver_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceActor, IWorldPartitionObjectResolver), false },  // 650593381
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelSequenceActor_Statics::ClassParams = {
	&ALevelSequenceActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelSequenceActor()
{
	if (!Z_Registration_Info_UClass_ALevelSequenceActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelSequenceActor.OuterSingleton, Z_Construct_UClass_ALevelSequenceActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelSequenceActor.OuterSingleton;
}
template<> LEVELSEQUENCE_API UClass* StaticClass<ALevelSequenceActor>()
{
	return ALevelSequenceActor::StaticClass();
}
void ALevelSequenceActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SequencePlayer(TEXT("SequencePlayer"));
	static const FName Name_LevelSequenceAsset(TEXT("LevelSequenceAsset"));
	const bool bIsValid = true
		&& Name_SequencePlayer == ClassReps[(int32)ENetFields_Private::SequencePlayer].Property->GetFName()
		&& Name_LevelSequenceAsset == ClassReps[(int32)ENetFields_Private::LevelSequenceAsset].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALevelSequenceActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelSequenceActor);
ALevelSequenceActor::~ALevelSequenceActor() {}
// End Class ALevelSequenceActor

// Begin ScriptStruct FBoundActorProxy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoundActorProxy;
class UScriptStruct* FBoundActorProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoundActorProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoundActorProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoundActorProxy, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("BoundActorProxy"));
	}
	return Z_Registration_Info_UScriptStruct_BoundActorProxy.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FBoundActorProxy>()
{
	return FBoundActorProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoundActorProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundActor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Specifies the actor to override the binding with */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Specifies the actor to override the binding with" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoundActorProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0114040800000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoundActorProxy, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundActor_MetaData), NewProp_BoundActor_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoundActorProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	nullptr,
	&NewStructOps,
	"BoundActorProxy",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers), 0),
	sizeof(FBoundActorProxy),
	alignof(FBoundActorProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy()
{
	if (!Z_Registration_Info_UScriptStruct_BoundActorProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoundActorProxy.InnerSingleton, Z_Construct_UScriptStruct_FBoundActorProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoundActorProxy.InnerSingleton;
}
// End ScriptStruct FBoundActorProxy

// Begin Class AReplicatedLevelSequenceActor
void AReplicatedLevelSequenceActor::StaticRegisterNativesAReplicatedLevelSequenceActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReplicatedLevelSequenceActor);
UClass* Z_Construct_UClass_AReplicatedLevelSequenceActor_NoRegister()
{
	return AReplicatedLevelSequenceActor::StaticClass();
}
struct Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A level sequence actor that is set to always be relevant for networking purposes\n */" },
		{ "HideCategories", "Rendering Physics HLOD Activation Input" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A level sequence actor that is set to always be relevant for networking purposes" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplicatedLevelSequenceActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALevelSequenceActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::ClassParams = {
	&AReplicatedLevelSequenceActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AReplicatedLevelSequenceActor()
{
	if (!Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.OuterSingleton, Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.OuterSingleton;
}
template<> LEVELSEQUENCE_API UClass* StaticClass<AReplicatedLevelSequenceActor>()
{
	return AReplicatedLevelSequenceActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AReplicatedLevelSequenceActor);
AReplicatedLevelSequenceActor::~AReplicatedLevelSequenceActor() {}
// End Class AReplicatedLevelSequenceActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoundActorProxy::StaticStruct, Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewStructOps, TEXT("BoundActorProxy"), &Z_Registration_Info_UScriptStruct_BoundActorProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoundActorProxy), 2455337033U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceBurnInInitSettings, ULevelSequenceBurnInInitSettings::StaticClass, TEXT("ULevelSequenceBurnInInitSettings"), &Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceBurnInInitSettings), 2468747370U) },
		{ Z_Construct_UClass_ULevelSequenceBurnInOptions, ULevelSequenceBurnInOptions::StaticClass, TEXT("ULevelSequenceBurnInOptions"), &Z_Registration_Info_UClass_ULevelSequenceBurnInOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceBurnInOptions), 2294881290U) },
		{ Z_Construct_UClass_ALevelSequenceActor, ALevelSequenceActor::StaticClass, TEXT("ALevelSequenceActor"), &Z_Registration_Info_UClass_ALevelSequenceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelSequenceActor), 3485608222U) },
		{ Z_Construct_UClass_AReplicatedLevelSequenceActor, AReplicatedLevelSequenceActor::StaticClass, TEXT("AReplicatedLevelSequenceActor"), &Z_Registration_Info_UClass_AReplicatedLevelSequenceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReplicatedLevelSequenceActor), 2943122412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_718884636(TEXT("/Script/LevelSequence"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
