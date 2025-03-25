// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneSkeletalAnimationTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationTrack() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneSkeletalAnimRootMotionTrackParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams;
class UScriptStruct* FMovieSceneSkeletalAnimRootMotionTrackParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneSkeletalAnimRootMotionTrackParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneSkeletalAnimRootMotionTrackParams>()
{
	return FMovieSceneSkeletalAnimRootMotionTrackParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**Struct to hold the cached root motion positions based upon how we calculated them.\n* Also provides way to get the root motion at a particular time.\n*/" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Struct to hold the cached root motion positions based upon how we calculated them.\nAlso provides way to get the root motion at a particular time." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimRootMotionTrackParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneSkeletalAnimRootMotionTrackParams",
	nullptr,
	0,
	sizeof(FMovieSceneSkeletalAnimRootMotionTrackParams),
	alignof(FMovieSceneSkeletalAnimRootMotionTrackParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams.InnerSingleton;
}
// End ScriptStruct FMovieSceneSkeletalAnimRootMotionTrackParams

// Begin Class UMovieSceneSkeletalAnimationTrack Function GetSwapRootBone
struct Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics
{
	struct MovieSceneSkeletalAnimationTrack_eventGetSwapRootBone_Parms
	{
		ESwapRootBone ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSkeletalAnimationTrack_eventGetSwapRootBone_Parms, ReturnValue), Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone, METADATA_PARAMS(0, nullptr) }; // 398666558
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack, nullptr, "GetSwapRootBone", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::MovieSceneSkeletalAnimationTrack_eventGetSwapRootBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::MovieSceneSkeletalAnimationTrack_eventGetSwapRootBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSkeletalAnimationTrack::execGetSwapRootBone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESwapRootBone*)Z_Param__Result=P_THIS->GetSwapRootBone();
	P_NATIVE_END;
}
// End Class UMovieSceneSkeletalAnimationTrack Function GetSwapRootBone

// Begin Class UMovieSceneSkeletalAnimationTrack Function SetSwapRootBone
struct Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics
{
	struct MovieSceneSkeletalAnimationTrack_eventSetSwapRootBone_Parms
	{
		ESwapRootBone InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::NewProp_InValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSkeletalAnimationTrack_eventSetSwapRootBone_Parms, InValue), Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone, METADATA_PARAMS(0, nullptr) }; // 398666558
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::NewProp_InValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack, nullptr, "SetSwapRootBone", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::MovieSceneSkeletalAnimationTrack_eventSetSwapRootBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::MovieSceneSkeletalAnimationTrack_eventSetSwapRootBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSkeletalAnimationTrack::execSetSwapRootBone)
{
	P_GET_ENUM(ESwapRootBone,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSwapRootBone(ESwapRootBone(Z_Param_InValue));
	P_NATIVE_END;
}
// End Class UMovieSceneSkeletalAnimationTrack Function SetSwapRootBone

// Begin Class UMovieSceneSkeletalAnimationTrack
void UMovieSceneSkeletalAnimationTrack::GetSwapRootBone_WrapperImpl(const void* Object, void* OutValue)
{
	const UMovieSceneSkeletalAnimationTrack* Obj = (const UMovieSceneSkeletalAnimationTrack*)Object;
	ESwapRootBone& Result = *(ESwapRootBone*)OutValue;
	Result = (ESwapRootBone)Obj->GetSwapRootBone();
}
void UMovieSceneSkeletalAnimationTrack::SetSwapRootBone_WrapperImpl(void* Object, const void* InValue)
{
	UMovieSceneSkeletalAnimationTrack* Obj = (UMovieSceneSkeletalAnimationTrack*)Object;
	ESwapRootBone& Value = *(ESwapRootBone*)InValue;
	Obj->SetSwapRootBone(Value);
}
void UMovieSceneSkeletalAnimationTrack::StaticRegisterNativesUMovieSceneSkeletalAnimationTrack()
{
	UClass* Class = UMovieSceneSkeletalAnimationTrack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSwapRootBone", &UMovieSceneSkeletalAnimationTrack::execGetSwapRootBone },
		{ "SetSwapRootBone", &UMovieSceneSkeletalAnimationTrack::execSetSwapRootBone },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSkeletalAnimationTrack);
UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister()
{
	return UMovieSceneSkeletalAnimationTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles animation of skeletal mesh actors\n */" },
		{ "IncludePath", "Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Handles animation of skeletal mesh actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSections_MetaData[] = {
		{ "Comment", "/** List of all animation sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "List of all animation sections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacySectionIndexBlend_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendFirstChildOfRoot_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/** Whether to blend and adjust the first child node with animation instead of the root, this should be true for blending when the root is static, false if the animations have proper root motion*/" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Whether to blend and adjust the first child node with animation instead of the root, this should be true for blending when the root is static, false if the animations have proper root motion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapRootBone_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/** If on the root bone transform will be swapped to the specified root*/" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "If on the root bone transform will be swapped to the specified root" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowRootMotionTrail_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/** Whether to show the position of the root for this sections */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Whether to show the position of the root for this sections" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationSections;
	static void NewProp_bUseLegacySectionIndexBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacySectionIndexBlend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionParams;
	static void NewProp_bBlendFirstChildOfRoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendFirstChildOfRoot;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SwapRootBone_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SwapRootBone;
#if WITH_EDITORONLY_DATA
	static void NewProp_bShowRootMotionTrail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRootMotionTrail;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_GetSwapRootBone, "GetSwapRootBone" }, // 2634201401
		{ &Z_Construct_UFunction_UMovieSceneSkeletalAnimationTrack_SetSwapRootBone, "SetSwapRootBone" }, // 2545516381
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSkeletalAnimationTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_Inner = { "AnimationSections", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections = { "AnimationSections", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationTrack, AnimationSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationSections_MetaData), NewProp_AnimationSections_MetaData) };
void Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_SetBit(void* Obj)
{
	((UMovieSceneSkeletalAnimationTrack*)Obj)->bUseLegacySectionIndexBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend = { "bUseLegacySectionIndexBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationTrack), &Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLegacySectionIndexBlend_MetaData), NewProp_bUseLegacySectionIndexBlend_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_RootMotionParams = { "RootMotionParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationTrack, RootMotionParams), Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMotionParams_MetaData), NewProp_RootMotionParams_MetaData) }; // 214889032
void Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_SetBit(void* Obj)
{
	((UMovieSceneSkeletalAnimationTrack*)Obj)->bBlendFirstChildOfRoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot = { "bBlendFirstChildOfRoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationTrack), &Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendFirstChildOfRoot_MetaData), NewProp_bBlendFirstChildOfRoot_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_SwapRootBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_SwapRootBone = { "SwapRootBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, &UMovieSceneSkeletalAnimationTrack::SetSwapRootBone_WrapperImpl, &UMovieSceneSkeletalAnimationTrack::GetSwapRootBone_WrapperImpl, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationTrack, SwapRootBone), Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapRootBone_MetaData), NewProp_SwapRootBone_MetaData) }; // 398666558
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail_SetBit(void* Obj)
{
	((UMovieSceneSkeletalAnimationTrack*)Obj)->bShowRootMotionTrail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail = { "bShowRootMotionTrail", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationTrack), &Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowRootMotionTrail_MetaData), NewProp_bShowRootMotionTrail_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_RootMotionParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_SwapRootBone_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_SwapRootBone,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::ClassParams = {
	&UMovieSceneSkeletalAnimationTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSkeletalAnimationTrack>()
{
	return UMovieSceneSkeletalAnimationTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSkeletalAnimationTrack);
UMovieSceneSkeletalAnimationTrack::~UMovieSceneSkeletalAnimationTrack() {}
// End Class UMovieSceneSkeletalAnimationTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneSkeletalAnimRootMotionTrackParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::NewStructOps, TEXT("MovieSceneSkeletalAnimRootMotionTrackParams"), &Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSkeletalAnimRootMotionTrackParams), 214889032U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack, UMovieSceneSkeletalAnimationTrack::StaticClass, TEXT("UMovieSceneSkeletalAnimationTrack"), &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSkeletalAnimationTrack), 2080642797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_48748958(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
