// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingDynamic.h"
#include "Runtime/Engine/Classes/Engine/World.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingDynamic() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelStreamingDynamic Function LoadLevelInstance
struct Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics
{
	struct LevelStreamingDynamic_eventLoadLevelInstance_Parms
	{
		UObject* WorldContextObject;
		FString LevelName;
		FVector Location;
		FRotator Rotation;
		bool bOutSuccess;
		FString OptionalLevelNameOverride;
		TSubclassOf<ULevelStreamingDynamic> OptionalLevelStreamingClass;
		bool bLoadAsTempPackage;
		ULevelStreamingDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/**  \n \x09* Stream in a level with a specific location and rotation. You can create multiple instances of the same level!\n \x09*\n \x09* The level to be loaded does not have to be in the persistent map's Levels list, however to ensure that the .umap does get\n \x09* packaged, please be sure to include the .umap in your Packaging Settings:\n \x09*\n \x09*   Project Settings -> Packaging -> List of Maps to Include in a Packaged Build (you may have to show advanced or type in filter)\n \x09* \n \x09* @param LevelName - Level package name to load, ex: /Game/Maps/MyMapName, specifying short name like MyMapName will force very slow search on disk\n \x09* @param Location - World space location where the level should be spawned\n \x09* @param Rotation - World space rotation for rotating the entire level\n\x09* @param bOutSuccess - Whether operation was successful (map was found and added to the sub-levels list)\n\x09* @param OptionalLevelNameOverride - If set, the loaded level package have this name, which is used by other functions like UnloadStreamLevel. Note this is necessary for server and client networking because the level must have the same name on both.\n\x09* @param OptionalLevelStreamingClass - If set, the level streaming class will be used instead of ULevelStreamingDynamic\n\x09* @param bLoadAsTempPackage - If set, package path is prefixed by /Temp\n \x09* @return Streaming level object for a level instance\n \x09*/" },
		{ "CPP_Default_bLoadAsTempPackage", "false" },
		{ "CPP_Default_OptionalLevelNameOverride", "" },
		{ "CPP_Default_OptionalLevelStreamingClass", "None" },
		{ "DisplayName", "Load Level Instance (by Name)" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingDynamic.h" },
		{ "ToolTip", "Stream in a level with a specific location and rotation. You can create multiple instances of the same level!\n\nThe level to be loaded does not have to be in the persistent map's Levels list, however to ensure that the .umap does get\npackaged, please be sure to include the .umap in your Packaging Settings:\n\n  Project Settings -> Packaging -> List of Maps to Include in a Packaged Build (you may have to show advanced or type in filter)\n\n@param LevelName - Level package name to load, ex: /Game/Maps/MyMapName, specifying short name like MyMapName will force very slow search on disk\n@param Location - World space location where the level should be spawned\n@param Rotation - World space rotation for rotating the entire level\n@param bOutSuccess - Whether operation was successful (map was found and added to the sub-levels list)\n@param OptionalLevelNameOverride - If set, the loaded level package have this name, which is used by other functions like UnloadStreamLevel. Note this is necessary for server and client networking because the level must have the same name on both.\n@param OptionalLevelStreamingClass - If set, the level streaming class will be used instead of ULevelStreamingDynamic\n@param bLoadAsTempPackage - If set, package path is prefixed by /Temp\n@return Streaming level object for a level instance" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalLevelNameOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalLevelNameOverride;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OptionalLevelStreamingClass;
	static void NewProp_bLoadAsTempPackage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadAsTempPackage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstance_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstance_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstance_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((LevelStreamingDynamic_eventLoadLevelInstance_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelStreamingDynamic_eventLoadLevelInstance_Parms), &Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_OptionalLevelNameOverride = { "OptionalLevelNameOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstance_Parms, OptionalLevelNameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalLevelNameOverride_MetaData), NewProp_OptionalLevelNameOverride_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_OptionalLevelStreamingClass = { "OptionalLevelStreamingClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstance_Parms, OptionalLevelStreamingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_bLoadAsTempPackage_SetBit(void* Obj)
{
	((LevelStreamingDynamic_eventLoadLevelInstance_Parms*)Obj)->bLoadAsTempPackage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_bLoadAsTempPackage = { "bLoadAsTempPackage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelStreamingDynamic_eventLoadLevelInstance_Parms), &Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_bLoadAsTempPackage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstance_Parms, ReturnValue), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_OptionalLevelNameOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_OptionalLevelStreamingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_bLoadAsTempPackage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingDynamic, nullptr, "LoadLevelInstance", nullptr, nullptr, Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::LevelStreamingDynamic_eventLoadLevelInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::LevelStreamingDynamic_eventLoadLevelInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelStreamingDynamic::execLoadLevelInstance)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_LevelName);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY(FStrProperty,Z_Param_OptionalLevelNameOverride);
	P_GET_OBJECT(UClass,Z_Param_OptionalLevelStreamingClass);
	P_GET_UBOOL(Z_Param_bLoadAsTempPackage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevelStreamingDynamic**)Z_Param__Result=ULevelStreamingDynamic::LoadLevelInstance(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_Location,Z_Param_Rotation,Z_Param_Out_bOutSuccess,Z_Param_OptionalLevelNameOverride,Z_Param_OptionalLevelStreamingClass,Z_Param_bLoadAsTempPackage);
	P_NATIVE_END;
}
// End Class ULevelStreamingDynamic Function LoadLevelInstance

// Begin Class ULevelStreamingDynamic Function LoadLevelInstanceBySoftObjectPtr
struct Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics
{
	struct LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms
	{
		UObject* WorldContextObject;
		TSoftObjectPtr<UWorld> Level;
		FVector Location;
		FRotator Rotation;
		bool bOutSuccess;
		FString OptionalLevelNameOverride;
		TSubclassOf<ULevelStreamingDynamic> OptionalLevelStreamingClass;
		bool bLoadAsTempPackage;
		ULevelStreamingDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelStreaming" },
		{ "CPP_Default_bLoadAsTempPackage", "false" },
		{ "CPP_Default_OptionalLevelNameOverride", "" },
		{ "CPP_Default_OptionalLevelStreamingClass", "None" },
		{ "DisplayName", "Load Level Instance (by Object Reference)" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingDynamic.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalLevelNameOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_bOutSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalLevelNameOverride;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OptionalLevelStreamingClass;
	static void NewProp_bLoadAsTempPackage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadAsTempPackage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
{
	((LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms*)Obj)->bOutSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms), &Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_OptionalLevelNameOverride = { "OptionalLevelNameOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms, OptionalLevelNameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalLevelNameOverride_MetaData), NewProp_OptionalLevelNameOverride_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_OptionalLevelStreamingClass = { "OptionalLevelStreamingClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms, OptionalLevelStreamingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bLoadAsTempPackage_SetBit(void* Obj)
{
	((LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms*)Obj)->bLoadAsTempPackage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bLoadAsTempPackage = { "bLoadAsTempPackage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms), &Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bLoadAsTempPackage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms, ReturnValue), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bOutSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_OptionalLevelNameOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_OptionalLevelStreamingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bLoadAsTempPackage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingDynamic, nullptr, "LoadLevelInstanceBySoftObjectPtr", nullptr, nullptr, Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelStreamingDynamic::execLoadLevelInstanceBySoftObjectPtr)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_Level);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
	P_GET_PROPERTY(FStrProperty,Z_Param_OptionalLevelNameOverride);
	P_GET_OBJECT(UClass,Z_Param_OptionalLevelStreamingClass);
	P_GET_UBOOL(Z_Param_bLoadAsTempPackage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevelStreamingDynamic**)Z_Param__Result=ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(Z_Param_WorldContextObject,Z_Param_Level,Z_Param_Location,Z_Param_Rotation,Z_Param_Out_bOutSuccess,Z_Param_OptionalLevelNameOverride,Z_Param_OptionalLevelStreamingClass,Z_Param_bLoadAsTempPackage);
	P_NATIVE_END;
}
// End Class ULevelStreamingDynamic Function LoadLevelInstanceBySoftObjectPtr

// Begin Class ULevelStreamingDynamic
void ULevelStreamingDynamic::StaticRegisterNativesULevelStreamingDynamic()
{
	UClass* Class = ULevelStreamingDynamic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadLevelInstance", &ULevelStreamingDynamic::execLoadLevelInstance },
		{ "LoadLevelInstanceBySoftObjectPtr", &ULevelStreamingDynamic::execLoadLevelInstanceBySoftObjectPtr },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingDynamic);
UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister()
{
	return ULevelStreamingDynamic::StaticClass();
}
struct Z_Construct_UClass_ULevelStreamingDynamic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/LevelStreamingDynamic.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingDynamic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitiallyLoaded_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** Whether the level should be loaded at startup\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingDynamic.h" },
		{ "ToolTip", "Whether the level should be loaded at startup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitiallyVisible_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "Comment", "/** Whether the level should be visible at startup if it is loaded \x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingDynamic.h" },
		{ "ToolTip", "Whether the level should be visible at startup if it is loaded" },
	};
#endif // WITH_METADATA
	static void NewProp_bInitiallyLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitiallyLoaded;
	static void NewProp_bInitiallyVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitiallyVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance, "LoadLevelInstance" }, // 319850653
		{ &Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr, "LoadLevelInstanceBySoftObjectPtr" }, // 4198639681
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingDynamic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyLoaded_SetBit(void* Obj)
{
	((ULevelStreamingDynamic*)Obj)->bInitiallyLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyLoaded = { "bInitiallyLoaded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULevelStreamingDynamic), &Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitiallyLoaded_MetaData), NewProp_bInitiallyLoaded_MetaData) };
void Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyVisible_SetBit(void* Obj)
{
	((ULevelStreamingDynamic*)Obj)->bInitiallyVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyVisible = { "bInitiallyVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULevelStreamingDynamic), &Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitiallyVisible_MetaData), NewProp_bInitiallyVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelStreamingDynamic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingDynamic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelStreamingDynamic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULevelStreaming,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingDynamic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingDynamic_Statics::ClassParams = {
	&ULevelStreamingDynamic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULevelStreamingDynamic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingDynamic_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingDynamic_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelStreamingDynamic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelStreamingDynamic()
{
	if (!Z_Registration_Info_UClass_ULevelStreamingDynamic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingDynamic.OuterSingleton, Z_Construct_UClass_ULevelStreamingDynamic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelStreamingDynamic.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelStreamingDynamic>()
{
	return ULevelStreamingDynamic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingDynamic);
ULevelStreamingDynamic::~ULevelStreamingDynamic() {}
// End Class ULevelStreamingDynamic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingDynamic, ULevelStreamingDynamic::StaticClass, TEXT("ULevelStreamingDynamic"), &Z_Registration_Info_UClass_ULevelStreamingDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingDynamic), 3758949591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_246806029(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
