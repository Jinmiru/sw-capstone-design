// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneCameraCutSection.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneCameraCutSection Function GetCameraBindingID
struct Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics
{
	struct MovieSceneCameraCutSection_eventGetCameraBindingID_Parms
	{
		FMovieSceneObjectBindingID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Gets the camera binding for this CameraCut section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "Gets the camera binding for this CameraCut section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCameraCutSection_eventGetCameraBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCameraCutSection, nullptr, "GetCameraBindingID", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::MovieSceneCameraCutSection_eventGetCameraBindingID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::MovieSceneCameraCutSection_eventGetCameraBindingID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneCameraCutSection::execGetCameraBindingID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->GetCameraBindingID();
	P_NATIVE_END;
}
// End Class UMovieSceneCameraCutSection Function GetCameraBindingID

// Begin Class UMovieSceneCameraCutSection Function SetCameraBindingID
struct Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics
{
	struct MovieSceneCameraCutSection_eventSetCameraBindingID_Parms
	{
		FMovieSceneObjectBindingID InCameraBindingID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Sets the camera binding for this CameraCut section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "Sets the camera binding for this CameraCut section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCameraBindingID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCameraBindingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::NewProp_InCameraBindingID = { "InCameraBindingID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneCameraCutSection_eventSetCameraBindingID_Parms, InCameraBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCameraBindingID_MetaData), NewProp_InCameraBindingID_MetaData) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::NewProp_InCameraBindingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCameraCutSection, nullptr, "SetCameraBindingID", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::MovieSceneCameraCutSection_eventSetCameraBindingID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::MovieSceneCameraCutSection_eventSetCameraBindingID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneCameraCutSection::execSetCameraBindingID)
{
	P_GET_STRUCT_REF(FMovieSceneObjectBindingID,Z_Param_Out_InCameraBindingID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraBindingID(Z_Param_Out_InCameraBindingID);
	P_NATIVE_END;
}
// End Class UMovieSceneCameraCutSection Function SetCameraBindingID

// Begin Class UMovieSceneCameraCutSection
void UMovieSceneCameraCutSection::StaticRegisterNativesUMovieSceneCameraCutSection()
{
	UClass* Class = UMovieSceneCameraCutSection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCameraBindingID", &UMovieSceneCameraCutSection::execGetCameraBindingID },
		{ "SetCameraBindingID", &UMovieSceneCameraCutSection::execSetCameraBindingID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraCutSection);
UClass* Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister()
{
	return UMovieSceneCameraCutSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneCameraCutSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie CameraCuts are sections on the CameraCuts track, that show what the viewer \"sees\"\n */" },
		{ "IncludePath", "Sections/MovieSceneCameraCutSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie CameraCuts are sections on the CameraCuts track, that show what the viewer \"sees\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockPreviousCamera_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** When blending, lock the previous camera (camera cut or gameplay camera). */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "When blending, lock the previous camera (camera cut or gameplay camera)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraGuid_MetaData[] = {
		{ "Comment", "/** The camera possessable or spawnable that this movie CameraCut uses */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "The camera possessable or spawnable that this movie CameraCut uses" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBindingID_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** The camera binding that this movie CameraCut uses */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "The camera binding that this movie CameraCut uses" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCameraCutTransform_MetaData[] = {
		{ "Comment", "/** Camera transform at the start of the cut, computed at compile time */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "Camera transform at the start of the cut, computed at compile time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasInitialCameraCutTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailReferenceOffset_MetaData[] = {
		{ "Comment", "/** The reference frame offset for single thumbnail rendering */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "The reference frame offset for single thumbnail rendering" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bLockPreviousCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockPreviousCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraBindingID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialCameraCutTransform;
	static void NewProp_bHasInitialCameraCutTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInitialCameraCutTransform;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbnailReferenceOffset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID, "GetCameraBindingID" }, // 1987747521
		{ &Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID, "SetCameraBindingID" }, // 482422320
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraCutSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bLockPreviousCamera_SetBit(void* Obj)
{
	((UMovieSceneCameraCutSection*)Obj)->bLockPreviousCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bLockPreviousCamera = { "bLockPreviousCamera", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneCameraCutSection), &Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bLockPreviousCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockPreviousCamera_MetaData), NewProp_bLockPreviousCamera_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraGuid = { "CameraGuid", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCameraCutSection, CameraGuid_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraGuid_MetaData), NewProp_CameraGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraBindingID = { "CameraBindingID", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCameraCutSection, CameraBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBindingID_MetaData), NewProp_CameraBindingID_MetaData) }; // 2701874266
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_InitialCameraCutTransform = { "InitialCameraCutTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCameraCutSection, InitialCameraCutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCameraCutTransform_MetaData), NewProp_InitialCameraCutTransform_MetaData) };
void Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bHasInitialCameraCutTransform_SetBit(void* Obj)
{
	((UMovieSceneCameraCutSection*)Obj)->bHasInitialCameraCutTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bHasInitialCameraCutTransform = { "bHasInitialCameraCutTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneCameraCutSection), &Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bHasInitialCameraCutTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasInitialCameraCutTransform_MetaData), NewProp_bHasInitialCameraCutTransform_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_ThumbnailReferenceOffset = { "ThumbnailReferenceOffset", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneCameraCutSection, ThumbnailReferenceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailReferenceOffset_MetaData), NewProp_ThumbnailReferenceOffset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bLockPreviousCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraBindingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_InitialCameraCutTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_bHasInitialCameraCutTransform,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_ThumbnailReferenceOffset,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneCameraCutSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::ClassParams = {
	&UMovieSceneCameraCutSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneCameraCutSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneCameraCutSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraCutSection.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneCameraCutSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraCutSection>()
{
	return UMovieSceneCameraCutSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraCutSection);
UMovieSceneCameraCutSection::~UMovieSceneCameraCutSection() {}
// End Class UMovieSceneCameraCutSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCameraCutSection, UMovieSceneCameraCutSection::StaticClass, TEXT("UMovieSceneCameraCutSection"), &Z_Registration_Info_UClass_UMovieSceneCameraCutSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraCutSection), 3406567338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_3100884565(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraCutSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
