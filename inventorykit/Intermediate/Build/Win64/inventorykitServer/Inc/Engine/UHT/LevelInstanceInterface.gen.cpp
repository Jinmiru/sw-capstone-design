// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LevelInstance/LevelInstanceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceInterface();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface ULevelInstanceInterface Function GetLoadedLevel
struct Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics
{
	struct LevelInstanceInterface_eventGetLoadedLevel_Parms
	{
		ULevel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelInstanceInterface_eventGetLoadedLevel_Parms, ReturnValue), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelInstanceInterface, nullptr, "GetLoadedLevel", nullptr, nullptr, Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::LevelInstanceInterface_eventGetLoadedLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::LevelInstanceInterface_eventGetLoadedLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILevelInstanceInterface::execGetLoadedLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULevel**)Z_Param__Result=P_THIS->GetLoadedLevel();
	P_NATIVE_END;
}
// End Interface ULevelInstanceInterface Function GetLoadedLevel

// Begin Interface ULevelInstanceInterface Function GetWorldAsset
struct Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics
{
	struct LevelInstanceInterface_eventGetWorldAsset_Parms
	{
		TSoftObjectPtr<UWorld> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000008000582, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelInstanceInterface_eventGetWorldAsset_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelInstanceInterface, nullptr, "GetWorldAsset", nullptr, nullptr, Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::LevelInstanceInterface_eventGetWorldAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::LevelInstanceInterface_eventGetWorldAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILevelInstanceInterface::execGetWorldAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UWorld>*)Z_Param__Result=P_THIS->GetWorldAsset();
	P_NATIVE_END;
}
// End Interface ULevelInstanceInterface Function GetWorldAsset

// Begin Interface ULevelInstanceInterface Function IsLoaded
struct Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics
{
	struct LevelInstanceInterface_eventIsLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LevelInstanceInterface_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelInstanceInterface_eventIsLoaded_Parms), &Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelInstanceInterface, nullptr, "IsLoaded", nullptr, nullptr, Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::LevelInstanceInterface_eventIsLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::LevelInstanceInterface_eventIsLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILevelInstanceInterface::execIsLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLoaded();
	P_NATIVE_END;
}
// End Interface ULevelInstanceInterface Function IsLoaded

// Begin Interface ULevelInstanceInterface Function LoadLevelInstance
struct Z_Construct_UFunction_ULevelInstanceInterface_LoadLevelInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelInstanceInterface_LoadLevelInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelInstanceInterface, nullptr, "LoadLevelInstance", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_LoadLevelInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelInstanceInterface_LoadLevelInstance_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULevelInstanceInterface_LoadLevelInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelInstanceInterface_LoadLevelInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILevelInstanceInterface::execLoadLevelInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadLevelInstance();
	P_NATIVE_END;
}
// End Interface ULevelInstanceInterface Function LoadLevelInstance

// Begin Interface ULevelInstanceInterface Function SetWorldAsset
struct Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics
{
	struct LevelInstanceInterface_eventSetWorldAsset_Parms
	{
		TSoftObjectPtr<UWorld> WorldAsset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Sets the UWorld asset reference when loading a LevelInstance */" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceInterface.h" },
		{ "ToolTip", "Sets the UWorld asset reference when loading a LevelInstance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WorldAsset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::NewProp_WorldAsset = { "WorldAsset", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelInstanceInterface_eventSetWorldAsset_Parms, WorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LevelInstanceInterface_eventSetWorldAsset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelInstanceInterface_eventSetWorldAsset_Parms), &Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::NewProp_WorldAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelInstanceInterface, nullptr, "SetWorldAsset", nullptr, nullptr, Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::LevelInstanceInterface_eventSetWorldAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::LevelInstanceInterface_eventSetWorldAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILevelInstanceInterface::execSetWorldAsset)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_WorldAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetWorldAsset(Z_Param_WorldAsset);
	P_NATIVE_END;
}
// End Interface ULevelInstanceInterface Function SetWorldAsset

// Begin Interface ULevelInstanceInterface Function UnloadLevelInstance
struct Z_Construct_UFunction_ULevelInstanceInterface_UnloadLevelInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelInstanceInterface_UnloadLevelInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelInstanceInterface, nullptr, "UnloadLevelInstance", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelInstanceInterface_UnloadLevelInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelInstanceInterface_UnloadLevelInstance_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULevelInstanceInterface_UnloadLevelInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelInstanceInterface_UnloadLevelInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ILevelInstanceInterface::execUnloadLevelInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadLevelInstance();
	P_NATIVE_END;
}
// End Interface ULevelInstanceInterface Function UnloadLevelInstance

// Begin Interface ULevelInstanceInterface
void ULevelInstanceInterface::StaticRegisterNativesULevelInstanceInterface()
{
	UClass* Class = ULevelInstanceInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLoadedLevel", &ILevelInstanceInterface::execGetLoadedLevel },
		{ "GetWorldAsset", &ILevelInstanceInterface::execGetWorldAsset },
		{ "IsLoaded", &ILevelInstanceInterface::execIsLoaded },
		{ "LoadLevelInstance", &ILevelInstanceInterface::execLoadLevelInstance },
		{ "SetWorldAsset", &ILevelInstanceInterface::execSetWorldAsset },
		{ "UnloadLevelInstance", &ILevelInstanceInterface::execUnloadLevelInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceInterface);
UClass* Z_Construct_UClass_ULevelInstanceInterface_NoRegister()
{
	return ULevelInstanceInterface::StaticClass();
}
struct Z_Construct_UClass_ULevelInstanceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelInstanceInterface_GetLoadedLevel, "GetLoadedLevel" }, // 3247044415
		{ &Z_Construct_UFunction_ULevelInstanceInterface_GetWorldAsset, "GetWorldAsset" }, // 98456855
		{ &Z_Construct_UFunction_ULevelInstanceInterface_IsLoaded, "IsLoaded" }, // 2306401477
		{ &Z_Construct_UFunction_ULevelInstanceInterface_LoadLevelInstance, "LoadLevelInstance" }, // 1621551525
		{ &Z_Construct_UFunction_ULevelInstanceInterface_SetWorldAsset, "SetWorldAsset" }, // 3304291739
		{ &Z_Construct_UFunction_ULevelInstanceInterface_UnloadLevelInstance, "UnloadLevelInstance" }, // 3420512883
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILevelInstanceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelInstanceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceInterface_Statics::ClassParams = {
	&ULevelInstanceInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelInstanceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelInstanceInterface()
{
	if (!Z_Registration_Info_UClass_ULevelInstanceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceInterface.OuterSingleton, Z_Construct_UClass_ULevelInstanceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelInstanceInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelInstanceInterface>()
{
	return ULevelInstanceInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceInterface);
ULevelInstanceInterface::~ULevelInstanceInterface() {}
// End Interface ULevelInstanceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstanceInterface, ULevelInstanceInterface::StaticClass, TEXT("ULevelInstanceInterface"), &Z_Registration_Info_UClass_ULevelInstanceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceInterface), 887087087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_4214213116(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
