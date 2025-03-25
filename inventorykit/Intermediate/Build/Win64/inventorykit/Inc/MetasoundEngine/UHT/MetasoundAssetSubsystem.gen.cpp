// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/MetasoundAssetSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundAssetSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundAssetSubsystem();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundAssetSubsystem_NoRegister();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundAssetDirectory();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin ScriptStruct FMetaSoundAssetDirectory
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundAssetDirectory;
class UScriptStruct* FMetaSoundAssetDirectory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundAssetDirectory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundAssetDirectory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundAssetDirectory, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundAssetDirectory"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundAssetDirectory.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundAssetDirectory>()
{
	return FMetaSoundAssetDirectory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MetasoundAssetSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[] = {
		{ "Category", "Directories" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/MetasoundAssetSubsystem.h" },
		{ "RelativePath", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Directory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundAssetDirectory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundAssetDirectory, Directory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Directory_MetaData), NewProp_Directory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics::NewProp_Directory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	&NewStructOps,
	"MetaSoundAssetDirectory",
	Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics::PropPointers),
	sizeof(FMetaSoundAssetDirectory),
	alignof(FMetaSoundAssetDirectory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundAssetDirectory()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundAssetDirectory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundAssetDirectory.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundAssetDirectory.InnerSingleton;
}
// End ScriptStruct FMetaSoundAssetDirectory

// Begin ScriptStruct FMetaSoundAsyncAssetDependencies
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundAsyncAssetDependencies;
class UScriptStruct* FMetaSoundAsyncAssetDependencies::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundAsyncAssetDependencies.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundAsyncAssetDependencies.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundAsyncAssetDependencies"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundAsyncAssetDependencies.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundAsyncAssetDependencies>()
{
	return FMetaSoundAsyncAssetDependencies::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Contains info of assets which are currently async loading. */" },
		{ "ModuleRelativePath", "Public/MetasoundAssetSubsystem.h" },
		{ "ToolTip", "Contains info of assets which are currently async loading." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaSound_MetaData[] = {
		{ "Comment", "// Parent MetaSound \n" },
		{ "ModuleRelativePath", "Public/MetasoundAssetSubsystem.h" },
		{ "ToolTip", "Parent MetaSound" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundAsyncAssetDependencies>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics::NewProp_MetaSound = { "MetaSound", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundAsyncAssetDependencies, MetaSound), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaSound_MetaData), NewProp_MetaSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics::NewProp_MetaSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	&NewStructOps,
	"MetaSoundAsyncAssetDependencies",
	Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics::PropPointers),
	sizeof(FMetaSoundAsyncAssetDependencies),
	alignof(FMetaSoundAsyncAssetDependencies),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundAsyncAssetDependencies.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundAsyncAssetDependencies.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundAsyncAssetDependencies.InnerSingleton;
}
// End ScriptStruct FMetaSoundAsyncAssetDependencies

// Begin Class UMetaSoundAssetSubsystem Function RegisterAssetClassesInDirectories
struct Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics
{
	struct MetaSoundAssetSubsystem_eventRegisterAssetClassesInDirectories_Parms
	{
		TArray<FMetaSoundAssetDirectory> Directories;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSounds|Registration" },
		{ "ModuleRelativePath", "Public/MetasoundAssetSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Directories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Directories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Directories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::NewProp_Directories_Inner = { "Directories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundAssetDirectory, METADATA_PARAMS(0, nullptr) }; // 3339583685
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::NewProp_Directories = { "Directories", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundAssetSubsystem_eventRegisterAssetClassesInDirectories_Parms, Directories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Directories_MetaData), NewProp_Directories_MetaData) }; // 3339583685
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::NewProp_Directories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::NewProp_Directories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundAssetSubsystem, nullptr, "RegisterAssetClassesInDirectories", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::MetaSoundAssetSubsystem_eventRegisterAssetClassesInDirectories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::MetaSoundAssetSubsystem_eventRegisterAssetClassesInDirectories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundAssetSubsystem::execRegisterAssetClassesInDirectories)
{
	P_GET_TARRAY_REF(FMetaSoundAssetDirectory,Z_Param_Out_Directories);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterAssetClassesInDirectories(Z_Param_Out_Directories);
	P_NATIVE_END;
}
// End Class UMetaSoundAssetSubsystem Function RegisterAssetClassesInDirectories

// Begin Class UMetaSoundAssetSubsystem Function UnregisterAssetClassesInDirectories
struct Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics
{
	struct MetaSoundAssetSubsystem_eventUnregisterAssetClassesInDirectories_Parms
	{
		TArray<FMetaSoundAssetDirectory> Directories;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSounds|Registration" },
		{ "ModuleRelativePath", "Public/MetasoundAssetSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Directories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Directories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Directories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::NewProp_Directories_Inner = { "Directories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundAssetDirectory, METADATA_PARAMS(0, nullptr) }; // 3339583685
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::NewProp_Directories = { "Directories", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundAssetSubsystem_eventUnregisterAssetClassesInDirectories_Parms, Directories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Directories_MetaData), NewProp_Directories_MetaData) }; // 3339583685
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::NewProp_Directories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::NewProp_Directories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundAssetSubsystem, nullptr, "UnregisterAssetClassesInDirectories", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::MetaSoundAssetSubsystem_eventUnregisterAssetClassesInDirectories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::MetaSoundAssetSubsystem_eventUnregisterAssetClassesInDirectories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundAssetSubsystem::execUnregisterAssetClassesInDirectories)
{
	P_GET_TARRAY_REF(FMetaSoundAssetDirectory,Z_Param_Out_Directories);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterAssetClassesInDirectories(Z_Param_Out_Directories);
	P_NATIVE_END;
}
// End Class UMetaSoundAssetSubsystem Function UnregisterAssetClassesInDirectories

// Begin Class UMetaSoundAssetSubsystem
void UMetaSoundAssetSubsystem::StaticRegisterNativesUMetaSoundAssetSubsystem()
{
	UClass* Class = UMetaSoundAssetSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterAssetClassesInDirectories", &UMetaSoundAssetSubsystem::execRegisterAssetClassesInDirectories },
		{ "UnregisterAssetClassesInDirectories", &UMetaSoundAssetSubsystem::execUnregisterAssetClassesInDirectories },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundAssetSubsystem);
UClass* Z_Construct_UClass_UMetaSoundAssetSubsystem_NoRegister()
{
	return UMetaSoundAssetSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** The subsystem in charge of the MetaSound asset registry */" },
		{ "IncludePath", "MetasoundAssetSubsystem.h" },
		{ "ModuleRelativePath", "Public/MetasoundAssetSubsystem.h" },
		{ "ToolTip", "The subsystem in charge of the MetaSound asset registry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingDependencies_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundAssetSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadingDependencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories, "RegisterAssetClassesInDirectories" }, // 2489705697
		{ &Z_Construct_UFunction_UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories, "UnregisterAssetClassesInDirectories" }, // 2228151819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundAssetSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::NewProp_LoadingDependencies_Inner = { "LoadingDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies, METADATA_PARAMS(0, nullptr) }; // 3098700068
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::NewProp_LoadingDependencies = { "LoadingDependencies", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundAssetSubsystem, LoadingDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingDependencies_MetaData), NewProp_LoadingDependencies_MetaData) }; // 3098700068
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::NewProp_LoadingDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::NewProp_LoadingDependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::ClassParams = {
	&UMetaSoundAssetSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundAssetSubsystem()
{
	if (!Z_Registration_Info_UClass_UMetaSoundAssetSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundAssetSubsystem.OuterSingleton, Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundAssetSubsystem.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundAssetSubsystem>()
{
	return UMetaSoundAssetSubsystem::StaticClass();
}
UMetaSoundAssetSubsystem::UMetaSoundAssetSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundAssetSubsystem);
UMetaSoundAssetSubsystem::~UMetaSoundAssetSubsystem() {}
// End Class UMetaSoundAssetSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMetaSoundAssetDirectory::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics::NewStructOps, TEXT("MetaSoundAssetDirectory"), &Z_Registration_Info_UScriptStruct_MetaSoundAssetDirectory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundAssetDirectory), 3339583685U) },
		{ FMetaSoundAsyncAssetDependencies::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics::NewStructOps, TEXT("MetaSoundAsyncAssetDependencies"), &Z_Registration_Info_UScriptStruct_MetaSoundAsyncAssetDependencies, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundAsyncAssetDependencies), 3098700068U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundAssetSubsystem, UMetaSoundAssetSubsystem::StaticClass, TEXT("UMetaSoundAssetSubsystem"), &Z_Registration_Info_UClass_UMetaSoundAssetSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundAssetSubsystem), 3413307711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_930300238(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
