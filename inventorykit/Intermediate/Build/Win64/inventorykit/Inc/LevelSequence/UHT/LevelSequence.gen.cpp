// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Public/LevelSequence.h"
#include "Runtime/LevelSequence/Public/LevelSequenceBindingReference.h"
#include "Runtime/LevelSequence/Public/LevelSequenceLegacyObjectReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequence() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin Class ULevelSequence Function CopyMetaData
struct Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics
{
	struct LevelSequence_eventCopyMetaData_Parms
	{
		UObject* InMetaData;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09* Copy the specified meta data into this level sequence, overwriting any existing meta-data of the same type\n\x09* Meta-data may implement the ILevelSequenceMetaData interface in order to hook into default ULevelSequence functionality.\n\x09* @param InMetaData - Existing Metadata Object that you wish to copy into this Level Sequence.\n\x09* @return The newly copied instance of the Metadata that now exists on this sequence.\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Copy the specified meta data into this level sequence, overwriting any existing meta-data of the same type\nMeta-data may implement the ILevelSequenceMetaData interface in order to hook into default ULevelSequence functionality.\n@param InMetaData - Existing Metadata Object that you wish to copy into this Level Sequence.\n@return The newly copied instance of the Metadata that now exists on this sequence." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetaData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::NewProp_InMetaData = { "InMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequence_eventCopyMetaData_Parms, InMetaData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequence_eventCopyMetaData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::NewProp_InMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequence, nullptr, "CopyMetaData", nullptr, nullptr, Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::LevelSequence_eventCopyMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::LevelSequence_eventCopyMetaData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequence_CopyMetaData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequence_CopyMetaData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequence::execCopyMetaData)
{
	P_GET_OBJECT(UObject,Z_Param_InMetaData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->CopyMetaData(Z_Param_InMetaData);
	P_NATIVE_END;
}
// End Class ULevelSequence Function CopyMetaData

// Begin Class ULevelSequence Function FindMetaDataByClass
struct Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics
{
	struct LevelSequence_eventFindMetaDataByClass_Parms
	{
		TSubclassOf<UObject> InClass;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09* Find meta-data of a particular type for this level sequence instance.\n\x09* @param InClass - Class that you wish to find the metadata object for.\n\x09* @return An instance of this class if it already exists as metadata on this Level Sequence, otherwise null.\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Find meta-data of a particular type for this level sequence instance.\n@param InClass - Class that you wish to find the metadata object for.\n@return An instance of this class if it already exists as metadata on this Level Sequence, otherwise null." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequence_eventFindMetaDataByClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequence_eventFindMetaDataByClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::NewProp_InClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequence, nullptr, "FindMetaDataByClass", nullptr, nullptr, Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::LevelSequence_eventFindMetaDataByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::LevelSequence_eventFindMetaDataByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequence::execFindMetaDataByClass)
{
	P_GET_OBJECT(UClass,Z_Param_InClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->FindMetaDataByClass(Z_Param_InClass);
	P_NATIVE_END;
}
// End Class ULevelSequence Function FindMetaDataByClass

// Begin Class ULevelSequence Function FindOrAddMetaDataByClass
struct Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics
{
	struct LevelSequence_eventFindOrAddMetaDataByClass_Parms
	{
		TSubclassOf<UObject> InClass;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09* Find meta-data of a particular type for this level sequence instance, adding it if it doesn't already exist.\n\x09* @param InClass - Class that you wish to find or create the metadata object for.\n\x09* @return An instance of this class as metadata on this Level Sequence.\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Find meta-data of a particular type for this level sequence instance, adding it if it doesn't already exist.\n@param InClass - Class that you wish to find or create the metadata object for.\n@return An instance of this class as metadata on this Level Sequence." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequence_eventFindOrAddMetaDataByClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequence_eventFindOrAddMetaDataByClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::NewProp_InClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequence, nullptr, "FindOrAddMetaDataByClass", nullptr, nullptr, Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::LevelSequence_eventFindOrAddMetaDataByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::LevelSequence_eventFindOrAddMetaDataByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequence::execFindOrAddMetaDataByClass)
{
	P_GET_OBJECT(UClass,Z_Param_InClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->FindOrAddMetaDataByClass(Z_Param_InClass);
	P_NATIVE_END;
}
// End Class ULevelSequence Function FindOrAddMetaDataByClass

// Begin Class ULevelSequence Function RemoveMetaDataByClass
struct Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics
{
	struct LevelSequence_eventRemoveMetaDataByClass_Parms
	{
		TSubclassOf<UObject> InClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Sequence" },
		{ "Comment", "/**\n\x09* Remove meta-data of a particular type for this level sequence instance, if it exists\n\x09* @param InClass - The class type that you wish to remove the metadata for\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Remove meta-data of a particular type for this level sequence instance, if it exists\n@param InClass - The class type that you wish to remove the metadata for" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequence_eventRemoveMetaDataByClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::NewProp_InClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequence, nullptr, "RemoveMetaDataByClass", nullptr, nullptr, Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::LevelSequence_eventRemoveMetaDataByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::LevelSequence_eventRemoveMetaDataByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelSequence::execRemoveMetaDataByClass)
{
	P_GET_OBJECT(UClass,Z_Param_InClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveMetaDataByClass(Z_Param_InClass);
	P_NATIVE_END;
}
// End Class ULevelSequence Function RemoveMetaDataByClass

// Begin Class ULevelSequence
void ULevelSequence::StaticRegisterNativesULevelSequence()
{
	UClass* Class = ULevelSequence::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopyMetaData", &ULevelSequence::execCopyMetaData },
		{ "FindMetaDataByClass", &ULevelSequence::execFindMetaDataByClass },
		{ "FindOrAddMetaDataByClass", &ULevelSequence::execFindOrAddMetaDataByClass },
		{ "RemoveMetaDataByClass", &ULevelSequence::execRemoveMetaDataByClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequence);
UClass* Z_Construct_UClass_ULevelSequence_NoRegister()
{
	return ULevelSequence::StaticClass();
}
struct Z_Construct_UClass_ULevelSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Movie scene animation for Actors.\n */" },
		{ "IncludePath", "LevelSequence.h" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Movie scene animation for Actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[] = {
		{ "Comment", "/** Pointer to the movie scene that controls this animation. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this animation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingReferences_MetaData[] = {
		{ "Comment", "/** References to bound objects. */" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "References to bound objects." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectReferences_MetaData[] = {
		{ "Comment", "/** Legacy object references */" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Legacy object references" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorBlueprint_MetaData[] = {
		{ "Comment", "/** A pointer to the director blueprint that generates this sequence's DirectorClass. */" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "A pointer to the director blueprint that generates this sequence's DirectorClass." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorClass_MetaData[] = {
		{ "Comment", "/**\n\x09 * The class that is used to spawn this level sequence's director instance.\n\x09 * Director instances are allocated on-demand one per sequence during evaluation and are used by event tracks for triggering events.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "The class that is used to spawn this level sequence's director instance.\nDirector instances are allocated on-demand one per sequence during evaluation and are used by event tracks for triggering events." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataObjects_MetaData[] = {
		{ "Comment", "/** Array of meta-data objects associated with this level sequence. Each pointer may implement the ILevelSequenceMetaData interface in order to hook into default ULevelSequence functionality. */" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Array of meta-data objects associated with this level sequence. Each pointer may implement the ILevelSequenceMetaData interface in order to hook into default ULevelSequence functionality." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingReferences;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectReferences;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectorBlueprint;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DirectorClass;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaDataObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaDataObjects;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequence_CopyMetaData, "CopyMetaData" }, // 1492536409
		{ &Z_Construct_UFunction_ULevelSequence_FindMetaDataByClass, "FindMetaDataByClass" }, // 2288993552
		{ &Z_Construct_UFunction_ULevelSequence_FindOrAddMetaDataByClass, "FindOrAddMetaDataByClass" }, // 326717508
		{ &Z_Construct_UFunction_ULevelSequence_RemoveMetaDataByClass, "RemoveMetaDataByClass" }, // 4158883508
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovieScene_MetaData), NewProp_MovieScene_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences = { "BindingReferences", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequence, BindingReferences), Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingReferences_MetaData), NewProp_BindingReferences_MetaData) }; // 1454285492
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences = { "ObjectReferences", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequence, ObjectReferences_DEPRECATED), Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectReferences_MetaData), NewProp_ObjectReferences_MetaData) }; // 1775958285
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint = { "DirectorBlueprint", nullptr, (EPropertyFlags)0x0124080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequence, DirectorBlueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorBlueprint_MetaData), NewProp_DirectorBlueprint_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass = { "DirectorClass", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequence, DirectorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorClass_MetaData), NewProp_DirectorClass_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects_Inner = { "MetaDataObjects", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects = { "MetaDataObjects", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequence, MetaDataObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaDataObjects_MetaData), NewProp_MetaDataObjects_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x01240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequence, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_MetaDataObjects,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_AssetUserData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelSequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULevelSequence_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(ULevelSequence, IInterface_AssetUserData), false },  // 505316468
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequence_Statics::ClassParams = {
	&ULevelSequence::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULevelSequence_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSequence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelSequence()
{
	if (!Z_Registration_Info_UClass_ULevelSequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequence.OuterSingleton, Z_Construct_UClass_ULevelSequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelSequence.OuterSingleton;
}
template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequence>()
{
	return ULevelSequence::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequence);
ULevelSequence::~ULevelSequence() {}
// End Class ULevelSequence

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequence, ULevelSequence::StaticClass, TEXT("ULevelSequence"), &Z_Registration_Info_UClass_ULevelSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequence), 2336348492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_2221522868(TEXT("/Script/LevelSequence"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
