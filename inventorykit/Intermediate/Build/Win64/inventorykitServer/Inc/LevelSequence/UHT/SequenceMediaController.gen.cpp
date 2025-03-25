// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Public/SequenceMediaController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceMediaController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceMediaController();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceMediaController_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaComponent_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCustomClockSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin Class ALevelSequenceMediaController Function GetMediaComponent
struct Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics
{
	struct LevelSequenceMediaController_eventGetMediaComponent_Parms
	{
		UMediaComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/**\n\x09 * Access this actor's media component\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ToolTip", "Access this actor's media component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceMediaController_eventGetMediaComponent_Parms, ReturnValue), Z_Construct_UClass_UMediaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceMediaController, nullptr, "GetMediaComponent", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::LevelSequenceMediaController_eventGetMediaComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::LevelSequenceMediaController_eventGetMediaComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceMediaController::execGetMediaComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMediaComponent**)Z_Param__Result=P_THIS->GetMediaComponent();
	P_NATIVE_END;
}
// End Class ALevelSequenceMediaController Function GetMediaComponent

// Begin Class ALevelSequenceMediaController Function GetSequence
struct Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics
{
	struct LevelSequenceMediaController_eventGetSequence_Parms
	{
		ALevelSequenceActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/**\n\x09 * Access this actor's Level Sequence Actor\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ToolTip", "Access this actor's Level Sequence Actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceMediaController_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceMediaController, nullptr, "GetSequence", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::LevelSequenceMediaController_eventGetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::LevelSequenceMediaController_eventGetSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceMediaController::execGetSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALevelSequenceActor**)Z_Param__Result=P_THIS->GetSequence();
	P_NATIVE_END;
}
// End Class ALevelSequenceMediaController Function GetSequence

// Begin Class ALevelSequenceMediaController Function OnRep_ServerStartTimeSeconds
struct Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceMediaController, nullptr, "OnRep_ServerStartTimeSeconds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceMediaController::execOnRep_ServerStartTimeSeconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ServerStartTimeSeconds();
	P_NATIVE_END;
}
// End Class ALevelSequenceMediaController Function OnRep_ServerStartTimeSeconds

// Begin Class ALevelSequenceMediaController Function Play
struct Z_Construct_UFunction_ALevelSequenceMediaController_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synchronization" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceMediaController_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceMediaController, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceMediaController_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALevelSequenceMediaController_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceMediaController_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceMediaController::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class ALevelSequenceMediaController Function Play

// Begin Class ALevelSequenceMediaController Function SynchronizeToServer
struct Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics
{
	struct LevelSequenceMediaController_eventSynchronizeToServer_Parms
	{
		float DesyncThresholdSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/**\n\x09 * Forcibly synchronize the sequence to the server's position if it has diverged by more than the specified threshold\n\x09 */" },
		{ "CPP_Default_DesyncThresholdSeconds", "2.000000" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ToolTip", "Forcibly synchronize the sequence to the server's position if it has diverged by more than the specified threshold" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesyncThresholdSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::NewProp_DesyncThresholdSeconds = { "DesyncThresholdSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceMediaController_eventSynchronizeToServer_Parms, DesyncThresholdSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::NewProp_DesyncThresholdSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceMediaController, nullptr, "SynchronizeToServer", nullptr, nullptr, Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::LevelSequenceMediaController_eventSynchronizeToServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::LevelSequenceMediaController_eventSynchronizeToServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSequenceMediaController::execSynchronizeToServer)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DesyncThresholdSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SynchronizeToServer(Z_Param_DesyncThresholdSeconds);
	P_NATIVE_END;
}
// End Class ALevelSequenceMediaController Function SynchronizeToServer

// Begin Class ALevelSequenceMediaController
void ALevelSequenceMediaController::StaticRegisterNativesALevelSequenceMediaController()
{
	UClass* Class = ALevelSequenceMediaController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMediaComponent", &ALevelSequenceMediaController::execGetMediaComponent },
		{ "GetSequence", &ALevelSequenceMediaController::execGetSequence },
		{ "OnRep_ServerStartTimeSeconds", &ALevelSequenceMediaController::execOnRep_ServerStartTimeSeconds },
		{ "Play", &ALevelSequenceMediaController::execPlay },
		{ "SynchronizeToServer", &ALevelSequenceMediaController::execSynchronizeToServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelSequenceMediaController);
UClass* Z_Construct_UClass_ALevelSequenceMediaController_NoRegister()
{
	return ALevelSequenceMediaController::StaticClass();
}
struct Z_Construct_UClass_ALevelSequenceMediaController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Replicated actor class that is responsible for instigating various cinematic assets (Media, Audio, Level Sequences) in a synchronized fasion\n */" },
		{ "HideCategories", "Rendering Physics HLOD Activation Input Collision" },
		{ "IncludePath", "SequenceMediaController.h" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Replicated actor class that is responsible for instigating various cinematic assets (Media, Audio, Level Sequences) in a synchronized fasion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "BlueprintGetter", "GetSequence" },
		{ "Category", "Synchronization" },
		{ "Comment", "/** Pointer to the sequence actor to use for playback */" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ToolTip", "Pointer to the sequence actor to use for playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaComponent_MetaData[] = {
		{ "BlueprintGetter", "GetMediaComponent" },
		{ "Category", "Synchronization" },
		{ "Comment", "/** Media component that contains the media player to synchronize with */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ToolTip", "Media component that contains the media player to synchronize with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerStartTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Synchronization" },
		{ "Comment", "/** Replicated time at which the server started the sequence (taken from AGameStateBase::GetServerWorldTimeSeconds) */" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ToolTip", "Replicated time at which the server started the sequence (taken from AGameStateBase::GetServerWorldTimeSeconds)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerStartTimeSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent, "GetMediaComponent" }, // 1238167556
		{ &Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence, "GetSequence" }, // 4026880355
		{ &Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds, "OnRep_ServerStartTimeSeconds" }, // 3839270028
		{ &Z_Construct_UFunction_ALevelSequenceMediaController_Play, "Play" }, // 1961991512
		{ &Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer, "SynchronizeToServer" }, // 4170306999
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelSequenceMediaController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceMediaController, Sequence), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_MediaComponent = { "MediaComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceMediaController, MediaComponent), Z_Construct_UClass_UMediaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaComponent_MetaData), NewProp_MediaComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_ServerStartTimeSeconds = { "ServerStartTimeSeconds", "OnRep_ServerStartTimeSeconds", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSequenceMediaController, ServerStartTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerStartTimeSeconds_MetaData), NewProp_ServerStartTimeSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelSequenceMediaController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_MediaComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_ServerStartTimeSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceMediaController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALevelSequenceMediaController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceMediaController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALevelSequenceMediaController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneCustomClockSource_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceMediaController, IMovieSceneCustomClockSource), false },  // 2200710100
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelSequenceMediaController_Statics::ClassParams = {
	&ALevelSequenceMediaController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALevelSequenceMediaController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceMediaController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceMediaController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelSequenceMediaController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelSequenceMediaController()
{
	if (!Z_Registration_Info_UClass_ALevelSequenceMediaController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelSequenceMediaController.OuterSingleton, Z_Construct_UClass_ALevelSequenceMediaController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelSequenceMediaController.OuterSingleton;
}
template<> LEVELSEQUENCE_API UClass* StaticClass<ALevelSequenceMediaController>()
{
	return ALevelSequenceMediaController::StaticClass();
}
void ALevelSequenceMediaController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ServerStartTimeSeconds(TEXT("ServerStartTimeSeconds"));
	const bool bIsValid = true
		&& Name_ServerStartTimeSeconds == ClassReps[(int32)ENetFields_Private::ServerStartTimeSeconds].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALevelSequenceMediaController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelSequenceMediaController);
ALevelSequenceMediaController::~ALevelSequenceMediaController() {}
// End Class ALevelSequenceMediaController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelSequenceMediaController, ALevelSequenceMediaController::StaticClass, TEXT("ALevelSequenceMediaController"), &Z_Registration_Info_UClass_ALevelSequenceMediaController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelSequenceMediaController), 2957885716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_2274543315(TEXT("/Script/LevelSequence"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
