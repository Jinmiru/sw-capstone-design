// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneCapture/Public/MovieSceneCaptureProtocolBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureProtocolBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister();
MOVIESCENECAPTURE_API UEnum* Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState();
MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FFrameMetrics();
UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References

// Begin Enum EMovieSceneCaptureProtocolState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState;
static UEnum* EMovieSceneCaptureProtocolState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState, (UObject*)Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("EMovieSceneCaptureProtocolState"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UEnum* StaticEnum<EMovieSceneCaptureProtocolState>()
{
	return EMovieSceneCaptureProtocolState_StaticEnum();
}
struct Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Capturing.Comment", "/** The protocol has been initialized, bound to a viewport and is capturing data */" },
		{ "Capturing.Name", "EMovieSceneCaptureProtocolState::Capturing" },
		{ "Capturing.ToolTip", "The protocol has been initialized, bound to a viewport and is capturing data" },
		{ "Finalizing.Comment", "/** The protocol has finished capturing data, and is pending finalization */" },
		{ "Finalizing.Name", "EMovieSceneCaptureProtocolState::Finalizing" },
		{ "Finalizing.ToolTip", "The protocol has finished capturing data, and is pending finalization" },
		{ "Idle.Comment", "/** The protocol is idle, and has not even been initialized */" },
		{ "Idle.Name", "EMovieSceneCaptureProtocolState::Idle" },
		{ "Idle.ToolTip", "The protocol is idle, and has not even been initialized" },
		{ "Initialized.Comment", "/** The protocol has been initialized (and bound to a viewport) but is not capturing frames yet */" },
		{ "Initialized.Name", "EMovieSceneCaptureProtocolState::Initialized" },
		{ "Initialized.ToolTip", "The protocol has been initialized (and bound to a viewport) but is not capturing frames yet" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneCaptureProtocolState::Idle", (int64)EMovieSceneCaptureProtocolState::Idle },
		{ "EMovieSceneCaptureProtocolState::Initialized", (int64)EMovieSceneCaptureProtocolState::Initialized },
		{ "EMovieSceneCaptureProtocolState::Capturing", (int64)EMovieSceneCaptureProtocolState::Capturing },
		{ "EMovieSceneCaptureProtocolState::Finalizing", (int64)EMovieSceneCaptureProtocolState::Finalizing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	nullptr,
	"EMovieSceneCaptureProtocolState",
	"EMovieSceneCaptureProtocolState",
	Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.InnerSingleton, Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState.InnerSingleton;
}
// End Enum EMovieSceneCaptureProtocolState

// Begin Class UMovieSceneCaptureProtocolBase Function GetState
struct Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics
{
	struct MovieSceneCaptureProtocolBase_eventGetState_Parms
	{
		EMovieSceneCaptureProtocolState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Get the current state of this capture protocol\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "Get the current state of this capture protocol" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCaptureProtocolBase_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState, METADATA_PARAMS(0, nullptr) }; // 150218003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureProtocolBase, nullptr, "GetState", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::MovieSceneCaptureProtocolBase_eventGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::MovieSceneCaptureProtocolBase_eventGetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneCaptureProtocolBase::execGetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMovieSceneCaptureProtocolState*)Z_Param__Result=P_THIS->GetState();
	P_NATIVE_END;
}
// End Class UMovieSceneCaptureProtocolBase Function GetState

// Begin Class UMovieSceneCaptureProtocolBase Function IsCapturing
struct Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics
{
	struct MovieSceneCaptureProtocolBase_eventIsCapturing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Check whether we can capture a frame from this protocol\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "Check whether we can capture a frame from this protocol" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneCaptureProtocolBase_eventIsCapturing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneCaptureProtocolBase_eventIsCapturing_Parms), &Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureProtocolBase, nullptr, "IsCapturing", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::MovieSceneCaptureProtocolBase_eventIsCapturing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::MovieSceneCaptureProtocolBase_eventIsCapturing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneCaptureProtocolBase::execIsCapturing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCapturing();
	P_NATIVE_END;
}
// End Class UMovieSceneCaptureProtocolBase Function IsCapturing

// Begin Class UMovieSceneCaptureProtocolBase
void UMovieSceneCaptureProtocolBase::StaticRegisterNativesUMovieSceneCaptureProtocolBase()
{
	UClass* Class = UMovieSceneCaptureProtocolBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetState", &UMovieSceneCaptureProtocolBase::execGetState },
		{ "IsCapturing", &UMovieSceneCaptureProtocolBase::execIsCapturing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCaptureProtocolBase);
UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister()
{
	return UMovieSceneCaptureProtocolBase::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A capture protocol responsible for dealing with captured frames using some custom method (writing out to disk, streaming, etc)\n *\n * A typical process for capture consits of the following process:\n *     Setup -> [ Warm up -> [ Capture Frame ] ] -> Begin Finalize -> [ HasFinishedProcessing ] -> Finalize\n */" },
		{ "IncludePath", "MovieSceneCaptureProtocolBase.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A capture protocol responsible for dealing with captured frames using some custom method (writing out to disk, streaming, etc)\n\nA typical process for capture consits of the following process:\n    Setup -> [ Warm up -> [ Capture Frame ] ] -> Begin Finalize -> [ HasFinishedProcessing ] -> Finalize" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Comment", "/** The current state of the protocol */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The current state of the protocol" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState, "GetState" }, // 2445295770
		{ &Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing, "IsCapturing" }, // 769958496
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCaptureProtocolBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCaptureProtocolBase, State), Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 150218003
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::ClassParams = {
	&UMovieSceneCaptureProtocolBase::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::PropPointers),
	0,
	0x000804A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.OuterSingleton, Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMovieSceneCaptureProtocolBase>()
{
	return UMovieSceneCaptureProtocolBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCaptureProtocolBase);
UMovieSceneCaptureProtocolBase::~UMovieSceneCaptureProtocolBase() {}
// End Class UMovieSceneCaptureProtocolBase

// Begin Class UMovieSceneImageCaptureProtocolBase
void UMovieSceneImageCaptureProtocolBase::StaticRegisterNativesUMovieSceneImageCaptureProtocolBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneImageCaptureProtocolBase);
UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister()
{
	return UMovieSceneImageCaptureProtocolBase::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A class to inherit from for image capture protocols. Used to filter the UI for protocols used on the image capture pass.\n*/" },
		{ "IncludePath", "MovieSceneCaptureProtocolBase.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A class to inherit from for image capture protocols. Used to filter the UI for protocols used on the image capture pass." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneImageCaptureProtocolBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneCaptureProtocolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::ClassParams = {
	&UMovieSceneImageCaptureProtocolBase::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000804A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase()
{
	if (!Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.OuterSingleton, Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMovieSceneImageCaptureProtocolBase>()
{
	return UMovieSceneImageCaptureProtocolBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneImageCaptureProtocolBase);
UMovieSceneImageCaptureProtocolBase::~UMovieSceneImageCaptureProtocolBase() {}
// End Class UMovieSceneImageCaptureProtocolBase

// Begin Class UMovieSceneAudioCaptureProtocolBase
void UMovieSceneAudioCaptureProtocolBase::StaticRegisterNativesUMovieSceneAudioCaptureProtocolBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAudioCaptureProtocolBase);
UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister()
{
	return UMovieSceneAudioCaptureProtocolBase::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A class to inherit from for audio capture protocols. Used to filter the UI for protocols used on the audio capture pass.\n*/" },
		{ "IncludePath", "MovieSceneCaptureProtocolBase.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A class to inherit from for audio capture protocols. Used to filter the UI for protocols used on the audio capture pass." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAudioCaptureProtocolBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneCaptureProtocolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::ClassParams = {
	&UMovieSceneAudioCaptureProtocolBase::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000804A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase()
{
	if (!Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.OuterSingleton, Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMovieSceneAudioCaptureProtocolBase>()
{
	return UMovieSceneAudioCaptureProtocolBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAudioCaptureProtocolBase);
UMovieSceneAudioCaptureProtocolBase::~UMovieSceneAudioCaptureProtocolBase() {}
// End Class UMovieSceneAudioCaptureProtocolBase

// Begin ScriptStruct FFrameMetrics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FrameMetrics;
class UScriptStruct* FFrameMetrics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FrameMetrics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FrameMetrics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrameMetrics, (UObject*)Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("FrameMetrics"));
	}
	return Z_Registration_Info_UScriptStruct_FrameMetrics.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<FFrameMetrics>()
{
	return FFrameMetrics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFrameMetrics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Metrics that correspond to a particular frame */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "Metrics that correspond to a particular frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalElapsedTime_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** The total amount of time, in seconds, since the capture started */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The total amount of time, in seconds, since the capture started" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameDelta_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** The total amount of time, in seconds, that this specific frame took to render (not accounting for dropped frames) */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The total amount of time, in seconds, that this specific frame took to render (not accounting for dropped frames)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumber_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** The index of this frame from the start of the capture, including dropped frames */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The index of this frame from the start of the capture, including dropped frames" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumDroppedFrames_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** The number of frames we dropped in-between this frame, and the last one we captured */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The number of frames we dropped in-between this frame, and the last one we captured" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalElapsedTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameDelta;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumDroppedFrames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrameMetrics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_TotalElapsedTime = { "TotalElapsedTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFrameMetrics, TotalElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalElapsedTime_MetaData), NewProp_TotalElapsedTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameDelta = { "FrameDelta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFrameMetrics, FrameDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameDelta_MetaData), NewProp_FrameDelta_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFrameMetrics, FrameNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameNumber_MetaData), NewProp_FrameNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_NumDroppedFrames = { "NumDroppedFrames", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFrameMetrics, NumDroppedFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumDroppedFrames_MetaData), NewProp_NumDroppedFrames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFrameMetrics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_TotalElapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_NumDroppedFrames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	nullptr,
	&NewStructOps,
	"FrameMetrics",
	Z_Construct_UScriptStruct_FFrameMetrics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::PropPointers),
	sizeof(FFrameMetrics),
	alignof(FFrameMetrics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFrameMetrics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFrameMetrics()
{
	if (!Z_Registration_Info_UScriptStruct_FrameMetrics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FrameMetrics.InnerSingleton, Z_Construct_UScriptStruct_FFrameMetrics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FrameMetrics.InnerSingleton;
}
// End ScriptStruct FFrameMetrics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovieSceneCaptureProtocolState_StaticEnum, TEXT("EMovieSceneCaptureProtocolState"), &Z_Registration_Info_UEnum_EMovieSceneCaptureProtocolState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 150218003U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFrameMetrics::StaticStruct, Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewStructOps, TEXT("FrameMetrics"), &Z_Registration_Info_UScriptStruct_FrameMetrics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFrameMetrics), 2407708522U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCaptureProtocolBase, UMovieSceneCaptureProtocolBase::StaticClass, TEXT("UMovieSceneCaptureProtocolBase"), &Z_Registration_Info_UClass_UMovieSceneCaptureProtocolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCaptureProtocolBase), 2055168723U) },
		{ Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase, UMovieSceneImageCaptureProtocolBase::StaticClass, TEXT("UMovieSceneImageCaptureProtocolBase"), &Z_Registration_Info_UClass_UMovieSceneImageCaptureProtocolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneImageCaptureProtocolBase), 2553009984U) },
		{ Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase, UMovieSceneAudioCaptureProtocolBase::StaticClass, TEXT("UMovieSceneAudioCaptureProtocolBase"), &Z_Registration_Info_UClass_UMovieSceneAudioCaptureProtocolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAudioCaptureProtocolBase), 2369838059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_1352047725(TEXT("/Script/MovieSceneCapture"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
