// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneDataLayerSection.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDataLayerSection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerSection_NoRegister();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Class UMovieSceneDataLayerSection Function GetDataLayerAssets
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics
{
	struct MovieSceneDataLayerSection_eventGetDataLayerAssets_Parms
	{
		TArray<UDataLayerAsset*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneDataLayerSection_eventGetDataLayerAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "GetDataLayerAssets", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::MovieSceneDataLayerSection_eventGetDataLayerAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::MovieSceneDataLayerSection_eventGetDataLayerAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execGetDataLayerAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDataLayerAsset*>*)Z_Param__Result=P_THIS->GetDataLayerAssets();
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function GetDataLayerAssets

// Begin Class UMovieSceneDataLayerSection Function GetDataLayers
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics
{
	struct MovieSceneDataLayerSection_eventGetDataLayers_Parms
	{
		TArray<FActorDataLayer> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(0, nullptr) }; // 1894108120
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneDataLayerSection_eventGetDataLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1894108120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "GetDataLayers", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::MovieSceneDataLayerSection_eventGetDataLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::MovieSceneDataLayerSection_eventGetDataLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execGetDataLayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FActorDataLayer>*)Z_Param__Result=P_THIS->GetDataLayers();
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function GetDataLayers

// Begin Class UMovieSceneDataLayerSection Function GetDesiredState
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics
{
	struct MovieSceneDataLayerSection_eventGetDesiredState_Parms
	{
		EDataLayerRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneDataLayerSection_eventGetDesiredState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "GetDesiredState", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::MovieSceneDataLayerSection_eventGetDesiredState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::MovieSceneDataLayerSection_eventGetDesiredState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execGetDesiredState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDesiredState();
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function GetDesiredState

// Begin Class UMovieSceneDataLayerSection Function GetFlushOnActivated
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics
{
	struct MovieSceneDataLayerSection_eventGetFlushOnActivated_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneDataLayerSection_eventGetFlushOnActivated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneDataLayerSection_eventGetFlushOnActivated_Parms), &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "GetFlushOnActivated", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::MovieSceneDataLayerSection_eventGetFlushOnActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::MovieSceneDataLayerSection_eventGetFlushOnActivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execGetFlushOnActivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFlushOnActivated();
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function GetFlushOnActivated

// Begin Class UMovieSceneDataLayerSection Function GetFlushOnUnload
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics
{
	struct MovieSceneDataLayerSection_eventGetFlushOnUnload_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneDataLayerSection_eventGetFlushOnUnload_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneDataLayerSection_eventGetFlushOnUnload_Parms), &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "GetFlushOnUnload", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::MovieSceneDataLayerSection_eventGetFlushOnUnload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::MovieSceneDataLayerSection_eventGetFlushOnUnload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execGetFlushOnUnload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFlushOnUnload();
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function GetFlushOnUnload

// Begin Class UMovieSceneDataLayerSection Function GetPerformGCOnUnload
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics
{
	struct MovieSceneDataLayerSection_eventGetPerformGCOnUnload_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneDataLayerSection_eventGetPerformGCOnUnload_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneDataLayerSection_eventGetPerformGCOnUnload_Parms), &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "GetPerformGCOnUnload", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::MovieSceneDataLayerSection_eventGetPerformGCOnUnload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::MovieSceneDataLayerSection_eventGetPerformGCOnUnload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execGetPerformGCOnUnload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPerformGCOnUnload();
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function GetPerformGCOnUnload

// Begin Class UMovieSceneDataLayerSection Function GetPrerollState
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics
{
	struct MovieSceneDataLayerSection_eventGetPrerollState_Parms
	{
		EDataLayerRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneDataLayerSection_eventGetPrerollState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "GetPrerollState", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::MovieSceneDataLayerSection_eventGetPrerollState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::MovieSceneDataLayerSection_eventGetPrerollState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execGetPrerollState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetPrerollState();
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function GetPrerollState

// Begin Class UMovieSceneDataLayerSection Function HasPreRoll
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics
{
	struct MovieSceneDataLayerSection_eventHasPreRoll_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneDataLayerSection_eventHasPreRoll_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneDataLayerSection_eventHasPreRoll_Parms), &Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "HasPreRoll", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::MovieSceneDataLayerSection_eventHasPreRoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::MovieSceneDataLayerSection_eventHasPreRoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execHasPreRoll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasPreRoll();
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function HasPreRoll

// Begin Class UMovieSceneDataLayerSection Function SetDataLayerAssets
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics
{
	struct MovieSceneDataLayerSection_eventSetDataLayerAssets_Parms
	{
		TArray<UDataLayerAsset*> InDataLayerAssets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayerAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InDataLayerAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::NewProp_InDataLayerAssets_Inner = { "InDataLayerAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::NewProp_InDataLayerAssets = { "InDataLayerAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneDataLayerSection_eventSetDataLayerAssets_Parms, InDataLayerAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayerAssets_MetaData), NewProp_InDataLayerAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::NewProp_InDataLayerAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::NewProp_InDataLayerAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "SetDataLayerAssets", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::MovieSceneDataLayerSection_eventSetDataLayerAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::MovieSceneDataLayerSection_eventSetDataLayerAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execSetDataLayerAssets)
{
	P_GET_TARRAY_REF(UDataLayerAsset*,Z_Param_Out_InDataLayerAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataLayerAssets(Z_Param_Out_InDataLayerAssets);
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function SetDataLayerAssets

// Begin Class UMovieSceneDataLayerSection Function SetDataLayers
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics
{
	struct MovieSceneDataLayerSection_eventSetDataLayers_Parms
	{
		TArray<FActorDataLayer> InDataLayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InDataLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::NewProp_InDataLayers_Inner = { "InDataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(0, nullptr) }; // 1894108120
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::NewProp_InDataLayers = { "InDataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneDataLayerSection_eventSetDataLayers_Parms, InDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDataLayers_MetaData), NewProp_InDataLayers_MetaData) }; // 1894108120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::NewProp_InDataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::NewProp_InDataLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "SetDataLayers", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::MovieSceneDataLayerSection_eventSetDataLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::MovieSceneDataLayerSection_eventSetDataLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execSetDataLayers)
{
	P_GET_TARRAY_REF(FActorDataLayer,Z_Param_Out_InDataLayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataLayers(Z_Param_Out_InDataLayers);
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function SetDataLayers

// Begin Class UMovieSceneDataLayerSection Function SetDesiredState
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics
{
	struct MovieSceneDataLayerSection_eventSetDesiredState_Parms
	{
		EDataLayerRuntimeState InDesiredState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InDesiredState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InDesiredState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::NewProp_InDesiredState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::NewProp_InDesiredState = { "InDesiredState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneDataLayerSection_eventSetDesiredState_Parms, InDesiredState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::NewProp_InDesiredState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::NewProp_InDesiredState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "SetDesiredState", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::MovieSceneDataLayerSection_eventSetDesiredState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::MovieSceneDataLayerSection_eventSetDesiredState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execSetDesiredState)
{
	P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InDesiredState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDesiredState(EDataLayerRuntimeState(Z_Param_InDesiredState));
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function SetDesiredState

// Begin Class UMovieSceneDataLayerSection Function SetFlushOnActivated
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics
{
	struct MovieSceneDataLayerSection_eventSetFlushOnActivated_Parms
	{
		bool bFlushOnActivated;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFlushOnActivated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushOnActivated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::NewProp_bFlushOnActivated_SetBit(void* Obj)
{
	((MovieSceneDataLayerSection_eventSetFlushOnActivated_Parms*)Obj)->bFlushOnActivated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::NewProp_bFlushOnActivated = { "bFlushOnActivated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneDataLayerSection_eventSetFlushOnActivated_Parms), &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::NewProp_bFlushOnActivated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::NewProp_bFlushOnActivated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "SetFlushOnActivated", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::MovieSceneDataLayerSection_eventSetFlushOnActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::MovieSceneDataLayerSection_eventSetFlushOnActivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execSetFlushOnActivated)
{
	P_GET_UBOOL(Z_Param_bFlushOnActivated);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFlushOnActivated(Z_Param_bFlushOnActivated);
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function SetFlushOnActivated

// Begin Class UMovieSceneDataLayerSection Function SetFlushOnUnload
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics
{
	struct MovieSceneDataLayerSection_eventSetFlushOnUnload_Parms
	{
		bool bFlushOnUnload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFlushOnUnload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushOnUnload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::NewProp_bFlushOnUnload_SetBit(void* Obj)
{
	((MovieSceneDataLayerSection_eventSetFlushOnUnload_Parms*)Obj)->bFlushOnUnload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::NewProp_bFlushOnUnload = { "bFlushOnUnload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneDataLayerSection_eventSetFlushOnUnload_Parms), &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::NewProp_bFlushOnUnload_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::NewProp_bFlushOnUnload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "SetFlushOnUnload", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::MovieSceneDataLayerSection_eventSetFlushOnUnload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::MovieSceneDataLayerSection_eventSetFlushOnUnload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execSetFlushOnUnload)
{
	P_GET_UBOOL(Z_Param_bFlushOnUnload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFlushOnUnload(Z_Param_bFlushOnUnload);
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function SetFlushOnUnload

// Begin Class UMovieSceneDataLayerSection Function SetPerformGCOnUnload
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics
{
	struct MovieSceneDataLayerSection_eventSetPerformGCOnUnload_Parms
	{
		bool bPerformGCOnUnload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPerformGCOnUnload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformGCOnUnload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::NewProp_bPerformGCOnUnload_SetBit(void* Obj)
{
	((MovieSceneDataLayerSection_eventSetPerformGCOnUnload_Parms*)Obj)->bPerformGCOnUnload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::NewProp_bPerformGCOnUnload = { "bPerformGCOnUnload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneDataLayerSection_eventSetPerformGCOnUnload_Parms), &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::NewProp_bPerformGCOnUnload_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::NewProp_bPerformGCOnUnload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "SetPerformGCOnUnload", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::MovieSceneDataLayerSection_eventSetPerformGCOnUnload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::MovieSceneDataLayerSection_eventSetPerformGCOnUnload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execSetPerformGCOnUnload)
{
	P_GET_UBOOL(Z_Param_bPerformGCOnUnload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPerformGCOnUnload(Z_Param_bPerformGCOnUnload);
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function SetPerformGCOnUnload

// Begin Class UMovieSceneDataLayerSection Function SetPrerollState
struct Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics
{
	struct MovieSceneDataLayerSection_eventSetPrerollState_Parms
	{
		EDataLayerRuntimeState InPrerollState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InPrerollState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InPrerollState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::NewProp_InPrerollState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::NewProp_InPrerollState = { "InPrerollState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneDataLayerSection_eventSetPrerollState_Parms, InPrerollState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::NewProp_InPrerollState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::NewProp_InPrerollState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDataLayerSection, nullptr, "SetPrerollState", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::MovieSceneDataLayerSection_eventSetPrerollState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::MovieSceneDataLayerSection_eventSetPrerollState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneDataLayerSection::execSetPrerollState)
{
	P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InPrerollState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPrerollState(EDataLayerRuntimeState(Z_Param_InPrerollState));
	P_NATIVE_END;
}
// End Class UMovieSceneDataLayerSection Function SetPrerollState

// Begin Class UMovieSceneDataLayerSection
void UMovieSceneDataLayerSection::StaticRegisterNativesUMovieSceneDataLayerSection()
{
	UClass* Class = UMovieSceneDataLayerSection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDataLayerAssets", &UMovieSceneDataLayerSection::execGetDataLayerAssets },
		{ "GetDataLayers", &UMovieSceneDataLayerSection::execGetDataLayers },
		{ "GetDesiredState", &UMovieSceneDataLayerSection::execGetDesiredState },
		{ "GetFlushOnActivated", &UMovieSceneDataLayerSection::execGetFlushOnActivated },
		{ "GetFlushOnUnload", &UMovieSceneDataLayerSection::execGetFlushOnUnload },
		{ "GetPerformGCOnUnload", &UMovieSceneDataLayerSection::execGetPerformGCOnUnload },
		{ "GetPrerollState", &UMovieSceneDataLayerSection::execGetPrerollState },
		{ "HasPreRoll", &UMovieSceneDataLayerSection::execHasPreRoll },
		{ "SetDataLayerAssets", &UMovieSceneDataLayerSection::execSetDataLayerAssets },
		{ "SetDataLayers", &UMovieSceneDataLayerSection::execSetDataLayers },
		{ "SetDesiredState", &UMovieSceneDataLayerSection::execSetDesiredState },
		{ "SetFlushOnActivated", &UMovieSceneDataLayerSection::execSetFlushOnActivated },
		{ "SetFlushOnUnload", &UMovieSceneDataLayerSection::execSetFlushOnUnload },
		{ "SetPerformGCOnUnload", &UMovieSceneDataLayerSection::execSetPerformGCOnUnload },
		{ "SetPrerollState", &UMovieSceneDataLayerSection::execSetPrerollState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDataLayerSection);
UClass* Z_Construct_UClass_UMovieSceneDataLayerSection_NoRegister()
{
	return UMovieSceneDataLayerSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneDataLayerSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneDataLayerSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use DataLayer Assets Instead" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerAssets_MetaData[] = {
		{ "Category", "DataLayer" },
		{ "Comment", "/** A list of data layers that should be loaded or unloaded by this section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
		{ "ToolTip", "A list of data layers that should be loaded or unloaded by this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredState_MetaData[] = {
		{ "Category", "DataLayer" },
		{ "Comment", "/** The desired state for the data layers on this section when the section is actively evaluating. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
		{ "ToolTip", "The desired state for the data layers on this section when the section is actively evaluating." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrerollState_MetaData[] = {
		{ "Category", "DataLayer" },
		{ "Comment", "/** The desired state for the data layers on this section when the section is pre or post-rolling. */" },
		{ "EditCondition", "HasPreRoll" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
		{ "ToolTip", "The desired state for the data layers on this section when the section is pre or post-rolling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlushOnActivated_MetaData[] = {
		{ "Category", "DataLayer" },
		{ "Comment", "/** Determine if we need to flush level streaming when the data layers are activated. May result in a hitch. */" },
		{ "EditCondition", "DesiredState == EDataLayerRuntimeState::Activated" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
		{ "ToolTip", "Determine if we need to flush level streaming when the data layers are activated. May result in a hitch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlushOnUnload_MetaData[] = {
		{ "Category", "DataLayer" },
		{ "Comment", "/** Determine if we need to flush level streaming when the data layers unloads. */" },
		{ "EditCondition", "DesiredState == EDataLayerRuntimeState::Unloaded" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
		{ "ToolTip", "Determine if we need to flush level streaming when the data layers unloads." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformGCOnUnload_MetaData[] = {
		{ "Category", "DataLayer" },
		{ "Comment", "/** Determine if we need to perform a GC when the data layers unloads. */" },
		{ "DisplayName", "Perform GC On Unload" },
		{ "EditCondition", "DesiredState == EDataLayerRuntimeState::Unloaded" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDataLayerSection.h" },
		{ "ToolTip", "Determine if we need to perform a GC when the data layers unloads." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayerAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayerAssets;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrerollState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrerollState;
	static void NewProp_bFlushOnActivated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushOnActivated;
	static void NewProp_bFlushOnUnload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushOnUnload;
	static void NewProp_bPerformGCOnUnload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformGCOnUnload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayerAssets, "GetDataLayerAssets" }, // 2652392788
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDataLayers, "GetDataLayers" }, // 1611799777
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetDesiredState, "GetDesiredState" }, // 2822672241
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnActivated, "GetFlushOnActivated" }, // 4157882247
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetFlushOnUnload, "GetFlushOnUnload" }, // 1821788591
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPerformGCOnUnload, "GetPerformGCOnUnload" }, // 2666971566
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_GetPrerollState, "GetPrerollState" }, // 4004447709
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_HasPreRoll, "HasPreRoll" }, // 2392188301
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayerAssets, "SetDataLayerAssets" }, // 806710020
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDataLayers, "SetDataLayers" }, // 3267524430
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetDesiredState, "SetDesiredState" }, // 2453868152
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnActivated, "SetFlushOnActivated" }, // 1831216915
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetFlushOnUnload, "SetFlushOnUnload" }, // 3194758601
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPerformGCOnUnload, "SetPerformGCOnUnload" }, // 1883390695
		{ &Z_Construct_UFunction_UMovieSceneDataLayerSection_SetPrerollState, "SetPrerollState" }, // 2590382955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDataLayerSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(0, nullptr) }; // 1894108120
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDataLayerSection, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayers_MetaData), NewProp_DataLayers_MetaData) }; // 1894108120
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayerAssets_Inner = { "DataLayerAssets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayerAssets = { "DataLayerAssets", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDataLayerSection, DataLayerAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerAssets_MetaData), NewProp_DataLayerAssets_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DesiredState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DesiredState = { "DesiredState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDataLayerSection, DesiredState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredState_MetaData), NewProp_DesiredState_MetaData) }; // 10031493
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_PrerollState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_PrerollState = { "PrerollState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneDataLayerSection, PrerollState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrerollState_MetaData), NewProp_PrerollState_MetaData) }; // 10031493
void Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnActivated_SetBit(void* Obj)
{
	((UMovieSceneDataLayerSection*)Obj)->bFlushOnActivated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnActivated = { "bFlushOnActivated", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneDataLayerSection), &Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlushOnActivated_MetaData), NewProp_bFlushOnActivated_MetaData) };
void Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnUnload_SetBit(void* Obj)
{
	((UMovieSceneDataLayerSection*)Obj)->bFlushOnUnload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnUnload = { "bFlushOnUnload", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneDataLayerSection), &Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnUnload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlushOnUnload_MetaData), NewProp_bFlushOnUnload_MetaData) };
void Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bPerformGCOnUnload_SetBit(void* Obj)
{
	((UMovieSceneDataLayerSection*)Obj)->bPerformGCOnUnload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bPerformGCOnUnload = { "bPerformGCOnUnload", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneDataLayerSection), &Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bPerformGCOnUnload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformGCOnUnload_MetaData), NewProp_bPerformGCOnUnload_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayerAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DataLayerAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DesiredState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_DesiredState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_PrerollState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_PrerollState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bFlushOnUnload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::NewProp_bPerformGCOnUnload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneDataLayerSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::ClassParams = {
	&UMovieSceneDataLayerSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneDataLayerSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneDataLayerSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDataLayerSection.OuterSingleton, Z_Construct_UClass_UMovieSceneDataLayerSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneDataLayerSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDataLayerSection>()
{
	return UMovieSceneDataLayerSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDataLayerSection);
UMovieSceneDataLayerSection::~UMovieSceneDataLayerSection() {}
// End Class UMovieSceneDataLayerSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDataLayerSection, UMovieSceneDataLayerSection::StaticClass, TEXT("UMovieSceneDataLayerSection"), &Z_Registration_Info_UClass_UMovieSceneDataLayerSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDataLayerSection), 3795730679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_1516277834(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
